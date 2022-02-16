/*link: https://practice.geeksforgeeks.org/problems/find-first-repeated-character4108/1/#*/

#include <iostream>
#include <string>
#include <map>

using namespace std;
// class is user defined datatype
class solve
{
    // Access specifier
public:
    string s;

    string firstRepChar()
    {

        map<char, int> mp;

        string ans;
        for (int i = 0; i < s.size(); i++)
        {

            mp[s[i]]++;

            if (mp[s[i]] > 1)
            {
                ans = s[i];
                return ans;
            }
        }

        return "-1";
    }
};

int main()
{
    solve obj;
    cin >> obj.s;
    cout << obj.firstRepChar() << endl;
    return 0;
}