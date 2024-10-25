#include <stdio.h>
#include <string.h>

int main()
{

  char S1[1001], S2[1001], S3[1001];

  scanf("%s %s %s", S1, S2, S3);

  char minStr[1001], maxStr[1001];

  strcpy(minStr, S1);
  strcpy(maxStr, S1);





    if (strcmp(S2, minStr) < 0)
      {
         strcpy(minStr, S2);
      }

     if (strcmp(S2, maxStr) > 0)
     {
        strcpy(maxStr, S2);
     }





  if (strcmp(S3, minStr) < 0)
  {
    strcpy(minStr, S3);
  }

  if (strcmp(S3, maxStr) > 0)
  {
    strcpy(maxStr, S3);
  }





    printf("%s\n", minStr);
    printf("%s\n", maxStr);





  return 0;



}
