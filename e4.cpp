#include "e2.h"
#include "e3.h"
#include "e4.h"
#include "e7.h"

bool E4::transition(Automate &automate, Symbole *s)
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
            automate.decalage(s, new E7);
            break;
        default : 
            std::cout << "Erreur transition pour " << name;
    }
    return false;
}