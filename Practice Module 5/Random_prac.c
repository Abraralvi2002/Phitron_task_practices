#include<stdio.h>
int main(){
   int n,sum=0;
   scanf("%d",&n);
   int ar[n];
   for(int i = 0;i<n;i++){
         scanf("%d",&ar[i]);
    }
    for(int i =0;i<n;i++){
         if(ar[i]%2==0 || ar[i]%3==0 || ar[i]%5==0){
                   sum += ar[i];
            }else{
                  sum = 0;
            }
     }
     printf("%d\n",sum);
    
     return 0;
}