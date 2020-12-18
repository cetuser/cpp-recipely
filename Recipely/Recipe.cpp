//
//  Recipe.cpp
//  Recipely
//
//  Created by Sevban Kocabas on 18.12.2020.
//

#include "Recipe.hpp"
#include <stdio.h>
#include <iostream>
#include <sstream>
using namespace std;

Recipe::Recipe(vector<Ingredient> ingredient_list, string n, double r) {
    name = n;
    ingredient_list = ingredient_list;
    replication_factor = r;
}
string Recipe::get_name_of_recipe() {
    return name;
}
vector<Ingredient> Recipe::get_ingredientList() {
    return ingredient_list;
}
double Recipe::get_replication_factor() {
    return replication_factor;
}
void Recipe::set_name(string n) {
    name = n;
}
void Recipe::set_ingredient_list(vector<Ingredient> ingredient_list) {
    ingredient_list = ingredient_list;
}
void Recipe::set_replication_factor(double replicationFactor) {
    replicationFactor = replicationFactor;
}
string Recipe::descriptor() {
    string description = "";
    std::ostringstream strs;
    strs << replication_factor;
    std::string str = strs.str();
    string first_line = "Recipe -" + get_name_of_recipe() + "- x " + str + ":\n";
    description.append(first_line);
    std::vector<Ingredient> v;
    Ingredient* array = &v[0];
    for( unsigned int a = 0; a < sizeof(array); a = a + 1 )
    {
        std::string s = std::to_string(a);
        string line = s + "-" + array[a].descriptor() + "\n";
        description.append(line);
    }
    return description;
    
}
