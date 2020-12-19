//
//  CookedProduct.hpp
//  Recipely
//
//  Created by Sevban Kocabas on 19.12.2020.
//

#ifndef CookedProduct_hpp
#define CookedProduct_hpp

#include "Recipe.hpp"
#include <stdio.h>

class CookedProduct: public Recipe {
private:
    
public:
    CookedProduct(vector<Ingredient> ingredient_list, string n, double r);
    string descriptor();
};

#endif /* CookedProduct_hpp */
