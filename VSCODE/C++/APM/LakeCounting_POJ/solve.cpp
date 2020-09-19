#include<iostream>
using namespace std;

#define MAX_N 100
#define MAX_M 100
char a[MAX_N][MAX_M];
int n(0), m(0);

void INPUT();
void DFS(int x,int y);

int main()
{
    int res(0);
    INPUT();
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < m;j++)
        {
            if(a[i][j]=='w')
            {
                DFS(i,j);
                res++;
            }
        }
    }
    cout << res<<endl;
    return 0;
}

void INPUT()
{
    cout << "please input the value of n and m\n";
    cin >> n >> m;
    cout << "please input the picture about water\n";
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < m;j++)
        {
            cin >> a[i][j];
        }
    }
}
void DFS(int x, int y)
{
    int nx(0), ny(0);
    a[x][y] = '.';

    for (int dx = -1; dx <= 1; dx++)
    {
        for (int dy = -1; dy <= 1;dy++)
        {
            nx = x + dx;
            ny = y + dy;
            if(nx>=0 && nx<m && ny>=0 && ny<n && a[nx][ny]=='w')
                DFS(nx, ny);
        }
    }
}