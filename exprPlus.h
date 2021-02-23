#include "symbole.h"
#include "expr.h"

class ExprPlus : public Expr
{
   public:
      ExprPlus(Expr *s_1, Expr *s_2) : Expr(), s1(s_1), s2(s_2) { }
      virtual ~ExprPlus() {}
      virtual int eval();

    private:
        Expr *s1;
        Expr *s2;
};