/* Name : Nidhi Nandepalli
   UIN :251P092
   Class : Comp/D */

#include<stdio.h>
int main(){
     int start, end;
     int sum=0;
     printf("enter the limit:");
     scanf("%d %d",&start, &end);
     for(int i=start;i<=end;i++){
        if(i%2!=0){
            sum+=i;
        }
     }
     printf("sum of odd is %d",sum);
     return 0;
}
