#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> temp(m);

        for(int i = 0; i < m; i++) {
            temp[i] = nums1[i];
        }

        int n1 = 0, n2 = 0, k = 0;

        while(n1 < m && n2 < n) {
            if(temp[n1] < nums2[n2]) {
                nums1[k++] = temp[n1++];
            } else {
                nums1[k++] = nums2[n2++];
            }
        }

        while(n1 < m) {
            nums1[k++] = temp[n1++];
        }

        while(n2 < n) {
            nums1[k++] = nums2[n2++];
        }
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    Solution solution;
    solution.merge(nums1, m, nums2, n);

    for (int i = 0; i < nums1.size(); i++) {
        cout << nums1[i];
        if (i + 1 < nums1.size()) {
            cout << ' ';
        }
    }
    cout << '\n';

    return 0;
}   