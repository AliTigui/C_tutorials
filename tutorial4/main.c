/*
 * in this tutorial we will see
 * pointer and how to use them
 * dynamic memory allocation
 * growing list 
 * strings
 * always we have to free memory that we allocate
 */
#include <stdlib.h>
#include <stdio.h>
int main(){
    // simple pointer and malloc exemple
    int* a ;
    a=malloc(sizeof(int));
    *(a)=4;
    int* b=a;
    *(b)=6;
    printf("%d \n",*a);
    free(a);
    // growing list withdynamic alocation
    int size = 1;
    int* arr=calloc(size,sizeof(int));//calloc will initialize valeus to 0
    *(arr)=1;
    size=10;
    arr=realloc(arr,size*sizeof(int));
    for (int i=0;i<10;i++){
        *(arr+i)=i+1;
    }
    printf("%d \n",*(arr+4));
    free(arr);
    // working with string
    char* s;
    int l=2;
    s=malloc(sizeof(char)*l);
    *s='a';
    *(s+l-1)='\0';
    l=10;
    s=realloc(s,sizeof(char)*(l+1));
    *(s+1)='l';
    *(s+2)='i';
    *(s+3)=' ';
    *(s+4)='g';
    *(s+5)='h';
    *(s+6)='a';
    *(s+7)='n';
    *(s+8)='o';
    *(s+9)='o';
    printf("%s\n",s);
    free(s);
    //2 d array
    int row =3;
    int colomn =4;
    int** arr2d=malloc(row*sizeof(int*));
    for (int i=0;i<row;i++){
        *(arr2d+i)=(int*)calloc(colomn,sizeof(int));

    }
    int v=0;
     for (int i=0;i<row;i++){
        
        for (int j=0;j<colomn;j++){
            v++;
            *(*(arr2d+i)+j)=v;
        }
    }
    for (int i=0;i<row;i++){
        
        for (int j=0;j<colomn;j++){
             printf("%d ",*(*(arr2d+i)+j));
        }
        printf("\n");
    }
    for (int i=0;i<row;i++){
        free(*(arr2d+i));

    }
    free(arr2d);
    return 0;
}