#ifndef E9_H
#define E9_H

#include "symbole.h"
#include "automate.h"
#include "etat.h"

class E9 : public Etat {
    public:
        E9() : Etat("E9") { };
        virtual ~E9() { };
        virtual bool transition(Automate & automate, Symbole * s);
};

#endif //E9_H