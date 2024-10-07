#include <iostream>
using namespace std;

int findchoclate(int *cho, int length)
{
    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (cho[i] == 1)
        {
            count++;
        }
        for (int j = i; j < length; j++)
        {
            if (cho[i] < cho[j])
            {
                int swap = cho[i];
                cho[i] = cho[j];
                cho[j] = swap;
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        cout << cho[i] << " ";
    }

    cout << endl;

    for (size_t i = 1; i < length; i++)
    {
        if (cho[i] == 1)
        {
            count++;
        }
    }
    return count;
};

int main()
{
    int cho[] = {1, 0, 1, 1, 0, 1, 1, 0, 1, 0};
    int length = sizeof(cho) / sizeof(cho[0]);

    cout << findchoclate(cho, length);

    return 0;
}