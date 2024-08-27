//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr, int N, int P) {
        
        // do modify in the given array
    //pre-compute
    // unordered_   
    map<int ,int > mpp;
    // the sorted array  with the frequency value 
    for (int i=0;i<N;i++)
    {
        mpp[arr[i]]++;
        
        
    }
        
    for (int i=0;i<N;i++)
    {
        arr[i] = mpp[i+1];
        
    }
    }
    //   unordered_map<int, int> frequencyMap;

        // Count the frequency of each element
    //     for (int i = 0; i < N; i++) {
    //         frequencyMap[arr[i]]++;
    //     }

    //     // Update the original array with frequencies
    //     for (int i = 0; i < N; i++) {
    //         arr[i] = frequencyMap[i + 1]; // Adjust for 1-based indexing
    //     }
    // }
    
};


//{ Driver Code Starts.

int main() {
    long long t;

    // testcases
    cin >> t;

    while (t--) {

        int N, P;
        // size of array
        cin >> N;

        vector<int> arr(N);

        // adding elements to the vector
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        cin >> P;
        Solution ob;
        // calling frequncycount() function
        ob.frequencyCount(arr, N, P);

        // printing array elements
        for (int i = 0; i < N; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
