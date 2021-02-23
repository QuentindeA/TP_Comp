#include "e4.h"
#include "e5.h"
#include "e6.h"
#include "e9.h"

bool E6::transition(Automate &automate, Symbole *s)
{
    switch (*s)
    {
        case PLUS:
            automate.decalage(s, new E4);
            break;
        case MULT:
            automate.decalage(s, new E5);
            break;
        case CLOSEPAR:
            automate.decalage(s, new E9);
            break;
        default : 
            std::cout << "Erreur transition pour " << this.name;
    }
    return false;
}