using namespace std;
#include <string.h>
#include <string>
#include <iostream>
using std::string;

// REverse a word in a String
std::string reverse_word(std::string word)
{
   int s=0;
   int n=word.length()-1;
   while(s<n)
   {
      swap(word[s++],word[n--]);
   }

   return word;
} 


std::string reverseLine(std::string line){
   std::string temp="";
   std::string R_line="";
   
   for(int i=0;i<=line.length();i++){

      if(line[i] == ' ' || line[i] == '\0'){
         std::string R_word = reverse_word(temp); 
         R_line = R_line+R_word;
         R_line.push_back(' '); 
         temp.clear();     
      }
      else{
         temp.push_back(line[i]);
      }
   }
   return R_line;
}


int main(){

   std::string Line = "My name is yash";
   std::string R_Line= reverseLine(Line);
   cout<<R_Line;

   
}