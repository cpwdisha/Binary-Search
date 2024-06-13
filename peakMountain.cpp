#include <iostream>
using namespace std;
#include <vector>

int findPeak(vector <int> mountain)
{
    int s = 0;
    int e = mountain.size() - 1;
    int ans;
    int m = s + (e-s)/2;

    while(s<e)
    {
        
        if(mountain[m-1] < mountain[m] && mountain[m+1]< mountain[m])
        {
            ans = m;
        }
        else if(mountain[m-1] < mountain[m] && mountain[m+1] > mountain[m])
        {
            s = m+1;
        }
        else if(mountain[m-1] > mountain[m] && mountain[m+1] < mountain[m])
        {
            e = m-1;
        }
        m = s + (e-s)/2;
    }
    return ans;
}
int main()
{
    vector <int> mountain = {1,2,3,4,3,2,2};
    cout << findPeak(mountain);


}