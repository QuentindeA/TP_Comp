#include <iostream>

#include "symbole.h"
#include "entier.h"

void Symbole::Affiche() {
   cout<<Etiquettes[ident];
}

void Entier::Affiche() {
   Symbole::Affiche();
   cout<<"("<<valeur<<")";
}

int Entier::GetValeur() {
   return valeur;
}

