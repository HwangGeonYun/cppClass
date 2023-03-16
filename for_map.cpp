//
// Created by ghkdw on 2023-03-15.
//
/*
#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main(){
    int peopleCount;
    map<string, string> phonebook;

    cin >> peopleCount;
    cin.ignore();

    for(int i = 0;i<peopleCount;i++) {
        std::string namePhoneNumber;
        std::getline(std::cin, namePhoneNumber);

        stringstream splitNamePhoneNumber;

        splitNamePhoneNumber.str(namePhoneNumber);

        std::string name, phoneNumber;

        splitNamePhoneNumber >> name >> phoneNumber;

        phonebook.insert(std::make_pair(name, phoneNumber));
    }
    string name;
    while(name != "QUIT") {
        name.clear();
        getline(cin, name);

        if (auto search = phonebook.find(name); search != phonebook.end())
            cout << phonebook[name] <<"\n";
        else if(name !="QUIT")
            cout << "Not found\n";
    }

    return 0;
}*/