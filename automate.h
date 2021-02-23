#ifndef AUTOMATE_H
#define AUTOMATE_H

#include <vector>
#include <iostream>

#include "symbole.h"
#include "lexer.h"
#include "expr.h"

class Etat;
class Automate
{
    public:
        Automate(Lexer * l) : lexer(l) { };
        virtual ~Automate() {};
        void reduction(int n, Symbole *s);
        void decalage(Symbole *s, Etat *e);
        void Start();
        void Accept();
        int Eval();
        Symbole * popSymbol();
        void popAndDestroySymbol();

    private:
        Lexer *lexer;
        Expr *exprFinale;
        vector<Symbole *> symbolstack;
        vector<Etat *> statestack;
};

#endif //AUTOMATE_H