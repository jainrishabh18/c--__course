class Solution {
public:
    
    char toLowercase(char ch)
    {
        if(ch >= 'a' && ch <= 'z')
            return ch;
        else
        {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
    
    bool isValid(char ch)
    {
        if( ch>='a' && ch <='z' || ch>='A' && ch <='Z' || ch>='0' && ch <='9')
            return 1;
        return 0;
    }
    
    
    bool isPalindrome(string s)
    {
        
        // string temp = "";
       int start =0;
       int end =s.size()-1;
       
        //     int n =s.size()
       while(start<end)
       {
	    // case 1 - when starting pointer is not alphanumeric
           if( !isValid(s[start]) )
               start++;
        //     case 2 - when ending pointer is not alphanumeric   
           else if( !isValid(s[end]) )
               end--;
        //  if start and end values are not same return false
           else if( toLowercase(s[start]) != toLowercase(s[end]) )
               return false;

           else
           {
        //     case 3 - when both pointers are alphanumeric   
              start++; 
              end--;
           }
	    }
        return true;     
        
        
        
    }
};