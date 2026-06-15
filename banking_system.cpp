#include <iostream>
using namespace std;

class BankAccount{
    private:
    float balance;

    public:
    void setBalance(float b){
        balance = b;
    }

    void deposit(float amount){
        balance = balance + amount;
        cout<<"Amount Deposit: "<<amount<<endl;
    }

    void withdraw(float amount){
        if (amount > balance)
        {
            cout<<"Insu??icient Balance"<<endl;
        }else{
            balance = balance - amount;
            cout<<"Amount Withdrawn: "<<amount<<endl;
        }
        
    }

    void showBalance(){
        cout<<"Current Balance: "<<balance<<endl;
    }
};

int main(){
    BankAccount acc;

    int choice;
    float amount, initial_balance;

    cout<<"Enter Initial Balance: ";
    cin>>initial_balance;

    acc.setBalance(initial_balance);

    do{
        cout<<"\n=====Bank Menu====="<<endl;
        cout<<"1. Deposit"<<endl;
        cout<<"2. Withdraw"<<endl;
        cout<<"3. Check Balance"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"Enter amount to deposit: ";
            cin>>amount;
            acc.deposit(amount);
            break;

            case 2:
            cout<<"Enter amount to withdraw: ";
            cin>>amount;
            acc.withdraw(amount);
            break;

            case 3:
            acc.showBalance();
            break;

            case 4:
            cout<<"Thank you!"<<endl;
            break;

            default:
            cout<<"Invalid Choice"<<endl;
        }
    }while (choice != 4);
    
    return 0;
    
}