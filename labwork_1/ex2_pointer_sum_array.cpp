#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter the size of array A \n";
    cin >> n;

    int *a = new int[n];

    cout << "Enter Elements of the List \n";
    for (int i = 0; i < n; i++)
    {
        int *x = a + i;
        cin >> *x;
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + *(a + i);
    }

    cout << "Sum of all elements in array = " << sum << "\n";
    delete[] a;
    return 0;
}