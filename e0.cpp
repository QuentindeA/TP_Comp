#include "e0.h"
#include "e1.h"
#include "e2.h"
#include "e3.h"

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
            std::cout << "Erreur transition pour " << name;
    }
    return false;
}