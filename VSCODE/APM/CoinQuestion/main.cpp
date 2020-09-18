#include<iostream>
using namespace std;
int A(620);
int C1 = 3, C5 = 2, C10 = 1, C50 = 3, C100 = 0, C500 = 2;

int main()
{
    if (A>=C500 )
    {
        A = A / 500;
    }
    else
    {
        if(A>=C100)
        {

        }
        else
        {
            if (A>=C50)
            {

            }
            else
            {
                if(A>=C10)
                {

                }
                else
                {
                    if(A>=C5)
                    {

                    }
                    else
                    {
                        if(A>=C1)
                        {

                        }
                        else
                        {
                            cout << "There is something wrong in your input.\n";
                        }
                    }
                    
                }
                
            }
            
        }
    }
}