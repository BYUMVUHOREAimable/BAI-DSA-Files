#include <stdio.h>
#include <conio.h>
int main(){
    FILE *fp;
    char ch;
    fp = fopen("MySample.txt", "r");
    printf("Reading character from the file: %c\n", getc(fp));
    ch = getc(fp);
    printf("ch= %c", ch);
    fclose(fp);
    getch();
    return 0;
}