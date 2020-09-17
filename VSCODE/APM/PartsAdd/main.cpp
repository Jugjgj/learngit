#include<iostream>
using namespace std;
#define MAX_N 20


 int a[MAX_N] = {0};
 int k(0), n(0);

bool dif(int i, int sum)
{
    //indicate that all of things before n have been added.
    if (i == n)
        return sum == k;     //to find out whether the result is equal with k.

    //add
    if(dif(i+1 ,sum+a[i]))
        return true;

    //NO add
    if(dif(i+1,sum))
        return true;

    //if k  is still !=
    return false;
}

 int main()
 {
     int sum(0);

     cin >> n;
     for (int i = 0; i < n; i++)
     {
         cin >> a[i];
     }
     cin >> k;

     int j(0);
     if (dif(j, sum))
         cout << "yes\n\n\n";
     else
         cout << "no\n\n\n";

     return 0;
}

/*#include<iostream>
#include<stack>
#define MAX_N 20
using namespace std;
int main()
{
    int k(0),n(0);
    int a[MAX_N] = {0};
    stack<int> s;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> a[i];
        s.push(a[i]);
    }
    cin >> k;

    int R(0);
    for (int j = 0; j < n; j++)
    {
        R += a[j];
        if(R>k)
        {
            R -= a[j];
        }
        else if (R == k)
        {
            cout << "yes"<<endl;
            return 0;
        }
    }
    cout << "no" << endl;
    return 0;
}
*/

