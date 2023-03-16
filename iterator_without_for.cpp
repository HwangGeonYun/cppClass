//
// Created by ghkdw on 2023-03-15.
//

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main(){
    std::vector<int> vec;
    std::istream_iterator<int> cin_iter(std::cin);
    std::istream_iterator<int> eos;

    std::copy(cin_iter, eos, std::back_inserter(vec));

    std::sort(std::begin(vec), std::end(vec));

    std::ostream_iterator<int> cout_iter(std::cout, " ");

    std::copy(vec.begin(), vec.end(), cout_iter);
    return 0;
}