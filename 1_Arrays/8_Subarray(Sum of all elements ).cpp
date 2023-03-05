#include<iostream>
using namespace std;

int main(){
    int n, i,j;
    cout<<"Enter the the size of array: "<<endl;
    cin>>n;
    int array[n];

    cout<<"Enter the elements of array: "<<endl;
    for( i=0;i<n;i++){
        cin>>array[i]; 
    }

cout<<"The Sum of all sub array is "<<endl;
    int  current=0;
    for(int i=0;i<n;i++)
    {
       current =0;
        for( int j=i;j<n;j++)
     {

        current+=array[j];
       cout<<current<<endl;

    }
         
    }
   
return 0;
}