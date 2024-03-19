using namespace std;
#include<iostream>
#include<string.h>
#include<string>

int main()
{
   int n;
   string s1="";
   string s2="";
   string s3="";
   getline(cin,s1);
   getline(cin,s2);
   getline(cin,s3);

   string s4="";
    int i=0;
   while(true)
   {
       char ele1=s1[i];
       char ele2=s2[i];
       char ele3=s3[i];

       if(ele1==ele2)
       {
        if(ele2==ele3)
        {
            
            cout<<ele3;
            i++;
        }
       }
       else{
        break;
       }
   
   }


}