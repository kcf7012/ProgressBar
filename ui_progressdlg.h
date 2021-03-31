/********************************************************************************
** Form generated from reading UI file 'progressdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESSDLG_H
#define UI_PROGRESSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProgressDlg
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QComboBox *comboBox;
    QProgressBar *progressBar;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ProgressDlg)
    {
        if (ProgressDlg->objectName().isEmpty())
            ProgressDlg->setObjectName(QString::fromUtf8("ProgressDlg"));
        ProgressDlg->resize(426, 294);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProgressDlg->sizePolicy().hasHeightForWidth());
        ProgressDlg->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(ProgressDlg);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 60, 225, 120));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy2);

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox);

        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        sizePolicy2.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy2);
        progressBar->setMinimumSize(QSize(0, 0));
        progressBar->setMaximumSize(QSize(16777215, 16777215));
        progressBar->setValue(0);

        formLayout->setWidget(3, QFormLayout::SpanningRole, progressBar);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButton);


        horizontalLayout_2->addLayout(formLayout);

        ProgressDlg->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ProgressDlg);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 426, 25));
        ProgressDlg->setMenuBar(menubar);
        statusbar = new QStatusBar(ProgressDlg);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ProgressDlg->setStatusBar(statusbar);

        retranslateUi(ProgressDlg);

        QMetaObject::connectSlotsByName(ProgressDlg);
    } // setupUi

    void retranslateUi(QMainWindow *ProgressDlg)
    {
        ProgressDlg->setWindowTitle(QApplication::translate("ProgressDlg", "MainWindow", nullptr));
        label->setText(QApplication::translate("ProgressDlg", "\346\226\207\344\273\266\346\225\270\347\233\256", nullptr));
        lineEdit->setText(QApplication::translate("ProgressDlg", "100", nullptr));
        label_2->setText(QApplication::translate("ProgressDlg", "\351\241\257\347\244\272\351\241\236\345\236\213", nullptr));
        comboBox->setItemText(0, QApplication::translate("ProgressDlg", "progressBar", nullptr));
        comboBox->setItemText(1, QApplication::translate("ProgressDlg", "progressDialog", nullptr));

        pushButton->setText(QApplication::translate("ProgressDlg", "\347\242\272\350\252\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProgressDlg: public Ui_ProgressDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESSDLG_H
