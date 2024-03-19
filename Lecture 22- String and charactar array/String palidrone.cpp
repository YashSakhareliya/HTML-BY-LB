#include <bits/stdc++.h> 
#include<iostream>
#include<string>


char lowercase(char a)
{
    char b= a-'A'+'a';
    return b;
}
bool checkPalindrome(string s)
{
   string temp;

   for(int i=0;i<s.length();i++)
   {
       if((s[i]>= 'a' || s[i] <= 'z') || (s[i]>= 'A' || s[i] <= 'Z') || (s[i]>= 0 || s[i] <= 9))
       {
           temp.push_back(s[i]);
        
       }
   }

   for(int i=0;i<temp.length();i++)
   {
       if( (temp[i]>= 'A' || temp[i] <= 'Z') )
       {
          temp[i]=lowercase(temp[i]);
        
       }
   }

   int sa=0;
   int e=temp.length()-1;


   while(sa>e)
   {
       if(temp[sa]!=temp[e])
       {
           return false;
       }
       else{
          sa++;
          e--;
       }
   }
   return true;
}

int main()
{
    String s= "abcba";
}