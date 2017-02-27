#include "preferencesdialog.h"
#include "ui_preferencesdialog.h"

PreferencesDialog::PreferencesDialog (QWidget* parent) :
    QDialog (parent),
    ui (new Ui::PreferencesDialog)
{
    ui->setupUi (this);
}

PreferencesDialog::~PreferencesDialog ()
{
    delete ui;

    setWindowTitle ("ClickCounter v0.0.1 :: Preferences");
}

void
PreferencesDialog::on_buttonBox_clicked (QAbstractButton* button)
{
    Q_UNUSED (button);
    this->close ();
}
