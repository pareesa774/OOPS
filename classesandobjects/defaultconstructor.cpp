#include <iostream>
using namespace std;

class BOOK{
    string title;
    double price;

    public:
    BOOK(){
        title = "UNKNOWN";
        price = 0;
    }
    void display(){
        cout<<"details of book"<<endl;
        cout<<"the title of the book is:"<<endl;
        cout<<"the price of the book is"<<endl;

}
};
int main(){
    BOOK b1;

    b1.display();
}
