#include <iostream>
using namespace std;

int linearSearch(int array[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {

        if (array[i] == key)
        {
            return i; // this will return the index of the key if the element is presnt
        }
        return -1;
    }
}

int main()
{
    int n, key, i;
    cout << "Enter the Size of array: " << endl;
    cin >> n;

    int array[n];
    cout << "Enter the elements of array" << endl;

    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Enter key" << endl;
    cin >> key;

    cout << linearSearch(array, n, key) << endl;
    return 0;
}
