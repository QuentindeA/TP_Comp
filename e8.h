#ifndef E8_H
#define E8_H

#include "symbole.h"
#include "automate.h"
#include "etat.h"

class E8 : public Etat {
    public:
        E8() : Etat("E8") { };
        virtual ~E8() { };
        virtual bool transition(Automate & automate, Symbole * s);
};

#endif //E8_H