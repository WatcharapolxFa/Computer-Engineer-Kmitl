#include<stdio.h>
#include<string.h>
void main (void){
    struct Employee
    {
        char name[21];
        int age ;
        float salary ;
    }Emp;
    FILE *fp;
    fp = fopen("./data/data.txt","r");
    // for (int i = 0; i < 3; i++)
    // {
    //     fscanf(fp,"%s ",name);
    //     fscanf(fp,"%d ",&age);
    //     fscanf(fp,"%.2f ",&salary);
    //     sumAge += age;

    // }
    printf("%s %d %.2f\n",Emp.name,Emp.age,Emp.salary);

    // fprintf(fp,"%s ",name);
    // fprintf(fp,"%d ",age);
    // fprintf(fp,"%.2f ",salary);
    fclose(fp);
}