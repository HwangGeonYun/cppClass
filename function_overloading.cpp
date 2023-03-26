//
// Created by ghkdw on 2023-03-26.
//
/*
#include<iostream>
#include<map>

using namespace std;

void addItem(std::map<std::string, int>& inventory, std::string item, int count){
    inventory[item] += count;
}

void addItem(std::map<std::string, int>& inventory, std::string item, float money){
    inventory[item]++;

    std::string MONEY = "MONEY";

    inventory[MONEY] += money;
}

int main(){
    std::map<std::string, int> inventory;
    addItem(inventory, "sword", 1);
    addItem(inventory, "shield", 2);
    addItem(inventory, "shield", 5.0F);
    addItem(inventory, "armor", 3.0F);

    for (const auto &[key, value] : inventory)
        std::cout << key << " " << value << std::endl;

    return 0;
}
*/