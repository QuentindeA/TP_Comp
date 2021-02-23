#include "exprPlus.h"

int ExprPlus::eval()
{
    return s1->eval() + s2->eval();
}
