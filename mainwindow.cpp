// new comment
// new comment for QtCreator

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    // test comment
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

