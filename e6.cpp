#include <iostream>
using namespace std;
float matrixA[10][10];
float matrixB[10][10];
float matrixC[10][10];
int mAc;
int mAr;
int mBc;
int mBr;
int mCc;
int mCr;
void print()
{
    cout << endl;
    for (int i = 0; i < mCr; i++)
    {
        for (int j = 0; j < mCc; j++)
        {
            cout << matrixC[i][j] << "   ";
        }
        cout << endl;
    }
}
void jam()
{
    cout << "\nJAM:";
    if (mAc != mBc || mAr != mBr)
    {
        cout << "\ntedad sotoon va ya satr dar matrise A va B barabar nist";
        return;
    }
    mCc = mAc;
    mCr = mAr;
    for (int i = 0; i < mCr; i++)
    {
        for (int j = 0; j < mCc; j++)
        {
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    print();
}
void zarb()
{
    cout << "\nZARB:";
    if (mAc != mBr)
    {
        cout << "\nntedad sotoon A barabar ba tedad satre B nist";
        return;
    }
    mCc = mBc;
    mCr = mAr;

    float t = 0;
    for (int i = 0; i < mCr; i++)
        for (int j = 0; j < mCc; j++)
        {
            matrixC[i][j] = 0;
            for (int z = 0; z < mAc; z++)
                matrixC[i][j] += matrixA[i][z] * matrixB[z][j];
        }
    print();
}
void tafrigh()
{
    cout << "\nTAFRIGH:";
    if (mAc != mBc || mAr != mBr)
    {
        cout << "\ntedad sotoon va ya satr dar matrise A va B barabar nist";
        return;
    }
    mCc = mAc;
    mCr = mAr;
    for (int i = 0; i < mCr; i++)
    {
        for (int j = 0; j < mCc; j++)
        {
            matrixC[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    print();
}
int main()
{
    cout << "A ra vared konid:\ntedad satr:\n";
    cin >> mAr;
    cout << "\ntedad sotoon:\n";
    cin >> mAc;
    for (int i = 0; i < mAr; i++)
    {
        for (int j = 0; j < mAc; j++)
        {
            cout << "\naraye A" << i + 1 << "," << j + 1 << " ra vared konid";
            cin >> matrixA[i][j];
        }
    }

    cout << "B ra vared konid:\ntedad satr:\n";
    cin >> mBr;
    cout << "\ntedad sotoon:\n";
    cin >> mBc;
    for (int i = 0; i < mBr; i++)
    {
        for (int j = 0; j < mBc; j++)
        {
            cout << "\naraye B" << i + 1 << "," << j + 1 << " ra vared konid";
            cin >> matrixB[i][j];
        }
    }
    cout << "\n1)jam\n2)tafrigh\n3)zarb \nbaghiye gozine ha)khorooj";
    while (true)
    {
        int t;
        cin >> t;
        if (t == 1)
            jam();
        else if (t == 2)
            tafrigh();
        else if (t == 3)
            zarb();
        else
            return 0;
        cin >> t;
    }
}
// Mohsen Poureiny
