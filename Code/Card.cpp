#include "stdafx.h"
#include "Card.h"
#include <iostream>
Card::Card()  
{
  color = Color::HEARTS;
  value = CardValue::ACE;
}

Card::Card(Color _color, CardValue _value)
  : color(_color), value(_value)
{
}

int Card::getValue() 
{
  if (value == CardValue::ACE)
    return 1;
  if ((int)value <= (int)CardValue::TEN)
    return (int)value + 1;
  return 10;
  
}

Color Card::getColor() const
{
  return color;
}

void Card::display() const
{
  std::cout << std::endl << "\t" << (int)getValue() << " of " << (int)getColor() << std::endl;
}

CardValue Card::getCardValue() const
{
  return value;
}
