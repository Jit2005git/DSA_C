#include<stdio.h>
int main(){
    int a[50],size,num,pos;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the elements of the array:\n");
    for (int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the position of the element to del :");
    scanf("%d",&pos);
    if(pos<=0 || pos> size+1){
        printf("Invalid position\n");
    }
    else{
        for(int i=pos-1;i<size-1;i++){
            a[i]=a[i+1];

        }
        size--;
    }
    printf("Array after insertion:\n");
 for(int i = 0; i < size; i++) {
 printf("%d ", a[i]);
 }
 printf("\n");
    return 0;
}