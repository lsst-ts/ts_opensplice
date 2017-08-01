/********************************************************************************
** Form generated from reading UI file 'iShapesForm-small.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ISHAPESFORM_2D_SMALL_H
#define UI_ISHAPESFORM_2D_SMALL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShapesDialog
{
public:
    QFrame *frame;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *wShapeLabel;
    QLabel *colorLabel;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QComboBox *wShapeList;
    QComboBox *colorList;
    QSlider *sizeSlider;
    QSlider *speedSlider;
    QPushButton *pubQosButton;
    QPushButton *createWriterButton;
    QFrame *frame_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *rShapeList;
    QPushButton *subQosButton;
    QPushButton *filterButton;
    QPushButton *createReaderButton;
    QFrame *renderFrame;
    QLabel *PausedLabel;

    void setupUi(QDialog *ShapesDialog)
    {
        if (ShapesDialog->objectName().isEmpty())
            ShapesDialog->setObjectName(QString::fromUtf8("ShapesDialog"));
        ShapesDialog->setWindowModality(Qt::NonModal);
        ShapesDialog->setEnabled(true);
        ShapesDialog->resize(518, 378);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ShapesDialog->sizePolicy().hasHeightForWidth());
        ShapesDialog->setSizePolicy(sizePolicy);
        ShapesDialog->setMinimumSize(QSize(518, 378));
        ShapesDialog->setMaximumSize(QSize(518, 378));
        ShapesDialog->setFocusPolicy(Qt::ClickFocus);
        ShapesDialog->setSizeGripEnabled(true);
        ShapesDialog->setModal(false);
        frame = new QFrame(ShapesDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 171, 201));
        QFont font;
        font.setFamily(QString::fromUtf8("Lucida Grande"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        frame->setFont(font);
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 151, 191));
        layoutWidget1->setFont(font);
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        wShapeLabel = new QLabel(layoutWidget1);
        wShapeLabel->setObjectName(QString::fromUtf8("wShapeLabel"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lucida Grande"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        font1.setKerning(false);
        font1.setStyleStrategy(QFont::PreferAntialias);
        wShapeLabel->setFont(font1);
        wShapeLabel->setLayoutDirection(Qt::LeftToRight);
        wShapeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(wShapeLabel);

        colorLabel = new QLabel(layoutWidget1);
        colorLabel->setObjectName(QString::fromUtf8("colorLabel"));
        colorLabel->setFont(font1);
        colorLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(colorLabel);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        wShapeList = new QComboBox(layoutWidget1);
        wShapeList->setObjectName(QString::fromUtf8("wShapeList"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Lucida Grande"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        font2.setKerning(false);
        font2.setStyleStrategy(QFont::PreferAntialias);
        wShapeList->setFont(font2);

        verticalLayout_2->addWidget(wShapeList);

        colorList = new QComboBox(layoutWidget1);
        colorList->setObjectName(QString::fromUtf8("colorList"));
        colorList->setFont(font2);

        verticalLayout_2->addWidget(colorList);

        sizeSlider = new QSlider(layoutWidget1);
        sizeSlider->setObjectName(QString::fromUtf8("sizeSlider"));
        sizeSlider->setFont(font);
        sizeSlider->setMinimum(10);
        sizeSlider->setMaximum(100);
        sizeSlider->setSingleStep(10);
        sizeSlider->setPageStep(20);
        sizeSlider->setValue(45);
        sizeSlider->setSliderPosition(45);
        sizeSlider->setOrientation(Qt::Horizontal);
        sizeSlider->setTickPosition(QSlider::TicksBelow);
        sizeSlider->setTickInterval(5);

        verticalLayout_2->addWidget(sizeSlider);

        speedSlider = new QSlider(layoutWidget1);
        speedSlider->setObjectName(QString::fromUtf8("speedSlider"));
        speedSlider->setFont(font);
        speedSlider->setMinimum(10);
        speedSlider->setMaximum(100);
        speedSlider->setSingleStep(10);
        speedSlider->setPageStep(20);
        speedSlider->setValue(45);
        speedSlider->setSliderPosition(45);
        speedSlider->setOrientation(Qt::Horizontal);
        speedSlider->setTickPosition(QSlider::TicksBelow);
        speedSlider->setTickInterval(5);

        verticalLayout_2->addWidget(speedSlider);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        pubQosButton = new QPushButton(layoutWidget1);
        pubQosButton->setObjectName(QString::fromUtf8("pubQosButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pubQosButton->sizePolicy().hasHeightForWidth());
        pubQosButton->setSizePolicy(sizePolicy1);
        pubQosButton->setFont(font1);
        pubQosButton->setDefault(false);
        pubQosButton->setFlat(false);

        verticalLayout_3->addWidget(pubQosButton);

        createWriterButton = new QPushButton(layoutWidget1);
        createWriterButton->setObjectName(QString::fromUtf8("createWriterButton"));
        sizePolicy1.setHeightForWidth(createWriterButton->sizePolicy().hasHeightForWidth());
        createWriterButton->setSizePolicy(sizePolicy1);
        createWriterButton->setFont(font1);

        verticalLayout_3->addWidget(createWriterButton);

        frame_2 = new QFrame(ShapesDialog);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 220, 171, 151));
        frame_2->setFont(font);
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(frame_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 151, 138));
        layoutWidget->setFont(font);
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        rShapeList = new QComboBox(layoutWidget);
        rShapeList->setObjectName(QString::fromUtf8("rShapeList"));
        rShapeList->setFont(font2);

        horizontalLayout_2->addWidget(rShapeList);


        verticalLayout_4->addLayout(horizontalLayout_2);

        subQosButton = new QPushButton(layoutWidget);
        subQosButton->setObjectName(QString::fromUtf8("subQosButton"));
        subQosButton->setFont(font1);

        verticalLayout_4->addWidget(subQosButton);

        filterButton = new QPushButton(layoutWidget);
        filterButton->setObjectName(QString::fromUtf8("filterButton"));
        filterButton->setFont(font1);

        verticalLayout_4->addWidget(filterButton);

        createReaderButton = new QPushButton(layoutWidget);
        createReaderButton->setObjectName(QString::fromUtf8("createReaderButton"));
        createReaderButton->setFont(font1);

        verticalLayout_4->addWidget(createReaderButton);

        renderFrame = new QFrame(ShapesDialog);
        renderFrame->setObjectName(QString::fromUtf8("renderFrame"));
        renderFrame->setGeometry(QRect(190, 10, 321, 361));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(renderFrame->sizePolicy().hasHeightForWidth());
        renderFrame->setSizePolicy(sizePolicy2);
        renderFrame->setMinimumSize(QSize(240, 360));
        renderFrame->setMaximumSize(QSize(500, 380));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        renderFrame->setPalette(palette);
        renderFrame->setFont(font);
        renderFrame->setAutoFillBackground(true);
        renderFrame->setFrameShape(QFrame::StyledPanel);
        renderFrame->setFrameShadow(QFrame::Raised);
        PausedLabel = new QLabel(renderFrame);
        PausedLabel->setObjectName(QString::fromUtf8("PausedLabel"));
        PausedLabel->setGeometry(QRect(10, 10, 101, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Sans Serif"));
        font3.setPointSize(20);
        PausedLabel->setFont(font3);
        frame_2->raise();
        renderFrame->raise();
        frame->raise();

        retranslateUi(ShapesDialog);
        QObject::connect(createWriterButton, SIGNAL(clicked()), ShapesDialog, SLOT(onPublishButtonClicked()));
        QObject::connect(createReaderButton, SIGNAL(clicked()), ShapesDialog, SLOT(onSubscribeButtonClicked()));
        QObject::connect(pubQosButton, SIGNAL(clicked()), ShapesDialog, SLOT(onWriterQosButtonClicked()));
        QObject::connect(subQosButton, SIGNAL(clicked()), ShapesDialog, SLOT(onReaderQosButtonClicked()));
        QObject::connect(filterButton, SIGNAL(clicked()), ShapesDialog, SLOT(onFilterButtonClicked()));

        QMetaObject::connectSlotsByName(ShapesDialog);
    } // setupUi

    void retranslateUi(QDialog *ShapesDialog)
    {
        ShapesDialog->setWindowTitle(QApplication::translate("ShapesDialog", "OpenSplice | DDS - iShapes Demo", 0, QApplication::UnicodeUTF8));
        wShapeLabel->setText(QApplication::translate("ShapesDialog", "Shape:", 0, QApplication::UnicodeUTF8));
        colorLabel->setText(QApplication::translate("ShapesDialog", "Color:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ShapesDialog", "Size:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ShapesDialog", "Speed:", 0, QApplication::UnicodeUTF8));
        wShapeList->clear();
        wShapeList->insertItems(0, QStringList()
         << QApplication::translate("ShapesDialog", "Circle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ShapesDialog", "Square", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ShapesDialog", "Triangle", 0, QApplication::UnicodeUTF8)
        );
        colorList->clear();
        colorList->insertItems(0, QStringList()
         << QApplication::translate("ShapesDialog", "Blue", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ShapesDialog", "Red", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ShapesDialog", "Green", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ShapesDialog", "Orange", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ShapesDialog", "Yellow", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ShapesDialog", "Magenta", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ShapesDialog", "Cyan", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ShapesDialog", "Gray", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        pubQosButton->setToolTip(QApplication::translate("ShapesDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Click to set custom QoS</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pubQosButton->setText(QApplication::translate("ShapesDialog", "QoS", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        createWriterButton->setToolTip(QApplication::translate("ShapesDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Click Publish Topic</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        createWriterButton->setText(QApplication::translate("ShapesDialog", "Publish", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ShapesDialog", "Shape:", 0, QApplication::UnicodeUTF8));
        rShapeList->clear();
        rShapeList->insertItems(0, QStringList()
         << QApplication::translate("ShapesDialog", "Circle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ShapesDialog", "Square", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("ShapesDialog", "Triangle", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        subQosButton->setToolTip(QApplication::translate("ShapesDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Click to set custom QoS</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        subQosButton->setText(QApplication::translate("ShapesDialog", "QoS", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        filterButton->setToolTip(QApplication::translate("ShapesDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Click to set custom filters</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        filterButton->setText(QApplication::translate("ShapesDialog", "Filter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        createReaderButton->setToolTip(QApplication::translate("ShapesDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Click Subscribe to Topic</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        createReaderButton->setText(QApplication::translate("ShapesDialog", "Subscribe", 0, QApplication::UnicodeUTF8));
        PausedLabel->setText(QApplication::translate("ShapesDialog", "Paused", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ShapesDialog: public Ui_ShapesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ISHAPESFORM_2D_SMALL_H
