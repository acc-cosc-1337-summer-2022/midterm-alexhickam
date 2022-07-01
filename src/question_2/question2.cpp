#include "question2.h"
#include <vector>
#include <iostream>

using std::cout;
using std::vector;

bool test_config()
{
    return true;
}

vector<double> get_cookie_ingredients(int cookies_to_bake)
{ 
    const int default_count = 48;
    const double default_sugar = 1.5;
    const double default_butter = 1.0;
    const double default_flour = 2.75;
    
    double ratio = (double) cookies_to_bake / default_count;

    vector<double> ingredients;

    ingredients.push_back(default_sugar * ratio);
    ingredients.push_back(default_butter * ratio);
    ingredients.push_back(default_flour * ratio);

    return ingredients;
}