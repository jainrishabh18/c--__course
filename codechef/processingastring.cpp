#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        //cout<<" enter a string "<<endl;
        cin >> s;
        string num;
        for (int i = 0; i < s.length(); i++)
        {
            //char c =s.at(i);
            if (isdigit(s[i]))
            {
                num.push_back(s[i]);
            }
        }
        //cout<< num <<"  ";
        // cout << endl; //
        //num -> 123234
        int sum = 0;
        for (int i = 0; i < num.size(); i++)
        {
            int n = num.at(i) - 48; // Ascii value of '0' is 48
            sum += n;
        }
        cout << sum << endl;
        // int numtoint =stoi(num);
        // cout<< numtoint <<endl;
    }

    return 0;
}

