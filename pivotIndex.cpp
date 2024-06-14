#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int sum = 0;
        int ls = 0;
        int rs = 0;
        int index ;
        vector <int> cum;
        
        for(int i=0; i < nums.size(); i++)
        {
            sum += nums[i];
            cum.push_back(sum);
        }
        
        for(int i =0; i<nums.size(); i++)
        {
            if( i == 0)
            {
                ls = 0;
            }
            else
            {
                ls = cum[i - 1];
            }
            
            if( i == nums.size() - 1)
            {
                rs = 0;
            }
            else
            {
                rs = sum - cum[i];
            }
            
            if(rs == ls)
            {
                return i;
            }
        }
        return -1;
    }
};