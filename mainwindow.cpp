#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    workerThread = new WorkerThread();
    connect(workerThread, SIGNAL(resultReady(int)), this, SLOT(receiveResult(int)));
    workerThread->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::receiveResult(int result)
{
    qDebug() << "Result is : " << result;
}
