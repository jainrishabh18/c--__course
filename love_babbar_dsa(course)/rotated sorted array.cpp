#include<iostream>
using namespace std;
int findPivot(vector<int>& nums, int n)
{
    int s=0;
    int e=n-1;
    int mid = s +(e-s)/2;
    while(s<e)
    {
        if(nums[mid] >= nums[0])
        {
            s=mid+1;
        }
        // (arr[mid]<arr[0])
        // not mid-1 bcz we want pivot index
        else
        {
            e=mid;
        }
        mid = s +(e-s)/2;
    }
    return s;
}

int binarysearch(vector<int>& nums ,int start, int end, int target)
{
    int s=start;
    int e=end;
    int mid = s + (e-s)/2;
    
    while(s<=e)
    {
        if(nums[mid]==target)
        {
            return mid;
        }
        if(target > nums[mid])
        {
            start = mid +1;
        }
        else 
        {
            end = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
    
}

int search(vector<int>& nums, int target) 
{
    int n =nums.size();
    int pivot = findPivot( nums,  n);
    if(nums[pivot]<=target && target<=nums[n-1])
    {
        return binarysearch(nums, pivot, n-1, target);
    }
    else
    {
        return binarysearch(nums, 0, pivot-1, target);
    }
}


int main()
{}
