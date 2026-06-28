#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

string passwordGenerator(int size, int num=0, int symb =0){
    string resultPassword ="";
    string alphab ="qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    string numbers ="1234567890";
    string symbols = "!@#$%&*.~/";
    srand(time(0));

    while(size){
        resultPassword += alphab[rand() % alphab.length()];
        size--;

        if(num && size){
            resultPassword += numbers[rand() % 10];
            size--;
            num--;
        }

        if(symb && size){
            resultPassword += symbols[rand() % symbols.length()];
            size--;
            num--;
        }
    }
    return resultPassword;
}

int main(){
    int l,n,s;
    cout<<"------------------------------------------------"<<endl;
    cout<<"                 PASSWORD GENERATOR             "<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"What will be the length of password? ";
    cin>>l;
    cout<<"Apart from alphabates how many numbers do it have? ";
    cin>>n;
    cout<<"Apart from alphabates and numbers how many symbolss do it have? ";
    cin>>s;
    cout<<endl;
    cout<<"PASSWORD GENARATED:  "<<passwordGenerator(l, n,s)<<endl;
    return 0;
}

/*
OUTPUT:

------------------------------------------------
                 PASSWORD GENERATOR
------------------------------------------------

What will be the length of password? 8
Apart from alphabates how many numbers do it have? 2
Apart from alphabates and numbers how many symbolss do it have? 2

PASSWORD GENARATED:  L6#d%P6&*/