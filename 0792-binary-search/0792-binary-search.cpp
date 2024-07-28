class Solution {
public:
    int search(vector<int>& a, int x) {
         int low = 0, high = a.size() - 1; 
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == x)
        {
            return mid;
        }
        else if (x > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
    }
};