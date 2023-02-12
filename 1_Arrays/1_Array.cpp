#include<iostream>

using namespace std;

int main()
{
    int array[5],i;

    cout<<"Enter the elements of array."<<endl;
    
    for(i=0;i<5;i++)
    {
        cin>>array[i];

    }


    cout<<"Print array "<<endl;
    for(i=0;i<5;i++)
    {
        cout<<array[i]<<endl;

    }
}