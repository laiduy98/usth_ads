#include <iostream>

using namespace std;

void prime_factorization(int n)
{
    int z = 2;

    while (z * z <= n)
    {
        if (n % z == 0)
        {
            cout << z << " ";
            n /= z;
        }
        else
        {
            z++;
        }
    }
    if (n >= 1)
    {
        cout << n;
    }
    cout << "\n";
}

int main(int argc, char const *argv[])
{
    long int n;
    cout << "Enter your number:\n";
    cin >> n;
    prime_factorization(n);

    return 0;
}
