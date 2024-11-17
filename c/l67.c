#include <stdio.h>
int main()
{

    FILE *ptr = NULL;
  //  ptr = fopen("fileio.txt", "r");
     // ptr = fopen("fileio.txt", "w");
     //ptr = fopen("fileio.txt", "r+");// r+ se initiallly me append(lag) jayega baki  file waisa hi rahega
   //ptr = fopen("fileio.txt", "w+");//w+ se pahle sab clear hoga then sab write hoga , clear ek hi bar hota hai
   ptr = fopen("fileio.txt", "a+");//a+ se end(last) me append(lag) jayega baki intially part of file waisa hi rahega
    // **fgetc**
    /* char c = fgetc(ptr);
      printf("the char i read is %c\n",c);
      c =  fgetc(ptr);
      printf("the char i read is %c\n",c);
      c =  fgetc(ptr);
      printf("the char i read is %c",c);*/


    // **fgets**
    /*char str[30];
    fgets(str, 6, ptr);
    printf("%s", str);*/
    fputc('d',ptr);
    fputs("ramesh",ptr);

    fclose(ptr);

    return 0;
}