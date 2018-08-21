/********************************************************************************
** Form generated from reading UI file 'filterForm.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERFORM_H
#define UI_FILTERFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FilterDialog
{
public:
    QFrame *frame;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QComboBox *filterCombo;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QDialogButtonBox *buttonBox;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSlider *x0Slider;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSlider *y0Slider;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSlider *x1Slider;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSlider *y1Slider;
    QRadioButton *enableRB;
    QRadioButton *disableRB;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *FilterDialog)
    {
        if (FilterDialog->objectName().isEmpty())
            FilterDialog->setObjectName(QString::fromUtf8("FilterDialog"));
        FilterDialog->setWindowModality(Qt::NonModal);
        FilterDialog->resize(286, 208);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FilterDialog->sizePolicy().hasHeightForWidth());
        FilterDialog->setSizePolicy(sizePolicy);
        FilterDialog->setMinimumSize(QSize(286, 208));
        FilterDialog->setMaximumSize(QSize(286, 208));
        FilterDialog->setModal(true);
        frame = new QFrame(FilterDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 261, 111));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_5 = new QWidget(frame);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(10, 70, 125, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(label_6);

        filterCombo = new QComboBox(horizontalLayoutWidget_5);
        filterCombo->setObjectName(QString::fromUtf8("filterCombo"));

        horizontalLayout_5->addWidget(filterCombo);

        verticalLayoutWidget_2 = new QWidget(FilterDialog);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(50, 160, 183, 36));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(verticalLayoutWidget_2);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        horizontalLayoutWidget_7 = new QWidget(FilterDialog);
        horizontalLayoutWidget_7->setObjectName(QString::fromUtf8("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(20, 20, 241, 52));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(horizontalLayoutWidget_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        x0Slider = new QSlider(horizontalLayoutWidget_7);
        x0Slider->setObjectName(QString::fromUtf8("x0Slider"));
        x0Slider->setMaximum(500);
        x0Slider->setSingleStep(10);
        x0Slider->setValue(100);
        x0Slider->setSliderPosition(100);
        x0Slider->setOrientation(Qt::Horizontal);
        x0Slider->setTickPosition(QSlider::TicksBelow);
        x0Slider->setTickInterval(60);

        horizontalLayout->addWidget(x0Slider);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(horizontalLayoutWidget_7);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        y0Slider = new QSlider(horizontalLayoutWidget_7);
        y0Slider->setObjectName(QString::fromUtf8("y0Slider"));
        y0Slider->setMaximum(360);
        y0Slider->setSingleStep(10);
        y0Slider->setValue(100);
        y0Slider->setSliderPosition(100);
        y0Slider->setOrientation(Qt::Horizontal);
        y0Slider->setTickPosition(QSlider::TicksBelow);
        y0Slider->setTickInterval(40);

        horizontalLayout_2->addWidget(y0Slider);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_7->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(horizontalLayoutWidget_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        x1Slider = new QSlider(horizontalLayoutWidget_7);
        x1Slider->setObjectName(QString::fromUtf8("x1Slider"));
        x1Slider->setMaximum(500);
        x1Slider->setSingleStep(10);
        x1Slider->setValue(200);
        x1Slider->setOrientation(Qt::Horizontal);
        x1Slider->setTickPosition(QSlider::TicksBelow);
        x1Slider->setTickInterval(60);

        horizontalLayout_3->addWidget(x1Slider);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(horizontalLayoutWidget_7);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        y1Slider = new QSlider(horizontalLayoutWidget_7);
        y1Slider->setObjectName(QString::fromUtf8("y1Slider"));
        y1Slider->setMaximum(360);
        y1Slider->setSingleStep(10);
        y1Slider->setSliderPosition(200);
        y1Slider->setOrientation(Qt::Horizontal);
        y1Slider->setTickPosition(QSlider::TicksBelow);
        y1Slider->setTickInterval(40);

        horizontalLayout_4->addWidget(y1Slider);


        verticalLayout_3->addLayout(horizontalLayout_4);


        horizontalLayout_7->addLayout(verticalLayout_3);

        enableRB = new QRadioButton(FilterDialog);
        buttonGroup = new QButtonGroup(FilterDialog);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(enableRB);
        enableRB->setObjectName(QString::fromUtf8("enableRB"));
        enableRB->setGeometry(QRect(50, 130, 108, 23));
        disableRB = new QRadioButton(FilterDialog);
        buttonGroup->addButton(disableRB);
        disableRB->setObjectName(QString::fromUtf8("disableRB"));
        disableRB->setGeometry(QRect(130, 130, 108, 23));
        disableRB->setChecked(true);

        retranslateUi(FilterDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FilterDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FilterDialog, SLOT(reject()));
        QObject::connect(x0Slider, SIGNAL(sliderMoved(int)), FilterDialog, SLOT(updateX0(int)));
        QObject::connect(y0Slider, SIGNAL(sliderMoved(int)), FilterDialog, SLOT(updateY0(int)));
        QObject::connect(x1Slider, SIGNAL(sliderMoved(int)), FilterDialog, SLOT(updateX1(int)));
        QObject::connect(y1Slider, SIGNAL(sliderMoved(int)), FilterDialog, SLOT(updateY1(int)));
        QObject::connect(enableRB, SIGNAL(toggled(bool)), FilterDialog, SLOT(updateFilterStatus(bool)));

        QMetaObject::connectSlotsByName(FilterDialog);
    } // setupUi

    void retranslateUi(QDialog *FilterDialog)
    {
        FilterDialog->setWindowTitle(QApplication::translate("FilterDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("FilterDialog", "Filter:", 0, QApplication::UnicodeUTF8));
        filterCombo->clear();
        filterCombo->insertItems(0, QStringList()
         << QApplication::translate("FilterDialog", "Outside", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("FilterDialog", "Inside", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("FilterDialog", "X0:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FilterDialog", "Y0:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FilterDialog", "X1:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("FilterDialog", "Y1:", 0, QApplication::UnicodeUTF8));
        enableRB->setText(QApplication::translate("FilterDialog", "Enable", 0, QApplication::UnicodeUTF8));
        disableRB->setText(QApplication::translate("FilterDialog", "Disable", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FilterDialog: public Ui_FilterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERFORM_H
