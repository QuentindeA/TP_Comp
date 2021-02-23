#include <iostream>
#include "lexer.h"
#include "automate.h"


int main(void) {
   string chaine("(1+34)*123"); //4305

   Lexer l(chaine);
   Symbole * s;

   Automate automate;

   automate.Start();

   return 0;
}