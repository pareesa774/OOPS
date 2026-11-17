#include <iostream>
using namespace std;

class circle{
    double radius;

public:
  circle(double r){
    radius = r;
  }
  double area(){

    return 3.14*radius*radius;
  }
};
int main(){
    circle c1(5), c2(10);
    cout << "Area = " << c1.area() << endl;
    cout << "Area = " << c2.area() << endl;

    return 0;

}
