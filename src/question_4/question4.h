#include<iostream>
using std::cin;
using std::cout;
 

class Receipt
{
public:

    Receipt(){}

    Receipt(double meal_price, double tip_rate ): price{meal_price}, gratuity{tip_rate} {};

    double calculate_tax();

    double calculate_gratuity();

    void display_receipt();

private:

    const double tax{.08}; 

    double price{0};
    
    double gratuity{0}; 
};