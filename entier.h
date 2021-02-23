#include "symbole.h"

class Entier : public Symbole {
   public:
      Entier(int v) : Symbole(INT, true), valeur(v) { }
      virtual ~Entier() { }
      virtual void Affiche();
      virtual int GetValeur();
   protected:
      int valeur;
};