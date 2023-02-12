#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    int array[100], i;

    cout << "Enter the size of array: " << endl;
    cin >> n;

    cout << "Enter the elements of array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (i = 0; i < n; i++)
    {
        maxNo = max(maxNo, array[i]);
        minNo = min(minNo, array[i]);
    }
    cout << "The Maximum and Minimum number of the arrray are: " << maxNo<<" " << minNo << endl;
}