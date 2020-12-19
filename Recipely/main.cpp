//
//  main.cpp
//  Recipely
//
//  Created by Sevban Kocabas on 18.12.2020.
//

#include <iostream>
#include "Recipe.hpp"
#include "Ingredient.hpp"
#include "CookBook.hpp"
#include "CookedProduct.hpp"

int main(int argc, const char * argv[]) {
    Ingredient ingredient_1 = Ingredient("dark chocolate", "grams", 200.0);
    Ingredient ingredient_2 = Ingredient("butter", "grams", 25.0);
    Ingredient ingredient_3 = Ingredient("icing sugar", "liters", 100.0);
    
    Ingredient ingredient_4 = Ingredient("almond extract", "grams", 2.0);
    Ingredient ingredient_5 = Ingredient("chocolate frosting", "portions", 1);
    
    CookedProduct cooked_product_1 = CookedProduct({ingredient_1,ingredient_2,ingredient_3}, "chocolate frosting", 1);
    CookedProduct cooked_product_2 = CookedProduct({ingredient_4,ingredient_5}, "almond flavored chocolate frosting", 2.5);
    
    CookBook my_cook_book = CookBook({cooked_product_1, cooked_product_2});
    
    std::cout <<(my_cook_book.descriptor() + "\n");
    return 0;
}
