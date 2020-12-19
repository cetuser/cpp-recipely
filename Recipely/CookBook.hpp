//
//  CookBook.hpp
//  Recipely
//
//  Created by Sevban Kocabas on 19.12.2020.
//

#ifndef CookBook_hpp
#define CookBook_hpp

#include <stdio.h>
#include "CookedProduct.hpp"
#include <vector>

class CookBook {
    
private:
    vector<CookedProduct> cooked_product_list;
public:
    CookBook(vector<CookedProduct> cooked_product_list);
    string descriptor();
};

#endif /* CookBook_hpp */
