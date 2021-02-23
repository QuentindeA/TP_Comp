#include "e7.h"
#include "e5.h"

bool E7::transition(Automate &automate, Symbole *s)
{
    switch (*s)
    {
        case PLUS:
        case CLOSEPAR:
        case FIN:
            Expr *s1 = (Expr *)automate.popSymbol();
            automate.popAndDestroySymbol();
            Expr *s2 = (Expr *)automate.popSymbol();
            automate.reduction(3, newExprPlus(s2, s1));
            break;
        case MULT:
            automate.decalage(s, new E5);
            break;
        default : 
            std::cout << "Erreur transition pour " << this.name;
    }
    return false;
}