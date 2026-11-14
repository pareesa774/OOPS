#include<iostream>
using namespace std;
class serial{
    private:
    static int count;
    int serialNumber;

    public:
    serial(){
        count++;
        serialNumber=count;
    }
    void display(){
        cout<<"my serial number is"<<serialNumber<<endl;
    }

};
int serial::count=0;

int main(){
    serial s1,s2,s3;

    s1.display();
    s2.display();
    s3.display();
}