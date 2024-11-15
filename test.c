#include <stdio.h>
#include <string.h>

int main()
{

    char S1[101], S2[101], S3[101];

    scanf("%s %s %s", S1, S2, S3);

    int len = strlen(S1);
    
    int count = 0;

    for (int i = 0; i < len; i++)
    {
        char C1 = S1[i];
        char C2 = S2[i];
        char C3 = S3[i];

        if (C1 == C2 && C2 == C3)
        {
            continue;
        }


        else if (C1 == C2 || C1 == C3 || C2 == C3)
        {
            count += 1;
        }


        else
        {
            count += 2;
        }


    }


    printf("%d", count);


    return 0;


}
