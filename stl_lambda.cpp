//
// Created by ghkdw on 2023-03-26.
//
/*
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;
int main(){

    int N, x;
    std::cin >> N >> x;
    std::vector<int> vec;

    std::generate_n(std::back_inserter(vec), N, [](){return *(std::istream_iterator<int>{std::cin});});


    //std::vector<int> vec2;
    std::copy_if(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "), [&x](int a){return a<x;});

    return 0;
}*/