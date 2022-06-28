//
/*
Write a Receipt class that outputs a meal receipt. The class constructor expects a double meal_price and tip_rate, it has private variables tax (const variable), gratuity, and price, and public functions calculate_tax(returns double), calculate_gratuity(returns double), and display_receipt(double).  The tax rate is 8%.

Implementation
In header file, write the class interface and class function protypes.
In cpp file, write the class function code.




bool test_config()
{
    return true;
}

*/
#include "question4.h"
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