#pragma once
#include <QWidget>
#include "ui_tab01.h"
#include <memory>
#include <QLCDNumber>
#include <QTabWidget>
#include <QLabel>
class tab01 : public QWidget {
	Q_OBJECT

public:
	tab01(QWidget * parent = Q_NULLPTR);
	~tab01();

	void GetLabelObject(QLabel *input);
	QLabel *tab01_label;

private:
	Ui::tab01 ui;

public slots:
	void update_label();
	void update_label_2();

signals:
	void SendToParent(QString  string_text);
};