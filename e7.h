#ifndef E7_H
#define E7_H

#include "symbole.h"
#include "automate.h"
#include "etat.h"

class E7 : public Etat {
    public:
        E7() : Etat("E7") { };
        virtual ~E7() { };
        virtual bool transition(Automate & automate, Symbole * s);
};

#endif //E7_H