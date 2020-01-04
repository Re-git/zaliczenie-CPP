#include "EuropeanPrinter.h"

void printDegrees(float f)
{
    if(f>18.0) std::cout << "Jest cieplo" << std::endl;
    else if (f<18.0 && f>8.0) std::cout << "Jest chlodno" << std::endl;
    else std::cout << "Jest zimno" << std::endl;
}