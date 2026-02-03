#include<iostream>
using namespace std;
//que1
class student{
    private:
    string name;
    int rollnumber;

    public:
    void setstudent(string names,int rollnumbers){
        name=names;
        rollnumber=rollnumbers;

         cout<<"--------------------Student---------------"<<endl;
        cout<<"Student Name:"<<name<<endl;
        cout<<"Student RollNumber:"<<rollnumber<<endl;

    };

};
//que2
class car{
    private:
    string model;
    int year;
    int speed;

    public:
    void setdata(string mod,int years, int speeds){
        model=mod;
        year=years;
        speed=speeds;
        cout<<"--------------------car---------------"<<endl;
        cout<<"Car model:"<<model<<endl;
        cout<<"Car year:"<<year<<endl;
        cout<<"Car speed:"<<speed<<endl;
    };   
};

 //que 3
    class Device{
        protected:
        string brand;
        int powerconsumption;
    };
    class Laptop: public Device{
        public:
        void setlaptop(string brands,int power){
            brand=brands;
            powerconsumption=power;

               cout<<"--------------------Laptop---------------"<<endl;
        cout<<"Laptop brand:"<<brand<<endl;
        cout<<"Laptop power consumption:"<<powerconsumption<<endl;
        };
         void laptopDiscount(){
            cout<<"Laptop {" << brand <<   "}15%"<<endl;
        }
    };

    class Smartphone: public Device{
        public:
        void setsmartphone(string brands,int power){
            brand=brands;
            powerconsumption=power;

               cout<<"--------------------Smartphone---------------"<<endl;
        cout<<"Smartphone brand:"<<brand<<endl;
        cout<<"Smartphone power consumption:"<<powerconsumption<<endl;
        };

        void calculateDiscount(){
            cout<<"Smartphone {" << brand <<   "}15%"<<endl;
        }
    };

    //que5
    class Animal{
        protected:
        string sound;
        string move;

        public:
        void makesound(string sounds){
            sound=sounds;
        };
        void makemove(string moves){
            move=moves;
        };
    };

    class Lion : public Animal{
    public:
        void lion(){
            makesound("roar");
            cout<<"Lion(Sound): "<<sound<<endl;
            makemove("prawl");
            cout<<"Lion(Movement): "<<move<<endl;
        };

    };
    class Fish : public Animal{
    public:
        void fish(){
            makesound("purrs");
            cout<<"Fish(Sound): "<<sound<<endl;
            makemove("Swim");
            cout<<"fish(movement): "<<move<<endl;
        };
    };





  int main(){
    //que1
    student t[2];
    t[0].setstudent("Bansi",1);
    t[1].setstudent("rehana",2);

//que2
        car c[3];
        c[0].setdata("XUV",2024,200);
        c[1].setdata("BMW",2020,150);
        c[2].setdata("KIA",2021,180);
        cout << endl;


        //que3
        Laptop l[3];
        l[0].setlaptop("Hp",35);
        l[1].setlaptop("Apple",22);
        l[2].setlaptop("Lenovo",50);
        cout << endl;


        Smartphone s[3];
        s[0].setsmartphone("Oppo",30);
        s[1].setsmartphone("Apple",25);
        s[2].setsmartphone("Samsung",40);
        cout << endl;


        //que4
        cout<<"Discount on Smartphone"<<endl;
        for(int i=0; i<3; i++){
            s[i].calculateDiscount();
        };
        cout << endl;

        cout<<"Discount on Laptop"<<endl;
        for(int i=0; i<3; i++){
            l[i].laptopDiscount();
        };
        cout << endl;

        //que5

        Lion o;
        o.lion();
        
 cout << endl;
        Fish f;
        f.fish();

    };