//
//  main.cpp
//  Recipely
//
//  Created by Sevban Kocabas on 18.12.2020.
//

#include <iostream>
#include "Recipe.hpp"
#include "Ingredient.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    Ingredient a = Ingredient("sugar", "grams", 500.0);
    Ingredient b = Ingredient("chocolate", "grams", 500.0);
    Ingredient c = Ingredient("milk", "liters", 1.0);
    
    Recipe r = Recipe({a,b,c}, "chocolate frosting", 1.0);
    
    std::cout <<(r.descriptor() + "\n");
    return 0;
}
