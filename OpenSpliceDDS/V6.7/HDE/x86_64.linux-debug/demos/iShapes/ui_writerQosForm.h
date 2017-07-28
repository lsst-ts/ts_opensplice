/********************************************************************************
** Form generated from reading UI file 'writerQosForm.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITERQOSFORM_H
#define UI_WRITERQOSFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WriterQoS
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *reliableRButt;
    QRadioButton *bestEffortRButt;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *ownershipSharedRButt;
    QRadioButton *ownershipExclusiveRButt;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *strengthSpinBox;
    QGroupBox *groupBox_3;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QSpinBox *prioritySpinBox;
    QGroupBox *groupBox_4;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QComboBox *durabilityComboBox;
    QButtonGroup *reliabilityButtonGroup;
    QButtonGroup *ownershipButtonGroup;

    void setupUi(QDialog *WriterQoS)
    {
        if (WriterQoS->objectName().isEmpty())
            WriterQoS->setObjectName(QString::fromUtf8("WriterQoS"));
        WriterQoS->setWindowModality(Qt::ApplicationModal);
        WriterQoS->resize(221, 335);
        buttonBox = new QDialogButtonBox(WriterQoS);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(20, 290, 171, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox = new QGroupBox(WriterQoS);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 201, 51));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 20, 181, 21));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        reliableRButt = new QRadioButton(horizontalLayoutWidget);
        reliabilityButtonGroup = new QButtonGroup(WriterQoS);
        reliabilityButtonGroup->setObjectName(QString::fromUtf8("reliabilityButtonGroup"));
        reliabilityButtonGroup->addButton(reliableRButt);
        reliableRButt->setObjectName(QString::fromUtf8("reliableRButt"));

        horizontalLayout->addWidget(reliableRButt);

        bestEffortRButt = new QRadioButton(horizontalLayoutWidget);
        reliabilityButtonGroup->addButton(bestEffortRButt);
        bestEffortRButt->setObjectName(QString::fromUtf8("bestEffortRButt"));
        bestEffortRButt->setChecked(true);

        horizontalLayout->addWidget(bestEffortRButt);

        groupBox_2 = new QGroupBox(WriterQoS);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 80, 201, 81));
        verticalLayoutWidget = new QWidget(groupBox_2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 181, 51));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ownershipSharedRButt = new QRadioButton(verticalLayoutWidget);
        ownershipButtonGroup = new QButtonGroup(WriterQoS);
        ownershipButtonGroup->setObjectName(QString::fromUtf8("ownershipButtonGroup"));
        ownershipButtonGroup->addButton(ownershipSharedRButt);
        ownershipSharedRButt->setObjectName(QString::fromUtf8("ownershipSharedRButt"));
        ownershipSharedRButt->setChecked(true);

        horizontalLayout_3->addWidget(ownershipSharedRButt);

        ownershipExclusiveRButt = new QRadioButton(verticalLayoutWidget);
        ownershipButtonGroup->addButton(ownershipExclusiveRButt);
        ownershipExclusiveRButt->setObjectName(QString::fromUtf8("ownershipExclusiveRButt"));

        horizontalLayout_3->addWidget(ownershipExclusiveRButt);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        strengthSpinBox = new QSpinBox(verticalLayoutWidget);
        strengthSpinBox->setObjectName(QString::fromUtf8("strengthSpinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(strengthSpinBox->sizePolicy().hasHeightForWidth());
        strengthSpinBox->setSizePolicy(sizePolicy);
        strengthSpinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        strengthSpinBox->setValue(50);

        horizontalLayout_2->addWidget(strengthSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        groupBox_3 = new QGroupBox(WriterQoS);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 230, 201, 51));
        horizontalLayoutWidget_4 = new QWidget(groupBox_3);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(10, 20, 171, 20));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_2);

        prioritySpinBox = new QSpinBox(horizontalLayoutWidget_4);
        prioritySpinBox->setObjectName(QString::fromUtf8("prioritySpinBox"));
        prioritySpinBox->setValue(50);

        horizontalLayout_5->addWidget(prioritySpinBox);

        groupBox_4 = new QGroupBox(WriterQoS);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 170, 201, 51));
        horizontalLayoutWidget_5 = new QWidget(groupBox_4);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(10, 20, 171, 21));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_3);

        durabilityComboBox = new QComboBox(horizontalLayoutWidget_5);
        durabilityComboBox->setObjectName(QString::fromUtf8("durabilityComboBox"));

        horizontalLayout_6->addWidget(durabilityComboBox);


        retranslateUi(WriterQoS);
        QObject::connect(buttonBox, SIGNAL(accepted()), WriterQoS, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WriterQoS, SLOT(reject()));

        QMetaObject::connectSlotsByName(WriterQoS);
    } // setupUi

    void retranslateUi(QDialog *WriterQoS)
    {
        WriterQoS->setWindowTitle(QApplication::translate("WriterQoS", "Writer QoS", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("WriterQoS", "Reliability QoS", 0, QApplication::UnicodeUTF8));
        reliableRButt->setText(QApplication::translate("WriterQoS", "Reliable", 0, QApplication::UnicodeUTF8));
        bestEffortRButt->setText(QApplication::translate("WriterQoS", "Best Effort", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("WriterQoS", "Ownership QoS", 0, QApplication::UnicodeUTF8));
        ownershipSharedRButt->setText(QApplication::translate("WriterQoS", "Shared", 0, QApplication::UnicodeUTF8));
        ownershipExclusiveRButt->setText(QApplication::translate("WriterQoS", "Exclusive", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WriterQoS", "Strength:", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("WriterQoS", "Transport Priority QoS", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("WriterQoS", "Priority:", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("WriterQoS", "Durability QoS", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("WriterQoS", "Durability:", 0, QApplication::UnicodeUTF8));
        durabilityComboBox->clear();
        durabilityComboBox->insertItems(0, QStringList()
         << QApplication::translate("WriterQoS", "Volatile", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WriterQoS", "Transient Local", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WriterQoS", "Transient", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WriterQoS", "Persistent", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class WriterQoS: public Ui_WriterQoS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITERQOSFORM_H
