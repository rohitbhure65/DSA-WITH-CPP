#include <iostream>
#include <string> // <string> header file is important for perfome operations on string
using namespace std;


void reverse(string &str)
{
    for (int i = 0, j = str.length() - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

// reverse string using while loop and two pointer approach
void using_while(string &str){
    int i = 0;
    int j = str.length()-1;
    while(i<j){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    string str;
    getline(cin, str);

    // reverse(str); // function call
    // cout << str << endl;
    using_while(str);
    cout << str << endl;

    return 0;
}