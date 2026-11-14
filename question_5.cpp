#include<iostream>
using namespace std;
class date{
    private:
    int month,day,year;

    public:
    void getdate(){
        cout<<"enter date(MM/DD/YY):";
        cin>>month;cin.ignore();
        cin>>day;cin.ignore();
        cin>>year;
    }
    void showdate()const{
        cout<<month<<"/"<<day<<"/"<<year<<endl;
        
    }

};
int main(){
    date d1;

    d1.getdate();

    cout<<"date is:";
    d1.showdate();
}