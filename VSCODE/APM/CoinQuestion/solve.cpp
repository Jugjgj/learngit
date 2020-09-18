#include<iostream>
#include<algorithm>
using namespace std;
int C[6];
int A(0);
const int V[6] = {1, 5, 10, 50, 100, 500};

void INPUT();
int SOLVE();

int main()
{
    int res;
    INPUT();
    res=SOLVE();
    cout << res;
    return 0;
}


void INPUT()
{
    cout << "input A" << endl;
    cin >> A;
    cout << "input the number of coins" << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> C[i];
    }
}
int SOLVE()
{
    int res(0);
    for (int i = 5; i >= 0; i--)
    {
        int N = min(A / V[i], C[i]);
        A -= V[i] * N;
        res += N;
    }
    return res;
}