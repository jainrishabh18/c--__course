

string replaceSpaces(string &str)
{
//     string temp = "";
    string s1 = "@40";
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == ' ')
    	{
//         str1.replace(pos,len of characer we are replacing ,str2);  
            str.replace(i , 1 , s1);
//         	temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
        }
//         else
//         {
//             temp.push_back(str[i]);
//         }
    }
	return str;
}