#include <iostream>
#include <string>
using namespace std;

int check_password(char str[], int n)
{
    if (n < 4)
    {
        return 0;
    }

    if (str[0] - '0' >= 0 && str[0] - '0' <= 9)
    {
        return 0;
    }

    int a = 0, num = 0, cap = 0;
    while (a < n)
    {
        if (str[a] == ' ' || str[a] == '/')
        {
            return 0;
        }

        if (str[a] >= 65 && str[a] <= 90)
        {
            cap++;
        }
        else if (str[a] - '0' >= 0 && str[a] - '0' <= 9)
        {
            num++;
        }
        a++;
    }
    return cap > 0 && num > 0;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        int len = str.length();
        char *c = &str[0];
        cout << check_password(c, len);
    }

    return 0;
}