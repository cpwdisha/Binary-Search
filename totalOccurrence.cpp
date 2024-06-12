#include <iostream>
using namespace std;
int firstOccurrence(int arr[], int key)
{
    int s = 0;
    int e = 9;
    int m = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[m] == key)
        {
            ans =  m;
            e = m-1;
        }
        else if(arr[m] > key)
        {
            e = m-1;
        }
        else if(arr[m] < key)
        {
            s = m+1;
        }
        m = s + (e-s)/2;
    }
    return ans;
}

int lastOccurrence(int arr[], int key)
{
    int s = 0;
    int e = 9;
    int m = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[m] == key)
        {
            ans = m;
            s = m+1;
        }
        else if(arr[m] > key)
        {
            e = m-1;
        }
        else if(arr[m] < key)
        {
            s = m+1;
        }
        m = s + (e-s)/2;
    }
    return ans;
}
// int totalOccurrence(int arr[], int key)
// {
//     int s = 0;
//     int e = 9;
//     int m = s + (e-s)/2;
//     int count = 0;
//     while(s<=e)
//     {
//         if(arr[m] == key)
//         {
//             count ++;
//             if(m-1 == key)
//             {
//                 e = m-1;

//             }
//             if(m+1 == key)
//             {
//                 count++;
//                 s = m+1;
//             }

//         }
//         else if(arr[m] < key)
//         {
//             s = m+1;
//         }
//         else if (arr[m] > key)
//         {
//             e = m-1;
//         }
//         m = s + (e-s)/2;
//     }
// }

int main()
{
    int arr[10] = {4, 4, 8, 8, 8, 15, 16, 23, 23, 42};
    int target = 8;
    int a = firstOccurrence(arr, target);
    int b = lastOccurrence(arr, target);
    int count = b - a + 1;
    cout << count;
}