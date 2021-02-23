#include "e3.h"
#include "exprVal.h"

bool E3::transition(Automate &automate, Symbole *s)
{
    switch (*s)
    {
    case PLUS:
    case MULT:
    case CLOSEPAR:
    case FIN:
    {
        Entier *e = (Entier *)automate.popSymbol();
        automate.reduction(1, new ExprVal(e));
        break;
    }
    default:
        std::cout << "Erreur transition pour " << name;
        break;
    }
    
    return false;
}