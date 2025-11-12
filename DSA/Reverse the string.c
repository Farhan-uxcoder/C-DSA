// To reverse the given string
/*#include <stdio.h>
int main(){
    char str[100], rev[100];
    int i , j=0;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i=0; str[i]!='\0'; i++);
    i--;
    while(i>=0){
        rev[j]=str[i];
        j++;
        i--;
    }
    rev[j]='\0';
    printf("Reversed string is %s",rev);
    return 0;
}

*/

#include <stdio.h>
int main(){
char str[25],temp;
int len=0;start=0;end;
printf("enter the string");
scanf("%s",str);
while(str[len]!='\0'){
    len++;
}
end=len-1;
while(start<=end){
    temp=str[start];
    str[start]=str[end];
    str[end]=temp;
    start++;
    end--
}
printf("reversed string is %s",str);
return 0;
}
