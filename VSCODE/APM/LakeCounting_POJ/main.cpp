#include<iostream>
using namespace std;

//DEFINITION
#define MAX_N 100
#define MAX_M 100
char a[MAX_N][MAX_M];
int n(0), m(0);

//FUNCTIONS
void INPUT();
int COUNT(int i,int j);

//MAIN
int main()
{
    INPUT();
    cout<< COUNT(0,0)<<endl;
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
int COUNT(int i,int j)
{
    
    //it is w
    if (a[i][j]=='w')
    {
        COUNT(i, j + 1);
        COUNT(i, j - 1);
        COUNT(i + 1, j);
        COUNT(i - 1, j);
        COUNT(i - 1, j-1);
        COUNT(i - 1, j+1);
        COUNT(i + 1, j-1);
        COUNT(i + 1, j+1);
        
    }

    //it is .
    if(a[i][j]=='.')
    {
        if(j>m)
        {
            j = 0;
            COUNT(i + 1, j);
        }
        else
        {
            COUNT(i, j + 1);
        }
    }
}