#include <iostream>
#include <fstream>
#include <windows.h>
#include <string.h>
using namespace std;

void login();
void registration();
void forgot();

int main(){
    int c;
    cout<<"\t\t\t_______________________________________________\n\n\n";
    cout<<"\t\t\t            Welcome to the login page          \n\n\n";
    cout<<"\t\t\t____________           MENU          ___________\n\n\n";
    cout<<"\t|  Press 1 to Login                  |"<<endl;
    cout<<"\t|  Press 2 to Registratin            |"<<endl;
    cout<<"\t|  Press 3 to Forgot Password        |"<<endl;
    cout<<"\t|  Press 4 to EXIT                   |"<<endl;
    cout<<"\n\t\t\t Please enter your choice :";
    cin>>c;
    cout<<endl;

    switch(c){
        case 1:
            login();
            break;
        case 2:
            registration();
            break;
        case 3:
            forgot();
            break;
        case 4:
            cout<<"\t\t\t Thank you! \n\n";
            break;
        default:
            system("cls");
            cout<<"\t\t\t Please select from options given above \n"<<endl;
            main();
    }
}

void login(){
    int count;
    string userId, password, id, pass;
    system("cls");
    cout<<"Enter username and password : "<<endl;
    cout<<"\t\t\t USERNAME: ";
    cin>>userId;
    cout<<"\t\t\t PASSWORD: ";
    cin>>password;

    //check username and password already exist or not
    ifstream input("records.txt");
    while(input>>id>>pass){
        if(id == userId && pass == password){
            count=1;
            system("cls");

        }
        input.close();
    }
    if(count == 1){
            cout<<userId<<"\n LOGIN successfull \n Thanks for logging in! \n";
            main();
        }
        else{
            cout<<"\n please check your username and password \n";
        }
    
}

void registration(){
    string ruserId, rpassword, rid, rpass;
    system("cls");
    cout<<"\t\t\t Enter your name: ";
    cin>>ruserId;
    cout<<"\t\t\t Enter password: ";
    cin>>rpassword;

    ofstream f1("records.txt", ios::app);
    f1<<ruserId<< ' '<<rpassword<<endl;
    system("cls");
    cout<<"\n REGISTERED successfully \n";
    main();
}

void forgot(){
    int option;
    system("cls");
    cout<<"\t\t\t  Forgot Password? No worries \n";
    cout<<"Press 1 to search your id by username "<<endl;
    cout<<"Press 2 to go back to main menu "<<endl;
    cout<<"\t\t\t Enter your choice : ";
    cin>>option;
    switch (option){
        case 1: {
            int count = 0;
            string suserId, sid, spass;
            cout<<"\n\t\t\t Enter the username :";
            cin>>suserId;
            ifstream f2("records.txt");
            while(f2>>sid>>spass){
                if(sid == suserId){
                    count=1;
                }
            }
            f2.close();
            if(count==1){
                cout<<"\n\n Account found! \n";
                cout<<"\n\n Password is: "<<spass;
                main();
            }
            else{
                cout<<"\n\n Account Not Found! \n";
                main();
            }
            break;
        }
        case 2:
            main();

        default:
            cout<<"\t\t\t Wrong choice! Please try again"<<endl;
            forgot;
    }
}

/*
---------------- OUTPUT--------------------

                        _______________________________________________ 


                                    Welcome to the login page

 
                        ____________           MENU          ___________

 REGISTERED successfully 
                        _______________________________________________  


                                    Welcome to the login page            

 
                        ____________           MENU          ___________ 
deesharan
 LOGIN successfull 
 Thanks for logging in! 
                        _______________________________________________


                                    Welcome to the login page

 
                        ____________           MENU          ___________
                          Forgot Password? No worries 
Press 1 to search your id by username 
Press 2 to go back to main menu 
                         Enter your choice : 1

                         Enter the username :deesharan


 Account found! 


 Password is: 12345678                  _______________________________________________


                                    Welcome to the login page
                        ____________           MENU          ___________


        |  Press 1 to Login                  |
        |  Press 2 to Registratin            |
                          Forgot Password? No worries 
Press 1 to search your id by username 
Press 2 to go back to main menu 
                         Enter your choice : 1

                         Enter the username :deesharan


 Account found! 


 Password is: 12345678                  _______________________________________________

                                    Welcome to the login page


                        ____________           MENU          ___________


        |  Press 1 to Login                  |
        |  Press 2 to Registratin            |
        |  Press 3 to Forgot Password        |
        |  Press 4 to EXIT                   |
        |  Press 3 to Forgot Password        |
        |  Press 4 to EXIT                   |

                         Please enter your choice :4

                         Thank you!
 
                       
*/