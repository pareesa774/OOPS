#include<iostream>
using namespace std;
//assignment question 4

class employee{
    private:
    int emp_no;
    float emp_comp;

    public:
    void getdata(){
        cout<<"enter employee number:";
        cin>>emp_no;

        cout<<"enter employee compensation:";
        cin>>emp_comp;
    }
    void display(){
        cout<<"employee number:"<<emp_no<<endl;
        cout<<"employee compensation:"<<emp_comp<<endl;
    }
};
int main(){
    employee e1,e2,e3;

    cout<<"enter details of employee 1:"<<endl;
    e1.getdata();

    cout<<"enter details of employee 2:"<<endl;
    e2.getdata();

    cout<<"enter details of employee 3:"<<endl;
    e3.getdata();

    cout<<"employee details:"<<endl;

    e1.display();
    e2.display();
    e3.display();



}
