#include "pch.h"
#include <iostream>
#include "dealer.h"
#include "hand.h"
#include "card.h"

//void AfficherMain(const Hand& main);
void showPlayerVictory(const Hand& mainordi, const Hand& mainjoueur);
void showComputerVictory(const Hand& mainordi, const Hand& mainjoueur);


int main()
{
  Dealer dealer;
  Hand playerHand;
  Hand computerHand;

  // Commencer par distribuer une carte au joueur
  playerHand.addCard(dealer.dealCard());








  // PROF: Complétez ici pour la question 1.1g)










  std::cout << std::endl;
  // Déterminer le gagnant
  if ((playerHand.getTotal() > computerHand.getTotal())
    || (computerHand.getTotal() > Hand::BLACKJACK))
  {
    if (playerHand.getTotal() <= Hand::BLACKJACK)
      showPlayerVictory(computerHand, playerHand);
    else
      showComputerVictory(computerHand, playerHand);
  }
  else
  {
    showComputerVictory(computerHand, playerHand);
  }

}


void showPlayerVictory(const Hand& mainordi, const Hand& mainjoueur)
{
  std::cout << "Vous avez gagne." << std::endl;
  mainjoueur.display();
  std::cout << "La valeur de votre main est: " << mainjoueur.getTotal() << std::endl << std::endl << std::endl;

  std::cout << "L'ordinateur avait" << std::endl;
  mainordi.display();
  std::cout << "La valeur de la main de l'ordinateur est: " << mainordi.getTotal() << std::endl << std::endl << std::endl;
}

void showComputerVictory(const Hand& mainordi, const Hand& mainjoueur)
{
  std::cout << "Vous avez perdu." << std::endl;
  mainjoueur.display();
  std::cout << "La valeur de votre main est: " << mainjoueur.getTotal() << std::endl << std::endl << std::endl;

  if (mainjoueur.getTotal() <= 21)
  {
    mainordi.display();
    std::cout << "La valeur de la main de l'ordinateur est: " << mainordi.getTotal() << std::endl << std::endl << std::endl;
  }
}