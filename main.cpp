#include <iostream>
#include "lexer.h"
#include "automate.h"


int main(void) {
   string chaine("(1+34)*123"); //=4305

   Lexer l(chaine);

   Automate automate(&l);

   automate.Start();

   std::cout << "Le résultat est : " << automate.Eval();

   return 0;
}