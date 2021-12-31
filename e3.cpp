#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief
 *
 * @param a  array witch we need to search in that
 * @param x what we looking for
 * @param n length of array
 * @return int index of element (~ -1 if not found)
 */
int myFind(vector<int> a, int x, int n)
{
    for (int i; i < n; i++)
    {
        if (a[i] == x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n = 1;
    cin >> n;
    vector<int> arr(n, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << myFind(arr, 5, n);
    return 0;
}
