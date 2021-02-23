#ifndef E4_H
#define E4_H

#include "symbole.h"
#include "automate.h"
#include "etat.h"

class E4 : public Etat {
    public:
        E4() : Etat("E4") { };
        virtual ~E4() { };
        virtual bool transition(Automate & automate, Symbole * s);
};

#endif //E4_H