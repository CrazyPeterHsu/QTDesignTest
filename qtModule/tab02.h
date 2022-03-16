#pragma once
#include <QWidget>
#include "ui_tab02.h"

class tab02 : public QWidget {
	Q_OBJECT

public:
	tab02(QWidget * parent = Q_NULLPTR);
	~tab02();

private:
	Ui::tab02 ui;
};
