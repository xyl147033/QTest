#pragma once

#include <QtWidgets/QWidget>
#include "ui_QTest.h"

class QTest : public QWidget
{
    Q_OBJECT

public:
    QTest(QWidget *parent = nullptr);
    ~QTest();

private:
    Ui::QTestClass ui;
};
