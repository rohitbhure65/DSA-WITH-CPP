// ● Namespaces in C++ :
// 1. The namespace is a logical division of the code which is designed to
// stop the naming conflict.
// 2. The namespace defines the scope where the identifiers such as
// variables, class, functions are declared.
// 3. The main purpose of using namespace in C++ is to remove the
// ambiguity. Ambiguity occurs when a different task occurs with the
// same name.
// 4. For example: if there are two functions with the same name such as
// add(). In order to prevent this ambiguity, the namespace is used.
// Functions are declared in different namespaces.
// 5. C++ consists of a standard namespace, i.e., std which contains
// inbuilt classes and functions. So, by using the statement "using
// namespace std;" includes the namespace "std" in our program.

#include <bits/stdc++.h>
using namespace std;
// user-defined namespace
namespace Add
{
    int a = 5, b = 5;
    int add()
    {
        return (a + b);
    }
}

int main()
{
    int res = Add ::add(); // accessing the function inside namespace
    cout << res;
}