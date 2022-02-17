class Solution {
    
private:
//     checking of count are equal or not
    bool checkEqual(int a[26],int b[26])
    {
        for(int i=0; i<26; i++)
        {
            if(a[i] != b[i])
            {
                return 0;
            }
            
        }return 1;
            
    }
    
public:
    bool checkInclusion(string s1, string s2) 
    {
        // storing count of characters in string 1
        int count1[26]={0};
        
        for(int i=0; i<s1.length(); i++)
        {
            // giving us the index of the character where we have to inc the count 
            int index =s1[i] - 'a';
            count1[index]++;
        
        }
        // we have to traverse window of length s1 in string 2 and compare count2(s2) with count1(s1) 
        // if count equal return true else continue taversing window in s2 

        int windowSize =s1.length();
        int i=0;
        int count2[26]={0};

        // traversing  first window
        while(i < windowSize && i<s2.length())
        {
            int index = s2[i] -'a';
            // storing count of each char in s2
            count2[index]++;
            i++;

            if(checkEqual(count1,count2))
                return 1; //true
   
        }

        while(i< s2.length())
        {
            int newChar = s2[i];
            int index = newChar -'a';
            count2[index]++;

            int oldChar = s2[i-windowSize];
            index = oldChar -'a';
            count2[index]--;

            i++;
            if(checkEqual(count1,count2))
                return 1; //true
        }

        return 0;
    }
};