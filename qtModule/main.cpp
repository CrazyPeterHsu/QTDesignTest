#include "qtmodule.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	qtModule w;
	w.show();
	return a.exec();
}
