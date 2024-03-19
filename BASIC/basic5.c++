#include<iostream>
using namespace std ;


//enter char is in upper case or lower case or number 

int main () {
char a;
cout<<"enter the value"<<endl;
cin>>a;
if (a>='A' && a <= 'Z') 
{
    cout<<"upper case";
}
else if (a >= 'a' && a <= 'z')
{
    cout<<"lower case";
}
else if (a >= '0' && a <= '9')
{
    cout<<"number";
}
else{
    cout<<"enter valid";
}



}