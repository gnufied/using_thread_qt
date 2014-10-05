#include "workerthread.h"

WorkerThread::WorkerThread()
{
}

void WorkerThread::run() {
    for (int i = 0 ; i < 100 ; i++) {
        QThread::sleep(100);
        qDebug() << "Running in another thread";
    }

    emit resultReady(100);
}
