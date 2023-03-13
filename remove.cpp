//
// Created by ghkdw on 2023-03-10.
//
/*
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;
int main(){

    std::string line;
    std::getline(std::cin, line);

    stringstream stream;
    stream.str(line);

    int length;
    stream >> length;

    std::vector<int> data;

    for(int i = 0;i<length;i++){
        int num;
        stream >> num;
        data.push_back(num);
    }

    int commandA, commandB;

    stream >> commandA >> commandB;


    auto start = data.begin();

    data.erase(start+commandA);
    data.erase(std::remove(data.begin(), data.end(), commandB), data.end());

    cout << data.size() << endl;

    for(int num : data){
        cout << num << ' ';
    }

    return 0;
}

*/