#include <cstdio>
#include <cstdlib>

const int kSIZE = 10;

/*�������10��1��2�������*/
void GetRandomNums(int a[])
{
    for (int i = 0; i < kSIZE;)
    {
        int nGet = rand();
        if (nGet>0 && nGet <3)
        {
            a[i] = nGet;
            ++i;
        }
    }
}

int main()
{    
    int a[kSIZE];

    while (1)
    {
        GetRandomNums(a);


        int ch = getchar();
        char c = (char)ch;
        if ('\n' == c)
        {
            break;
        }
    }

    

    int n = 0;

    return 0;
}