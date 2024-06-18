class Solution {
public:
    
    int pivot(vector <int>& nums)
    {
        int s = 0;
        int e = nums.size() - 1;
        
        while(s < e)
        {
            int m = s + (e-s)/2;
            if(nums[m]  > nums[e])
            {
                s = m+1;
            }
            else
            {
                e = m;
            }
        }
        return s;
    }
    
    bool bSearch( vector<int>& nums, int start, int end, int target) 
    {
        while (start <= end) {
            int m = start + (end - start) / 2;
            if (nums[m] == target) {
                return true;
            } else if (nums[m] < target) {
                start = m + 1;
            } else {
                end = m - 1;
            }
        }
        return false;
    }
    
    
    bool search(vector<int>& nums, int target) 
    {
       int pIndex = pivot(nums);
        if(target < nums[0])
        {
            return bSearch(nums, pIndex, nums.size()-1, target);
        }
        else
        {
            return bSearch(nums, 0, pIndex - 1, target);
        }
    }
};