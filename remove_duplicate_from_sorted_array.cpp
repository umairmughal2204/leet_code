// Remove Duplicates from Sorted Array
#include <iostream>
#include <vector>

using namespace std;

// This function removes duplicates from a sorted array in-place and returns the new length of the array.
// using two pointers technique, one slow pointer to keep track of the position of the last unique element and one fast pointer to traverse the array.
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        int slow=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[slow])
            {
                slow++;
                nums[slow]=nums[i];
            }
        }
        return slow+1;
        
    }
};

int main() {
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    Solution solution;
    int k = solution.removeDuplicates(nums);

    cout << "k = " << k << '\n';
    cout << "nums = [";
    for (int i = 0; i < k; i++) {
        cout << nums[i];
        if (i < k - 1) cout << ", ";
    }
    cout << "]\n";

    return 0;
}