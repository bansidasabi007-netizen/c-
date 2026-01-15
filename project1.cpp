#include<iostream>
using namespace std;

class Trainclass{
    private:
    int trainnumber;
    char trainName[50];
    char source[50];
    char destination[50];
    char traintime[10];

    public:
    Trainclass(){
        cout<<"----Railway Reservation system Menu---"<<endl;
        cout<<"Add New Train Record:"<<endl;
        cout<<"Display  All Train Records:"<<endl;
        cout<<"Search Train by Number:"<<endl;
        cout<<"Exit"<<endl;
    }

    void class1(){
        cout<<"Enter trainnumber:";
        cin>>trainnumber;

        cout<<"Enter trainName:";
        cin>>trainName;

        cout<<"Enter source:";
        cin>>source;

        cout<<"Enter destination:";
        cin>>destination;

        cout<<"Enter traintime:";
        cin>>traintime;
    }
    void class2(){
        cout <<"Enter Train Number:"<<trainnumber<< endl;
        cout <<"Enter Train Name:"<<trainName<< endl;
        cout <<"Enter Source :"<<source<< endl;
        cout <<"Enter Destination:"<<destination<< endl;
        cout <<"Enter Train Time:"<<traintime<< endl;
    }

    void class3(){
        int a;
        cout<<"Enter Train Number to search:";
        cin>>a;
        if(a==trainnumber){
            cout<<"Train with Number"<<trainnumber<<"is found"<< endl;
        }
        else{
            cout<<"Train with Number"<<trainnumber<<"is not found"<<endl;
        }
    }

    void class4(){
        cout<<"Exiting the system.Goodbye"<<endl;
    }
 
};
   int main(){
        Trainclass s1;
        int choice;

        do{
            cout<<"Enter Your choice:";
            cin>>choice;
            if(choice==1){
                s1.class1();
            }
            else if(choice == 2){
                s1.class2();
            }
            else if(choice == 3){
                s1.class3();
            }
            else if(choice==4){
                s1.class4();
            }
        }while(choice !=4);
    };