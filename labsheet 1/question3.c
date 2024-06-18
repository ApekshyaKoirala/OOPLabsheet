#include<stdio.h>
struct data{
    char name[20];
    int marks;
};
int main(){
    int n,i;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    struct data d1[n];
    printf("Enter the name and marks of student\n");
    for (i=0;i<n;i++){
        printf("Enter the name of student");
        scanf("%s",d1[i].name);
        printf("Enter the mark of student");
        scanf("%d",&d1[i].marks);
    }

    printf("The name and marks of students are as follows\n");
    for(i=0;i<n;i++)
    {
        printf("Name=%s, Marks =%d\n",d1[i].name,d1[i].marks);
    }
    return 0;
}