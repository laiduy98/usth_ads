#include <iostream>

using namespace std;

// check if n is a perfect number
bool is_perfect(int n)
{
    long int sum = 1;
    for (long int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i != n)
                sum = sum + i + n / i;
            else
                sum = sum + i;
        }
    }
    // cout << sum;
    if (sum == n && sum != 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(int argc, char const *argv[])
{
    long int n;
    cout << "Enter a number:\n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (is_perfect(i))
        {
            cout << i << " is a perfect number\n";
        }
    }

    return 0;
}
