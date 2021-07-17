#ifndef MINIFY_H
#define MINIFY_H

#include <QDialog>
#include <string.h>
using namespace std;

namespace Ui {
class minify;
}

class minify : public QDialog
{
    Q_OBJECT

public:
    explicit minify(QWidget *parent = nullptr,QString x="hi");

    ~minify();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::minify *ui;
    QString fpathprivate;
    string file_s;
};

#endif // MINIFY_H
