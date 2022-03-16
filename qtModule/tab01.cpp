#include "tab01.h"

tab01::tab01(QWidget * parent) : QWidget(parent) {
	ui.setupUi(this);

	tab01_label = new QLabel;
	
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(update_label()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(update_label_2()));

	connect(this, SIGNAL(SendToParent(QString)), parent, SLOT(GetTab01Signal(QString)));
}

tab01::~tab01() {
	delete tab01_label;
}

void tab01::GetLabelObject(QLabel *input){
	tab01_label = input;
}

void tab01::update_label() {
	tab01_label->setText("Tab01 Tab01 Tab01 pushputton 1");
	QString text_content = "Clicked pushputton 1";
	emit SendToParent(text_content);
}
void tab01::update_label_2() {
	tab01_label->setText("Tab01 Tab01 Tab01 pushputton 2");
	QString text_content = "Clicked pushputton 2";
	emit SendToParent(text_content);
}