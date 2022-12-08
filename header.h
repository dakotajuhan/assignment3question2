#include<iostream>
using namespace std;

bool is_A_Palindrome(string a)
{
  if(a.length() <= 1) 
  {
    return true;
  }
  
  if(a[0] == a[a.length()-1])
  {
    return is_A_Palindrome(a.substr(1,a.length()-2));
  }
  return false;
}