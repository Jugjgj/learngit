#include<iostream>
using namespace std;

#define MAX_NUM 1000

void INPUT();
void DeleteRepeat();
void BucketSort();
void BubbleSort();
void QuickSort(int left, int right);
void OUTPUT();
void SWAP(int* x, int *y);

int StuNum(0),BookNum(0),ISBN_1[MAX_NUM]={0},ISBN_2[MAX_NUM]={0},ISBN_BAK[MAX_NUM]={0};

int main ()
{
    int Choice(0);
    INPUT();
    DeleteRepeat();
    while(1)
    {
        cout << "\nPlease choose one way to sort:\n";
        cout << "1:BucketSort\n2:BubbleSort\n3:QuickSort\n4:exit\n\n";
        cout << "Your Choice: ";
        cin >> Choice;
        switch (Choice)
        {
        case 1:
            BucketSort();
            break;
        case 2:
            BubbleSort();
            break;
        case 3:
            QuickSort(0,BookNum-1);
            cout << "The number of Book is :"<<BookNum << endl;
            OUTPUT();
            break;
        case 4:
            break;
        default:
            cout << "Input error! Try again!";
            break;
        }
        // Recover
        for (int i = 0; i < BookNum;i++)
        {
            ISBN_2[i]=ISBN_BAK[i];
        }
        cout << "\n\n";
        if (Choice == 4)
        {
            cout << "Already exited!\n\n\n\n\n\n\n" << endl;
            break;
        }
    }
    return 0;
}

void INPUT()
{
    cout << "Please input the num of Students" << endl;
    cin >> StuNum;
    BookNum = StuNum;
    cout << "please input the values of ISBN assets" << endl;

    /*
     * just for test.
     * 
     */
    ISBN_1[0] = 20;
    ISBN_1[1] = 40;
    ISBN_1[2] = 32;
    ISBN_1[3] = 67;
    ISBN_1[4] = 40;
    ISBN_1[5] = 20;
    ISBN_1[6] = 89;
    ISBN_1[7] = 300;
    ISBN_1[8] = 400;
    ISBN_1[9] = 15;
    for (int i = 0; i < 10;i++)
    {
        cout << ISBN_1[i] << endl;
    }
    /*for (int i = 0; i < StuNum; i++)
    {
        cin >> ISBN_1[i];
    }
    */
}

void DeleteRepeat()
{
    for (int i = 0; i < StuNum ; i++)
    {
        for (int j = i+1 ; j < StuNum ;j++)
            {
                if(ISBN_1[i]==ISBN_1[j] && ISBN_1[i]!=0&&ISBN_1[j]!=0)
                {
                    ISBN_1[j] = 0;
                    BookNum -= 1;
                }
            }
    }
    //Write down new array about new ISBN assets.
    int *ptr = ISBN_1;
    for (int k = 0; k < BookNum; )
    {
        if(*ptr!=0)
        {
            ISBN_BAK[k]=ISBN_2[k] = *ptr;
            k++;
        }

            ptr++;
    }
}

void BucketSort()
{
    int book[1001] = {0};
    cout << "The number of Book is :"<<BookNum << endl;
    for (int i = 0; i < BookNum; i++)
    {
        book[ISBN_2[i]]++;
    }
    for (int j = 1; j <= 1000;j++)
    {
        for (int k = 1; k <= book[j];j++)
        {
            cout << j<<' ';
        }
    }
}

void BubbleSort()
{
    for (int i = 1; i <= BookNum - 1 ; i++)
    {
        for (int j = 0; j < BookNum - i  ; j++)
        {
            if(ISBN_2[j]>=ISBN_2[j+1])
            {
                SWAP(&ISBN_2[j], &ISBN_2[j + 1]);
            }
        }
    }
    cout << "The number of Book is :"<<BookNum << endl;
    for (int k = 0; k < BookNum;k++)
    {
        cout << ISBN_2[k]<<' ';
    }
}

void QuickSort(int left, int right)
{
    int i(left), j(right);
    int BanchMark(ISBN_2[left]);

    if(left>right)
        return;

    while(i!=j)  
    {
        while(j > i && ISBN_2[j]>=BanchMark)
        {
            j--;
        }

        while(i<j && ISBN_2[i]<=BanchMark)
        {
            i++;
        }

        if(i<j)
        {
            SWAP(&ISBN_2[i], &ISBN_2[j]);
        }
    }
    SWAP(&ISBN_2[i], &ISBN_2[left]);

    QuickSort( left , i-1);     //recursive function
    QuickSort( i+1 , right);    //recursive function
    return;
}
void OUTPUT()
{
    for (int i = 0; i < BookNum;i++)
    {
        cout<< ISBN_2[i]<<' ';
    }
}
void SWAP(int *x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}