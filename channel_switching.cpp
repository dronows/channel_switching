// channel_switching.cpp: определяет точку входа для приложения.
//

#include "channel_switching.h"

void Switch::slotButtonClicked() {
  QString str = ((QPushButton*)sender())->text();
  lcd_channel->display(str);
}
//----------------------------------------------
void Switch::slotChannelChanged() {
  QString str = ((QPushButton*)sender())->text();
  int channel = lcd_channel->intValue();
  if (str == "ch-" && lcd_channel->value() > 0)  lcd_channel->display(--channel);
  else if(str == "ch+" && lcd_channel->value() < 9) lcd_channel->display(++channel);
}
//-------------------------------------------------------------------------
void Switch::valueChanged() {
  QString str = ((QPushButton*)sender())->text();
  int volume = lcd_vol->intValue();
  if (str == "vol-" && lcd_vol->value() > 0) lcd_vol->display(volume - 10);
  else if (str == "vol+" && lcd_vol->value() < 100) lcd_vol->display(volume + 10);
}