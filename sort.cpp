//
// Created by ghkdw on 2023-03-10.
//
/*
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main(){

    int length;
    std::cin >> length;

    cin.ignore();
    std::string line;

    std::getline(std::cin,line);

    stringstream stream;
    stream.str(line);

    std::vector<int> data;

    for(int i = 0;i<length;i++){
        int num;
        stream >> num;
        data.push_back(num);
    }

    std::sort(begin(data), end(data));

    for(int i = 0;i<length;i++){
        cout << data[i] << ' ';
    }
}*/