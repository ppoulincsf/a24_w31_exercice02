#pragma once
#include "Card.h"

class Hand
{
  static const int NB_CARDS_MAX_IN_HAND = 11;  
public:
  static const int BLACKJACK = 21;
  Hand();
  void addCard(const Card& newCard);
  unsigned int getNbCards() const;
  unsigned int getTotal() const;
  const Card& getCard(unsigned int i) const;
  void display() const;

private:
  Card cards[NB_CARDS_MAX_IN_HAND];
  unsigned int nbCards;
};

