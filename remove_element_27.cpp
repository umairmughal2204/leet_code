// Remove Element (LeetCode 27)
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int s= nums.size();
        if(s==0)
        {
            return 0;
        }
        for(int i=0;i<s;i++)
        {
            if(nums[i]==val)
            {
                for(int j=i;j<s-1;j++)
                {
                nums[j]=nums[j+1];
                }
                i--;
                s--;
            }     
        }
        return s;
    }
};

int main() {
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    Solution solution;
    int k = solution.removeElement(nums, val);

    cout << "k = " << k << '\n';
    cout << "nums = [";
    for (int i = 0; i < k; i++) {
        cout << nums[i];
        if (i < k - 1) {
            cout << ", ";
        }
    }
    cout << "]\n";

    return 0;
}