class Solution {
public:
    int mySqrt(int x) 
    {
        if (x == 0) return 0; // Handle the edge case for 0

        int s = 1;
        int e = x;
        int ans = 0; // Initialize ans to 0
        
        while (s <= e )
        {
            int m = s + (e - s) / 2;
            if (m <= x/m ) // Avoid overflow by using division
            {
                ans = m;
                s = m + 1;
            }
            else
            {
                e = m - 1;
            }
        }
        return ans;
    }
};
