#include <stdio.h>
#include <stdlib.h>
char arr[10]={1,2,3,4,5,6,7,8,9,10};
void *memest_1(void *arr,char value ,int length);
int main()
{
    char *ptr;
    printf("Hello world!\n");
    printf("arr = %s\n",arr);
    memset_1(arr ,'*',10);
    printf("%s\n",arr);
    return 0;
}
void *memset_1(void *arr1 ,char value1 ,int length1){
char *ptemp =arr1;
if(ptemp==NULL){
    printf("not valid \n");
}else{
while(length1--){
    *ptemp=value1;
    ptemp++;

}

}

return ptemp;
}
