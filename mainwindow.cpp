#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "aboutdialog.h"
#include "ui_preferencesdialog.h"

#include "preferencesdialog.h"
#include "ui_preferencesdialog.h"

MainWindow::MainWindow (QWidget* parent) :
    QMainWindow (parent),
    ui (new Ui::MainWindow)
{
    ui->setupUi (this);

    setWindowTitle ("ClickCounter v0.0.1");

    timer.start ();

    ui->statusBar->showMessage ("Ready.");
}

MainWindow::~MainWindow ()
{
    delete ui;
}

void
MainWindow::on_action_About_triggered ()
{
    AboutDialog* a = new AboutDialog ();
    a->show ();
}

void
MainWindow::on_action_Preferences_triggered ()
{
    PreferencesDialog* p = new PreferencesDialog ();
    p->show ();
}

void
MainWindow::on_actionQuit_triggered ()
{
    this->close ();
}

void
MainWindow::on_pushButton_clicked ()
{
    qint64 val = timer.restart ();
    ui->textBrowser->setText (QString::number (val) + " ms");
    ui->textBrowser->append (" (" + QString::number ( (double) 1000 / val) + " Hz)");
}
