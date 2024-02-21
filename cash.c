#include <stdio.h>
int change_owed;
int f;
int chng(void);
int main(void)
{

    do
    {
        printf("Change owed: ");    //how much money does the algo own you
        scanf("%d", &change_owed);


        f = 0;
    }
    while (change_owed < 0);
    chng();
}

int chng(void)         //going throu each coin and abstracting it from the owed change from  the biggest coin value to the smallest once till it gets to 0
{
    while (change_owed > 0)
    {
        while (change_owed >= 25)          //u can edit the 25cents to ur own currency ......
        {
            if (change_owed >= 25)
            {
                change_owed -= 25;
                f++;
            }
        }
        while (change_owed >= 10)
        {
            if (change_owed >= 10)
            {
                change_owed -= 10;
                f++;
            }
        }
        while (change_owed >= 5)
        {
            if (change_owed >= 5)
            {
                change_owed -= 5;
                f++;
            }
        }

        if (change_owed >= 1)
        {
            change_owed -= 1;
            f++;
        }
    }
    return printf("%i\n", f);
}
