#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QDebug>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->textEdit, &QTextEdit::textChanged, this, &MainWindow::WordCounter);
    ui->sBox->setReadOnly(1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::WordCounter()
{

    QString str_edit = ui->textEdit->toPlainText();
    QStringList words_list = str_edit.split(' ');   // break str_edit on individual particles
    ui->sBox->setValue(ui->sBox->value() + 1);

    bool flag;
    words_list[words_list.size()-1].toInt(&flag); // check if the particle is number


    if (iter == words_list.size())
    {
        ui->sBox->setValue(ui->sBox->value() - 1);
    }
    else if (words_list[iter] == "")
    {
        //iter = words_list.size();
        ui->sBox->setValue(ui->sBox->value() - 1);
    }
    else if (flag == true)
        ui->sBox->setValue(ui->sBox->value() - 1);
    else
        iter = words_list.size();
    //qDebug() << words_list.size() << " " << iter;

}
