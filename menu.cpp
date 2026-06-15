#include <iostream>
using namespace std;

int main(){
    cout<<"Press 1 to get Addition in choices"<<endl;
    cout<<"Press 2 to get Subtraction"<<endl;
    cout<<"Press 3 to get Multiplication"<<endl;
    cout<<"Press 4 to get Division"<<endl;
    cout<<"Press 5 to get Average"<<endl;
    



    int a, b, choice;
    cout<<"number 1:";
    cin>>a;
    cout<<"number 2: ";
    cin>>b;
    cout<<"choice: ";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"Sum is "<<(a+b);
            break;
        case 2:
            cout<<"Dierence is "<<(a-b);
            break;
        case 3:
            cout<<"multiplication is "<<(a*b);
                break;
        case 4:
             cout<<"division is "<<(a/b);
             break;
        case 5:
            cout<<"averge is "<<((a+b)/2);
            break;
        default:
            cout<<"invlid input in choice";

    }

}