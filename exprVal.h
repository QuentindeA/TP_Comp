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