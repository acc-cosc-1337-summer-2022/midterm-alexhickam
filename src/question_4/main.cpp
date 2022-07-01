#include "question4.h"
#include<iostream>

int main()
{
    auto loop = 'n';
    double meal_price ;
    double tip_rate;
    do
    {
        cout<<"Enter Subtotal: ";
        cin>>meal_price;

        cout<<"Enter tip as a whole number for percentage: % ";
        cin>>tip_rate;

        if (meal_price >= 0 && tip_rate >= 0)
        {
            Receipt receipt(meal_price,tip_rate/100);
            receipt.display_receipt();
        }
        else{
            cout<<"\n"<<"Entry can not be a negative value"<<"\n";
        }

    cout <<"\n"<<"Enter the letter y or Y to restart."<<"\n"<<"Enter any other character to exit: ";

	cin>>loop;  
    }
    while (loop == 'Y' || loop == 'y');

    return 0;
}