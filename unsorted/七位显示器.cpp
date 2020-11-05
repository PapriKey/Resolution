#include <stdio.h>
#include<math.h>


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

int nub[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };


long long int inpt(int r_inp)
{
    long long int inp,w=0;
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
    long long int w, r_inp;
    int res,i = 0;
    for (;;)
    {
        i = 0;
        printf("输入任意1~9位数字，他们将以七位显示器效果输出：");
        scanf("%lld", &r_inp);

        if (r_inp < 0)
            break;

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

        while (nub[i] != -1)
        {
            if (num[nub[i]][0]) printf(" --     ");
            else printf("        ");
            i++;
        }
        printf("\n");

        i = 0;

        while (nub[i] != -1)
        {
            if (num[nub[i]][5]) printf("|  ");
            else printf("   ");
            if (num[nub[i]][1]) printf("|    ");
            else printf("     ");
            i++;
        }
        printf("\n");

        i = 0;

        while (nub[i] != -1)
        {
            if (num[nub[i]][6]) printf(" --     ");
            else printf("        ");
            i++;
        }
        printf("\n");

        i = 0;

        while (nub[i] != -1)
        {
            if (num[nub[i]][4]) printf("|  ");
            else printf("   ");
            if (num[nub[i]][2]) printf("|    ");
            else printf("     ");
            i++;
        }
        printf("\n");

        i = 0;

        while (nub[i] != -1)
        {
            if (num[nub[i]][3]) printf(" --     ");
            else printf("        ");
            i++;
        }
        printf("\n");

        for (int i = 0; i < 10; i++)
        {
            nub[i] = -1;
        }
    }
    return 0;
}

