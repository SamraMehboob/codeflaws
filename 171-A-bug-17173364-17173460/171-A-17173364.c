#include<stdio.h>
 main(int argc, char *argv[])
 {
     long long a,b,c,i,j,s=0,p;
     scanf("%lld %lld",&a,&b);
     int num[10];
     for(i=0;i>=0;i++)
     {
         c=b%10;
         num[i]=c;
         b=b/10;
         if(b==0)break;
     }
     p=i;
     for(j=0;j<=p;j++)
     {
         s=s+(num[j]*pow(10,i));
         i=i-1;
     }

     printf("%lld", a+s);
 return 0;
}
