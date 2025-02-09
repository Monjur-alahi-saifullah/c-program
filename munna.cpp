#include<stdio.h>
int main(){

int arr[]={10,20,30,40,50,60 };
int beg=0;
int end=sizeof(arr)+1;
int search;
scanf("%d",&search);

for( int i=0;i<sizeof (arr);i++ ){

    int mid=(beg+end)/2;

    if (arr[mid]==search ){

       printf("Index %d is my search number ",mid);
       break;

    }
    else if(arr[mid]< search){
        beg=mid+1;
    }
        else if(arr[mid]> search){

            beg=mid-1;
        }
        else {

            printf("We can't found  number\n");
        }


        }

    }
