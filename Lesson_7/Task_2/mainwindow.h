#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void numbers();
    void on_pDot_clicked();
    void operations();
    void math_operation();
    void on_pEqual_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
