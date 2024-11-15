#include <stdio.h>
#include <string.h>

int fun(char s1[101], char s2[101], char s3[101])
{
    int len = strlen(s1);
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        char c1 = s1[i];
        char c2 = s2[i];
        char c3 = s3[i];

        if (c1 == c2 && c2 == c3)
        {
            continue;
        }
        else if (c1 == c2 || c1 == c3 || c2 == c3)
        {
            count += 1;
        }
        else
        {
            count += 2;
        }
    }
    return count;
}

int main()
{
    char s1[101], s2[101], s3[101];
    scanf("%s %s %s", s1, s2, s3);

    int result = fun(s1, s2, s3);

    printf("%d", result);

    return 0;
}
