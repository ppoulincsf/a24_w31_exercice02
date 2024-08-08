#include "stdafx.h"
#include "Dealer.h"
#include "Card.h"
#include <stdlib.h>
#include <time.h>

int Dealer::generateRandomNumber(int min, int max)
{
  float val = float(rand()) / float(RAND_MAX);

  return int(int(val * (max - min) + 0.5f) + min);
}

Dealer::Dealer()
{
  for (int j = 0; j < (int)Color::NB_COLORS; j++)
  {
    for (int i = 0; i < (int)CardValue::NB_VALUES; i++)
    {
      dealtCards[j][i] = false;
    }
  }

  // Initialisation du générateur aléatoire
  srand(unsigned(time(NULL)));
}

Card Dealer::dealCard()
{
  // Choisir une couleur
  int color = 0;
  int value = 0;

  // PROF: A compléter pour choisir une carte aléatoire
  

  return Card((Color)color, (CardValue)value);
}