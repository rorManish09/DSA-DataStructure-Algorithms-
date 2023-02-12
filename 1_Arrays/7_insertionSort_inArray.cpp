#include<iostream>
using namespace std;

int main()
{
    int i,n,j;

    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the elements of array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }

    for(i=0;i<n;i++){
        int current= array[i];
        int j=i-1;

        while(array[j]>current && j>=0)
        {
            array[j+1]=array[j];
            j--;
        }
       array[j+1]=current; 
    }

    cout<<"The sorted array is "<<endl;
    
    for(i=0;i<n;i++)
    {
        cout<<array[i];
    }cout<<endl;
    return 0;
}