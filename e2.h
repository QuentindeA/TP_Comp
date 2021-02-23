#ifndef E2_H
#define E2_H

#include "etat.h"
#include "automate.h"
#include "symbole.h"

class E2 : public Etat {
    public:
        E2() : Etat("E2") { };
        virtual ~E2() { };
        virtual bool transition(Automate & automate, Symbole * s);
};

#endif //E2_H