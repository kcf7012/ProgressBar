#ifndef PROGRESSDLG_H
#define PROGRESSDLG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QProgressBar>
#include <QComboBox>
#include <QPushButton>
#include <QGridLayout>
#include <QMainWindow>

namespace Ui {
class ProgressDlg;
}

//class ProgressDlg : public QDialog
class ProgressDlg : public QMainWindow
{
    Q_OBJECT

public:
    ProgressDlg(QWidget *parent = 0);
    ~ProgressDlg();

private slots:
    void startProgress();
    void on_pushButton_clicked();

//    void on_lineEdit_returnPressed();

private:
//    QLabel *FileNum;
//    QLineEdit *FileNumLineEdit;
//    QLabel *ProgressType;
//    QComboBox *comboBox;
//    QProgressBar *progressBar;
//    QPushButton *starBtn;
//    QGridLayout *mainLayout;

    Ui::ProgressDlg *ui;
    int num;
};

#endif // PROGRESSDLG_H
