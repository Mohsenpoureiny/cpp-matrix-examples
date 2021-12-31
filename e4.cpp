#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n = 1;
    cin >> n;
    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int tmp_1, tmp_2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > tmp_1)
        {
            tmp_2 = tmp_1;
            tmp_1 = arr[i];
        }
    }
    cout << tmp_2;

    return 0;
}
