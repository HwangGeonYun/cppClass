//
// Created by ghkdw on 2023-03-15.
//
/*
#include <iostream>
#include <vector>
int main(){

    int num;
    int max;
    int min;
    int numberLength = 0;
    bool firstNumber = true;
    std::vector<int> numbers;

    while(std::cin>>num){
        if(firstNumber ==true) {
            max = num;
            min = num;
            firstNumber =false;
        }

        if(max < num)
            max = num;
        else if(min > num)
            min = num;

        numberLength++;
    }

    std::cout << numberLength << " " << min << " " << max;

    return 0;
}*/