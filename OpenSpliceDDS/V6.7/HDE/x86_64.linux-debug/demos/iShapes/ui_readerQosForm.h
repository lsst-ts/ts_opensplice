/********************************************************************************
** Form generated from reading UI file 'readerQosForm.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READERQOSFORM_H
#define UI_READERQOSFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReaderQos
{
public:
    QDialogButtonBox *OKButt;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout11;
    QRadioButton *bestEffortRButt;
    QRadioButton *reliableRButt;
    QGroupBox *groupBox_4;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QComboBox *durabilityComboBox;
    QGroupBox *groupBox_5;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *keepAllRButt;
    QRadioButton *keepLastRButton;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QSpinBox *depthSpinBox;
    QGroupBox *groupBox_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QRadioButton *exclusiveRButt;
    QRadioButton *sharedRButt;
    QGroupBox *groupBox_3;
    QCheckBox *timeBasedFilterActive;
    QLabel *periodLabel;
    QLineEdit *timeBasedFilterValue;
    QButtonGroup *reliabilityButtonGroup;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *ReaderQos)
    {
        if (ReaderQos->objectName().isEmpty())
            ReaderQos->setObjectName(QString::fromUtf8("ReaderQos"));
        ReaderQos->setWindowModality(Qt::ApplicationModal);
        ReaderQos->resize(241, 426);
        OKButt = new QDialogButtonBox(ReaderQos);
        OKButt->setObjectName(QString::fromUtf8("OKButt"));
        OKButt->setGeometry(QRect(30, 380, 171, 32));
        QFont font;
        font.setFamily(QString::fromUtf8("Lucida Grande"));
        font.setPointSize(10);
        OKButt->setFont(font);
        OKButt->setOrientation(Qt::Horizontal);
        OKButt->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox = new QGroupBox(ReaderQos);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 221, 51));
        groupBox->setFont(font);
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 20, 191, 26));
        horizontalLayoutWidget->setFont(font);
        horizontalLayout11 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout11->setObjectName(QString::fromUtf8("horizontalLayout11"));
        horizontalLayout11->setContentsMargins(0, 0, 0, 0);
        bestEffortRButt = new QRadioButton(horizontalLayoutWidget);
        reliabilityButtonGroup = new QButtonGroup(ReaderQos);
        reliabilityButtonGroup->setObjectName(QString::fromUtf8("reliabilityButtonGroup"));
        reliabilityButtonGroup->addButton(bestEffortRButt);
        bestEffortRButt->setObjectName(QString::fromUtf8("bestEffortRButt"));
        bestEffortRButt->setFont(font);
        bestEffortRButt->setChecked(true);

        horizontalLayout11->addWidget(bestEffortRButt);

        reliableRButt = new QRadioButton(horizontalLayoutWidget);
        reliabilityButtonGroup->addButton(reliableRButt);
        reliableRButt->setObjectName(QString::fromUtf8("reliableRButt"));
        reliableRButt->setFont(font);

        horizontalLayout11->addWidget(reliableRButt);

        groupBox_4 = new QGroupBox(ReaderQos);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 240, 221, 51));
        groupBox_4->setFont(font);
        horizontalLayoutWidget_5 = new QWidget(groupBox_4);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(10, 20, 206, 31));
        horizontalLayoutWidget_5->setFont(font);
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_3);

        durabilityComboBox = new QComboBox(horizontalLayoutWidget_5);
        durabilityComboBox->setObjectName(QString::fromUtf8("durabilityComboBox"));
        durabilityComboBox->setFont(font);

        horizontalLayout_6->addWidget(durabilityComboBox);

        groupBox_5 = new QGroupBox(ReaderQos);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 140, 221, 91));
        groupBox_5->setFont(font);
        verticalLayoutWidget_2 = new QWidget(groupBox_5);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 20, 201, 61));
        verticalLayoutWidget_2->setFont(font);
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        keepAllRButt = new QRadioButton(verticalLayoutWidget_2);
        keepAllRButt->setObjectName(QString::fromUtf8("keepAllRButt"));
        keepAllRButt->setFont(font);

        horizontalLayout_7->addWidget(keepAllRButt);

        keepLastRButton = new QRadioButton(verticalLayoutWidget_2);
        keepLastRButton->setObjectName(QString::fromUtf8("keepLastRButton"));
        keepLastRButton->setFont(font);
        keepLastRButton->setChecked(true);

        horizontalLayout_7->addWidget(keepLastRButton);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_4);

        depthSpinBox = new QSpinBox(verticalLayoutWidget_2);
        depthSpinBox->setObjectName(QString::fromUtf8("depthSpinBox"));
        depthSpinBox->setFont(font);
        depthSpinBox->setMinimum(1);
        depthSpinBox->setMaximum(100);

        horizontalLayout_8->addWidget(depthSpinBox);


        verticalLayout_2->addLayout(horizontalLayout_8);

        groupBox_2 = new QGroupBox(ReaderQos);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 80, 221, 51));
        groupBox_2->setFont(font);
        horizontalLayoutWidget_2 = new QWidget(groupBox_2);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 20, 191, 26));
        horizontalLayoutWidget_2->setFont(font);
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        exclusiveRButt = new QRadioButton(horizontalLayoutWidget_2);
        buttonGroup = new QButtonGroup(ReaderQos);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(exclusiveRButt);
        exclusiveRButt->setObjectName(QString::fromUtf8("exclusiveRButt"));
        exclusiveRButt->setFont(font);

        horizontalLayout->addWidget(exclusiveRButt);

        sharedRButt = new QRadioButton(horizontalLayoutWidget_2);
        buttonGroup->addButton(sharedRButt);
        sharedRButt->setObjectName(QString::fromUtf8("sharedRButt"));
        sharedRButt->setFont(font);
        sharedRButt->setChecked(true);

        horizontalLayout->addWidget(sharedRButt);

        groupBox_3 = new QGroupBox(ReaderQos);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 300, 221, 61));
        QFont font1;
        font1.setPointSize(10);
        groupBox_3->setFont(font1);
        timeBasedFilterActive = new QCheckBox(groupBox_3);
        timeBasedFilterActive->setObjectName(QString::fromUtf8("timeBasedFilterActive"));
        timeBasedFilterActive->setGeometry(QRect(160, 30, 41, 20));
        timeBasedFilterActive->setFont(font1);
        periodLabel = new QLabel(groupBox_3);
        periodLabel->setObjectName(QString::fromUtf8("periodLabel"));
        periodLabel->setGeometry(QRect(10, 30, 71, 16));
        periodLabel->setFont(font1);
        timeBasedFilterValue = new QLineEdit(groupBox_3);
        timeBasedFilterValue->setObjectName(QString::fromUtf8("timeBasedFilterValue"));
        timeBasedFilterValue->setGeometry(QRect(90, 30, 61, 22));
        timeBasedFilterValue->setFont(font1);

        retranslateUi(ReaderQos);
        QObject::connect(OKButt, SIGNAL(accepted()), ReaderQos, SLOT(accept()));
        QObject::connect(OKButt, SIGNAL(rejected()), ReaderQos, SLOT(reject()));

        QMetaObject::connectSlotsByName(ReaderQos);
    } // setupUi

    void retranslateUi(QDialog *ReaderQos)
    {
        ReaderQos->setWindowTitle(QApplication::translate("ReaderQos", "Reader QoS", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ReaderQos", "Reliability QoS", 0, QApplication::UnicodeUTF8));
        bestEffortRButt->setText(QApplication::translate("ReaderQos", "Best Effort", 0, QApplication::UnicodeUTF8));
        reliableRButt->setText(QApplication::translate("ReaderQos", "Reliable", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("ReaderQos", "Durability QoS", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ReaderQos", "Durability:", 0, QApplication::UnicodeUTF8));
        durabilityComboBox->clear();
        durabilityComboBox->insertItems(0, QStringList()
         << QApplication::translate("ReaderQos", "Volatile", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ReaderQos", "Transient Local", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ReaderQos", "Transient", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ReaderQos", "Persistent", 0, QApplication::UnicodeUTF8)
        );
        groupBox_5->setTitle(QApplication::translate("ReaderQos", "History QoS", 0, QApplication::UnicodeUTF8));
        keepAllRButt->setText(QApplication::translate("ReaderQos", "Keep All", 0, QApplication::UnicodeUTF8));
        keepLastRButton->setText(QApplication::translate("ReaderQos", "Keep Last", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ReaderQos", "Depth:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("ReaderQos", "Ownership QoS", 0, QApplication::UnicodeUTF8));
        exclusiveRButt->setText(QApplication::translate("ReaderQos", "Exclusive", 0, QApplication::UnicodeUTF8));
        sharedRButt->setText(QApplication::translate("ReaderQos", "Shared", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("ReaderQos", "Time-Based Filter", 0, QApplication::UnicodeUTF8));
        timeBasedFilterActive->setText(QApplication::translate("ReaderQos", "on", 0, QApplication::UnicodeUTF8));
        periodLabel->setText(QApplication::translate("ReaderQos", "Period(ms):", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ReaderQos: public Ui_ReaderQos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READERQOSFORM_H
