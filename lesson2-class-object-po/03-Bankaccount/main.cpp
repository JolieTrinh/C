#include<iostream>
#include<string>
using namespace std;
/*  Ngân hàng – Tài khoản
Yêu cầu:
* Class BankAccount private: accountNumber (string), balance (double)
* Constructor để tạo tài khoản với số dư ban đầu
* Getter cho cả 2, setter chỉ cho balance qua 2 method:
    * deposit(double amount)
    * withdraw(double amount) (không cho rút quá số dư)
* Method printInfo() in thông tin tài khoản
* Trong main:
    * Tạo 2 tài khoản
    * Gửi/rút tiền thử
    * In thông tin sau mỗi thao tác
Gợi ý logic:
* Encapsulation + kiểm soát dữ liệu: không ai có thể trực tiếp sửa balance
* Kiểm tra điều kiện trước khi rút*/

class BankAccount{
private:
    string account_number;
    double balance;

public:
    BankAccount(string num, double b){
        account_number=num;
        balance=b;
    }

    //getter
    string getaccount_number(){
        return account_number;
    }
    double getbalance(){
        return balance;
    }
    //deposit
    void deposit(double amount){
        if (amount >0) {
            balance += amount;
            cout << "Deposit successful! "<<endl;
        }
        else {
            cout<<"Invalid deposit amount! "<<endl;
        }

    }
    //withdraw
    void withdraw(double amount){
        if (amount <=0) {
            cout << "Invalid withdraw amount!"<<endl;
        }
        else if (amount > balance) {
            cout<<"Not enough money!"<<endl;

        }
        else {
            balance-=amount;
            cout<<"Withdraw successful!"<<endl;
        }
    }

    void printinfo(){
        cout<<"Your account number is: "<<account_number<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"------------------";
    }

};

int main() {
    BankAccount acc1("123456",1000);
    BankAccount acc2("999999",500);

    acc1.printinfo();


    acc1.deposit(300);
    acc1.printinfo();

    acc1.withdraw(200);
    acc1.printinfo();

    acc1.withdraw(2000);



}
