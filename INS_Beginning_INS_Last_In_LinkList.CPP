#include<stdio.h>
#include<conio.h>
#include<alloc.h>
 struct node {
 int data ;
 node *next;
 };

 void prt(node *h){
	 printf("%d\n",h->data);
	 while(h->next!=NULL){
	 h=h->next;
	  printf("%d\n",h->data);
	 }
 }

 node * insBeg(int d,node *add){
node *h;
h=(node *)malloc(sizeof(node));
h->data=d;
h->next=add;
return h;
}
node * insLast(int d,node *add){
node *h;
h=add->next=(node *)malloc(sizeof(node));
h->data=d;
h->next=NULL;
return h;
}

 node *createnode(int d){
 node *h;
 h=(node *)malloc(sizeof(node));
 h->data=d;
 h->next=NULL;
 return h;
 }
node * addnode(node *h,int d){
  h=h->next=(node *)malloc(sizeof(node));
  h->data=d;
  h->next=NULL;
  return h;
}
void main(){
clrscr();
node *h,*p,*store1;
h=createnode(10);
store1=h;
p=addnode(h,20);
p=addnode(p,30);
p=addnode(p,40);
p=addnode(p,50);
p=addnode(p,60);

p=insLast(600,p);
p=insLast(700,p);
h=insBeg(500,store1);
h=insBeg(400,h);
prt(h);
getch();
}
