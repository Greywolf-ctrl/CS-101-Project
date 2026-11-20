#include<iostream>
#include<string>
#include<fstream>

using namespace std;
int messCalc()
{
    int choice;
    int lunch=0,breakfast=0,Dinner=0;
    double bill=0;
    cout<<"1)Breakfast\n"<<"2)Lunch+Dinner\n"<<"3)Both\n"<<"4)None\n";
    cout<<"Enter  your Expense Type: ";
    cin>>choice;
    switch (choice)
   {
     case 1:
    {
           bill=bill+breakfast;
    cout<<"Expense Added!\n";
    break;
    }
    case 2:
    {
        bill=lunch+Dinner;
         cout<<"Expense Added!\n";

    }
    case 3:
    {
        bill=breakfast+lunch+Dinner;
          cout<<"Expense Added!\n";
    }
    default :
    {
        cout<<"Enter a valid no!\n";
    }
   }
   return bill;
}
bool hasChar(int &expense)
{
    
}

int main()
{
    int group;
      int expense;
  
    cout<<"1)Food\n"<<"2)Stationary\n"<<"3)Other"<<"4)Mess Bill calculator\n";
      cout<<"Select your expense type: ";
    cin>>group;

    switch (group)
    {
        case 1:
        {
            int food;
            
            cout<<"1)Mess\n"<<"2)Other\n";
            cin>>food;
            switch(food)
            {

            case 1:
            {
                 cout<<"Enter the expense(Amount): ";
             cin>>expense;
             cout<<"Expense Added!\n";

              
              break;
            }
            case 2:
            {
                break;
                
            }
            default:
            {
                break;
            }
            break;
        }
        }
        case 2:
        {
             cout<<"Enter the expense(Amount): ";
             cin>>expense;
             cout<<"Expense Added!\n";

            break;
        }
        case 3:
        {

                string name;
                cout<<"Enter the expense(Amount): ";
                cin>>expense;
                cout<<"Enter the name of expense: ";
                getline(cin,name);
                cin.ignore();
                cout<<"Expense Added!\n";
                break;

        }
        case 4:
        {
             messCalc();

        }
        default:
        {
            cout<<"Enter a valid choice!\n";
        }
    }
  
 
}