#ifndef E3_H
#define E3_H

#include "symbole.h"
#include "automate.h"
#include "etat.h"

class E3 : public Etat {
    public:
        E3() : Etat("E3") { };
        virtual ~E3() { };
        virtual bool transition(Automate & automate, Symbole * s);
};

#endif //E3_H