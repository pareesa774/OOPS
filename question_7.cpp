#include<iostream>
using namespace std;
class angle{
    private:
    int degree;
    float minutes;
    char direction;

    public:
    angle(int d,float m,char dir){
        degree=d;
        minutes=m;
        direction=dir;

    }
    void getangle(){
        cout<<"enter degree";
        cin>>degree;
        cout<<"enter minutes";
        cin>>minutes;
        cout<<"enter direction";
        cin>>direction;
    }
    void showangle()const{
        cout<<degree<<"\xF8"<<minutes<<"'"<<direction<<endl;

    }
};
int main(){
    angle a1(149,34.8,'W');

    cout<<"initialized angle:";
    a1.showangle();
    
    char choice;

    do{
        angle a2(0,0,'N');

        a2.getangle();
        cout<<"entered angle:";
        a2.showangle();

        cout<<"\ndo you want to enter another angle?(y/n):";
        cin>>choice;
    }while(choice == 'y' || choice == 'Y');

}