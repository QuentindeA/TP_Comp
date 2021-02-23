#include "e0.h"

bool E0::transition(Automate &automate, Symbole *s)
{
    switch (*s)
    {
        case INT:
            automate.decalage(s, new E3);
            break;
        case OPENPAR:
            automate.decalage(s, new E2);
            break;
        case EXPR:
            automate.decalage(s, new E1);
            break;
        default : 
            std::cout << "Erreur transition pour " << this.name;
    }
    return false;
}