// write a pgm to pass the structure in the functions
#include <stdio.h>
 struct book{
   char title[90];
   char author[25];
   int pages;
      };
   int print_the_book(struct book my);

 void main(){
   struct book my ={"The art of letting go","The king",67};
   print_the_book(my);
 }
 int print_the_book(struct book my){
 printf("\tThe title of the book is %s\n\tThe author of the book is the %s\n\tTheere are total %d pages in this book ",my.title,my.author,my.pages);
 return 0 ;
 }
