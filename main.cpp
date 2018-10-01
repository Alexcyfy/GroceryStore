//Author:Alex Collantoni
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  int start;
  start = 1;
  string item;
  while(start =1)
 {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  if(input == 'A'||input=='a')
  {
  cout<<"What is the item?"<<endl;
  cin>>item;
  if(numItems >= 5)
  {
  cout<<"You'll need a bigger list!"<<endl;
  }
  else
  {
  list[numItems] = item;
  numItems = numItems + 1;
  }
 }
  if(input == 'Q'||input == 'q' )
  {
  start = 0;
  break;
  }
 }
 cout<<"==ITEMS TO BUY=="<<endl;
 for(int index = 0; index < 5; index++)
 {
 cout<<index+1 <<" "<<list[index]<<endl;
 }
  return 0;
}
