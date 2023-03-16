/*#include <iostream>

using namespace std;

struct Item {
    int id;
    std::string name;
    int quantity;
    int price;
};

int main() {

    int item_count = 0;

    Item *cart = nullptr;



    while (true) {

        std::cout << "1. Add item" << std::endl;

        std::cout << "2. Delete item" << std::endl;

        std::cout << "3. View item details" << std::endl;

        std::cout << "4. View total cost" << std::endl;

        std::cout << "5. Quit" << std::endl;

        std::cout << "\tEnter your choice: ";



        // implement your code

        int choice;


        cin >> choice;
        cin.ignore();

        if(choice == 1){

            Item* itemList = new Item[++item_count];



            if(cart!=nullptr){
                memcpy(itemList, cart, sizeof(Item)*(item_count-1));
            }
            cart = itemList;
            //delete[](itemList);


            string name; int quantity, price;

            //std::string inputInfomation;
            //std::getline(std::cin, inputInfomation);


            cout <<"Enter item name:";
            cin >> name;
            cout <<"Enter item quantity:";
            cin >> quantity;
            cout <<"Enter item price:\t" ;
            cin >> price;

            //stringstream stream;
            //stream.str(inputInfomation);

            //stream >> name >> quantity >> price;

            cart[item_count-1] = {item_count-1,name, quantity, price};

            cout << "Item "<< cart[item_count-1].id << " added successfully"<< endl;

        }

        else if(choice == 2){

            int deleteId;
            cin >> deleteId;
            cin.ignore();

            if(cart==nullptr){
                continue;
            }

            Item* itemList = new Item[item_count-1];

            int l = 0;
            for(int i = 0;i<item_count;i++) {
                if(deleteId == cart[i].id)
                    l = 1;
                if(deleteId != cart[i].id)
                    itemList[i-l] = cart[i];
            }

            item_count--;

            for(int i = 0;i<item_count;i++){
                if(itemList[i].id != i){
                    itemList[i].id--;
                }
            }

            //memcpy(itemList, cart, item_count-1);
            //delete[](cart);

            cart = itemList;

            //cout << item_count;
            //delete[](itemList);





            cout << "Item deleted successfully" << endl;


        }

        else if(choice == 3){
            int chooseItem;

            cout << "Enter your choice: ";
            cin >> chooseItem;

            cout <<"Enter the Item number: ";

            if(item_count<=chooseItem)
                cout << "\tItem not found" <<endl;

            else {
                cout << "Item " << chooseItem << endl;

                cout << "Name: " << (cart + chooseItem)->name << "\n"
                     << "Quantity: " << (cart + chooseItem)->quantity << "\n"
                     << "Price: " << (cart + chooseItem)->price << endl;
            }
        }

        else if(choice == 4){
            int sum = 0;
            for(int i = 0;i<item_count;i++){
                sum += cart[i].price*cart[i].quantity;
            }
            cout << "Total cost: " << sum << endl;
        }

        else {
            if(cart != nullptr) {
                delete[] cart;
            }

            break;
        }
    }

    return 0;
}
*/
