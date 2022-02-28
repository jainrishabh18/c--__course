class Solution {
public:
    int compress(vector<char>& chars) 
    {
//         ans index gives the place where we have to store count in chars array
        int ansIndex=0;
        int i=0;
        int n= chars.size();
        
        while(i<n)
        {
            int j=i+1;
//             checking adjucent values are equal if yes then j++
            while(j<n && chars[i]==chars[j])
                    j++;
               // yaha kab aouga 
//             jab ya toh vector poora traverse kardiya
//             ya fer new/different character encounter kia hai
            
//             old char store karlo
            chars[ansIndex++]=chars[i];
            
            int count = j-i;
          
            if(count>1)
            {
//                 converting counting into single digit and saving in answer
                string cnt = to_string(count);
                for(char ch:cnt)
                  chars[ansIndex++] =ch;  
            }
// running for every value in chars array
            i=j;
            
        }
        return ansIndex;
    }
};




        