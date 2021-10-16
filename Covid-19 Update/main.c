#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct Covid
{
    char country[25];
    int people;
    int infected;
    int recovery;
    int death;
} corona[200];

int main()
{
    int i,r,d,p;
    char arr[20];
    float a;
    FILE *file;
    file = fopen("Information.txt","r");
    for(i=0;i<3;i++)
    {
        fscanf(file,"%s",&arr);
        printf("%s\n",arr);
    }
    printf("Enter your choice: ");
    scanf("%d\n",&p);
    fputs(p,file);
    fclose(file);
    FILE *file1;
    if(p==1)
        file1 = fopen("1.txt","r");
    else if(p==2)
        file1 = fopen("2.txt","r");
    fscanf(file1,"%s %d %d",arr,&r,&d);
    printf("%s %d %d\n",arr,r,d);
    return 0;
}
