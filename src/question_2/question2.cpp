/*
The following recipe produces 48 cookies:

1.5 cups of sugar
1 cup of butter
2.75 cups of flour

Write a function that accepts the number of cookies to bake and returns the cups of sugar, butter, and flour to use to bake the desired number of cookies.

In the cpp file, write code to calculate the correct cups for each ingredient and return the 3 values in a vector of double.


bool test_config()
{
    return true;
}

*/
#include "question2.h"
#include <vector> 
#include <iostream>
#include <cmath>

using std::cout;
using std::vector;

vector<double> get_cookie_ingredients(int cookies_to_bake)
{
    //creating a vector of double
    vector<double> actual;
    // calculating the values for cookies_to_bake
    double sugar=(1.5/48)*cookies_to_bake;
    double butter=(1.0/48)*cookies_to_bake;
    double flour=(2.75/48)*cookies_to_bake;
    // appending the values to the vector
    actual.push_back(sugar);
    actual.push_back(butter);
    actual.push_back(flour);
    // returning the vector
    return actual;
    }