#include "question4.h"

double Receipt:: calculate_tax()
{
    double total_tax = price*tax;
    return total_tax; 
}
double Receipt::calculate_gratuity()
{
    double total_tip = price*gratuity; 
    return total_tip;
}
void Receipt::display_receipt()
{
    cout<<"\n"<<"Subtotal: $"<<price<<"\n";
    cout<<"Tax Rate % "<<tax*100<<"\n";
    cout<<"Total Tax: $"<<calculate_tax()<<"\n";
    cout<<"Tip Percentage % "<<gratuity*100<<"\n";
    cout<<"Tip: $"<<calculate_gratuity()<<"\n";
    cout<<"Total: $ "<< price+gratuity+tax+calculate_tax()+calculate_gratuity()<<"\n";
}