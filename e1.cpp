#include "e1.h"

bool E1::transition(Automate &automate, Symbole *s)
{
    switch (*s)
    {
        case PLUS:
            automate.decalage(s, new E4);
            break;
        case MULT:
            automate.decalage(s, new E5);
            break;
        case FIN:
            automate.Accept();
            break;
        default : 
            std::cout << "Erreur transition pour " << this.name;
    }
    return false;
}