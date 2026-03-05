#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq;

        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }

        for(auto it:freq)
        {
            if(it.second==1)
                return it.first;
        }

        return -1;
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    cout << sol.singleNumber(nums) << endl;

    return 0;
}