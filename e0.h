#ifndef E0_H
#define E0_H

#include <string>

#include "etat.h"
#include "automate.h"
#include "symbole.h"

class E0 : public Etat {
    public:
        E0() : Etat("E0") { };
        virtual ~E0() { };
        virtual bool transition(Automate & automate, Symbole * s);
};

#endif //E0_H