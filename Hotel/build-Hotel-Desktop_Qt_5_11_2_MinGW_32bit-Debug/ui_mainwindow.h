/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_7;
    QGroupBox *groupCheckOut;
    QFormLayout *formLayout_3;
    QLabel *rg_2;
    QLineEdit *lineEditRG_2;
    QPushButton *checkOut;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupCadastro;
    QFormLayout *formLayout;
    QLabel *nome;
    QLineEdit *lineEditNome;
    QLabel *rg;
    QLineEdit *lineEditRG;
    QLabel *telefone;
    QLineEdit *lineEditTel;
    QGroupBox *groupQuartos;
    QVBoxLayout *verticalLayout;
    QRadioButton *simples;
    QRadioButton *executivo;
    QRadioButton *presidencial;
    QGroupBox *groupData;
    QFormLayout *formLayout_2;
    QLabel *dataChegada;
    QDateEdit *dateEdit;
    QLabel *dataSaida;
    QDateEdit *dateEdit_2;
    QPushButton *checkIn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(468, 395);
        MainWindow->setMinimumSize(QSize(468, 395));
        MainWindow->setMaximumSize(QSize(468, 395));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 0, 47, 13));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(330, 0, 47, 13));
        groupCheckOut = new QGroupBox(centralWidget);
        groupCheckOut->setObjectName(QStringLiteral("groupCheckOut"));
        groupCheckOut->setGeometry(QRect(250, 20, 206, 82));
        formLayout_3 = new QFormLayout(groupCheckOut);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        rg_2 = new QLabel(groupCheckOut);
        rg_2->setObjectName(QStringLiteral("rg_2"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, rg_2);

        lineEditRG_2 = new QLineEdit(groupCheckOut);
        lineEditRG_2->setObjectName(QStringLiteral("lineEditRG_2"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEditRG_2);

        checkOut = new QPushButton(groupCheckOut);
        checkOut->setObjectName(QStringLiteral("checkOut"));

        formLayout_3->setWidget(1, QFormLayout::SpanningRole, checkOut);

        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 21, 208, 323));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupCadastro = new QGroupBox(layoutWidget);
        groupCadastro->setObjectName(QStringLiteral("groupCadastro"));
        formLayout = new QFormLayout(groupCadastro);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        nome = new QLabel(groupCadastro);
        nome->setObjectName(QStringLiteral("nome"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nome);

        lineEditNome = new QLineEdit(groupCadastro);
        lineEditNome->setObjectName(QStringLiteral("lineEditNome"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditNome);

        rg = new QLabel(groupCadastro);
        rg->setObjectName(QStringLiteral("rg"));

        formLayout->setWidget(1, QFormLayout::LabelRole, rg);

        lineEditRG = new QLineEdit(groupCadastro);
        lineEditRG->setObjectName(QStringLiteral("lineEditRG"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditRG);

        telefone = new QLabel(groupCadastro);
        telefone->setObjectName(QStringLiteral("telefone"));

        formLayout->setWidget(2, QFormLayout::LabelRole, telefone);

        lineEditTel = new QLineEdit(groupCadastro);
        lineEditTel->setObjectName(QStringLiteral("lineEditTel"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditTel);


        verticalLayout_2->addWidget(groupCadastro);

        groupQuartos = new QGroupBox(layoutWidget);
        groupQuartos->setObjectName(QStringLiteral("groupQuartos"));
        verticalLayout = new QVBoxLayout(groupQuartos);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        simples = new QRadioButton(groupQuartos);
        simples->setObjectName(QStringLiteral("simples"));

        verticalLayout->addWidget(simples);

        executivo = new QRadioButton(groupQuartos);
        executivo->setObjectName(QStringLiteral("executivo"));

        verticalLayout->addWidget(executivo);

        presidencial = new QRadioButton(groupQuartos);
        presidencial->setObjectName(QStringLiteral("presidencial"));

        verticalLayout->addWidget(presidencial);


        verticalLayout_2->addWidget(groupQuartos);

        groupData = new QGroupBox(layoutWidget);
        groupData->setObjectName(QStringLiteral("groupData"));
        formLayout_2 = new QFormLayout(groupData);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        dataChegada = new QLabel(groupData);
        dataChegada->setObjectName(QStringLiteral("dataChegada"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, dataChegada);

        dateEdit = new QDateEdit(groupData);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, dateEdit);

        dataSaida = new QLabel(groupData);
        dataSaida->setObjectName(QStringLiteral("dataSaida"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, dataSaida);

        dateEdit_2 = new QDateEdit(groupData);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, dateEdit_2);


        verticalLayout_2->addWidget(groupData);

        checkIn = new QPushButton(layoutWidget);
        checkIn->setObjectName(QStringLiteral("checkIn"));

        verticalLayout_2->addWidget(checkIn);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 468, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Check-in", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Check-out", nullptr));
        groupCheckOut->setTitle(QApplication::translate("MainWindow", "Check-out", nullptr));
        rg_2->setText(QApplication::translate("MainWindow", "RG", nullptr));
        checkOut->setText(QApplication::translate("MainWindow", "Check-out", nullptr));
        groupCadastro->setTitle(QApplication::translate("MainWindow", "Cadastro", nullptr));
        nome->setText(QApplication::translate("MainWindow", "Nome", nullptr));
        rg->setText(QApplication::translate("MainWindow", "RG", nullptr));
        telefone->setText(QApplication::translate("MainWindow", "Telefone", nullptr));
        groupQuartos->setTitle(QApplication::translate("MainWindow", "Quartos", nullptr));
        simples->setText(QApplication::translate("MainWindow", "Simples           R$ 150", nullptr));
        executivo->setText(QApplication::translate("MainWindow", "Executivo       R$ 190", nullptr));
        presidencial->setText(QApplication::translate("MainWindow", "Presidencial    R$ 290", nullptr));
        groupData->setTitle(QApplication::translate("MainWindow", "Data", nullptr));
        dataChegada->setText(QApplication::translate("MainWindow", "Data de Chegada", nullptr));
        dataSaida->setText(QApplication::translate("MainWindow", "Data de Saida", nullptr));
        checkIn->setText(QApplication::translate("MainWindow", "Check-in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
