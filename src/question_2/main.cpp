
/*
Main Program Flow
The main program prompts the user for number of cookies, calls the get_cookie_ingredients function, display the vector of double to screen, and continues until user opts to quit.  Validate for correct input.

Cups of Sugar 1.5
Cups of Butter 1
Cups of Flour 2.75

int main()
{

    return 0;
}

*/
#include "question2.h"
#include "question2.cpp"
#include <iostream> 
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int main(){
    float cookies_to_bake;
    vector<double>ingredients;
    //taking input from user
    cout<<"Enter any alphabet or 0 to quit.."<<"\n";
    cout<<"Enter number of cookies:";
    cin >>cookies_to_bake ;
    while(cookies_to_bake){
        int p=(int)(cookies_to_bake);
        if((cookies_to_bake==p) && cookies_to_bake>=1){
            // calling the function get_cookie_ingredients
            ingredients=get_cookie_ingredients(cookies_to_bake);
            cout<<"The following recipe produces "<<cookies_to_bake<<" cookies:"<<"\n";
            // Printing the output 
            cout<<"Cups of Sugar "<<ingredients[0]<<"\n";
            cout<<"Cups of Butter "<<ingredients[1]<<"\n";
            cout<<"Cups of Flour "<<ingredients[2]<<"\n";
            cout<<"Enter any alphabet or 0 to quit.."<<"\n";
            cout<<"Enter number of cookies:";
            cin >>cookies_to_bake ;
        }
        else{
            cout<<"Please enter integer:"<<"\n";
            cin>>cookies_to_bake;
        }
    }
    return 0;
}