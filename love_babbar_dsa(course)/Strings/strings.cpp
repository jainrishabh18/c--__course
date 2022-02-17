char toLowercase(char ch){
    if(ch >= 'a' && ch <= 'z')
    	return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}


bool checkPalindrome(string s)
{
   int start =0;
   int end =s.size()-1;
   int i=0;
//     int n =s.size()
   while(start<end)
   {
	// case 1 - when starting pointer is not alphanumeric
       if( !isalnum(s[start]) )
           start++;
//     case 2 - when ending pointer is not alphanumeric   
       else if( !isalnum(s[end]) )
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