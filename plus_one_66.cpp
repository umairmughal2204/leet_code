#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size()-1]!=9)
        {
            digits[digits.size()-1]=digits[digits.size()-1]+1;
            return digits;
        }
        else
        {
            int ptr=0;
            for(int i=digits.size()-1;i>=0;i--)
            {
                if(digits[i]==9)
                {
                    digits[i]=0;
                    ptr=i;
                }
                else
                {
                    ptr=i;
                    break;
                }
            }
            if(digits[ptr]==0)
            {
                digits.insert(digits.begin(), 1);
            }
            else
            {
                digits[ptr]=digits[ptr]+1;
            }

        }
        return digits;
    }
};

int main() {
    vector<int> digits = {1, 2, 3};

    Solution solution;
    vector<int> result = solution.plusOne(digits);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i + 1 < result.size()) {
            cout << ' ';
        }
    }
    cout << '\n';

    return 0;
}