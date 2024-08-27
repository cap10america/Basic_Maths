#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        // Sort the array
        sort(nums.begin(), nums.end());
        
        int left = 0;
        long long currentSum = 0;
        int maxFreq = 0;
        
        for (int right = 0; right < nums.size(); ++right) {
            // Add the current element to the current sum
            currentSum += nums[right];
            
            // Check if the cost to make all elements in the window nums[right] exceeds k
            while ((long long)nums[right] * (right - left + 1) - currentSum > k) {
                // Shrink the window from the left
                currentSum -= nums[left];
                ++left;
            }
            
            // Update the maximum frequency of elements in the current window
            maxFreq = max(maxFreq, right - left + 1);
        }
        
        return maxFreq;
    }
};