#ifndef ETAT_H
#define ETAT_H

#include <string>
#include <iostream>

#include "symbole.h"

class Automate;

class Etat {
    public:
        Etat(string etatName) : name(etatName) {};
        virtual ~Etat() {};
        virtual bool transition(Automate & automate, Symbole * s) = 0;
        string getName();
        
    protected:
        string name;
};

#endif //ETAT_H