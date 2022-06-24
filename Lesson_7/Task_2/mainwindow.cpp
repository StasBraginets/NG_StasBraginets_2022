#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

double f_number;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->window->setReadOnly(1);

    connect(ui->p_1, SIGNAL(clicked()), this, SLOT(numbers()));
    connect(ui->p_2, SIGNAL(clicked()), this, SLOT(numbers()));
    connect(ui->p_3, SIGNAL(clicked()), this, SLOT(numbers()));
    connect(ui->p_4, SIGNAL(clicked()), this, SLOT(numbers()));
    connect(ui->p_5, SIGNAL(clicked()), this, SLOT(numbers()));
    connect(ui->p_6, SIGNAL(clicked()), this, SLOT(numbers()));
    connect(ui->p_7, SIGNAL(clicked()), this, SLOT(numbers()));
    connect(ui->p_8, SIGNAL(clicked()), this, SLOT(numbers()));
    connect(ui->p_9, SIGNAL(clicked()), this, SLOT(numbers()));
    connect(ui->p_0, SIGNAL(clicked()), this, SLOT(numbers()));

    connect(ui->pPercent, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pDeleteLast, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pAllClean, SIGNAL(clicked()), this, SLOT(operations()));

    connect(ui->pDivision, SIGNAL(clicked()), this, SLOT(math_operation()));
    connect(ui->pMultiplication, SIGNAL(clicked()), this, SLOT(math_operation()));
    connect(ui->pMinus, SIGNAL(clicked()), this, SLOT(math_operation()));
    connect(ui->pPlus, SIGNAL(clicked()), this, SLOT(math_operation()));

    ui->pDivision->setCheckable(true);
    ui->pMultiplication->setCheckable(true);
    ui->pMinus->setCheckable(true);
    ui->pPlus->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numbers()
{
    QPushButton* button = (QPushButton* ) sender();

    QString number_1 = ui->window->text() + button->text();
    ui->window->setText(number_1);
}

void MainWindow::on_pDot_clicked()
{
    if (!(ui->window->text().contains(',')))
    {
        ui->window->setText(ui->window->text() + '.');
    }
}

void MainWindow::operations()
{
    QPushButton* button = (QPushButton* ) sender();
    double number;
    QString output;

    if (button->text() == "%")
    {
        number = (ui->window->text()).toDouble();
        number = number * 0.01;
        output = QString::number(number);
        ui->window->setText(output);
    }
    else if (button->text() == "DL")
    {
        output = ui->window->text();
        output.resize(output.size() - 1);
        ui->window->setText(output);
    }
    else
    {
        output = output = ui->window->text();
        output.clear();
        ui->window->setText(output);
    }
}

void MainWindow::math_operation()
{
    QPushButton* button = (QPushButton* ) sender();

    f_number = (ui->window->text()).toDouble();
    ui->window->setText("");
    button->setChecked(true);
}


void MainWindow::on_pEqual_clicked()
{
    double s_number, result;
    QString output;
    s_number = (ui->window->text()).toDouble();

    if (ui->pPlus->isChecked())
    {
        result = f_number + s_number;

        output = QString::number(result);
        ui->window->setText(output);
        ui->pPlus->setChecked(false);
    }
    else if (ui->pMinus->isChecked())
    {
        result = f_number - s_number;
        output = QString::number(result);
        ui->window->setText(output);
        ui->pMinus->setChecked(false);
    }
    else if (ui->pDivision->isChecked())
    {
        if (s_number == 0)
        {
            ui->window->setText("");
        }
        else
        {
            result = f_number / s_number;
            output = QString::number(result);
        }

        ui->window->setText(output);
        ui->pDivision->setChecked(false);
    }
    else if (ui->pMultiplication->isChecked())
    {
        result = f_number * s_number;
        output = QString::number(result);
        ui->window->setText(output);
        ui->pMultiplication->setChecked(false);
    }
}

