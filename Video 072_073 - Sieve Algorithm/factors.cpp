#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 7;
vector<bool> isPrime(N, 1);
vector<int> lowestPrime(N, 0), highestPrime(N);

int main()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i])
        {
            lowestPrime[i] = highestPrime[i] = i;
            for (int j = 2 * i; j < N; j += i)
            {
                isPrime[j] = false;
                highestPrime[j] = i;
                if (lowestPrime[j] == 0)
                    lowestPrime[j] = i;
            }
        }
    }
    for (int i = 1; i < 10; i++)
        cout << lowestPrime[i] << " " << highestPrime[i] << endl;
    int nums;
    cin >> nums;
    vector<int> primeFactors;
    while (nums > 1)
    {
        int primeFactor = highestPrime[nums];
        while (nums % primeFactor == 0)
        {
            nums /= primeFactor;
            primeFactors.push_back(primeFactor);
        }
    }
    for (auto factor : primeFactors)
        cout << factor << " ";
}