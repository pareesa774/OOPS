#include<iostream>
using namespace std;
/*int main(){
    int n;
    int fact=1;
    cout<<"enter the number";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"the factorial is"<<fact;
    return 0;
}*/
//question 4
/*int main(){
    int arr[100];
    int n,i;
    int largest=arr[0];
    cout<<"enter the number of elements:";
    cin>>n;
    cout<<"enter the elements";
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    if(arr[i]>largest){
    largest=arr[i];
    }
}
cout<<"the largest element in an array is"<<largest;

}*/
//question 10
/*int main(){
    int a,b,c,d,e;
    float percentage,average,total;
    cout<<"enter the marks of 5 subjects:";
    cin>>a>>b>>c>>d>>e;
    total=a+b+c+d+e;
    cout<<"total marks are:\t"<<total;
    average=total/5;
    percentage= (total/5)*100;
    cout<<"percentage is:\t"<<percentage;
    if(percentage>90){
        cout<<"grade A";
    }else if(percentage>80 && percentage<90){
        cout<<"grade B";
    }else if(percentage>70 && percentage<80){
        cout<<"grade C";
    }else if(percentage>60 && percentage<70){
        cout<<"grade D";
    }else if(percentage>50 && percentage<60){
        cout<<"grade E";
    }
    else cout<<"fail";
}*/
//question 8
/*int main(){
    int n,i;
    cout<<"enter the number";
    cin>>n;
        for(int i=2;i*i<n;i++){
        if(n%i==0){
            cout<<"not a prime number:";
        }
    }
    cout<<"is prime number";
}*/
//question 7
/*int main(){
    int n;
    int sum=0;
    cout<<"enter the digit";
    cin>>n;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    cout<<"sum of digits are:"<<sum;

}*/
//question 6
/*int main(){
    int n,reverse=0;
    cout<<"enter the number:";
    cin>>n;
    while(n>0){
        reverse=reverse*10+n%10;
        n=n/10;
    }
    cout<<"the reverse number is:"<<reverse;
}*/
//question 5
/*int main(){
    int n,a=0,b=1,c;
    cout<<"enter the number of terms";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a<<b<<"";
        c=a+b;
        a=b;
        b=c;
    }
}*/
//question 1
/*int main(){
    float a,b;
    char op;

    cout<<"enter two numbers";
    cin>>a>>b;
    cout<<"enter operator(+,-,*,/)";
    cin>>op;

    switch(op){
        case'+':
        cout<<"result:"<<a+b;
        break;
        case'-':
        cout<<"result:"<<a-b;
        break;
        case'*':
        cout<<"result:"<<a*b;
        break;
        case'/':
        cout<<"result:"<<a/b;
        break;

        default:
        cout<<"invalid operator";

    }
}*/
//question 9
//#include<string>
/*int main(){
    string str,rev="";
    cout<<"enter a string";
    cin>>str;
    for(int i=str.length()-1;i>=0;i++){
        rev=rev+str[i];
    }
    if(str==rev)
    cout<<"palindrome";
    else
    cout<<"not a palindrome";
}*/
/*int main(){
    string str;
    int vowels=0,consonants=0;

    cout<<"enter a string";
    cin>>str;

    for(int i=0;i<str.length();i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
    {
    vowels++;
}
else{
    consonants++;
}
}
cout<<"vowels"<<vowels<<endl;
cout<<
return 0;

}*/
  //ASSIGNMENT SECOND
  //question 9  
    /*int main(){
    int n,reverse=0;
    cout<<"enter the number:";
    cin>>n;
    int original=n;
    while(n>0){
        reverse=reverse*10+n%10;
        n=n/10;
    }
    if(reverse==original)
    cout<<"number is palindrome";
    else
    cout<<"number is not a palindrome";
}*/
//question 2
/*int main(){
    int a,b,c,d,e;
    float percentage,total;
    int fail=0;

    cout<<"enter the marks of 5 subjects";
    cin>>a>>b>>c>>d>>e;
    total=a+b+c+d+e;
    percentage=(total/500)*100;
    if(percentage>=90)
    cout<<"grade O";
    else if(percentage<90 && percentage>=80)
    cout<<"grade A";
    else if(percentage<80 && percentage>=70)
    cout<<"grade B";
    else if(percentage<70 && percentage>=60)
    cout<<"grade C";
    else if(percentage<60 && percentage>=45)
    cout<<"grade D";
    else cout<<"grade F";
    if(a<45) fail++;
    if(b<45) fail++;
    if(c<45) fail++;
    if(d<45) fail++;
    if(e<45) fail++;
    if(fail>1)
    cout<<"repeat year";


    
}*/
/*int main(){
    int year,count=0;

    cout<<"enter a year:";
    cin>>year;

     if(((year%400==0)||(year %4==0)) && (year%100!=0))
        cout<<"leap year";
        else 
        cout<<"not a leap year";
        cout<<"next 5 leap years are:";
        while(count<5){
            year++;
            if(((year %4==0 )&& (year%100!=0)) || (year%400==0)){
            cout<<year<<"\t";
            count++;
        }
    }
}*/
/*int main(){
    float a,b;
    char op;

    cout<<"enter two numbers";
    cin>>a>>b;
    cout<<"enter operator(+,-,*,/)";
    cin>>op;

    if(op=='+')
    cout<<"result="<<a+b;
    if(op=='-')
    cout<<"result="<<a-b;
    if(op=='/' && b==0)
    cout<<"error";
    if(op=='/' && b!=0)
    cout<<"result="<<a/b;
    if(op=='*')
    cout<<"result="<<a*b;

    return 0;
}*/

/*int main(){
    float gallons;
    float cubic_feet;

    cout<<"enter the number of gallons";
    cin>>gallons;

    cubic_feet=gallons/7.481;

    cout<<"the equivalent in cubic feet is:"<<cubic_feet;
}*/

/*int main(){
    int year,value;

    for(year=1990;year<=1993;year++){
        if(year==1990)
          value=135;
          else if(year==1991)
          value=7290;
          else if(year==1992)
          value=11300;
          else
          value=16200;

          cout<<year<<"\t"<<value<<endl;
    }
}*/

/*int main(){
    cout<<"10\t"<<endl;
    cout<<"20\t"<<endl;
    cout<<"19\t"<<endl;
}*/
   /*#include<ctype.h>
    int main(){
        char ch;

        cout<<"enter a character:";
        cin>>ch;

        cout<<islower(ch);
        
    }*/
   /*int main(){
    float n;
    float British_pound,French_francs,German_deutschemark,Japanese_yen;
    cout<<"enter the amount:";
    cin>>n;

    British_pound=n/1.487;
    French_francs=n/0.172;
    German_deutschemark=n/0.584;
    Japanese_yen=n/0.00955;

    cout<<"the conversion to british pound is:"<<British_pound<<endl;
    cout<<"the conversion to french franc is:"<<French_francs<<endl;
    cout<<"the conversion german deutschemark is:"<<German_deutschemark<<endl;
    cout<<"the conversion japanese yen is:"<<Japanese_yen<<endl;

    
}*/
/*int main(){
    float celsius,fahrenheit;

    cout<<"enter the termperature:";
    cin>>celsius;

    fahrenheit=(celsius*9/5)+32;

    cout<<"temperature in fahrenheit is:"<<fahrenheit;

}*/
/*int main(){
    int a,b,c,d;
    char dummychar;
    int sum;
    cout<<"enter the first fraction:";
    cin>>a>>dummychar>>b;

    cout<<"enter the second fraction:";
    cin>>c>>dummychar>>d;

   int numerator=a*d + b*c;
   int denominator=b*d;

    cout<<"the sum is:"<<numerator<<"/"<<denominator;


}*/
/*int main(){
    float pounds,shilling,pence;
    float decimal_pounds;

    cout<<"enter pounds:";
    cin>>pounds;

    cout<<"enter shilling:";
    cin>>shilling;

    cout<<"enter pence:";
    cin>>pence;

    decimal_pounds= pounds+shilling/20+pence/240;

    cout<<"decimal_pound:"<<decimal_pounds;
}*/
#include<iomanip>
int main(){
    cout<<setiosflags(ios::left);
    cout<<setw(12)<<"last name"<<setw(12)<<"first name"<<setw(20)<<"street address"<<setw(12)<<"town"<<setw(6)<<"state"<<endl;
    cout<<"-------------------------------------------------------------------------------------------------------------"<<endl;

    cout<<setw(12)<<"Jones"<<setw(12)<<"Bernard"<<setw(20)<<"109 Pine Lane"<<setw(12)<<"Littletown"<<setw(6)<<"MI"<<endl;
    cout<<setw(12)<<"O'Brian"<<setw(12)<<"Coleen"<<setw(20)<<"42 E. 99th Avenue"<<setw(12)<<"Bigcity"<<setw(6)<<"NY"<<endl;
    cout<<setw(12)<<"Wong"<<setw(12)<<"Harry"<<setw(20)<<"121-A ALabama"<<setw(12)<<"Lakevilla"<<setw(6)<<"IL"<<endl;


    
    
}