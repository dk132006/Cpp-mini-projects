#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int main(){
    system("color: 8A");
    int hours, min, sec ;
    cout<<setw(20)<<"Enter current Time:\n";
    cout<<"Hours: ";
    cin>>hours;
    cout<<"Minutes: ";
    cin>>min;
    cout<<"Seconds: ";
    cin>>sec;

    system("color 8A");
    if(hours>23){
        cout<<"Incorrect Input!"<<endl;
    }   
    else if(min>60){
        cout<<"Incorrect Input!"<<endl;
    }
    else if(sec>60){
        cout<<"Incorrect Input!"<<endl;
    }
    else{
        while(1){
            system("cls");
            for(hours; hours<24;hours++){
                for(min;min<60;min++){
                    for(sec;sec<60;sec++){
                        system("cls");
                        cout<<"Current Time: "<<hours<<" : "<<min<<" : "<<sec<<" "<<endl;
                        Sleep(1000);
                    }
                    sec=0;
                }
                min=0;
            }
        }
    }
}