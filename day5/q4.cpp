#include <iostream>
using namespace std;
int main()
{
    int num, largest = 1;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            bool prime = true;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    prime = false;
                    break;
                }
            }
            if (prime)
            {
                largest = i;
            }
        }
    }
    cout << "Largest Prime Factor = " << largest;
    return 0;
}