#include<iostream>
using namespace std;
/*int main(){
    int add,subtract,multiply,divide;
    int a,b;
    int choice;

    do{
        cout<<"----- calculator----"<<endl;
        cout<<"1  : add"<<endl;
        cout<<"2  : subtract"<<endl;
        cout<<"3  : multiply"<<endl;
        cout<<"4  : divide"<<endl;
        cout<<"5  : exit"<<endl;

    cout<<"enter choice:";
    cin>>choice;

    if(choice==5){
        cout<<"goodbye!\n";
        break;
    }

    if(choice<1 || choice > 5){
        cout<<"invalid choice,try again \n";
        continue;
    }
    cout<<"enter two numbers:";
    cin>>a>>b;

    switch(choice){
        case 1:
        cout<<"result:"<<a+b;
        break;
        case 2:
        cout<<"result:"<<a-b;
        break;
        case 3:
        cout<<"result:"<<a*b;
        break;
        case 4:
        if(b==0){
            cout<<"error";
        }else{
            cout<<"result:"<<a/b;
        break;

        }

        default:
        cout<<"invalid operator";

    }
    }
}*/
//question 3
/*int main(){
    int secret=55;
    int guess,attempts=0;
    do{
        cout<<"guess:";
        cin>>guess;
        attempts++;

        if(guess<secret){
        cout<<"too low"<<endl;
       }else if(guess>secret){
        cout<<"too high"<<endl;
    }else{
        cout<<"correct! attempts:"<<attempts<<"\n";
    }
    }while(guess!=secret);

}*/
//question 4;
/*int main(){
    int number;
    int positive_sum=0;
    int negative_sum=0;


    do{
        cout<<"enter the numbers:"<<endl;
        cin>>number;


        if(number>0){
            positive_sum += number;
        }else if(number<0){
            negative_sum += number;

        }
    }while(number != 0);

     cout<<"positive sum"<<positive_sum<<endl;
      cout<<"negative sum:"<<negative_sum<<endl;

}*/
//question 5
int main(){
    int n;
    int i=0;
    int sum=0;
    int count=0;
    //-----------do while----------
    do{
    cout<<"enter the value of n:";
    cin>>n;
    int digit = n%10;
    sum = sum + digit;
    count ++;
    n=n/10;

    
    }while(n>0);

    cout<<"number of digits ="<<count<<endl;
    cout<<"the sum is ="<<sum<<endl;
    
    //------------while----------
    

    cout<<"enter the value of n:";
    cin>>n;

    while(n>0){
        int digit = n%10;
        sum = sum + digit;
        count ++;
        n=n/10;

    }

    cout<<"number of digits ="<<count<<endl;
    cout<<"the sum is ="<<sum<<endl;
}

    
    



    

    





