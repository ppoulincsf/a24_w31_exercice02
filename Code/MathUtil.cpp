#include "stdafx.h"
#include "MathUtil.h"
#include <cmath> 



void MathUtil::sin_cos(float angle, float& sin_result, float& cos_result)
{
  // Calcul des valeurs avec les fonctions existantes qui ne prennent pas avantage de la s�rie de Taylor
  // Vous devrez les modifier pour r�pondre � la question 1.2
  sin_result = sinf(angle);
  cos_result = cosf(angle);
}

