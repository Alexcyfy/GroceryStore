//Author:Alex Collantoni
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
 vector <string> list; //vector of a string list
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
  list.push_back(item);
  numItems = numItems + 1;
  }
 
  if(input == 'Q'||input == 'q' )
  {
  if(numItems ==0)
  {
  cout<<"No items to buy!"<<endl;
  }
  start = 0;
  break;
  }
 }
if(numItems > 0)
{
 cout<<"==ITEMS TO BUY=="<<endl;
 for(int index = 0; index < numItems; index++)
 {
 cout<<index+1 <<" "<<list[index]<<endl;
 }
}
  return 0;
}
