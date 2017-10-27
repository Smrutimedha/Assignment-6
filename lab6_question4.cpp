#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
  char name[50];
  char *nameptr;
  cout<<"Enter your name: \n";
  cin.getline(name,50);
  for(int i=0;name[i]!='\0';i++)
  {
   cout<<name[i];
  } 
  nameptr=name;
  cout<<nameptr;
  cout<<endl;
  return 0;
}
