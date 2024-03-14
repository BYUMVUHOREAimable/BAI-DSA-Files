#include <stdio.h>
#include <stdlib.h>
int main(){
int val;
FILE *fptr;
fptr = fopen ("G:\Notes\Term3\C(FOP)\File handling\groupName.txt","w");
if(fptr == NULL){
printf("File type invalid!");
exit(1);
}
printf("Please enter the val: ");
scanf("%d",&val);
fprintf(fptr,"%d",val);
fclose(fptr);
return 0;
}