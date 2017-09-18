#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    char *p;

    int i[20];

    i[20]=2;


}

MainWindow::~MainWindow()
{
    delete ui;
}
