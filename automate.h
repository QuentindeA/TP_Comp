#include <vector>

#include "etat.h"
#include "symbole.h"
#include "lexer.h"

class Automate
{
    public:
        Automate();
        virtual ~Automate() {};
        void reduction(int n, Symbole *s);
        void decalage(Symbole *s, Etat *e);

    private:
        vector<Symbole> symbolstack;
        vector<Etat> statestack;
        Lexer lexer;
};
