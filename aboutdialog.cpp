#include "aboutdialog.h"
#include "ui_aboutdialog.h"

AboutDialog::AboutDialog (QWidget* parent) :
    QDialog (parent),
    ui (new Ui::AboutDialog)
{
    ui->setupUi (this);

    setWindowTitle ("ClickCounter v0.0.1 :: About");
}

AboutDialog::~AboutDialog ()
{
    delete ui;
}

void
AboutDialog::on_buttonBox_clicked (QAbstractButton* button)
{
    Q_UNUSED (button);
    this->close ();
}
