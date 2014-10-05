#ifndef WORKERTHREAD_H
#define WORKERTHREAD_H

#include <QThread>
#include <QDebug>

class WorkerThread : public QThread
{
    Q_OBJECT
public:
    WorkerThread();
    void run();
signals:
    void resultReady(int result);
};

#endif // WORKERTHREAD_H
