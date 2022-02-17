class Solution {
public:
    string removeOccurrences(string s, string part) 
    {
//       loop runs till stirng length is not 0 and part string  length is less then s string length   
        while(s.length() !=0 && s.find(part)<s.length())
        {
//             erase take 2 parameters starting index of string we want to remove and num of item we want to remove
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};