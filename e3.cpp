#include "e3.h"

bool E3::transition(Automate &automate, Symbole *s)
{
    switch (*s)
    {
    case PLUS:
    case FOIS:
    case CLOSEPAR:
    case FIN:
        Expr *s1 = (Expr *)automate.popSymbol();
        automate.reduction(1, new ExprVal(s1));
        break;
    default:
        std::cout << "Erreur transition pour " << this.name;
    }
    return false;
}