#include<stack>
#include<queue>
#include<iostream>

using namespace std;

int main()
{
    stack<int> s;
    queue<int> que;
    que.push(33);
    s.push(1);
    s.push(2);
    que.push(22);
    s.push(3);
    que.push(11);

cout << que.front() << endl;
cout << s.top() << endl;

    que.pop();
    cout << que.front() << endl;
    
    s.pop();
    cout << s.top() << endl;
    
    que.pop();
    cout << que.front() << endl;
    
    s.pop();
    cout << s.top() << endl;
    
    que.pop();
    cout << que.front() << endl<<endl;
    
    cout << que.front() << endl;
    s.pop();
    
     que.pop();
     que.pop();
     cout << que.front() << endl
          << endl;

     return 0;
}