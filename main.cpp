//Author:Alex Collantoni
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
        vector <string> list; //vector of a string list
        char input;
        int start;
        int numItem;
        numItem = 0;
        start = 1;
        string item;
        while(start =1)
        {
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                if(numItem > 0)
                {
                        cout<<"\n (D)elete last item";
                }
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;
                if(input == 'A'||input=='a')
                {
                        cout<<"What is the item?"<<endl;
                        cin>>item;
                        list.push_back(item);
                        numItem = numItem + 1;
                }
                if(numItem > 0 && (input == 'D' || input == 'd'))
                {
                        cout<<item<<" was deleted from the list.\n";
                        list.pop_back();
                        numItem--;
                }        
                if(input == 'Q'||input == 'q' )
                {
                        if(numItem ==0)
                        {
                                cout<<"No items to buy!"<<endl;
                        }
                        start = 0;
                        break;
                }
        }
        if(numItem > 0)
        {
                cout<<"==ITEMS TO BUY=="<<endl;
                for(int index = 0; index < numItem; index++)
                {
                        cout<<index+1 <<" "<<list[index]<<endl;
                }
        }
        return 0;
}
