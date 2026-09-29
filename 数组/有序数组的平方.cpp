#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution{
public:
    vector<int> sortedSquares(vector<int>& A){
        for(size_t i = 0;i < A.size();i++){
            A[i] *= A[i];
        }
        sort(A.begin(),A.end()); // ¿ìËÙÅÅÐò
        return A;
    }
};

class Solution1{
public:
    vector<int> sortedSquares(vector<int>& A){
        int k = A.size() -1;
        vector<int> result(A.size(),0);
        for(int i=0,j=A.size()-1;i<=j;)
        {
            if(A[i]*A[i] <A[j]*A[j])
            {
                result[k--] = A[j]*A[j];
                j--;
            }
            else{
                result[k--] = A[i]*A[i];
                i++;
            }
        }
        return result;
    }
};

int main()
{
    Solution S;
    vector<int> array ={-4,-1,2,3,10};
    vector<int> result = S.sortedSquares(array);
    for(int x: result)
    {
        cout << x << " ";
    }
    return 0;
}