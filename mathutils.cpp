#include "mathutils.h"

unsigned int Factorial( unsigned int number ) {
//    return number <= 1 ? 1 : Factorial(number-1)*number;
    if(number <= 1) {
        return 1;
    } else {
        return Factorial(number-1)*number;
    }
    
}
