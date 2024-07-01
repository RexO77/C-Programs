//structures
#include<stdio.h>
struct student
{
    char name [90];
    float s1,s2,s3;
    float total,avg;
};
int main()
{
    struct student s[99];
    float classavg, totalavg;
    int n,i;
    printf("Enter the total no of students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the name\n");
        scanf("%s",s[i].name);
        printf("Enter the subject marks\n");
        scanf("%f%f%f",&s[i].s1,&s[i].s2,&s[i].s3);
        s[i].total=s[i].s1+s[i].s2+s[i].s3;
        s[i].avg=s[i].total/3;
        totalavg=totalavg+s[i].avg;
    }  
    classavg=totalavg/n;
    printf("classavg is %f\n",classavg);
    printf("--------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("total marks scored by %s is %f\n",s[i].name,s[i].total);
        printf("avg marks scored is: %f\n",s[i].avg);
        if(s[i].avg>=classavg)
        {
            printf("%s has scored above avg\n",s[i].name);
            printf("--------------------------\n");
        }
        else
        {
            printf("%s has scored below avg\n",s[i].name);
            printf("--------------------------\n");
        }
    }
    return 0;
}