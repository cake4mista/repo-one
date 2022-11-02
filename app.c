#include <stdio.h>
int main(){
int c, m, p, s, t;
printf("Input Chemistry exam score: ");
scanf("%d", &c);
printf("Input Math exam score: ");
scanf("%d", &m);
printf("Input Physics exam score: ");
scanf("%d", &p);
if (c>=50)
{
    if (m>=60)
{
        if (p>=55)
{
            if ((c+m+p)>=190||(m+p)>=140)
                printf("The student passed");
            else
            printf("The student didn't pass");
}

        else
        printf("The student didn't pass");
}

    else
    printf("The student didn't pass");
}
else
printf("The student didn't pass");
}
