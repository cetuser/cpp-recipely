//
//  CookedProduct.cpp
//  Recipely
//
//  Created by Sevban Kocabas on 19.12.2020.
//

#include "CookedProduct.hpp"
#include <iostream>
#include <sstream>

using namespace std;

CookedProduct::CookedProduct(vector<Ingredient> ingredient_list, string n, double r): Recipe(ingredient_list, n, r)
{
    
}
string CookedProduct::descriptor() {
    return "name";
}
