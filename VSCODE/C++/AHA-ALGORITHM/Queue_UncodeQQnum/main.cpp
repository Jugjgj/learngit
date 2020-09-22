#include<iostream>

using namespace std;

class queue
{
    public:
        int data[100];
        int head;
        int tail;
};

int main()
{
    int n(0);
    cin >> n;
    queue q;
    q.head =  0;
    q.tail =  0;
    for (int i = 0; i < n; i++)
    {
        cin >> q.data[i];
        q.tail++;
    }
    
    while (q.head<q.tail)
    {
        cout << q.data[q.head]<<' ';
        q.head++;
        q.data[q.tail] = q.data[q.head];
        q.tail++;
        q.head++;
    }
    cout << "\n\n";
    return 0;
}