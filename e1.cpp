#include <iostream>

using namespace std;

int main()
{
    int n = 1;
    cin >> n;
    int sum;
    for (int i; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        sum += tmp;
    }
    cout << sum / n;

    return 0;
}