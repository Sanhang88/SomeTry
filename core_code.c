#include<stdio.h>
#include<stdlib.h>
int main(int num,char **args){
printf("There are %d arguments flowing into the program.\n",num);
printf("The first one is %s\n",args[0]);
printf("The second one is %s\n",args[1]);
return 0;
}
