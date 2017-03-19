#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QElapsedTimer>
#include <QMainWindow>

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow (QWidget* parent = 0);
    ~MainWindow ();

private slots:
    void on_action_About_triggered ();

    void on_action_Preferences_triggered ();

    void on_actionQuit_triggered ();

    void on_pushButton_clicked ();

private:
    QElapsedTimer timer;
    Ui::MainWindow* ui;
    double fastest = 0; // 0 Hz
};

#endif // MAINWINDOW_H
