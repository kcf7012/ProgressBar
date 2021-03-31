#include "progressdlg.h"
#include "ui_progressdlg.h"
#include <QProgressDialog>
#include <QFont>
#include <QDebug>
#include <QThread>

ProgressDlg::ProgressDlg(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::ProgressDlg)
{
    ui->setupUi(this);

    setWindowTitle(tr("Progress"));

    num = 1000;
    QString str;
    str.sprintf("%d", num);
    ui->lineEdit->setText(str);

//    Qt::WindowFlags flags = 0;
//    flags |= Qt::WindowMinimizeButtonHint;
//    setWindowFlags(flags);
//    setFixedSize(577,433);

//    FileNumLineEdit =new QLineEdit;
//    starBtn =new QPushButton();
//    connect(starBtn,SIGNAL(clicked()),this,SLOT(startProgress()));
//    connect(FileNumLineEdit, SIGNAL(editingFinished()), this, SLOT());

//    QFont font("ZYSong18030",12);
//    setFont(font);
//    setWindowTitle(tr("Progress"));

//    FileNum =new QLabel;
//    FileNum->setText(tr("文件數目："));
//    FileNumLineEdit =new QLineEdit;
//    FileNumLineEdit->setText(tr("100000"));

//    ProgressType =new QLabel;
//    ProgressType->setText(tr("顯示類型："));
//    comboBox =new QComboBox;
//    comboBox->addItem(tr("progressBar"));
//    comboBox->addItem(tr("progressDialog"));

//    progressBar =new QProgressBar;

//    starBtn =new QPushButton();
//    starBtn->setText(tr("開始"));

//    mainLayout =new QGridLayout(this);
//    mainLayout->addWidget(FileNum,0,0);
//    mainLayout->addWidget(FileNumLineEdit,0,1);
//    mainLayout->addWidget(ProgressType,1,0);
//    mainLayout->addWidget(comboBox,1,1);
//    mainLayout->addWidget(progressBar,2,0,1,2);
//    mainLayout->addWidget(starBtn,3,1);
//    mainLayout->setMargin(30);
////    mainLayout->setSpacing(20);
//    mainLayout->setVerticalSpacing(20);

//    connect(starBtn,SIGNAL(clicked()),this,SLOT(startProgress()));
}

ProgressDlg::~ProgressDlg()
{
    delete ui;
}

void ProgressDlg::startProgress()
{
    if(ui->comboBox->currentIndex()==0)                   //ProgressBar
    {
        QString content;
        content = ui->lineEdit->text();
        int ContentNum = content.toInt();
        qDebug() <<  ContentNum << endl;
        //qDebug("%d\n", ContentNum);

        if(ContentNum > 0){
            ui->progressBar->setRange(0, ContentNum);
            for(int i = 0; i < ContentNum; i++) {
                ui->progressBar->setValue(i + 1);
                QThread::msleep(1);
            }
        }
    }
    else if(ui->comboBox->currentIndex()==1)             //ProgressDialog
    {
        QProgressDialog *progressDialog=new QProgressDialog(this);
        QFont font("ZYSong18030",12);
        progressDialog->setFont(font);
        progressDialog->setWindowModality(Qt::WindowModal);
        progressDialog->setMinimumDuration(5);
        progressDialog->setWindowTitle(tr("Please Wait"));
        progressDialog->setLabelText(tr("Copying..."));
        progressDialog->setCancelButtonText(tr("Cancel"));

        QString content;
        content = ui->lineEdit->text();
        int ContentNum = content.toInt();
        qDebug() <<  ContentNum << endl;
        //qDebug("%d\n", ContentNum);

        if(ContentNum > 0){
            progressDialog->setRange(0, ContentNum);
            for(int i = 0; i < ContentNum; i++)
            {
                progressDialog->setValue(i + 1);
                if(progressDialog->wasCanceled())
                    return;
                QThread::msleep(1);
            }
        }
        else
            progressDialog->cancel();
    }
}

void ProgressDlg::on_pushButton_clicked()
{
    qDebug("%s() #line%d\n", __func__, __LINE__);
    num = ui->lineEdit->text().toInt();
    startProgress();
}

//void ProgressDlg::on_lineEdit_returnPressed()
//{
//        num = ui->lineEdit->text().toInt();
//}
