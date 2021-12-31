#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, f1, f2, t;
    cin >> n;
    f1 = 1;
    f2 = 2;
    vector<int> arr(n, 0);
    for (int i = 1; i <= n; i++)
    {
        t = f1;
        f1 = f2;
        f2 = f2 + t;
        arr[i - 1] = f2;
    }
    return 0;
}