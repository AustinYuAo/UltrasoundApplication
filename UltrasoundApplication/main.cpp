#include "UltrasoundApplication.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	UltrasoundApplication w;
	w.show();
	return a.exec();
}
