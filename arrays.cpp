#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int *p;
    int i;
    cout<<"enter 5  numbers of your choice: ";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    p=arr;
    cout<<"you entered: ";
    for(i=0 ; i<5; i++)
    {
        cout<<*p<<" ";
        p++;

    }
}
