#include <bits/stdc++.h>
#include<string>
using namespace std;


int main()
{
    /*dekho idhar kya horaha ha hamna mano ak string dii ha  suppose 'ph'ab apan ya dekh raha ha ki abcd...z ma p konsa number pa ata ha to hamna notice kiya ki p in abcd comes at 16 ab humne m string(jo bytlandian language ma ha) pa jo 16 number pa ha usko add karna ha nayi string ma jis sa hum eng word bana lenga ab humko pata ha count 0 sa shuru hota ha to p= 16 ki jagah 15 pa ayga to hamna code us hisab sa likha ha   */
    int t;
    string m;
    cin>> t >> m;
    while(t>0)
    {
        string s;
        cin>>s;
        string result;
        for(int i=0; i<s.size();i++)
        {
            char c =s.at(i);
            int value = int(c);

            if(isupper(c))//isupper=to check whether the alphabets is in capital letters or not
            {
                int check =int (c) -64;
                /*now there can be doubt that why we subtracted 64 from asci value of c  because from
                65-90 there is ascii value of capital alphabets.for ex we take string s as 'PH' now 
                we checked in a..z   p comes at 16th place now we want to deduct something from asci value of that alphabet that gives us  16 and same for H it comes at 8th place in abcd so we choose 64  */
                result.push_back(toupper(m.at(check-1)));
            }
            else if (islower(c))//islower = to check whether the alphabets are in small letters or not
            {
                int check =int(c) - 96;
                /*here 96 as abcd in small alphabets in asci ranges from 97-122*/
                result.push_back(m.at(check-1)); 
            }
            else if ((value >=33 && value<=47) || (value >=58 && value<=64))
            {
                result.push_back(c);
            }
            else if (c =='_')
            {
                char ch = ' ';
                result.push_back(ch);
            }
        }
        cout<< result <<endl;
        t--;
        
        
        

    }

    
    return 0;
}