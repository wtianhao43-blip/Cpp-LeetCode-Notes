#include <iostream>
#include <vector>
using namespace std;
// ×ó±ÕÓÒ±Õ
class Solution{
public:
    int search(vector<int>& nums,int target){
        int left = 0;       //×óÇø¼äË÷Òı
        int right = (int)nums.size()-1;
        while(left <=right)
        {
            int middle = left + ((right - left)/2);
            if(nums[middle] >target){
                right = middle - 1;
            }
            else if(nums[middle]<target){
                left = middle +1;
            }
            else 
            {
                return middle;
            }
        }
        return -1;
    }
};
// ×ó±ÕÓÒ¿ª
class Solution2{
public:
    int search(vector<int>& nums,int target){
        int left = 0;
        int right = nums.size();
        while(left <right){
            int middle = left + ((right - left)/2);
            if(nums[middle]<target){
                left = middle + 1;    
            }
            else if(nums[middle]>target){
                right =middle;
            }
            else{
                return middle;
            }
        }
        return -1;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    cout << sol.search(nums, target) << endl;
    
    Solution2 sol2;
    int target2 = 3;
    cout << sol2.search(nums,target2)<<endl; 
    return 0;
}