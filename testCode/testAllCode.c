// #include <stdio.h>
// int main()
// {
//  int a =(int) 50.45, b = 60, sum;
//  sum = a + b;
//  printf("%d + %d = %d", a, b, sum);
//  return 0;
// }

#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int ar[n];
  for(int i=0;i<n;i++)  // এরে ইনপুট নেওয়া হচ্ছে। 
  {
    scanf("%d",&ar[i]);
  }
  int sum=0;  // যোগফল রাখার জন্য একটি ভেরিয়েবল নিয়ে শুরুতে ০ রেখে দেওয়া হচ্ছে। 
  //printf("%d",sum);
  
  for(int i=0;i<n;i++)  // লুপ চালিয়ে এরের প্রতিটি ইন্ডেক্সে যাচ্ছি। 
  {
    sum=sum+ar[i]; // প্রতিটি ইন্ডেক্সে যেয়ে ভেলুগুলো সাম ভেরিয়েবলের সাথে যোগ করে দিচ্ছি।
  }
  printf("%d",sum); // ভেরিয়েবলটি প্রিন্ট করে যোগফল প্রিন্ট করা হচ্ছে। 


  return 0;

}
