#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_Add_clicked()
{
    //set block size
    ui->tableWidget_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    //put data in table
    ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount()-1, 0, new QTableWidgetItem(ui->lineEdit->text()));
    ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount()-1, 1, new QTableWidgetItem(ui->lineEdit_2->text()));
    ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount()-1, 2, new QTableWidgetItem(ui->lineEdit_3->text()));
    ui->tableWidget_2->setItem(ui->tableWidget_2->rowCount()-1, 3, new QTableWidgetItem(ui->lineEdit_4->text()));
    ui->tableWidget_2->insertRow(ui->tableWidget_2->rowCount());

    //ui->tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    ui->lineEdit_3->setText("");
    ui->lineEdit_4->setText("");

}

void Dialog::on_pushButton_2_clicked() //EXIT
{
    this->close();
}

void Dialog::on_pushButton_3_clicked() //REMOVE
{
    //QMessageBox::about(this,'sddd',"what index?");
    ui->tableWidget_2->removeRow(ui->lineEdit_5->text().toInt()-1);
}


void Dialog::on_pushButton_clicked() //search
{
    qint32 index = ui->lineEdit_6->text().toInt()-1;
    if (index >= ui->tableWidget_2->rowCount()-1)
    {
        QMessageBox::warning(this, "WARNING", "phonebook doesn't have this index");
        qDebug() << "phonebook doesn't have this index ";
        return;
    }
    for(int i=0; i<4; i++){
        QTableWidgetItem *celltxt = ui->tableWidget_2->item(index,i);
        QTableWidgetItem *celltxt2 =new QTableWidgetItem(*celltxt);
        ui->tableWidget->setItem(0,i,celltxt2);
    }
}

