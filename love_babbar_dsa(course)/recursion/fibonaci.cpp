class Solution {
public:
    int fib(int n)
    {

// recurssion

//        base case 
        if(n==0)
            return 0;
        if(n==1)
            return 1;
//    recurrence relation     
        // int ans = fib(n-1)+fib(n-2);
        // return ans;
				
				
		// recursion + dp
		
		long long int m = 1000000007;
        if(n<2)
        {
            return n;
        }


            
        int memo[n+1];
        
        for(long long int i=2; i<=n; i++)
        {
            memo[0]=0;
            memo[1]=1;
            memo[i] = memo[i-1]%m + memo[i-2]%m;
        }
				//  recursion bottom up 
				 
	    if(n<2)
        {
            return n;
        }
        int a =0 , b=1, c=0;
        for(int i=2; i<=n; i++)
        {
            c = a+b;
            a = b;
            b= c;
        }

    }
};