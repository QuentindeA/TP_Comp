#ifndef SYMBOLE_H
#define SYMBOLE_H

#include <string>
using namespace std;

enum Identificateurs { OPENPAR, CLOSEPAR, PLUS, MULT, INT, FIN, ERREUR, EXPR };

const string Etiquettes[] = { "OPENPAR", "CLOSEPAR", "PLUS", "MULT", "INT", "FIN", "ERREUR", "EXPR" };

class Symbole {
   public:
      Symbole(int i, bool t) : ident(i), terminal(t) {  }
      virtual ~Symbole() { }
      operator int() const { return ident; }
      bool isTerminal() { return terminal; }
      
   protected:
      int ident;
      bool terminal;
};

#endif //SYMBOLE_H