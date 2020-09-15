#include<iostream>
#include<string>
using namespace std;
#define MAX_DISTANCE 100
int main()
{
    int L(0), n(0), x[MAX_DISTANCE] = {0};
    char No[MAX_DISTANCE] = {0};

//*Debugging*Debugging*Debugging*Debugging*Debugging*Debugging*Debugging*Debugging*Debugging
    L = 10;
    n = 3;
    x[0] = 2;
    x[1] = 6;
    x[2] = 7;
    x[3] = 2;
    x[4] = 6;
    x[5] = 7;
//*Debugging*Debugging*Debugging*Debugging*Debugging*Debugging*Debugging*Debugging*Debugging    
    /*
    //&input
    cin >> L >> n;
    for (int i = 0; i < n ; i++)
    {
        cin >> x[i];
        x[i + 3] = x[i];
    }
*/
    //&Tmin
    int Tmin(0);
    int tim1(0);
    for (int i = 0; i < n; i++)
    {
        if(x[i]>=5){
            tim1 = L - x[i];
            No[i] = 'R';
        }
        else{
            tim1 = x[i];
            No[i] = 'L';
        }
        if (tim1 > Tmin)
                Tmin =tim1;
    }


//!wrong!wrong!wrong!wrong!wrong!wrong!wrong!wrong!wrong!wrong!wrong!wrong!wrong!wrong!wrong
    //&Tmax  
    int Tmax(0);
    int tim2(0);
    for (int j = n; j < n+n; j++)
    {
        if(x[j]>=5){
            tim2 = x[j];
            No[j] = 'L';
        }
        else{
            tim2 = L - x[j];
            No[j] = 'R';
        }
        if (tim2 > Tmax)
                Tmax =tim2;
    }
//!wrong!wrong!wrong!wrong!wrong!wrong!wrong!wrong!wrong!wrong!wrong!wrong!wrong!wrong!wrong

    //&output
    cout << "min:" << Tmin << " ";
    for (int i = 0; i < n;i++){
        cout << No[i];
    }
    cout << "\n\n";
    cout << "max:" << Tmax << " ";
    for (int j = n; j < n+n;j++){
        cout << No[j];
    }
    cout << "\n\n";
    return 0;
}