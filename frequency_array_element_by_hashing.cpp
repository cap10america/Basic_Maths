#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the array size\n";
    cin>>n;

int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

// pre-compute
int hash[20]={0};
for(int i=0;i<n;i++)
{
    hash[arr[i]] +=1;

}
int q;
cout<<"how many elements of frequency to find \n";
cin>>q;
while(q--)
{
    int number;
    cout<<"enter the element to find frequency of that particular element repeated is \t";
    cin>>number;
    // displaying the output of the  frequencies of the array elements  are 

    cout<<hash[number]<<endl;

}
return 0;

}