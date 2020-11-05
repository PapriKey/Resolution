#include <stdio.h>
#include<math.h>

int inpt(int r_inp)
{
    int inp,w=0;
    inp = r_inp;
    while (r_inp > 9)
    {
        w++;
        r_inp /= 10;
    }
    w = pow(10, w);
    return w;

}

int main(void)
{
    int num[10][7] = { {1,1,1,1,1,1,0},
                       {0,1,1,0,0,0,0},
                       {1,1,0,1,1,0,1},
                       {1,1,1,1,0,0,1},
                       {0,1,1,0,0,1,1},
                       {1,0,1,1,0,1,1},
                       {1,0,1,1,1,1,1},
                       {1,1,1,0,0,0,0},
                       {1,1,1,1,1,1,1},
                       {1,1,1,1,0,1,1} };

    int nub[10] = { -1,-1,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 };

    long long int w, r_inp;
    int res, i = 0;

    scanf("%lld", &r_inp);

    w = inpt(r_inp);

    if (w >= 1000000000)
    {
        printf("数字过长！");
        return 0;
    }

    do
    {
        res = r_inp / w;
        nub[i] = res;
        r_inp %= w;
        w /= 10;
        i++;
    } while (w > 0);


    i = 0;
    while (nub[i] != EOF)
    {

            if (num[nub[i]][0]) printf(" -- \n");
            else printf("   \n");
            if (num[nub[i]][5]) printf("|  ");
            else printf("   ");
            if (num[nub[i]][1]) printf("|\n");
            else printf("  \n");
            if (num[nub[i]][6]) printf(" -- \n");
            else printf("   \n");
            if (num[nub[i]][4]) printf("|  ");
            else printf("   ");
            if (num[nub[i]][2]) printf("|\n");
            else printf("  \n");
            if (num[nub[i]][3]) printf(" -- \n");
            else printf("   \n");
            i++;
    }

    return 0;
}

