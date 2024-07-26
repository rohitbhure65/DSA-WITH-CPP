#include <iostream>
#include <string>
using namespace std;

int main(){

    // USING STRING OBJECT NOT SUPPORT C
    // string str;
    // cout << "Enter a string" << endl;
    // cin >> str;
    // cout << str << endl;

    string name;
    getline(cin, name);

    cout << name << endl;
    return 0;
}