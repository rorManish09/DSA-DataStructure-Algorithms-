#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the elements in array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int counter=1;

    while(counter<n){
        for(i=0;i<n-counter;i++){

        if(array[i]>array[i+1])
        {
           int temp=array[i];
            array[i]=array[i+1];
            array[i+1]=temp;
        }
        }
        counter++;
    }
    cout<<"The sorted array is :"
    <<endl;
    for(i=0;i<n;i++){

    cout<<array[i]<<endl; 
    }
    return 0;
}