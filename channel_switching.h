
#pragma once

#include <iostream>
#include <QWidget>
#include "./ui_channel_switching.h"

class Switch : public QWidget, public Ui::channel_switch {
  Q_OBJECT
public:
  Switch(QWidget* parent = nullptr) :QWidget(parent) {
	setupUi(this);
  }
public slots:
  void slotButtonClicked();
  void slotChannelChanged();
  void valueChanged();
};