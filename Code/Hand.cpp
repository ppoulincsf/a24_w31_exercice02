#include "stdafx.h"
#include <iostream>
#include "Hand.h"

const int Hand::NB_CARDS_MAX_IN_HAND;
const int Hand::BLACKJACK;
Hand::Hand()
  : nbCards(0)
{
}

void Hand::addCard(const Card& newCard)
{
  cards[nbCards++] = newCard;
}

unsigned int Hand::getNbCards() const
{
  return nbCards;
}

unsigned int Hand::getTotal() const
{
  unsigned int total = 0;
  for (unsigned int i = 0; i < nbCards; i++)
  {
    total += (int)cards[i].getValue();
  }
  return total;
}

const Card& Hand::getCard(unsigned int i) const
{
  return cards[i];
}

void Hand::display() const
{
  std::cout << "Le contenu de la main est:" << std::endl;
  for (unsigned int i = 0; i < getNbCards(); i++)
  {
    cards[i].display();
  }
}