#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char ch, fname[30], newch[500];
    int i=0, j, COUNT=0;
    printf("Enter the filename with extension: ");
    gets(fname);
    fp = fopen(fname, "r");
    
    
    ch = getc(fp);
    while(ch != EOF)
    {
        COUNT++;
        putchar(ch);
        newch[i] = ch;
        i++;
        ch = getc(fp);
    }
    
    
    for(j=(COUNT-1); j>=0; j--)
    {
        ch = newch[j];
        printf("%c", ch);
    }
    printf("\n");
    getch();
    return 0;
}
