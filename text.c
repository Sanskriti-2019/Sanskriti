#include<iostream>
using namespace std
int main()
{
  int age;
  int name;
  cout<<"enter the age of a person:";
  cout<<"enter the name of a person:";
  cin>>name;
  cin>>age;
  
  if(age>=18)
  {
    cout<<"\n you are eligible for vote"
  }
  else
  {
    cout<<"\n you are not eligible for vote"
  }
}
