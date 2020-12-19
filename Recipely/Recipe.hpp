//
//  Recipe.hpp
//  Recipely
//
//  Created by Sevban Kocabas on 18.12.2020.
//

#ifndef Recipe_hpp
#define Recipe_hpp

#include <stdio.h>
#include "Ingredient.hpp"
#include <string>
#include <vector>

using namespace::std;

class Recipe {
private:
    vector<Ingredient> ingredient_list;
    string name;
    double replication_factor;

public:
    Recipe(vector<Ingredient> ingredient_list, string n, double r);
    string get_name_of_recipe();
    vector<Ingredient> get_ingredient_list();
    double get_replication_factor();
    void set_name(string n);
    void set_ingredient_list(vector<Ingredient> ingredient_list);
    void set_replication_factor(double replicationFactor);
    string descriptor();
};

#endif /* Recipe_hpp */
