class Solution 
{
public:

    int first(vector<int>& nums, int target)
    {
        int s = 0;
        int e = nums.size() -1;
        int mid;
        int ans = -1 ;
        while(s<=e)
        {
            mid = s+ (e-s/2);
            if(nums[mid] == target)
            {
                ans = mid;
                e = mid-1;
                
            }   
            else if(nums[mid] < target)
            {
                s = mid +1;
            }
            else
            {
                e = mid-1;
            }

        }
        return ans;
    }
    
    
    
    int last(vector<int>& nums, int target)
    {
        int s = 0;
        int e = nums.size() -1;
        int mid;
        int ans = -1;
        while(s<=e)
        {
            mid = s+ (e-s/2);
            if(nums[mid] == target)
            {
                ans = mid;
                s = mid+1;
                
            }   
            else if(nums[mid] < target)
            {
                s = mid +1;
            }
            else
            {
                e = mid-1;
            }

        }
        return ans;
    }
    
    
    
    
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int>result;
        result.push_back(first(nums,target));
        result.push_back(last(nums,target));
        return result;
    }
    
};