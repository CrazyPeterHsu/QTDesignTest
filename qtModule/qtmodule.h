#ifndef QTMODULE_H
#define QTMODULE_H

#include <QtWidgets/QMainWindow>
#include "ui_qtmodule.h"

#include "tab01.h"
#include "tab02.h"
#include <memory>
#include <QLCDNumber>
#include <QTabWidget>

class qtModule : public QMainWindow
{
	Q_OBJECT

public:
	qtModule(QWidget *parent = 0);
	~qtModule();

	
private:
	Ui::qtModuleClass ui;
	std::shared_ptr<tab01> myNewTab;
	std::shared_ptr<tab02> myNewTab2;

private slots:
	void TabChanged(int tab_number);
	void GetTab01Signal(QString  string_text);
};

#endif // QTMODULE_H
