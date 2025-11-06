#include <stdio.h>
struct student{
char name[20];int rollno;
int m1,m2,m3;
int avg;
};
void main(){
struct student s[100];
int n ,i,sum=0,class_avg=0;
printf("enter the nuber of the students :\n");
scanf("%d",&n);

printf("enter the student details \n" );
for(i=0;i<n;i++){
    printf("enter the name :\n");
    scanf("%s",s[i].name);
    printf("enter the roll number : \n");
    scanf("%d",&s[i].rollno);
    printf("enter marks in the threee tests : \n");
    scanf("%d%d%d", &s[i].m1, &s[i].m2, &s[i].m3);
    }
    for(i=0;i<n;i++){
        s[i].avg = ( s[i].m1 + s[i].m2 + s[i].m3) / 3;
    }
    for(i=0;i<n;i++){
      sum = sum + s[i].avg;
    }
    class_avg = sum / n;
printf("The average marks of class is :%d\n", class_avg);
printf("Above average students:\n");
for(i=0; i<n; i++)
{
if( s[i].avg >= class_avg)
{
printf("%d\t", s[i].rollno);
printf("%s\n", s[i].name);
}
}
 printf("Below average students:\n"); for(i=0; i<n; i++)
{
if( s[i].avg < class_avg)
{
printf("%d\t", s[i].rollno);
printf("%s\n", s[i].name);
}
}
}
