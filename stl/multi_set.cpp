#include <iostream>
#include <iterator>
#include <set>

using namespace std;

int main()
{
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1); // all 1 eased

    ms.erase(ms.find(1)); // only single one earsed

    ms.erase(ms.find(1), ms.find(1) + 2); // rest all function some as set

    // rest all function same as set
    return 0;
}