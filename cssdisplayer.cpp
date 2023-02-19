#include "cssdisplayer.h"
#include "ui_cssdisplayer.h"

CssDisplayer::CssDisplayer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CssDisplayer)
{
    ui->setupUi(this);
    setFixedSize(400, 350);
}

CssDisplayer::~CssDisplayer()
{
    delete ui;
}


void CssDisplayer::setCSS(QString css, QString style)
{
    if (!css.isEmpty() && !style.isEmpty())
    {
        ui->cssCode->setText(css);
        ui->previewBtn->setStyleSheet(style);
    }
}

void CssDisplayer::on_cssCopy_clicked()
{
    ui->cssCode->selectAll();
    ui->cssCode->copy();
}

