#include<iostream>
#include<string>
#include<fstream>
using namespace std;
bool hasSpaces(const string text)
{
    text.find(' ');
    if (text.find(' ')!=string::npos)
    {
        return true;
    }
    else
    return false;
}
bool userExists(const string &username)
{
    string u,p;

    ifstream file("User.txt");
    
    while (file>>u>>p)
    {
        if (u==username)
        {
            return true;
        }

    }
    return false;
}
bool loginExists(const string &username,const  string &password)
{
   string u,p;
   ifstream file("User.txt");
   while (file>>u>>p)
   {
    if (u==username && p==password)
    {
        return true;
    }

   }
   return false;
}
void registerUser(string &username,string &password)
{
    cout<<"Enter Username: ";
     getline(cin>>ws,username);
     if (hasSpaces(username)==false)
     {
     
   if (userExists(username)==true)
         {
            cout<<"Username Already Taken!\n";
         }
           else   
         {
              cout<<"Enter Password: ";
          getline(cin>>ws,password);
           if (hasSpaces(password)==false)
            {
           ofstream file("User.txt",ios::app);
           if (!file.is_open())
           {
            cout<<"File cannot be opened!\n";
            return;
           }
          
           file<<username<<" "<<password<<endl;
           file.close();
           cout<<"Registration successful!\n";
        }
        else 
        {
            cout<<"Password cannot have spaces!\n";
        }
        }
    }
    else 
    {
        cout<<"Username cannot have spaces!\n";
    }
}
void loginUser(string &username,string &password)
{
 cout<<"Enter Username: ";
           getline(cin>>ws,username);
           if (userExists(username)==true)
           {
          cout<<"Enter Password: ";
           getline(cin>>ws,password);
           if (loginExists(username,password)==true)
           {
            cout<<"==== WELCOME "<<username<<" ===="<<endl;
           }
           else
           {
            cout<<"Username or password doesn't Match!\n";
           }
           }
           else 
           {
            cout<<"Username doesn't Exist!\n";
           }          
          
}
int main()
{
    int choice=1;
    string username,password;
    do
    {
        cout<<"=======MENU======="<<endl;
        cout<<"1)Login\n"<<"2)Register\n"<<"3)Exit\n";
        cout<<"Choose: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
        {
            loginUser(username,password);
            break;
        }
        case 2:
        {
           
           registerUser(username,password); 
             
            break;
        }
        case 3:
        {
            cout<<"==== Goodbye"<<" ====\n";
            break;
        }      
        default:
        {
            cout<<"Invalid choice!\n";
             break;
        }           
        }
       
    } while (choice !=3);
    
}