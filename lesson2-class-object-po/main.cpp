#include<iostream>
#include<string>
using namespace std;

class Car {
private:
    string name_car;
    int year;


public:
    Car(string n ,int y) {
    name_car=n;
    year=y; }


    void print() {
        cout << name_car <<" - "<<year<<" ";
    }
    string getname(){
        return name_car;
    }
    void setyear(int y){
        year=y;

    }
};



int main(){

    Car c1("Toyota",2020);

    c1.setyear(2025);
    c1.print();

    return 0;


}
