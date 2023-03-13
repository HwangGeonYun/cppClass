#include <iostream>
#include <vector>
#include <sstream>
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

        std::cout << "Enter your choice: ";



        // implement your code

        int choice;
        int* lastItemPosition = &item_count;
        int id = 0;
        //(*id)= 0;

        cin >> choice;
        cin.ignore();

        if(choice == 1){

            if(cart == nullptr){
                (*lastItemPosition) = 0;
                cart = new Item[100];
            }
            //cout << "asdf" << lastItemPosition;

            string name; int quantity, price;

            std::string inputInfomation;
            std::getline(std::cin, inputInfomation);

            cout <<"Enter item name:";
            cout <<"Enter item quantity:";
            cout <<"Enter item price:\t" ;

            stringstream stream;
            stream.str(inputInfomation);

            stream >> name >> quantity >> price;

            Item addItem;

            addItem.id =id;
            addItem.name = name;
            addItem.quantity = quantity;
            addItem.price = price;

            cart[(*lastItemPosition)] = addItem;

            cout << "Item "<< *lastItemPosition << "added successfully"<< endl;

            (*lastItemPosition)++;

            //cout << "안바끼ㅜㅁ" <<lastItemPosition << endl;
            (id)++;

            /*for(int i = 0;i< *lastItemPosition;i++){
                cout << cart[i].name << endl;
            }*/
        }

        else if(choice == 2){

            int deleteId;
            cin >> deleteId;
            cin.ignore();

            int deleteItemNum = *lastItemPosition +1;
            for(int i = 0;i<=*lastItemPosition;i++){
                if(cart[i].id == deleteId)
                    deleteItemNum = i;
                if(deleteItemNum <= i)
                    cart[i] = cart[i+1];
            }

            (*lastItemPosition)--;

            cout << "Item deleted successfully" << endl;

            /*for(int i = 0;i< *lastItemPosition;i++){
                cout << cart[i].name;
            }*/
        }

        else if(choice == 3){
            int chooseItem;

            cin >> chooseItem;

            cout << "Name: " << cart[chooseItem].name << "\n"
                 << "Quantity: " << cart[chooseItem].quantity << "\n"
                 << "Price: " << cart[chooseItem].price << endl;

        }

        else if(choice == 4){
            int sum = 0;
            for(int i = 0;i<(*lastItemPosition);i++){
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

