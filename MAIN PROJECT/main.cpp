#include<iostream>           //library
using namespace std;
class Atm                   //name of class
{
protected:                    //access modifier
    string name;
    int balance;               //member data
public:
    Atm(string n,int b)       //constructor
    {
        this->name=n;
        this->balance=b;        //statement
    }
    void method()                   //method
    {
        cout<<endl;
        cout<<"                                   **********Welcome to the ATM***********                  "<<endl;
        cout<<endl;
        cout<<"*Enter Your Bank Details:"<<endl;
        cout<<endl;                                 //statement
    }
};
class Balance:public Atm                        //inheritance
{
public:
    Balance(string n,int b):Atm(n,b){}
    void method()                                //method   //polymorphism
    {
        cout<<"Your balance:"<<balance<<endl;
    }
};
class Withdraw:public Atm                           //inheritance
{
protected:
    int amount,withdraw;
public:
    Withdraw(string n,int b):Atm(n,b){}
    void method()                                    //method   //polymorphism
    {
        cout<<"Enter amount of withdraw"<<endl;
        cin>>withdraw;
     amount=balance-withdraw;                           //statement
     cout<<"Your current balance is="<<amount<<endl;
    }
};
class Transfer:public Atm                   //inheritance
{
protected:
    int namount,transfer,transferid;
public:
    Transfer(string n,int b):Atm(n,b){}
    void method()                               //method   //polymorphism
    {
        cout<<"Enter transfer id"<<endl;
        cin>>transferid;
        cout<<"Enter amount of transfer"<<endl;
        cin>>transfer;
     namount=balance-transfer;                          //statement
     cout<<"Your current balance is="<<namount<<endl;
    }
};
main()                              //object
{
    char option;
    int z=50000;
    string Pass="4321";
    string x;
    Atm *ob1;                             //creating object
    Balance *ob2;
    Withdraw *ob3;
    Transfer *ob4;
    ob1=new Atm(x,z);
    ob1->method();
    string y;
    cout<<"Enter your password"<<endl;
    cin>>y;
    cout<<endl;                                         //using if ,else
    if(Pass==y)
    {
        cout<<"Account name = SHOJIB "<<endl;
        cout<<"Your Bank ID = 16492"<<endl;
        cout<<endl;
        cout<<"Enter your option"<<endl;
        cout<<"1 BALANCE CHECK"<<endl;
        cout<<"2 WITHDRAW"<<endl;
        cout<<"3 TRANSFER"<<endl;
        cout<<"4 EXIT"<<endl;
        cin>>option;

        switch(option)                          //using switch case
        {
        case '1':
            ob2=new Balance(x,z);
            ob2->method();
            break;
        case '2':
            ob3= new Withdraw(x,z);
            ob3->method();
            break;
            case '3':
            ob4= new Transfer(x,z);
            ob4->method();
            break;
        }


    }
    else
        cout<<"Invalid Password"<<endl;
        }

