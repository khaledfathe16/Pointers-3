
/****************************************************************************************************************
This project to scan the size of array from client and pass it by address to function and then scan the values *
   of this array form the same user and print back the Maximum number and Minimum number                      *
 ****************************************************************************************************************/
#include <Stdio.h>

int func(int *p , int *maxf,int *minf,int s);

 void main(void){

int size,min,max=0;
printf("please enter size of array = ");
scanf("%d",&size);
int arr[size];

func(arr,&max,&min,size);

printf("max = %d\n",max);
printf("min = %d",min);

}

int func(int *p,int *maxf,int *minf,int s){

for(int i=0;i<s;i++){
scanf("%d",(p+i));
}

for(int i=0;i<s;i++){

    if(p[i]>=*maxf){                  // p[i] = (*(p+i)) Two syntax are equally
        *maxf=p[i];

    }
    if(p[i]<=*minf){
        *minf=p[i];

    }
}

}
