#include<queue>
#include<iostream>
using namespace std;

const int INF = 100000000;
typedef pair<int, int> P;

#define MAX_N 100
#define MAX_M 100
char maze[MAX_N][MAX_M];
int n, m;
int sx, sy;
int gx, gy;


int d[MAX_N][MAX_M];

// Four directions to move 
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void INPUT();
int bfs();

int main()
{
    INPUT();
    getchar();
    int res = bfs();
    cout << res;
    return 0;
}

//found out the shortest distance from (sx,sy) to (gx,gy)
int bfs()
{
    queue<P> que;
    //initiate all positions as INF.
    for(int i = 0; i < n;i++)
    {
        for (int j = 0; j < m;j++)
        {
            d[i][j]=INF;
        }
    }
    que.push(P(sx, sy));
    d[sx][sy] = 0;

    //Circulate untile the length of queue is 0.
    while (que.size())
    {
        P p = que.front();
        que.pop();
        //If this point is the last goal, then break.
        if (p.first==gx && p.second == gy)
            break;
        
        //Four directions circulation
        for (int i = 0; i < 4;i++)
        {
            int nx = dx[i] + p.first, ny = dy[i] + p.second;
            if (nx > 0 && nx < n && ny > 0 && ny < m && d[nx][ny] == INF && maze[nx][ny] != '#')
            {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }
    return d[gx][gy];
}
void INPUT()
{
    cout << "n = 10;m = 10;sx = 0;sy = 1;gx = 9;gy = 8;\n\n";
    n = 10;
    m = 10;
    sx = 0;
    sy = 1;
    gx = 9;
    gy = 8;

    maze[0][1] = '#';
    maze[0][2] = 'S';
    cout << maze[0][1] << maze[0][2];
    for (int i = 2; i < 8;i++)
    {
        maze[0][i] = '#';
        cout << maze[0][i];
    }
    maze[0][8] ='.';
    maze[0][9] = '#';
    cout << maze[0][8] << maze[0][9]<<endl;

    for (int i = 0; i < 6; i++)
    {
        maze[1][i] = '.';
        cout << maze[1][i];
    }
    maze[1][6] = '#';
    maze[1][7] = '.';
    maze[1][8] = '.';
    maze[1][9] = '#';
    cout << maze[1][6] << maze[1][7] << maze[1][8] << maze[1][9]<<endl;

    maze[2][0] ='.';
    maze[2][1] ='#';
    maze[2][2] ='.';
    maze[2][3] ='#';
    maze[2][4] ='#';
    maze[2][5] ='.';
    maze[2][6] ='#';
    maze[2][7] ='#';
    maze[2][8] ='.';
    maze[2][9] ='#';
    for (int i = 0; i < 10; i++)
    {
        cout << maze[2][i];
    }
    cout << endl;

    maze[3][0] = '.';
    maze[3][1] = '#';
    cout << maze[3][0] << maze[3][1];
    for (int i = 2; i < 10; i++)
    {
        maze[3][i] = '.';
        cout << maze[3][i];
    }
    cout << endl;

    maze[4][0] ='#';
    maze[4][1] ='#';
    maze[4][2] ='.';
    maze[4][3] ='#';
    maze[4][4] ='#';
    maze[4][5] ='.';
    maze[4][6] ='#';
    maze[4][7] ='#';
    maze[4][8] ='#';
    maze[4][9] ='#';
    for (int i = 0; i < 10; i++)
    {
        cout << maze[4][i];
    }
    cout << endl;

    maze[5][0] = '.';
    maze[5][1] = '.';
    maze[5][2] = '.';
    maze[5][3] = '.';
    maze[5][4] = '#';
    maze[5][5] = '.';
    maze[5][6] = '.';
    maze[5][7] = '.';
    maze[5][8] = '.';
    maze[5][9] = '#';
    for (int i = 0; i < 10; i++)
    {
        cout << maze[5][i];
    }
    cout << endl;

    maze[6][0] ='.';
    maze[6][1] ='#';
    maze[6][2] ='#';
    maze[6][3] ='#';
    maze[6][4] ='#';
    maze[6][5] ='#';
    maze[6][6] ='#';
    maze[6][7] ='#';
    maze[6][8] ='.';
    maze[6][9] ='#';
    for (int i = 0; i < 10; i++)
    {
        cout << maze[6][i];
    }
    cout << endl;

    maze[7][0] ='.';
    maze[7][1] ='.';
    maze[7][2] ='.';
    maze[7][3] ='.';
    maze[7][4] ='#';
    maze[7][5] ='.';
    maze[7][6] ='.';
    maze[7][7] ='.';
    maze[7][8] ='.';
    maze[7][9] ='.';
    for (int i = 0; i < 10; i++)
    {
        cout << maze[7][i];
    }
    cout << endl;

    maze[8][0] ='.';
    maze[8][1] ='#';
    maze[8][2] ='#';
    maze[8][3] ='#';
    maze[8][4] ='#';
    maze[8][5] ='.';
    maze[8][6] ='#';
    maze[8][7] ='#';
    maze[8][8] ='#';
    maze[8][9] ='.';
    for (int i = 0; i < 10; i++)
    {
        cout << maze[8][i];
    }
    cout << endl;

    maze[9][0] ='.';
    maze[9][1] ='.';
    maze[9][2] ='.';
    maze[9][3] ='.';
    maze[9][4] ='#';
    maze[9][5] ='.';
    maze[9][6] ='.';
    maze[9][7] ='.';
    maze[9][8] ='G';
    maze[9][9] ='#';
    for (int i = 0; i < 10; i++)
    {
        cout << maze[9][i];
    }
    cout << "\n\n\n\n\n\n\n";


}