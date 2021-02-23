#include "automate.h"

Automate::Automate()
{
    symbolstack = new vector<Symbole>;
    statestack = new vector<Etat>;
}

void Automate::Start(){
    statestack.push_back(new E0);
    statestack.back()->transition(*this, lexer->Consulter()); //transition à partir de l'état au sommet de la pile
}

void Automate::decalage(Symbole *s, Etat *e)
{
    symbolstack.push_back(s);
    statestack.push_back(e);
    if (s->isTerminal())
    {
        lexer->Avancer();
    }
    s = lexer->Consulter();
    e->transition(*this, s); //transition à partir de l'état au sommet de la pile
}

void Automate::reduction(int n, Symbole *s)
{
    for (int i = 0; i < n; i++)
    {
        delete (statestack.back());
        statestack.pop_back();
    }
    statestack.back()->transition(*this, s);
}

void Automate::Accept() 
{
    std::cout << symbolStack.pop_back();
}

Symbole Automate::popSymbol()
{
    return symbolStack.pop_back();
}

void Automate::popAndDestroySymbol()
{
    symbolstack.pop_back();
}