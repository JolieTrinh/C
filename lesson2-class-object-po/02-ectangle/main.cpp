#include <iostream>
#include <string>
using namespace std;

/*Lớp Rectangle (Hình chữ nhật)
Yêu cầu:
* Class Rectangle với private width, height (double)
* Constructor, getter/setter (setter phải kiểm tra width và height > 0)
* Method:
    * area() trả về diện tích
    * perimeter() trả về chu vi
* Trong main:
    * Nhập 2 hình chữ nhật
    * In diện tích, chu vi, và cho biết hình nào diện tích lớn hơn
Gợi ý logic:
* Khi setter kiểm tra giá trị > 0, nếu không hợp lệ thì giữ nguyên giá trị cũ
* So sánh diện tích = if (r1.area() > r2.area()) */

class Rectangle {
private:
    double width, height;
public:
    Rectangle(double w, double h) {
        if(w>0)
        width=w;
        else width=1;
        if (h>0)
            height=h;
        else
            height=1;
    }

    double getwidth(){
        return width;
    }
    void setwidth(double w){
        if (w>0){
            width=w;
        }
    }

    double getheight(){
        return height;
    }

    void setheight(double h){
        if (h>0) {
            height=h;
        }
    }
    double area(){
        return width*height;

    }
    double perimeter(){
        return 2*(width+height);
    }


};

int main(){
    Rectangle r1 (3.2,5.3);
    Rectangle r2(5.0,2.4);
    cout<<"the area of the rectangle 1 is: " << r1.area()<<" and its perimeter is: "<< r1.perimeter()<<endl;

    cout<<"the area of the rectangle 2 is: " << r2.area()<<" and its perimeter is: "<< r2.perimeter()<<endl;

    if (r1.area() > r2.area()){
        cout<<"the rectangle 1 has larger area "<<endl;
    }
    else if(r1.area() < r2.area()) {
        cout<<"the rectangle 2 has larger area "<<endl;}

    else{
            cout<<"both rectangles have equal area. "<<endl;
        }

    }



