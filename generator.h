#ifndef GENERATOR_H
#define GENERATOR_H

#include <QMainWindow>
#include "cssdisplayer.h"
#include <QColorDialog>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>

QT_BEGIN_NAMESPACE
namespace Ui { class generator; }
QT_END_NAMESPACE

class generator : public QMainWindow
{
    Q_OBJECT

public:
    generator(QWidget *parent = nullptr);
    ~generator();

private slots:
    void on_gen_css_btn_clicked();

    void on_fc_label_linkActivated(const QString &link);

    void on_bc_label_linkActivated(const QString &link);

    void on_bkc_label_linkActivated(const QString &link);

    void on_bkch_label_linkActivated(const QString &link);

    void on_actionAbout_Qt_triggered();

    void on_actionJoin_us_on_twitter_triggered();

private:
    Ui::generator *ui;
    QString css_code;
    QString preview_code;
    CssDisplayer *result;
};
#endif // GENERATOR_H
