#include<iostream>

#define MAX_NUM 100

int main()
{
    // input
    int a[MAX_NUM] = {0};
    int n(0);
    std::cout << "please input the value of n, and how long are these sticks (a)"
              << std::endl;
    std::cin >> n;
    for (int d = 0; d < n;d++){
        std::cin >> a[d];
    }

    // process
    int Maxc(0),Maxi(0),Maxj(0),Maxk(0);
    int i,j,k;
    for (i=0;i < n;i++){
        for (j=i+1;j < n;j++){
            for (k=j+1;k < n;k++){
                if(a[i]+a[j]>a[k] && a[i]+a[k]>a[j] && a[k]+a[j]>a[i]){    //& use max function. "a+b>c", which means that c is the longest line in a triangle.
                    if(a[i]+a[j]+a[k] > Maxc){                             //*int len = a[i]+a[j]+a[k];
                        Maxc = a[i] + a[j] + a[k];                         //*int ma = max( a[i] , max(a[j],a[k]) );
                        Maxi = i;                                          //*int rest = len -ma;
                        Maxj = j;                                          //*if(ma < rest){
                        Maxk = k;                                          //*ans = max(ans,len);
                    }                                                      //*}
                }
            }
        }
    }

    // output
    if (Maxc==0)
        std::cout << "0" << std::endl;
    else
        std::cout << Maxc << " (when you choose "
                  << Maxi << Maxj << Maxk
                  << ")\n\n\n"
                  << std::endl;
    return 0;
}