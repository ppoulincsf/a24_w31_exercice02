#pragma once
#include "Card.h"
class Dealer
{
public:
  Dealer();
  Card dealCard();

private:
  bool dealtCards[Color::NB_COLORS][CardValue::NB_VALUES];
  static int generateRandomNumber(int min, int max);
};

