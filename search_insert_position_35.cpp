#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size= nums.size();
        int left=0;
        int right=size-1;
        int mid= (left+ right)/2;
            while(left<=right)
            {
                 mid= (left+ right)/2;
                if (nums[mid]==target)
                {
                return mid;
                }
                else if (nums[mid]>target)
                {
                    right= mid-1;
                }
                else
                {
                    left=mid+1;
                }
            }
            return left;
    }
};

int main() {
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    Solution solution;
    cout << solution.searchInsert(nums, target) << '\n';

    return 0;
}