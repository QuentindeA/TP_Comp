#ifndef E5_H
#define E5_H

#include "symbole.h"
#include "automate.h"
#include "etat.h"

class E5 : public Etat {
    public:
        E5() : Etat("E5") { };
        virtual ~E5() { };
        virtual bool transition(Automate & automate, Symbole * s);
};

#endif //E5_H