#pragma once

#include <string>
using namespace std;

enum Identificateurs { OPENPAR, CLOSEPAR, PLUS, MULT, INT, FIN, ERREUR };

const string Etiquettes[] = { "OPENPAR", "CLOSEPAR", "PLUS", "MULT", "INT", "FIN", "ERREUR" };

class Symbole {
   public:
      Symbole(int i, bool t) : ident(i), terminal(t) {  }
      virtual ~Symbole() { }
      operator int() const { return ident; }
      virtual void Affiche();
      bool isTerminal() { return terminal; }
      
   protected:
      int ident;
};

class Entier : public Symbole {
   public:
      Entier(int v) : Symbole(INT, true), valeur(v) { }
      ~Entier() { }
      virtual void Affiche();
   protected:
      int valeur;
};

class Expr : public Symbole
{
   public:
      Expr() : Symbole(EXPR, false) { }
      virtual ~Expr() {}
      //virtual double eval(const map<string, double> & valeurs) = 0; //pas nécessaire comme un seul non terminal

   private:
      int 
};

class ExprPlus : public Expr
{
   public:
      ExprPlus(Symbole *s1, Symbole *s2) : Expr() { }
      virtual ~ExprPlus() {}
};

class ExprMult : public Expr
{
   public:
      ExprMult(Symbole *s1, Symbole *s2) : Expr() { }
      virtual ~ExprMult() {}
};

class ExprPar : public Expr
{
   public:
      ExprPar(Symbole *s1) : Expr() { }
      virtual ~ExprPar() {}
};