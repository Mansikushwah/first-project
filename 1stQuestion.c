#include <stdio.h>
#include <stdlib.h>
struct Cricketer{
    char name[20];
    int age;
    int matches;
    int avg_runs;};
int cmp(const void *p, const void *q){
    int l = ((struct Cricketer *)p)->avg_runs;
    int r = ((struct Cricketer *)q)->avg_runs; 
    return (l - r);}
int main(){
    int n;
    printf("Enter number of cricketers");
    scanf("%d",&n);
    struct Cricketer arr[n];
    for (int i=0;i<n;i++){
        printf("Enter name : \n");
        scanf("%s", arr[i].name);
        printf("Enter age : \n");
        scanf("%d", &arr[i].age);
        printf("Enter number of matches : \n");
        scanf("%d", &arr[i].matches);
        printf("Enter average runs : \n");
        scanf("%d", &arr[i].avg_runs);}
    qsort((void*)arr, n, sizeof(arr[0]), cmp);
    FILE *fptr;
    fptr = fopen("file.txt","w");
    for (int i=0;i<n;i++){
        fprintf(fptr, "Name : %s\n", arr[i].name);
        fprintf(fptr, "Age : %d\n", arr[i].age);
        fprintf(fptr, "Number of Matches : %d\n", arr[i].matches);
        fprintf(fptr, "Average runs : %d\n", arr[i].avg_runs);
        fprintf(fptr, "*******************\n");
    }
    return 0;
}