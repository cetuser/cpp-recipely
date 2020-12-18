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


Recipe::Recipe(vector<Ingredient> ingredient_list, string n, double r)
    : ingredient_list(ingredient_list),
    name(n),
    replication_factor(r)
{}
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
    for (std::size_t i = 0; i != ingredient_list.size(); ++i)
    {
        std::string s = std::to_string(i+1);
        std::string line = s + "- " + ingredient_list[i].descriptor() + "\n";
        description.append(line);
    }
    return description;
    
}

