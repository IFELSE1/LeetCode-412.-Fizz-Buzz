#include"stdio.h"
#include <stdlib.h>

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    int i=0;
    char temp[10]={0};
	char **Tem = NULL;
    Tem = (char**)malloc(n*sizeof(char*));
	/*这里为Tem的每个元素分配内存，如果此处不分配，那么 sprintf(*(Tem+i-1),"%d",i);是会出问题的*/
	for(i=0;i<n;i++ )
    {
        Tem[i]=(char *)malloc( 10*sizeof(char) ); 
    }
	
    for (i=1;i<=n;i++){
        if ((i%3 ==0)&&(i%5 ==0)){
            *(Tem+i-1) = "FizzBuzz";
        }
        else if (i%3 == 0){
            *(Tem+i-1) = "Fizz";
        }
        else if (i%5 == 0){
             *(Tem+i-1) = "Buzz";
        }
        else{
             sprintf(*(Tem+i-1),"%d",i);
        } 
    }
	*returnSize =n;
	return Tem;
}

/**************for local test**************/
int main(void)  
{  
	char * * Strpp;  
	int* returnSize;
	int i=0;
	Strpp = fizzBuzz(15,returnSize);

	for (i=0;i<(*returnSize);i++){
		printf("%s,\n",*(Strpp+i));
	}
}  














































