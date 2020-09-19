#include<iostream>

int main()
{
    int k[50] = {0};
    int n(0), m(0);
    std::cout << "please input n, m, k" << std::endl;
    std::cin >> n >> m;
    for (int i = 0; i < n;i++){
        std::cin >> k[i];
    }

    bool Bo=false;

    int a, b, c, d,R(0);
    for (a = 0; a < n; a++){
        for (b = 0; b < n; b++){
            for (c = 0; c < n; c++){
                for (d = 0; d < n; d++){
                    R = k[a] + k[b] + k[c] + k[d];
                    if (R==m)
                        Bo = true;
                }
            }
        }
    }
    if(Bo==true)
        std::cout << "YOU WIN" << std::endl;
    else
        std::cout << "FRIEND WINS" << std::endl;
    return 0;
}