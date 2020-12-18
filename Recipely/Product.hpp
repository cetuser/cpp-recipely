//
//  Product.hpp
//  Recipely
//
//  Created by Sevban Kocabas on 18.12.2020.
//

#ifndef Product_hpp
#define Product_hpp

#include <stdio.h>
#include <string>

using namespace::std;

class Product {
private:
    string name;
    string name_of_unit;

public:
    Product(string n, string u);
    string get_name_of_product();
    void set_name_of_product(string n);
    string get_name_of_unit();
    void set_name_of_unit(string n);
    string descriptor();
};

#endif /* Product_hpp */
