// Given array a of n interger. Given Q Quesies and in each query L and  R print sum of array element from index L To R (L, R include)

// Constraints
// 1 <= N <= 10^5
// 1 <= a[i] <=10^5
// 1 <= Q<= 10^5
// 1 <= L, R <=N

#include <bits/stdc++.h>
using namespace std;
const int N = 10e5;
long long int arr[N];
int a[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        arr[i] = arr[i-1] + a[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << abs(arr[r] - arr[l-1]) << endl;
    }
}