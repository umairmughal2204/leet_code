#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         unordered_map<int,int> freq;

//         for(int i=0;i<nums.size();i++)
//         {
//             freq[nums[i]]++;
//         }

//         for(auto it:freq)
//         {
//             if(it.second==1)
//                 return it.first;
//         }

//         return -1;
//     }
// };

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int ans = 0;

        for(int i=0;i<nums.size();i++)
        {
            ans = ans ^ nums[i];
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};

    Solution sol;
    cout << sol.singleNumber(nums) << endl;

    return 0;
}