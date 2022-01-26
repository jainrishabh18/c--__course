

//...Complete the function kLargest() that 
//...takes the array, N and K as input parameters and returns a list of k largest element in descending order

vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        vector<int>save;
        //we add a third perameter " greater<int() " when we want to sort an array in descending order>
        sort(arr,arr+(n),greater<int>());
        //n= arr[n-1];
        for(int i=0; i<k;i++)
        {
            save.push_back(arr[i]);
        }
        return save;
         


    }


//.........


//...Kth smallest element..
//.. both methods are correct

int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        sort(arr,arr+(r+1),greater<int>());
        k = arr[k-1];
        return k;
        
        
    }



int kthSmallest(int arr[], int l, int r, int k) {
        //code here
         priority_queue<int>max;
         for(int i=0;i<=r;i++)
         {
             max.push(arr[i]);
             if(max.size()>k)
             {
                 max.pop();
             }
         }
         return max.top();
        
        
    }




///..........


//....Sort an array of 0s, 1s and 2s 


void sort012(int arr[], int n)
    {
        // coode here 
        int zero=0;
        int one=0;int two=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                zero++;
            }
            if(arr[i]==1)
            {
                one++;
            }
            if(arr[i]==2)
            {
                two++;
            }
        }
        int i=0;
        while(zero--)
         {
            arr[i]=0;
            i++;
         }
        while(one--)
         {
            arr[i]=1;
            i++;
         }
        while(two--)
         {
            arr[i]=2;
            i++;
         }
    }



//........Move all negative elements to end //////


void segregateElements(int arr[],int n)
   {
    //int m = n;
    int duplicate[n];
    int j=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            duplicate[j]=arr[i];
            j++; //to increase the count after every insertion in duplicate[m]
        }
    }
    //till here all the positive values are stored in temp;
    
    //now after all positive integer all the negative values will be stored in the array;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            duplicate[j]=arr[i];
            j++;
        }
        
    }
    // we initialise this  j=0  because if we wont do that iteration will
    //start after first 2 loops so j=o to start copying value of array;
    j=0;
    for(int i=0;i<n;i++)
    {
        arr[i]=duplicate[j];
        j++;
    }
    
    
   }
    
///......................////





//......Union of two arrays .../////

int doUnion(int a[], int n, int b[], int m)
    {
        //code here
        
        // we used sets here because set do not allow duplicacy and store value
        // in sorted manner.
        set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            s.insert(b[i]);
        }
        int size_of_set=s.size();
        return size_of_set;
        
    }


///........Cyclically rotate an array by one ......................    


void rotate(int arr[], int n)
{
   int temp = arr[n-1];
   //here we started the loop from back because we want to add the the value at a[0] if
   // we have to put the value  at end of  the loop then we must have gone the normal way from 0
   for (int i=n-1; i>0; i--) {
       arr[i] = arr[i-1];
   }
   arr[0] = temp;
   
}

//................................................................

 
//Easy Accuracy: 41.59% Submissions: 80405 Points: 2
//Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.

    int getPairsCount(int arr[], int n, int k)
    {
        unordered_map<int, int> m;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (m.find(k - arr[i]) != m.end()) {
                count += m[k - arr[i]];
            }
            m[arr[i]]++;
        }
        return count;
    }

//......

//  Array Subset of another array in


//Your Task:  
//You don't need to read input or print anything. Your task is to complete the function isSubset() which takes the array a1[],
// a2[], its size n and m as inputs and return "Yes" if arr2 is subset of arr1 else return "No" if arr2 is not subset of arr1.
//
//Expected Time Complexity: O(n)
//Expected Auxiliary Space: O(n)

string isSubset(int a1[], int a2[], int n, int m) 
{
    unordered_set<int>s;
    string str;
   for(int i=0;i<n;i++)
   {
     s.insert(a1[i]);  
   } 
   for(int j=0;j<m;j++)
   {
       if(s.find(a2[j]) ==s.end())
       {
           return "No";
       }
       
   }
   return "Yes";
}



//............ Maximum Product Subarray

//Medium Accuracy: 29.84% Submissions: 85494 Points: 4
//Given an array Arr[] that contains N integers (may be positive, negative or zero). Find the product of the maximum product subarray.
//Input:
//N = 5
//Arr[] = {6, -3, -10, 0, 2}
//Output: 180
//Explanation: Subarray with maximum product


long long maxProduct(vector<int> arr, int n) 
	{
	    // code here
	     long long minVal = arr[0];
         long long maxVal = arr[0];
         long long maxProduct = arr[0];
    
        for (int i = 1; i < n; i++) {
              long long it=arr[i];
    
            // When multiplied by -ve number,
            // maxVal becomes minVal
            // and minVal becomes maxVal.
            //  { -1, -3, -10, 0, 60 };
            //  {2, 3, 4, 5, -1, 0}
            if (it < 0)
                swap(maxVal, minVal);
    
            // maxVal and minVal stores the
            // product of subarray ending at arr[i].
            maxVal = max(it, maxVal * it);
            minVal = min(it, minVal * it);
    
            // Max Product of array.
            
            maxProduct = max(maxProduct, maxVal);
        }
    
        // Return maximum product found in array.
        return maxProduct;
	    
	}



//................................................
//Longest consecutive subsequence 
//
//Example 1:
//
//Input:
//N = 7
//a[] = {2,6,1,9,4,5,3}
//Output:
//6
//Explanation:
//The consecutive numbers here
//are 1, 2, 3, 4, 5, 6. These 6 
//numbers form the longest consecutive
//subsquence.
//
//Expected Time Complexity: O(N).
//Expected Auxiliary Space: O(N).



int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      sort(arr,arr+N);
      int count=0;
      int max_count=0;
      for(int i=1;i<N;i++)
      {
          if(arr[i]-arr[i-1]==1)
          {
              count=count+1;
          }
          if(arr[i]-arr[i-1]==0)
          {
              continue;
              //count=count;
          }
          if(arr[i]-arr[i-1]>1)
          {
              count=0;
          }
          
          
          max_count=max(max_count,count);
          
      }
      return max_count+1;
      
      
    }
