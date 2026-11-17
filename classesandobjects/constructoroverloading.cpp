#include <iostream>
using namespace std;

class box{
    double length;
    double height;
    double breadth;

    public:
    box(){
        length=1;
        height=1;
        breadth=1;
    }
    box(double l,double h, double b){

    }

    double volume(){
        return length*height*breadth;
    }

};
int main(){
    box b1;
    box b2(2, 3, 4);

    cout << "Volume = " << b1.volume() << endl;
    cout << "Volume = " << b2.volume() << endl;

    return 0;
}
