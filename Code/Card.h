#pragma once
#include "Color.h"
#include "CardValue.h"
class Card
{
public:
  Card();
  Card(Color color, CardValue value);
  int getValue() ;
  Color getColor() const;
  void display() const;
  CardValue getCardValue() const;
private:
  Color color;
  CardValue value;
};

