#include<bits/stdc++.h>
using namespace std;
void rev_array (int i, int arr[], int n)
{if(i>=n/2){

return;
}
 swap(arr[i],arr[n-1-i]);
 rev_array(i+1 ,arr ,n);


}
int main ()
{int n;
cin>>n;

    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];

        
    }
    rev_array( 0 ,arr ,n);


     for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\n";


    }

return 0;
}