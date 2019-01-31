#include <float.h>

//#define ERROR_FUNCTION 0x1986   //error implement

void CurveFitting(double array_a[], int nSize, int nXX)
{
    double fSum = 0.0f;
    for (int i = nSize - 1; i >= 0; i--)
    {
#ifdef ERROR_FUNCTION
        fSum += nXX*fSum + array_a[i];  //error result:129.0f
#else
        double fAA = array_a[i];
        double fTmpValue = fSum*nXX;
        fSum = fAA + fTmpValue;     //correct result:15.0f
#endif        
    }
    int n = 0;
    return;
}

int main()
{
    double array_a[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    int nSize = sizeof(array_a)/sizeof(array_a[0]);
    int nXX = 1;
    CurveFitting(array_a, nSize, nXX); //ÇúÏßÄâºÏ
    return 0;
}

