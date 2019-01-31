/*����x��y����*/
/* ��a0 + a1*x + a2*x^2 + a3*x^3 + ... + an*x^n ���ʽ��ֵ **/

#include <cstdio>
#include <cmath>
#include <iostream>

const int kSize = 10;
const int a[kSize] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };

/*��������ߡ���ֵ*/
double NHQX(int nX, int n, const int a[])
{
    double fSum = 0.0f;
    if (n >= 0)
    {
        for (int i = n; i >= 0; i--)
        {
            fSum = nX*fSum + a[i];
        }
    }
    return fSum;
}

int main()
{
    double fx = 2.0f;
    double fy = 10.0f;
    double fRet = pow(fx, fy);     //fx��fy�η�

    fRet = NHQX(2, 0, a);
    fRet = NHQX(2, 1, a);
    fRet = NHQX(2, 2, a);

    std::cout << fRet << std::endl;

    fRet = 0.0f;

    return 0;
}

