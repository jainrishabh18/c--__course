


//prefix sum concept used 




//............Kadane's Algorithm.........vvvvvimp.................

// arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {

        // Your code 
    
        int sum=0;
        // INT_MIN here because if all values are -ve in sub array 
        //then the min value among the ive array is printed 
        int max_sum=INT_MIN;
        for(int i=0; i<n;i++)
        {
            sum=sum+arr[i];
            //we put max sub array in max_sum and change if we get higher value of sum
            //till the max subarray is found 
            if(max_sum<sum)
            {
                max_sum=sum;
            }
            // this line tells us that whenever the sum of sub array is -ve
            // then there is no use of that subarray hence we don't take that subarray and
            // make sum = 0 again start to check for the max sub_array
            if(sum<0)
            {
                sum=0;
            }
        }
        return max_sum;
        
        
        
    }
//..............................


//subarray with sum 0

bool subArrayExists(int arr[], int n)
    {
        //Your code here
        //agar presum ki value repeat hori he dubara iska matlab he koi susbet aisa he array ka 
        //jo zero he us ki vajah se he repeat horha he pre_sum ki value and agar aisa hota he toh
        //zero sum vali subarray present he iska matlab 
        unordered_set<int>s;
        int pre_sum=0;
        for(int i=0;i<n;i++)
        {
            pre_sum +=arr[i];
            //s.insert(pre_sum);
            if(pre_sum==0)
                return true;
            if(s.find(pre_sum)!=s.end())
                return true;
                //we will only add value to the set if it is not present in the set already
                //agar value set me present he aur dubara se vo value ayi he pre_sum ki tab apan true islea 
                //return karayga kuki hume sum 0 wala susbet milgaya he.
            s.insert(pre_sum);
        }
        return false;
        
    }


//................................................................

//....Subarrays with sum K ................


//  dry run is  done in copy of imp question
int findSubArraySum(int arr[], int N, int k)
    {
        // code here
        unordered_map<int,int>mp;
        int count=0;
        int cur_sum=0;
        for(int i=0;i<N;i++)
        {
            cur_sum +=arr[i];
            if(cur_sum==k)
                count++;
            if(mp.find(cur_sum-k) !=mp.end())
                count +=mp[cur_sum-k];
            mp[cur_sum]++;
                
        }
        return count;
    }

///.................................................................



//////////........Longest Sub-Array with Sum K


int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        // for proper understanding of how code works
        // dry run is done in imp concept copy maintained
        unordered_map<int,int>mp;
        int curr_sum=0 , res=0;
        for(int i=0;i<N;i++)
        {
            curr_sum += A[i];
            if(curr_sum == K){res=i+1;}
            
            
    //this if is used to insert key value pair that are not repeating in map
            if(mp.find(curr_sum)==mp.end())
                mp.insert({curr_sum,i});
                
    //this if is used  to check if (cur_sum-k) is present in map or not if present then 
    // curr_sum ka  'i' jo he usme se  (curr_sum-k) ka jo i hota he vo minus kardega
    //aur last res me jo value save he uske sath max function chalayenga
    // i.e --> res=max(res,i-mp[curr_sum-K])
            if(mp.find(curr_sum-K) !=mp.end())
                res= max(res,i-mp[curr_sum-K]);

        }return res;
    }



//........Equilibrium Point


int equilibriumPoint(long long a[], int n) {
        
        int sum=0;
        //sum here will return total sum of the array i.e  13 in case of array {1,3,5,2,2}
        //after finishing the whole loop
        for(int i=0;i<n; i++)     //{1,3,5,2,2}
        {    
            sum += a[i];          //{1,4,9,11,13}
        }
            
        int left_sum=0;  
        for(int i=0;i<n;i++)
        {
              sum  -= a[i];      //13-1=12   12-3=9  9-5=4
          
              if(left_sum == sum)  //0==12   1==9    4==4
                return i+1;         //               i=2 but for this  ques i=> 2+1=3 bcz if we see output i+1 output is required
              left_sum  += a[i];  //0+1=1     1+3=4     
        }
        return -1;
         
    }           