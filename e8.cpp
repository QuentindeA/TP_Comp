#include "e8.h"

bool E8::transition(Automate &automate, Symbole *s)
{
    switch (*s)
    {
        case PLUS:
        case MULT:
        case CLOSEPAR:
        case FIN:
            Expr *s1 = (Expr *)automate.popSymbol();
            automate.popAndDestroySymbol();
            Expr *s2 = (Expr *)automate.popSymbol();
            automate.reduction(3, new ExprMult(s2, s1));
            break;
        default : 
            std::cout << "Erreur transition pour " << this.name;
    }
    return false;
}