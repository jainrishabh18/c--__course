/*
#include <iostream>
#include<assert.h>
using namespace std;
char nth_letter(int n)
{   
    n=n+1;
    assert(n >= 0 && n <= 26);
    //cout<< "abcdefghijklmnopqrstuvwxyz"[n -1];
    if(n<=26)
    {
        cout << "abcdefghijklmnopqrstuvwxyz"[n-1];
    }
    //else if (n=25)
    //{
      //  cout<<"z" ;  
    //}
    
    
}

int main(){
    int n;
    cout<<"enter a num:\n";
    cin>>n;
    nth_letter(n);
    
    return 0;
}*/




#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	
	char x[1000];
	int t,leng,i,instr_count=0;
	cin>>t;
	while(t--)
	{
		instr_count=2;
		
		cin>>x;
		leng=strlen(x);
		for(i=1;i<leng;i++)
		{
			
			if(x[i]>x[i-1])
			  instr_count=instr_count+(x[i]-x[i-1])+1;
			else if(x[i]==x[i-1])
			   instr_count=instr_count+1;
			 else
			    instr_count=instr_count+('z'-x[i-1]+x[i]-'a')+2;
			   
		}
		
		if(instr_count<=(leng*11))
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
			
	}		
	
	
	return 0;
	}