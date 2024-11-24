#include <iostream>
using namespace std;

// Function to calculate factorial
long long factorial(int num){
    long long result = 1;
    for (int i = 2; i <= num; ++i){
        result *= i;
    }
    return result;
}

// Function to calculate combinations with repetition
long long combinations(int mangoes, int people){
    // Apply formula: (mangoes + people - 1)! / ((people - 1)! * mangoes!)
    return factorial(mangoes + people - 1) / (factorial(people - 1) * factorial(mangoes));
}

int main(){
    int mangoes, people;
    cout << "Enter the number of mangoes: ";
    cin >> mangoes;
    cout << "Enter the number of people: ";
    cin >> people;

    if (mangoes < 0 || people <= 0)
    {
        cout << "Invalid input! Number of mangoes must be non-negative and number of people must be positive." << endl;
        return 1;
    }

    cout << "Number of ways to distribute " << mangoes << " mangoes among " << people << " people is: "
         << combinations(mangoes, people) << endl;

    return 0;
}
