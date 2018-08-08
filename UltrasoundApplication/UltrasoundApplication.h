#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_UltrasoundApplication.h"

class UltrasoundApplication : public QMainWindow
{
	Q_OBJECT

public:
	UltrasoundApplication(QWidget *parent = Q_NULLPTR);

private:
	Ui::UltrasoundApplicationClass ui;
};
