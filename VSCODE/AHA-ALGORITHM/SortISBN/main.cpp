#include<iostream>
using namespace std;

#define MAX_NUM 1001

void INPUT();
void BucketSort();
void BubbleSort();
void QuickSort();

int StuNUm(0),BookNum(0),ISBN_1[MAX_NUM]={0},ISBN_2[MAX_NUM]={0};

int main ()
{
    INPUT();
    return 0;
}

void INPUT()
{
    cin >> StuNUm;
    for (int i = 1; i < StuNUm; i++)
    {
        cin >> ISBN_1[i];
    }
}

void BucketSort()
{

}
void BubbleSort()
{

}
void QuickSort()
{


}

void OUTPUT()
{
    cout << BookNum << '\n';
    for (int i = 1; i <= BookNum;i++)
    {
        cout << ISBN_2[i];
    }
}