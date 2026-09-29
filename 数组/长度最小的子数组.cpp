#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int min(int s ,vector<int>& nums)
    {
        int result = INT32_MAX;
        int sum = 0;
        int subLength = 0;
        for (int i =0; i < nums.size(); i++ )
        {
            sum = 0;
            for(int j = i; j<nums.size();j++)
            {
                sum +=nums[j];
                if(sum>=s)
                {
                    subLength = j - i + 1;
                    result = result < subLength ? result : subLength;
                    break;
                }
            }
        }
        return result == INT32_MAX ?  0 : result;
    }
    int min2(int s,vector<int>& nums){
        int result = INT32_MAX;
        int sum = 0;
        int i = 0;
        int subLength = 0;
        for(int j =0;j<nums.size();j++)
        {
            sum = sum + nums[j];
            while(sum >= s)
            {
                subLength = j-i+1;
                result = result < subLength?result : subLength;
                sum = sum-nums[i];
                i++;
            }
        }
        return result == INT32_MAX ? 0 : result;
    }
};

int main(){
    Solution S;
    int s =7;
    vector<int> nums = {2,3,1,2,4,3};
    int result = S.min2(s,nums);
    cout << result << endl;
}