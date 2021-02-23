#ifndef ENTIER_H
#define ENTIER_H

#include "symbole.h"

class Entier : public Symbole {
   public:
      Entier(int v) : Symbole(INT, true), valeur(v) { };
      virtual ~Entier() { };
      int GetValeur();
      
   protected:
      int valeur;
};

#endif //ENTIER_H