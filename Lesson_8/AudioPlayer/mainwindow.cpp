#include "mainwindow.h"
#include "ui_mainwindow.h"

int member;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mPlayer = new QMediaPlayer();
    mPlayList = new QMediaPlaylist();
    mPlayer->setPlaylist(mPlayList);
    ui->lineEdit->setReadOnly(true);
    connect(ui->bFind, &QPushButton::clicked,this,&MainWindow::FindSong);
    connect(ui->bPlay, &QPushButton::clicked,this,&MainWindow::Play);
    connect(ui->bNext,&QPushButton::clicked, mPlayList,&QMediaPlaylist::next);
    connect(ui->bPrevious, &QPushButton::clicked, mPlayList, &QMediaPlaylist::previous);
    connect(mPlayer, &QMediaPlayer::currentMediaChanged,this, &MainWindow::CurrentMusicChanged);

    //connect(ui->musicList, &QListWidget::itemClicked, this, &MainWindow::Choose_Song);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Play()
{
  mPlayer->play();
  ui->bPlay->setText("||");
  disconnect(ui->bPlay, &QPushButton::clicked,this,&MainWindow::Play);
  connect(ui->bPlay, &QPushButton::clicked,this,&MainWindow::Pause);
}

void MainWindow::Pause()
{
    mPlayer->pause();
    ui->bPlay->setText("|>");
    disconnect(ui->bPlay, &QPushButton::clicked,this,&MainWindow::Pause);
    connect(ui->bPlay, &QPushButton::clicked,this,&MainWindow::Play);
}

void MainWindow::FindSong()
{
    QString song = QFileDialog::getOpenFileName(this, tr("Play Music"), QDir::homePath(),tr("music (*.mp3)"));
    mPlayList->addMedia(QUrl::fromLocalFile(song));
    ui->lineEdit->setText(song);

    //It is not my code, but works correctly
    /*QString path = QFileDialog::getExistingDirectory(this, tr("Play Music"), QDir::homePath());
    QString name = "*.mp3";
    QStringList filters;
    filters << name;
    QDir rootDir(path);
    QFileInfoList music_list = rootDir.entryInfoList(filters);
    for(int i = 0; i < music_list.count(); i++)
    {
        QFileInfo tmpFileInfo = music_list.at(i);
        QString fileName = tmpFileInfo.fileName();
        QListWidgetItem *tmp = new QListWidgetItem(fileName);
        ui->musicList->addItem(tmp);
        ui->lineEdit->setText(path + '/' + fileName);
        mPlayList->addMedia(QUrl::fromLocalFile(path + '/' + fileName));
    }*/
}

void MainWindow::CurrentMusicChanged(QMediaContent song)
{
    ui->lineEdit->setText(song.request().url().toString());
}

void MainWindow::on_Volume_sliderMoved(int position)
{
    mPlayer->setVolume(position);
}

/*void MainWindow::Choose_Song()
{
    //It is not my code, but works correctly
    member = ui->musicList->currentRow();
    mPlayList->setCurrentIndex(member);
}*/

