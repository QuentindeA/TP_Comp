#include "exprMult.h"

int ExprMult::eval()
{
    return s1->eval() * s2->eval();
}
