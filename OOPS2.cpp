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
/*int main(){
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
}*/

//basic function concept
 //question 1
 /*void printline(char ch,int n){
    for(int i=0;i<n;i++){
        cout<<ch;
    }
    cout<<'\n';
 }
 int main(){
    printline('*',20);
    cout<<"Pareesa\n";
    printline('*',20);
    return 0;
 }*/
//question 2
/*bool isPrime(int n){
if(n<2) return false;
if(n<4) return true;
if(n % 2 == 0) return false;
for(int i=3;i*i <=n; i+=2)
if(n%i==0) return false;
return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i))
        cout<<i<<" ";
        cout<<endl;
        return 0;
    }
}*/
//question 3

/*long long factorial(int n) {
    long long f = 1;
    for (int i = 2; i <= n; i++)
        f *= i;
    return f;
}

long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    cin >> n >> r;
    cout << nCr(n, r) << endl;
    return 0;
}*/
//call by value
//question 1
/*void changes(int x){
    int result = x*2;
    cout<<"the number is:"<<result<<endl;

    
}
int main(){
    int num,result;

    cout<<"enter number";
    cin>>num;
     
    result = num;
    changes(result);
    cout<<"original number:"<<num<<endl;
   

}*/
//question 2
/*int power(int base, int exp){
    int result = 1;

    while(exp>0){
        result = result * base;
        exp--;
    }

    return result;

}
int main(){
    int base,exp;

    cout<<"enter the number:";
    cin>>base>>exp;

    cout<<"before call:"<<exp<<endl;

    int ans = power(base,exp);

    cout<<"power:"<<ans<<endl;
    cout<<"after call:"<<exp<<endl;


}*/
//question 4
/*void swap(int a , int b){
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout<<"inside function: a"<<a<<"b:"<<b<<endl;

}
int main(){
    int x,y;

    cout<<"enter x and y:";
    cin>>x>>y;

    cout<<"before swapping:"<<x<<y;
    swap(x,y);
    cout<<"after swapping:"<<x<<y;

}*/
//basic function concept
 //question 1
 /*void printline(char ch,int n){
    for(int i=0;i<n;i++){
        cout<<ch;
    }
    cout<<'\n';
 }
 int main(){
    printline('*',20);
    cout<<"Pareesa\n";
    printline('*',20);
    return 0;
 }*/
//question 2
/*bool isPrime(int n){
if(n<2) return false;
if(n<4) return true;
if(n % 2 == 0) return false;
for(int i=3;i*i <=n; i+=2)
if(n%i==0) return false;
return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i))
        cout<<i<<" ";
        cout<<endl;
        return 0;
    }
}*/
//question 3

/*long long factorial(int n) {
    long long f = 1;
    for (int i = 2; i <= n; i++)
        f *= i;
    return f;
}

long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    cin >> n >> r;
    cout << nCr(n, r) << endl;
    return 0;
}*/
//call by value
//question 1
/*void changes(int x){
    int result = x*2;
    cout<<"the number is:"<<result<<endl;

    
}
int main(){
    int num,result;

    cout<<"enter number";
    cin>>num;
     
    result = num;
    changes(result);
    cout<<"original number:"<<num<<endl;
   

}*/
//question 2
/*int power(int base, int exp){
    int result = 1;

    while(exp>0){
        result = result * base;
        exp--;
    }

    return result;

}
int main(){
    int base,exp;

    cout<<"enter the number:";
    cin>>base>>exp;

    cout<<"before call:"<<exp<<endl;

    int ans = power(base,exp);

    cout<<"power:"<<ans<<endl;
    cout<<"after call:"<<exp<<endl;


}*/
//question 4
/*void swap(int a , int b){
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout<<"inside function: a"<<a<<"b:"<<b<<endl;

}
int main(){
    int x,y;

    cout<<"enter x and y:";
    cin>>x>>y;

    cout<<"before swapping:"<<x<<y;
    swap(x,y);
    cout<<"after swapping:"<<x<<y;

}*/
//basic function concept
 //question 1
 /*void printline(char ch,int n){
    for(int i=0;i<n;i++){
        cout<<ch;
    }
    cout<<'\n';
 }
 int main(){
    printline('*',20);
    cout<<"Pareesa\n";
    printline('*',20);
    return 0;
 }*/
//question 2
/*bool isPrime(int n){
if(n<2) return false;
if(n<4) return true;
if(n % 2 == 0) return false;
for(int i=3;i*i <=n; i+=2)
if(n%i==0) return false;
return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i))
        cout<<i<<" ";
        cout<<endl;
        return 0;
    }
}*/
//question 3

/*long long factorial(int n) {
    long long f = 1;
    for (int i = 2; i <= n; i++)
        f *= i;
    return f;
}

long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;
    cin >> n >> r;
    cout << nCr(n, r) << endl;
    return 0;
}*/
//call by value
//question 1
/*void changes(int x){
    int result = x*2;
    cout<<"the number is:"<<result<<endl;

    
}
int main(){
    int num,result;

    cout<<"enter number";
    cin>>num;
     
    result = num;
    changes(result);
    cout<<"original number:"<<num<<endl;
   

}*/
//question 2
/*int power(int base, int exp){
    int result = 1;

    while(exp>0){
        result = result * base;
        exp--;
    }

    return result;

}
int main(){
    int base,exp;

    cout<<"enter the number:";
    cin>>base>>exp;

    cout<<"before call:"<<exp<<endl;

    int ans = power(base,exp);

    cout<<"power:"<<ans<<endl;
    cout<<"after call:"<<exp<<endl;


}*/
//question 4
/*void swap(int a , int b){
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout<<"inside function: a"<<a<<"b:"<<b<<endl;

}
int main(){
    int x,y;

    cout<<"enter x and y:";
    cin>>x>>y;

    cout<<"before swapping:"<<x<<y;
    swap(x,y);
    cout<<"after swapping:"<<x<<y;

}*/
//question 3
/*int gcd(int a, int b){
    while(b!=0){
        int r = a%b;
        a=b;
        b=r;
    }
    return a;
   
}

inline int lcm(int a,int b){
    return a/gcd(a,b)*b;
}
int main(){
    int x,y, result;

    cout<<"enter the num:";
    cin>>x>>y;

    result = gcd(x,y);

    cout<<"GCD = "<<result<<endl;
    return 0;
    



}*/





    



    

    









    



    

    









    



    

    










    



    

    






    
    



    

    





