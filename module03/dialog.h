#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include "qlistwidget.h"
#include "qtablewidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:

    void on_Add_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
    int name;
    QString number;
    QString email;
    QString birthday;
    QTableWidgetItem newitem;
    //int i;
};
#endif // DIALOG_H
