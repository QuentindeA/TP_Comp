#ifndef E6_H
#define E6_H

#include "symbole.h"
#include "automate.h"

class E6 : public Etat {
    public:
        E6() : Etat("E6") { };
        virtual ~E6() { };
        virtual bool transition(Automate & automate, Symbole * s);
};

#endif //E6_H