#include<bits/stdc++.h>
using namespace std;
void shuffleArray(int arr[],int n)
{
    random_shuffle(arr,arr+n);
}
int main()
{
    int n;
    cout<<"Enter the size of Array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of the Array:"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    shuffleArray(arr,n);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    return 0;
}
