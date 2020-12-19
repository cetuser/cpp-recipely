//
//  Ingredient.hpp
//  Recipely
//
//  Created by Sevban Kocabas on 18.12.2020.
//

#ifndef Ingredient_hpp
#define Ingredient_hpp

#include <stdio.h>
#include "Product.hpp"
#include <string>

using namespace std;

class Ingredient: public Product {
private:
    double quantity;
public:
    Ingredient(string n, string u, double q);
    double get_quantity();
    void set_quantity(double q);
    string descriptor(double replication_factor = 1.0);
};

#endif /* Ingredient_hpp */
