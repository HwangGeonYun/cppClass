/*#include <iostream>
#include <memory>

using namespace std;

struct Item {
    int id;
    std::string name;
    int quantity;
    int price;
};

int main() {

    int item_count = 0;

    //Item *cart = nullptr;

    std::unique_ptr<Item> cart = nullptr;


    while (true) {

        std::cout << "1. Add item" << std::endl;

        std::cout << "2. Delete item" << std::endl;

        std::cout << "3. View item details" << std::endl;

        std::cout << "4. View total cost" << std::endl;

        std::cout << "5. Quit" << std::endl;

        std::cout << "Enter your choice: ";

        int command;
        cin >> command;

        if(command == 1){
            unique_ptr<Item> items(new Item[++item_count]);
           // cout << "주소" << items.get()<< "\n";
            if(cart!= nullptr) {
                for(int i = 0;i<item_count-1;i++)
                    items.get()[i] = cart.get()[i];
            }

            cart.reset(items.release()); //= move(items.release());

            std::string name; int quantity, price;

            cin >> name >> quantity >> price;

            //items->name = name;
            //items->quantity = quantity;
            //items->price = price;

            cart.get()[item_count-1] = {item_count-1, name, quantity, price};
            //
            // cout << cart.get()[item_count-1].id<<endl;
            cout << "Item " << cart.get()[item_count-1].id << " added successfully" << endl;
        }

        else if(command == 2){

        }
        else if(command == 3){
            int itemId;
            cin >> itemId;
            cin.ignore();

            cout  << "Name: " << cart.get()[itemId].name << "\n"
                  << "Quantity: " << cart.get()[itemId].quantity << "\n"
                  << "Price: " << cart.get()[itemId].price << "\n";
        }
        else if(command == 4){

        }
        else {
            break;
        }


        // implement your code

    }

    return 0;
}*/