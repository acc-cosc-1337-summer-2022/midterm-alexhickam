#include "question3.h"
#include <iostream>
#include <limits>

using std::cout;
using std::cin;
using std::numeric_limits;
using std::streamsize;

int main()
{
    int widgets_sold;

    auto loop = 'Y';
    while(loop == 'Y' || loop == 'y')
    {
        cout<<"Enter total widgits sold"<<"\n";

        cin>>widgets_sold;
        while(1)
{
            if(cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),(char)'\n');
                cout<<"You have entered an invalid input."<<"\n"<<"Please enter a whole number or interger value for widgits sold."<< "\n";
                cin>>widgets_sold;
            }
                if(!cin.fail())
                break;
            }

        cin.get();

        auto widgets_sold_total = get_earned_points(widgets_sold);

        cout<<"Points Earned "<<widgets_sold_total<<"\n";
        cout<<"Enter Y to continue, or any other character to exit."<<"\n";

        cin>>loop;
    }

    return 0;
}

//why won't this run? it runs when I move it to question 4 compiler