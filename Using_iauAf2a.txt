#include <iostream>
#include <sofa.h>

int main()
{
    double rad = 0;
    iauAf2a('+', 30, 0, 0, &rad);
    std::cout << rad;
}