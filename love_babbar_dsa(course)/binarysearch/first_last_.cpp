    #include<iostream>
    using namespace std;


    int first_occurence(int nums[],int n, int target)
        {
            int start=0;
            int end=n-1;
            int mid= start +(end-start)/2;
            int ans=-1;
            
            while(start<=end)
            {
                if(nums[mid]==target)
                {
                    ans=mid;
                    end=mid-1;
                }
                else if(target>nums[mid])
                {
                    start=mid+1;
                }
                else if(target<nums[mid])
                {
                    end=mid-1;
                }
                mid= start +(end-start)/2;
            }
            return ans;
         }
        
        
        
        int last_occurence(int nums[],int n, int target)
        {
            int start=0;
            int end=n-1;
            int mid= start +(end-start)/2;
            int ans=-1;
            
            while(start<=end)
            {
                if(nums[mid]==target)
                {
                    ans=mid;
                    start=mid+1;
                }
                else if(target>nums[mid])
                {
                    start=mid+1;
                }
                else if(target<nums[mid])
                {
                    end=mid-1;
                }
                mid= start +(end-start)/2;
            }
            return ans;
        }

        int main()
        {
            int nums[7]={1,2,2,2,2,2,5};
            // int n = 7;
            // int target =2

            //  first_occurence(nums,7,2);
            // last_occurence(nums,7,2);

            cout<<"First occurence: "<< first_occurence(nums,7,2) << endl;
            cout<<"Last occurence: "<< last_occurence(nums,7,2) << endl;

                
        }