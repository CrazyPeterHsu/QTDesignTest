#include "qtmodule.h"

qtModule::qtModule(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	myNewTab = std::make_shared<tab01>(this);
	myNewTab2 = std::make_shared<tab02>();

	ui.tabWidget_2->addTab(myNewTab.get(), tr("tab1"));
	ui.tabWidget_2->addTab(myNewTab2.get(), tr("tab2"));

	myNewTab->GetLabelObject(ui.label);
	connect(ui.tabWidget_2, SIGNAL(currentChanged(int)), this, SLOT(TabChanged(int)));
}

qtModule::~qtModule()
{

}

void qtModule::TabChanged(int tab_number) {
	if (tab_number == 0)
	{
		ui.label->setVisible(true);
		ui.label_2->setVisible(false);
	}
	else if (tab_number == 1) {
		ui.label->setVisible(false);
		ui.label_2->setVisible(true);
	}
}

void qtModule::GetTab01Signal(QString  string_text) {
	ui.textBrowser->setPlainText(string_text);
}
