#include <iostream>
using namespace std;

int main()
{
    int n, m, i, j;

    int Array[n][m];
    cout<<"Enter the size of array";
    cin>>n;
    cin>>m;

    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> Array[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << Array[i][j] << " ";
        }
    cout << "\n";
}
}