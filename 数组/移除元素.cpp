#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int removeElement(vector<int>& nums,int val)
    {
        int size = nums.size();
        for(int i = 0;i<size;i++)
        {
            if(nums[i] == val)
            {
                for(int j = i+1;j<size;j++)
                {
                    nums[j-1] = nums[j];
                }
                size--;
                i--;
            }
        }
        return size;
    }
    int removeElement2(vector<int>& nums,int val)
    {
        int slowIndex = 0;
        for(int fastIndex =0;fastIndex<nums.size();fastIndex++)
        {
            if(nums[fastIndex] != val){
                nums[slowIndex] = nums[fastIndex];
                slowIndex ++;
            }
        }
        return slowIndex;
    }
};


int main()
{
    Solution sol;
    vector<int> nums ={2,2,3,2,1,4,2};
    cout << sol.removeElement2(nums,2)<<endl;
    return 0;
}