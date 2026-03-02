#include<iostream>
#include<string>
using namespace std;

class sinhvien {

private:
    string ten,lop,ma,ngay;
    double gpa;
public:
    sinhvien (string ma, string ten, string lop, string ngay,double gpa) {
        this->ma=ma;
        this->ten=ten;
        this->lop=lop;
        this->ngay=ngay;
        this->gpa=gpa;

    }

    void print() {
        cout<<ma<<" "<<ten<<" " <<lop << " "<< ngay<<" " <<gpa<<" " <<endl;
    }

    void setten(string t){
        ten=t;
    }
    string getten(){
        return ten;
    }

    void chuanhoaten(){
        stringstream()

    }
    void chuanhoangaysinh(){

    }



};

int main() {
    string ma,ten,lop,ngaysinh;
    double gpa;
    cout<<"enter your id: ";
    cin>>ma;
    cout<<"enter your name: ";
    cin>>ten;
    cout<<"enter your class: ";
    cin>>lop;
    cout<<"enter your day of birth: ";
    cin>>ngaysinh;
    cout<<"enter your gpa: ";
    cin>>gpa;

    sinhvien s(ma,ten,lop,ngaysinh,gpa);

        s.print();

    s.setten("jolie");
        cout<<s.getten()<<endl;


}
