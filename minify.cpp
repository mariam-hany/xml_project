#include "minify.h"
#include "ui_minify.h"
#include "QString"
#include"QFile"
#include <string>
#include "iostream"
#include"qfiledialog.h"
#include"qmessagebox.h"
#include <stack>
#include <vector>
#include "format.h"

minify::minify(QWidget *parent,QString x) :
    QDialog(parent),
    ui(new Ui::minify)
{
    fpathprivate = x;
    ui->setupUi(this);
    QFile xmlfile(fpathprivate);

    if(!xmlfile.open(QIODevice::ReadOnly |QIODevice::Text))
        return;

       string y;
     QTextStream in(&xmlfile);
     while (!in.atEnd())
     {

         QString line = in.readAll();
        ui->plainTextEdit->setPlainText(line);
        y =  line.toLocal8Bit().constData();
     }

     xmlfile.close();
    file_s = y;
}


//////////////////////////////////////////





minify::~minify()
{
    delete ui;
}

void minify::on_pushButton_clicked()
{
    format f;
    string temp = f.get_line1(file_s);
    ui->plainTextEdit_2->setPlainText(QString::fromStdString(temp));
}


void minify::on_pushButton_2_clicked()
{
    //save file

    QString fileName = QFileDialog::getSaveFileName(this,
        tr("Save file"), "",
        tr("filename (*.txt);;All Files (*)"));
    if (fileName.isEmpty())
          return;
      else {
          QFile file(fileName);
          if (!file.open(QIODevice::WriteOnly)) {
              QMessageBox::information(this, tr("Unable to open file"),
                  file.errorString());
              return;
          }
          else
          {
              //write js string to file specified here
              QTextStream out(&file);
              QString text = ui->plainTextEdit_2->toPlainText();
              out << text;
              file.flush();
              file.close();

          }
          }
}

