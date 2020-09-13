#include<iostream>
#include"config.h"

#ifdef USE_MYMATH
    #include<MathFunctions.h>
#else
    #include<math.h>
#endif

using namespace std;

int main (int argc, char *argv[])
{

    if (argc<3)
    {
        cout<<"Usage:"<< argv[0]<<"base exponent \n";
        return 1;
    }
    double base = atof(argv[1]);
    int exponent=atoi(argv[2]);

    #ifdef USE_MYMATH
        cout<<"Now we use our own Math library. \n";
        double result = power(base, exponent);
    #else
        cout<<"Now we use the standard library. \n";
        double result = pow(base,exponent);
    #endif
        cout<<base<<"^"<<exponent<<"is"<<result<<endl;
        return 0;


    //int x(12),y(13),r(0);
    //r=power(x,y);
    //cout<<"the value of r is "<< r<<endl;
    //return 0;
}