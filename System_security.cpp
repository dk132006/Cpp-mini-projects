#include <iostream>
#include <fstream>
#include <sstream>
#include <windows.h>
#include <string>
using namespace std;

int main(){
    int n ,rage, count , age;
    string runame, rpsd, userId, password, id, pass, pass1, pass2;

    do{
        count = 0;
    

    cout<<"                              SYSTEM SECURITY                              "<<endl;
    cout<<endl;
    cout<<"___________________________________________________________________________"<<endl;
    cout<<"|                              1. REGISTRATION                             |"<<endl;
    cout<<"|                              2. LOGIN                                    |"<<endl;
    cout<<"|                              3. CHANGE PASSWORD                          |"<<endl;
    cout<<"|                              4. END PROGRAM                              |"<<endl;
    cout<<"|__________________________________________________________________________|"<<endl;

    cout<<"Enter your choice: ";
    cin>>n;

    switch(n){
        case 1:{
            cout<<"------------------------------- REGISTRATON  -------------------------"<<endl;
            cout<<endl;
            cout<<"Username: ";
            cin>>runame;
            cout<<"Password: ";
            cin>>rpsd;
            cout<<"Age: ";
            cin>>rage;

            ofstream f1("systemS.txt");
            f1<<runame<<" "<<rpsd<<" "<<rage<<endl;
            cout<<"\n Registration Successfull \n";

            break;
        }

        case 2:{
            cout<<"------------------------------- LOGIN  -------------------------------"<<endl;
            cout<<endl;
            cout<<"Enter username and password : "<<endl;
            cout<<"\t\t\t USERNAME: ";
            cin>>userId;
            cout<<"\t\t\t PASSWORD: ";
            cin>>password;
            //check username and password already exist or not
            ifstream input("systemS.txt");
            while(input>>id>>pass>>age){
                if(id == userId && pass == password ){
                    count=1;
                    
                }
                
            }
            input.close();
           if(count == 1){
                cout<<userId<<"\n LOGIN successfull \n Thanks for logging in! \n";
                cout<<endl;
                cout<<" DETAILS: "<<endl;
                cout<<"Username: "+ userId<<endl;
                cout<<"Password: "+ password<<endl;

            }
            else{
                cout<<"\n please check your username and password \n";
                break;

            }
            break;
        }

        case 3:{
            cout<<"-------------------------- CHANGE PASSWORD ---------------------------"<<endl;
            cout<<"Enter username and password : "<<endl;
            cout<<"\t\t\t USERNAME: ";
            cin>>userId;
            cout<<"\t\t\t PASSWORD: ";
            cin>>password;
            ifstream f3("systemS.txt");
            while(f3>>id>>pass>>age){
                if(id == userId && pass == password){
                    count=1;
                }
        
            }
            
            if(count == 1){
                f3.close();
                ofstream f4;
                cout<<"Enter New Password: ";
                cin>>pass1;
                cout<<"Enter New Password Again: ";
                cin>>pass2;

                if(pass1 == pass2){
                    f4<<id<<pass1;
                    cout<<"Password Changed Successfully"<<endl;
                }
                else{
                    f4<<id<<pass;
                    cout<<"Password Do Not Match!"<<endl;
                    
                }
            }else{
                 cout<<"Enter A Valid Password!"<<endl;
                 break;
            }
            break;
        }

        case 4:{
            cout<<"_______________________________________THANK YOU______________________________";
            break;
        }

        default:
        cout<<"Enter a valid choice ";
        
    }
}while(n!=4);
    return 0;
}

/*

------------------------OUTPUT-------------------------

                              SYSTEM SECURITY

___________________________________________________________________________
|                              1. REGISTRATION                             |
|                              2. LOGIN                                    |
|                              3. CHANGE PASSWORD                          |
|                              4. END PROGRAM                              |
|__________________________________________________________________________|
Enter your choice: 1 
------------------------------- REGISTRATON  ------------------------- 

Username: deesharan 
Password: 123654 
Age: 20 

 Registration Successfull
 
                               SYSTEM SECURITY

___________________________________________________________________________  
|                              1. REGISTRATION                             | 
|                              2. LOGIN                                    | 
|                              3. CHANGE PASSWORD                          | 
|                              4. END PROGRAM                              | 
|__________________________________________________________________________| 
Enter your choice: 2 
------------------------------- LOGIN  ------------------------------- 

Enter username and password :
                         USERNAME: abc 
                         PASSWORD: 123456 

 please check your username and password
                              SYSTEM SECURITY
 
___________________________________________________________________________
|                              1. REGISTRATION                             |
|                              2. LOGIN                                    |
|                              3. CHANGE PASSWORD                          |
|                              4. END PROGRAM                              |
|__________________________________________________________________________|
Enter your choice: 2 
------------------------------- LOGIN  ------------------------------- 

Enter username and password :
                         USERNAME: deesharan 
                         PASSWORD: 123654
deesharan
 LOGIN successfull
 Thanks for logging in!

 DETAILS:
Username: deesharan
Password: 123654
                              SYSTEM SECURITY

___________________________________________________________________________
|                              1. REGISTRATION                             |
|                              2. LOGIN                                    |
|                              3. CHANGE PASSWORD                          |
|                              4. END PROGRAM                              |
|__________________________________________________________________________|
Enter your choice: 3
-------------------------- CHANGE PASSWORD ---------------------------
Enter username and password :
                         USERNAME: deesharan
                         PASSWORD: 123654
Enter New Password: 098765
Enter New Password Again: 098765
Password Changed Successfully
 LOGIN successfull
 Thanks for logging in!

 DETAILS:
Username: deesharan
Password: 123654
                              SYSTEM SECURITY

___________________________________________________________________________
|                              1. REGISTRATION                             |
|                              2. LOGIN                                    |
|                              3. CHANGE PASSWORD                          |
|                              4. END PROGRAM                              |
|__________________________________________________________________________|
Enter your choice: 3
-------------------------- CHANGE PASSWORD ---------------------------
Enter username and password :
                         USERNAME: deesharan
                         PASSWORD: 123654
Enter New Password: 098765
Enter New Password Again: 098765
Password Changed Successfully
                              SYSTEM SECURITY

___________________________________________________________________________
|                              1. REGISTRATION                             |
|                              2. LOGIN                                    |
|                              3. CHANGE PASSWORD                          |
|                              4. END PROGRAM                              |
|__________________________________________________________________________|
Enter your choice: 4
_______________________________________THANK YOU______________________________

 */