#include <stdio.h>
int main(){
for(int i =0;i<5;i++){
if(i==2){
continue;
}
else{
for(int k =0;k<=i;k++){
printf(" ");
}
for(int j =4;j>=i;j--){
printf("* ");
}

}

printf("\n");
}
for(int i =0;i<5;i++){
if(i==2||i==0){
continue;
}
else{
for(int k =3;k>=i;k--){
printf(" ");
}
for(int j =0;j<=i;j++){
printf(" *");
}

}

printf("\n");
}
return 0;
}