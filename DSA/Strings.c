// #include <stdio.h>
// int main(){
//     char str1[10], str2[10];
//     int i , j=0;
//     printf("Enter first string: ");
//     scanf("%s", str1);
//     printf("Enter second string: ");
//     scanf("%s", str2);
//     for(i=0; str1[i]!='\0'; i++);
//     while(str2[j]!='\0'){
//     str1[i]=str2[j];
//     i++;
//     j++;
//     }
//     str1[i]='\0';
//     printf("concated string is %s",str1);
//     return 0;
// }

// To reverse the given string
#include <stdio.h>
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