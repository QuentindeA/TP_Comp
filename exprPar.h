#ifndef EXPRPAR_H
#define EXPRPAR_H

#include "expr.h"

class ExprPar : public Expr
{
   public:
      ExprPar(Expr *expr) : Expr(), e(expr) { }
      virtual ~ExprPar() {}
      virtual int eval();

    private:
        Expr *e;
};

#endif //EXPRPAR_H