#include <iostream>
#include <string>
using namespace std;

class shoppingBill{
    string name;
    double price;
    int quantity;
public:
void input(){
    cout<<"enter the name of the item:";
    cin>>name;
    cout<<"enter the price of the item:";
    cin>>price;
    cout<<"enter the quantity of the item:";
    cin>>quantity;
}

double totalbill(double p,int q){
    return p*q;
}

void display(){
        cout << "\nItem: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total bill = " << totalbill(price, quantity)<< endl;

}
};

int main(){
    
    shoppingBill I;

    I.input();
    I.display();

    return 0;
}
