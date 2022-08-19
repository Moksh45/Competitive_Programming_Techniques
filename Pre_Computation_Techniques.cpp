// Given T Test cases and in each test case a number N print Its factorial for each test case
// constraints
// 1 <= T <= 10^5
// 1 <= N <= 10^5

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int fact = 1;
//         for (int i = 2; i <= n; i++)
//         {
//             fact = fact * i;
//         }
//         cout << fact << endl;
//     }
// }

// time complexity of this code is O(n^2) and give TLE

// Solution

// Pre Computation Teqniques

#include <bits/stdc++.h>
using namespace std;
const int N = 10e5;
int Fact[N];
int main()
{
    Fact[0] = 1;
    Fact[1] = 1;
    for (int i = 2; i < N; i++)
    {
        Fact[i] = Fact[i - 1] * i;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << Fact[n] << endl;
    }
}

// Time complexity of this code is O(n)