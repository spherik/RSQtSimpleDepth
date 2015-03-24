#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "pxcsensemanager.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    // RealSense stuff
    PXCSenseManager *sm;
    QTimer *timer;
public slots:
    void onStart();
    void onStop();
    void onNewImage();
};

#endif // MAINWINDOW_H
