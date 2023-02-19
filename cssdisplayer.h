#ifndef CSSDISPLAYER_H
#define CSSDISPLAYER_H

#include <QMainWindow>

namespace Ui {
class CssDisplayer;
}

class CssDisplayer : public QMainWindow
{
    Q_OBJECT

public:
    explicit CssDisplayer(QWidget *parent = nullptr);
    ~CssDisplayer();

    void setCSS(QString css, QString style);

private slots:
    void on_cssCopy_clicked();

private:
    Ui::CssDisplayer *ui;
};

#endif // CSSDISPLAYER_H
