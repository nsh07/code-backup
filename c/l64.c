#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    // char str[45];
    // for reading a file
    /*ptr = fopen("fileio.txt", "r");
    fscanf(ptr, "%s", str);//ptr se leke str ko dega
    printf("the data in fie is \n %s",str);*/
    // for writing in a file
    char str[45] = "**harry potter  is a best teacher ll";
    ptr = fopen("fileio.txt", "w");//last delete ho jayega one(first) time only ,uske jo doge wo jata rahega
  //  ptr =fopen("fileio4.txt", "w");//a new file of same name automatically created because this file is not exist
   // ptr = fopen("fileio.txt", "a"); // last wale ke sath add ho jayega
    fprintf(ptr, "%s", str); 
    fputs("suraj",ptr) ;      // str se leke ptr jis file ko point kar raha hai use de dega
    fclose(ptr);//inside()me pointer ka original name dalana hai
    return 0;
}