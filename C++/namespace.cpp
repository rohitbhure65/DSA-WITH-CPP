#include <iostream>
using namespace std;
#include "fileone.cpp"
#include "filetwo.cpp"

int main(){
    cout << one::x << endl;
    cout << two::x << endl;
    return 0;
}