#include <iostream>

using namespace std;

int main()
{
    int n, i, j;

    cout << "Enter the size of array: " << endl;
    cin >> n;
    cout << "Enter the elements of array: " << endl;
    int array[n];
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "The sorted array is: " << endl;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[j] < array[i])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}