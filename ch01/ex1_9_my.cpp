//
// Created by 80280289 on 2020/10/20.
//
#include <iostream>
int main (){
    int i  = 50;
    int result = 0;
    while (i<=100){
        result += ++i;
    }
    std::cout << "Sum of 50 to 100 inclusive is: " << result << std::endl;
    return 0;
}

