//  my approach  cood not running just here to sav this code to know what was wrong 


// int allocateBooks(vector<int> arr, int n, int m)
// {
//     // Write your code here.
//     int s=0; 
//     int e=n-1;
//     int mid = s +(e-s)/2;
//     int leftsum=0;
//     int rightsum=0;
//     vector<int>v;
    
//     while(s<=e)
//     {
// //         mid-1<mid &&
//         if(mid>=0 && mid<mid+1)
//         {
//             e=mid-1;
//         }
//         else
//     	for(int i=0; i<mid;i++)
//         {
//             leftsum +=arr[i];
//         }
//         for(int i=mid; i<=n-1;i++)
//         {
//             rightsum +=arr[i];
//         }
//         int maxi =max(leftsum,rightsum);
//         v.push_back(maxi);
        
//     }
// }
#include<bits/stdc++.h>
using namespace std;


vector<int> landEntrance(int N, vector<pair<string,int>>&vec1 , vector<string>&num)
{
  	map<string,long int> emo;
	emo["Happy"]=10, emo["Sad"]=5, emo["Neutral"]=2, emo["None"]=1;
	long int primeNum[]={0,0,1,1,0,1,0,1,0,0};
	string numbers[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten"};

  
  	for(long int i=0;i<N;i++)
	{
		long int cnt = 0;
		for(auto x:vec1[i].first)
		{
			if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') cnt++;
		}
		ans2 += (cnt*vec1[i].second);
	}
}

// int main()
// {
	
// 	long int N,ans1=0,ans2=0;
// 	cin>>N;
// 	vector<pair<string,long int>> vec1;
// 	for(long int i=0;i<N;i++)
// 	{
// 		string s;
// 		cin>>s;
// 		long int n=s.size();
// 		vec1.push_back(make_pair(s.substr(1,n),s[0]-'0'));
// 	}
// 	VECTOR<string> num[N];
// 	for(long int i=0;i<N;i++)
// 	{
// 		cin>>num[i];
//       	ans1 += mood[num[i]]*vec1[i].second;
		
// 	}
	
// 	long int sol = (ans1 > ans2)?floor(ans1/ans2):floor(ans2/ans1);
// 	if(prime[sol]) cout<<"Yes "<<number[sol];
// 	else cout<<"No "<<number[sol];

// 	return 0;
// }