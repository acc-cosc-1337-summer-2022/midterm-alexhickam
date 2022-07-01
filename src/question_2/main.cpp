#include "question2.h"
#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::vector;

int main()
{
    auto loop = 'n';
    int cookie_count = -1;

    do 
    {
        cout << "\n"<<"How many cookies are you making?"<<"\n"<<": ";
        cin >> cookie_count;

            if (cookie_count >= 0)
            {
                vector<double> ingredients = get_cookie_ingredients(cookie_count);
                cout << "\nCups of Sugar " << ingredients[0] << "\n";
                cout << "Cups of Butter " << ingredients[1] << "\n";
                cout << "Cups of Flour " << ingredients[2] << "\n";
            } 

            else 
            {
                cout << "\n"<<"Invalid input. Number of cookies must be a positive value.";
            }

    cout <<"\n"<<"Enter the letter y or Y to restart."<<"\n"<<"Enter any other character to exit: ";

	cin>>loop;  
    }
    
    while (loop == 'Y' || loop == 'y');

    return 0;
}