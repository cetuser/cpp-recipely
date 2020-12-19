//
//  CookBook.cpp
//  Recipely
//
//  Created by Sevban Kocabas on 19.12.2020.
//

#include "CookBook.hpp"
#include <stdio.h>
#include <iostream>

using namespace std;

CookBook::CookBook(vector<CookedProduct> cooked_product_list): cooked_product_list(cooked_product_list) {
    
}

string CookBook::descriptor() {
    string description = "";
    
    for (std::size_t i = 0; i != cooked_product_list.size(); ++i)
    {
        std::string line = cooked_product_list[i].descriptor() + "\n";
        description.append(line);
    }
    
    return description;
    
}
