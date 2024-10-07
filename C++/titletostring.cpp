#include <bits/stdc++.h>
using namespace std;

void convertToTitleCase(string &str) {
    int n = str.length();
    
    if (n > 0 && isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }
    
    for (int i = 1; i < n; ++i) {
        if (isalpha(str[i]) && str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
            
        }
    }
    
    cout<< str << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        convertToTitleCase(s);
    }
    return 0;
}
