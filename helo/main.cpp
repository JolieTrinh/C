#include <iostream>

using namespace std;


int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;
    int summa;
    if (n >= 0) {
        summa=n*n*n;
        if (summa/(n*n)==n) {
            cout << " The cube of " << n << " is " << summa << "." << endl;
        } else {
             cout << "Error! The cube of " << n << " is not " << summa << "." << endl;
        }
    } else {
        cout << "invald number!" << endl;
    }


    return 0;



}

