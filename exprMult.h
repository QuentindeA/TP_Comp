#ifndef EXPRMULT_H
#define EXPRMULT_H

#include "symbole.h"
#include "expr.h"

class ExprMult : public Expr
{
   public:
      ExprMult(Expr *s_1, Expr *s_2) : Expr(), s1(s_1), s2(s_2) { }
      virtual ~ExprMult() {}
      virtual int eval();

    private:
        Expr *s1;
        Expr *s2;
};

#endif //EXPRMULT_H