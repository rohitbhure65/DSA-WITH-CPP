#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int password_c(char c[], int n)
{
    if (n < 4)
    {
        return 0;
    }
    if (isdigit(c[0]))
    {
        return 0;
    }
    int numeric = 0, capital = 0;
    for (int i = 0; i < n; i++)
    {
        // space and /
        if (isblank(c[i]) || c[i] == '/')
        {
            return 0;
        }
        // numeric
        if (isdigit(c[i]))
        {
            numeric++;
        }
        if (isupper(c[i]))
        {
            capital++;
        }
    }
    return numeric > 0 && capital > 0;
    
};

int main()
{
    string password;
    cout <<"Enter a password"<<endl;
    getline(cin, password);
    int length = password.length();

    char *c = &password[0];

    cout << password_c(c, length);
    return 0;
}