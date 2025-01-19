#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
};
 int main(){
 struct node* n1=(struct node*)malloc(sizeof(struct node));
 struct node* n2=(struct node*)malloc(sizeof(struct node));
 struct node* n3=(struct node*)malloc(sizeof(struct node));
 struct node* n4=(struct node*)malloc(sizeof(struct node));
 struct node* n5=(struct node*)malloc(sizeof(struct node));
 
 n1->next = n2;
  n2->next = n3;
   n3->next = n4;
    n4->next = n5;
    n5->next = NULL;
 
 struct node* ptr1 = n1;
 
 while(ptr1 != NULL){
  scanf("%d",&ptr1->data);
  ptr1=ptr1->next;
  }
  
  struct node* ptr2 = n1;
 while(ptr2 != NULL){
  printf("%d\n",ptr2->data);
  ptr2=ptr2->next;
  }
 return 0;
 }