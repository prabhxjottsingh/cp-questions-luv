//iterative methid is fast as compared to recursive method for binary exponentiation
//Time Complxity: log(b)
//Approach: convert the power number into binary form and whereever the bit is set multiply the a at that bit to the ans and add
//at each iteraton (a = a*a)=> do this step

#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;

int binaryExponentiation(long long a, long long b)
{
    long long ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * a) % M;
        }
        a = (a * a * 1ll) % M;
        b = b >> 1;
    }
    return ans;
}

int main()
{
    cout << binaryExponentiation(3, 10);
}