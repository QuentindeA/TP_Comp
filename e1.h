#ifndef E1_H
#define E1_H

#include "etat.h"
#include "automate.h"
#include "symbole.h"

class E1 : public Etat {
    public:
        E1() : Etat("E1") { };
        virtual ~E1() { };
        virtual bool transition(Automate & automate, Symbole * s);
};

#endif //E1_H