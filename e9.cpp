#include "e9.h"

bool E9::transition(Automate &automate, Symbole *s)
{
    switch (*s)
    {
        case PLUS:
        case MULT:
        case CLOSEPAR:
        case FIN:
            automate.popAndDestroySymbol();
            Expr *s1 = (Expr *)automate.popSymbol();
            automate.popAndDestroySymbol();
            automate.reduction(3, new ExprPar(s1));
            break;
        default : 
            std::cout << "Erreur transition pour " << this.name;
    }
    return false;
}