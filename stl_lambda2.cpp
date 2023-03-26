//
// Created by ghkdw on 2023-03-26.
//
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
struct Item {

    std::string name;

    double price;

    int quantity;

};


void sorting(vector<Item> &inventory);

Item isName(vector<Item> &inventory, const string &findApple);

void filterByName(vector<Item> &inventory, const string &findApple);

void findingMoreExpensive(vector<Item> &inventory, int price);

void removing_no_stock(vector<Item> &inventory);

void printing(vector<Item> &inventory);

int main() {

    std::vector<Item> inventory = {

            {"Apple", 0.99, 10},

            {"Banana", 0.59, 20},

            {"Cherry", 1.49, 5},

            {"Dates", 2.99, 2},

            {"Elderberry", 3.99, 0},

            {"Fig", 2.49, 15},

            {"Grape", 0.79, 25},

            {"Honeydew", 1.29, 8},

            {"Indian Gooseberry", 2.99, 0},

            {"Jackfruit", 4.99, 1}};

    // implement your code


    sorting(inventory);

    printing(inventory);

    filterByName(inventory, "Grape");

    //특정가격보다 비싼 품목 수

    findingMoreExpensive(inventory, 2);

    //재고 비우기
    removing_no_stock(inventory);

    //재고 출력
    printing(inventory);



    return 0;

}

void printing(vector<Item> &inventory) {
    for_each(inventory.begin(), inventory.end(), [](Item item){
        cout << item.name << " " << item.price << " " << item.quantity << "\n";
    });
}

void removing_no_stock(vector<Item> &inventory) {
    inventory.erase(remove_if(inventory.begin(), inventory.end(), [](Item item){
        return item.quantity == 0;}), inventory.end());
}

void findingMoreExpensive(vector<Item> &inventory, int price) {
    int count_more_expensive =  count_if(inventory.begin(), inventory.end(), [&price](Item item){return item.price >price;});

    cout << "Number of expensive items: " << count_more_expensive << "\n";
}

void filterByName(vector<Item> &inventory, const string &findApple) {
    Item foundedItem = *find_if(inventory.begin(), inventory.end(), [&findApple](Item item){return item.name == findApple; });

    cout << "Item found: " << foundedItem.name << " " << foundedItem.price << " " <<foundedItem.quantity << "\n";
}

void sorting(vector<Item> &inventory) {
    sort(inventory.begin(), inventory.end(), [](auto item1, auto item2){
        return item1.name >= item2.name;
    });

    sort(inventory.begin(), inventory.end(), [](auto item1, auto item2){
        return item1.price <= item2.price;
    });
}

