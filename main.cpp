#include<iostream>
#include "header.h"
using namespace std;



int main()
{
  string a = "kayak"; //define string a
  string b = "extraterrestrial"; // define string b
  
  if(is_A_Palindrome(a)) 
  {
    cout<<a<<" is palindrome"<<endl; // if string a is a palindrome print here 
  }
  else
  {
    cout<<a<<" is not a palindrome"<<endl; // if not print it isnt 
  }
  
  if(is_A_Palindrome(b)) 
  {
    cout<<b<<" is palindrome"<<endl; // if string b is palindrome print here 
  }
  else
  {
    cout<<b<<" is not a palindrome"<<endl; // if not print it isnt 
  }
}