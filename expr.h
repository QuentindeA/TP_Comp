#ifndef EXPR_H
#define EXPR_H

#include "symbole.h"

class Expr : public Symbole
{
   public:
      Expr() : Symbole(EXPR, false) { }
      virtual ~Expr() {}
      //virtual double eval(const map<string, double> & valeurs) = 0;
      virtual int eval() = 0; //Pas besoin de paramètre, on a pas de variable & "=0" Permet d'avoir une classe abstraite
};

#endif //EXPR_H