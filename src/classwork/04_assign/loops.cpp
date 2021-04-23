//cpp
#include "loops.h"

int factorial_numbers(int num)
{
    int factorial=num; //create a variable for factorial to be saved and used
    while(num>1)
    {
        factorial=factorial*(num-1);//since factorial equals num i can multiply factorial by num--
        num--;//using decrement operator to decrease by 1
    }
    return factorial;
}