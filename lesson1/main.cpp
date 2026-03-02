#include <iostream>
#include <string>
#include <vector>
#include <set>
#include<sstream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    string line;
    cout<<"Enter informations: ";
    getline(cin,line);

    stringstream ss (line);

    map<string,int> count;
    string fruit;
    while(ss >> fruit) {
        count[fruit]++;

    }
    int maxcount=0;
    string most_frequent=0;
    for (const auto& pair : count) {
        if (pair.second>maxcount) {
            maxcount=pair.second;
            most_frequent=pair.first;

    }
    }
    return 0;
}

/*
int main() {
    string name,line;
    vector<string> students;
    set<string> names;
    while (true) {
        cout<<"Enter students names(empty line to stop): ";
        getline(cin,name);
        if (name.empty()) {
            break;
        }
        students.push_back(name);
    }

    for(string n:students) {
        names.insert(n);
    }
    sort(students.begin(),students.end());
    for (string i:names) {
        cout<<i<<endl;
    }

    return 0;

}
*/


/*
int main() {
    cout<<"Enter numbers: ";
    string line;
    getline(cin,line);

    stringstream ss(line);

    map <int,int> count;
    int num;
    while (ss>>num) {
        count[num]++;
    }

    int maxcount=0;
    int most_frequent=0;
    for (const auto& pair:count) {
        if (pair.second > maxcount) {
            maxcount = pair.second;
            most_frequent=pair.first;
        }

    }

    cout<<"the most frequent number is: "<<most_frequent<< " with "<<maxcount<<" times"<<endl;
    return 0;
}
*/
/*
int main() {
    vector<int> numbers;
    set<int> number;

    int num;
    string line;
    cout<<"Enter numbers:";
    getline(cin,line);

    stringstream ss(line);

    while(ss>>num) {
        numbers.push_back(num);
    }

    if (numbers.empty()){
        cout<<"No numbers entered."<<endl;
    return 0;
    }

    int max = numbers[0];
    int min= numbers[0];
    for (int i = 1; i < numbers.size(); ++i) {
        if (numbers[i]>max) {
            max=numbers[i];}
        if (numbers[i]<min) {
            min=numbers[i];
        }

    }
    cout << "the greates number: "<<max<<endl;
    cout << "the smallest number: "<< min<< endl;


    return 0;


}
*/

// enter 5 numbers in vector
/*
int main(){

    vector <int> numbers;
    set<int> number;

    cout << "enter 5 numbers:";

    for (int i=0; i<5; ++i) {
        int num;
        cin>>num;
        numbers.push_back(num);
    }

    //adding each numbers to set
    for (int n : numbers) {
        number.insert(n);
        cout<<n<<endl;
    }

    cout<<"Numbers in set (no duplicates):"<<endl;
    for (int n:number) {
        cout<< n<<endl;
    }
    return 0;

} */

/*
int main() {
string ten;
cout << "Enter a (longer) string: ";
getline(cin, ten);

string kitu;
cout << "Enter a (shorter) string to be found: ";
getline(cin, kitu);

for (string::size_type i = 0;
     i + kitu.length() <= ten.length();
     ++i)
{
    if (ten.substr(i, kitu.length()) == kitu) {
        cout << "Found at " << i << endl;
    }
}

return 0;
}*/
