#include<iostream>
using namespace std;
class fraction{
    int numerator;
    int denominator;

public:
    void getFraction(){
        cout << "enter numerator: ";
        cin >> numerator;
        cout << "enter denominator: ";
        cin >> denominator;
    }

    void display() const{
        cout << numerator << "/" << denominator;
    }

    fraction add(fraction f1, fraction f2){
        fraction temp;
        temp.numerator = (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator);
        temp.denominator = f1.denominator * f2.denominator;

        return temp;
    }
};

int main(){
    char choice;

    do{
        fraction f1, f2, f3;

        cout << "\n enter the first fraction:\n";
        f1.getFraction();

        cout << "\n enter the second fraction:\n";
        f2.getFraction();

        f3 = f3.add(f1, f2);

        cout << "\n sum of the two fractions is: ";
        f3.display();
        cout << endl;

        cout << "\n do you want to continue? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}