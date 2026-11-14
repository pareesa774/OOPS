#include<iostream>
using namespace std;
class angle{
    private:
    int degree;
    float minutes;
    char direction;

    public:
    angle(int d = 0, float m = 0.0f, char dir = 'N'){
        degree = d;
        minutes = m;
        direction = dir;
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
class ship
{
private:
    static int count;
    int serialNumber;

    angle latitude;
    angle longitude;

public:
    ship(){
        count++;
        serialNumber = count;
    }

    void getPosition()
    {
        cout << "\nEnter latitude:\n";
        latitude.getangle();

        cout << "\nEnter longitude:\n";
        longitude.getangle();
    }

    void showPosition() const
    {
        cout << "\nShip number: " << serialNumber;

        cout << "\nLatitude: ";
        latitude.showangle();

        cout << "\nLongitude: ";
        longitude.showangle();

        cout << endl;
    }
};
int ship::count=0;

int main(){
    ship s1,s2,s3;

    cout<<"enter position of ship 1";
    s1.getPosition();

    cout<<"enter position of ship 2";
    s2.getPosition();

    cout<<"enter position of ship 3";
    s3.getPosition();

    cout<<"-----the details of ship-----";

    s1.showPosition();
    s2.showPosition();
    s2.showPosition();

}