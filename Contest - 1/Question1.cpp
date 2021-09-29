#include <iostream>
using namespace std;

int main()
{
    string s, str;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (islower(s[i]))
            str.push_back(toupper(s[i]));
        if (s[i] == ' ')
            str.push_back('\n');
    }
    cout << str;
    return 0;
}