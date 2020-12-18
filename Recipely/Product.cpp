//
//  Product.cpp
//  Recipely
//
//  Created by Sevban Kocabas on 18.12.2020.
//

#include "Product.hpp"
#include <stdio.h>
#include <iostream>
using namespace std;

Product::Product(string n, string u) {
    name = n;
    name_of_unit = u;
}
string Product::get_name_of_product() {
    return name;
}
string Product::get_name_of_unit() {
    return name_of_unit;
}
void Product::set_name_of_product(string n) {
    name = n;
}
void Product::set_name_of_unit(string n) {
    name_of_unit = n;
}
string Product::descriptor() {
    return name;
}
