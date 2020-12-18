//
//  Ingredient.cpp
//  Recipely
//
//  Created by Sevban Kocabas on 18.12.2020.
//

#include "Ingredient.hpp"
#include <iostream>
#include <sstream>

using namespace std;

Ingredient::Ingredient(string n, string u, double q): Product(n, u)
{
    quantity = q;
}
string Ingredient::descriptor() {
    string unit = get_name_of_unit();
    string product_name = get_name_of_product();
    std::ostringstream strs;
    strs << quantity;
    std::string str = strs.str();
    return str + " " + unit + " " + "of " + product_name;
}
double Ingredient::get_quantity() {
    return quantity;
}
void Ingredient::set_quantity(double q) {
    quantity = q;
}
