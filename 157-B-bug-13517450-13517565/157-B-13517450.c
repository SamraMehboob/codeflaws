#include<stdio.h>
#include<math.h>
#define pi=3.1415926536
int sort(int s[],int num){
    int i,j,temp;
    for(i=1;i<num;i++){
        for(j=i-1;j>=0;j--){
            if((s[j]<s[j+1])){
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    return 0;
}
int main(int argc, char *argv[])
{
    int n,c[101],i;
    double sum,sum1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&c[i]);
    }
    sort(c,n);
    for(i=0;i<n;i++){
        if(i%2==0) sum+=(c[i]*c[i]);
        else sum=sum-(c[i]*c[i]);
    }
    sum1=(3.1415926536*sum);
    printf("%.10lf",sum1);
    return 0;
}
