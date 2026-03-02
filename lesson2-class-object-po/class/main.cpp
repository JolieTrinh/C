#include <iostream>
#include <string>
using namespace std;

/* Bài 1: Quản lý học sinh
Yêu cầu:
* Tạo class Student với các thông tin private: name (string), age (int), grade (double)
* Constructor để khởi tạo thông tin
* Viết getter cho tất cả, setter chỉ cho grade
* Viết method printInfo() in thông tin học sinh
* Trong main nhập 3 học sinh, in danh sách học sinh
Gợi ý logic:
* Dùng vector<Student> để lưu danh sách
* Không cho sửa name và age sau khi tạo object*/

class Student {
private:
    string name;
    int age;
    double grade;
public:
    Student (string n, int a, double g) {
        name=n;
        age=a;
        grade=g;
    }
    void printinfo() const{
        cout<<name<<" - "<<age<<" - "<<grade<<endl;
    }
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    double getgrade(){
        return grade;
    }

    void setgrade(double g){
        grade=g;

    }

};


int main() {
    vector <Student> classlist;

    classlist.push_back(Student("Nguyen Hoang Anh",25,4.5 ));
    classlist.push_back(Student("Hong Hai Nhi",18,5.0));
    classlist.push_back(Student("Nguu Ma Vuong",45,5.0));

    for (const Student &s : classlist){
        s.printinfo();
    }

}
