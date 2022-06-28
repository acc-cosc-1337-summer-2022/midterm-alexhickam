#include <iostream>
#include "question1.h"

using std::cin;
using std::cout;

int main (){
auto loop = 'Y';
while(loop == 'Y' || loop == 'y')
{
    Rectangle user_input;
        int length;
        int width;

        cout<<"Enter the length for the rectangle"<<"\n";
        cin>>length;

        cout<<"Enter the width for the rectangle"<<"\n";
        cin>>width;

    user_input.get_length(length);
    user_input.get_width (width);

    cin.get();

    int area = user_input.get_area(length, width);

        cout<<"Area of the rectangle is: "<<area<<"\n";
        cout<<"Enter Y to continue, or any other character to exit.";
        cin>>loop;
}
    return 0;
}