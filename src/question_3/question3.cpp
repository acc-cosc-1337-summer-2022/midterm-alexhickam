#include "question3.h"
#include <iostream>

bool test_config()
{
    return true;
}

int get_earned_points(int sold)
{
    if(sold > 0 && sold < 6)
    {
        return 1 * sold;
    }

    else if(sold > 5 && sold <11)
    {
        return 5 * sold;
    }

    else if(sold > 10 && sold <16)
    {
        return 10 * sold;
    }

    else if(sold > 15)
    {
        return 15 * sold;
    }
    
    return 0;
}