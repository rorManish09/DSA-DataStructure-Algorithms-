#include <iostream>
using namespace std;
// note the array must be sorted in ascending order

int binarySearch(int array[], int n, int key)
{
    // key is the element to find in array
    int startingPoint = 0; 
    int  endingPoint = n;

    while (startingPoint <= endingPoint)
    {
        int mid = (startingPoint + endingPoint) / 2;

        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] > key)
        {
            endingPoint = mid - 1;
        }
        else
        {
            startingPoint = mid + 1;
        }
        }
        return -1;
   
}
int main()
{
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    int array[n];
    cout << "Enter the elements in array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int key;
    cout << "Enter key: "<<endl;
    cin >> key;

    cout << binarySearch(array, n, key)<<endl;

    return 0;
}