#include "generator.h"
#include "ui_generator.h"

generator::generator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::generator)
{
    ui->setupUi(this);
    setFixedSize(652, 433);
}

generator::~generator()
{
    delete ui;
}


void generator::on_gen_css_btn_clicked()
{
    css_code = ".btn\n{\n        background-color: " + ui->bkc_input->text() + ";\n        width: 80px;\n        height: 28px;\n" + "        border: " + ui->bw_input->text() + " " + ui->bs_input->currentText() + " " + ui->bc_input->text() + ";\n        " + "-webkit-border-radius: " + ui->br_input->text() + ";\n        " + "-moz-border-radius: " + ui->br_input->text() + ";\n        " + "border-radius: " + ui->br_input->text() + ";\n        " + "font-family: \'" + ui->ff_input->currentText() + "\';\n        " + "color: " + ui->fc_input->text() + ";\n        " + "font-size: " + ui->fs_input->currentText() + "px;\n        " + "padding: " + ui->pt_input->text() + " " + ui->pr_input->text() + " " + ui->pb_input->text() + " " + ui->pl_input->text() + ";\n        " + "text-decoration: " + "none" + ";\n}\n.btn:hover\n{\n        background-color: " + ui->bkch_input->text() + ";\n        " + "text-decoration: none;\n}";
    preview_code = "QPushButton\n{\n        background-color: " + ui->bkc_input->text() + ";\n        width: 80px;\n        height: 28px;\n" + "        border: " + ui->bw_input->text() + " " + ui->bs_input->currentText() + " " + ui->bc_input->text() + ";\n        " + "-webkit-border-radius: " + ui->br_input->text() + ";\n        " + "-moz-border-radius: " + ui->br_input->text() + ";\n        " + "border-radius: " + ui->br_input->text() + ";\n        " + "font-family: \'" + ui->ff_input->currentText() + "\';\n        " + "color: " + ui->fc_input->text() + ";\n        " + "font-size: " + ui->fs_input->currentText() + "px;\n        " + "padding: " + ui->pt_input->text() + " " + ui->pr_input->text() + " " + ui->pb_input->text() + " " + ui->pl_input->text() + ";\n        " + "text-decoration: " + "none" + ";\n}\nQPushButton:hover\n{\n        background-color: " + ui->bkch_input->text() + ";\n        " + "text-decoration: none;\n}";

    result = new CssDisplayer(this);
    result->setCSS(css_code, preview_code);
    result->show();
}


void generator::on_fc_label_linkActivated(const QString &link)
{
    if(!link.isEmpty())
    {
        QColor color = QColorDialog::getColor();
        if (color.isValid())
        {
            ui->fc_input->setText(color.name());
        }
    }
}


void generator::on_bc_label_linkActivated(const QString &link)
{
    if(!link.isEmpty())
    {
        QColor color = QColorDialog::getColor();
        if (color.isValid())
        {
            ui->bc_input->setText(color.name());
        }
    }
}


void generator::on_bkc_label_linkActivated(const QString &link)
{
    if(!link.isEmpty())
    {
        QColor color = QColorDialog::getColor();
        if (color.isValid())
        {
            ui->bkc_input->setText(color.name());
        }
    }
}


void generator::on_bkch_label_linkActivated(const QString &link)
{
    if(!link.isEmpty())
    {
        QColor color = QColorDialog::getColor();
        if (color.isValid())
        {
            ui->bkch_input->setText(color.name());
        }
    }
}


void generator::on_actionAbout_Qt_triggered()
{
    QMessageBox::aboutQt(this);
}


void generator::on_actionJoin_us_on_twitter_triggered()
{
    QUrl url;
    url.setUrl("https://twitter.com/prog_naveed");
    QDesktopServices::openUrl(url);
}

