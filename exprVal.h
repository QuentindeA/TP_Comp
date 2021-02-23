#ifndef EXPRVAL_H
#define EXPRVAL_H

#include "expr.h"
#include "entier.h"

class ExprVal : public Expr
{
   public:
      ExprVal(Entier *entier) : Expr(), e(entier) { }
      virtual ~ExprVal() {}
      virtual int eval();

    private:
        Entier *e;
};

#endif //EXPRVAL_H