//
// Created by 80280289 on 2020/10/20.
//
#include "Sales_item.h"
#include <iostream>
int main(){
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    if (item1.isbn() == item2.isbn()){
        std::cout << item1 + item2 << std::endl;
        return 0;
    }else{
        std::cerr <<"Data must refer to same ISBN" << std::endl;
        return -1;
    }

}
