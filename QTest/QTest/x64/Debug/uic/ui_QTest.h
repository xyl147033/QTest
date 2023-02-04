/********************************************************************************
** Form generated from reading UI file 'QTest.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTEST_H
#define UI_QTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTestClass
{
public:

    void setupUi(QWidget *QTestClass)
    {
        if (QTestClass->objectName().isEmpty())
            QTestClass->setObjectName(QStringLiteral("QTestClass"));
        QTestClass->resize(600, 400);

        retranslateUi(QTestClass);

        QMetaObject::connectSlotsByName(QTestClass);
    } // setupUi

    void retranslateUi(QWidget *QTestClass)
    {
        QTestClass->setWindowTitle(QApplication::translate("QTestClass", "QTest", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QTestClass: public Ui_QTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTEST_H
