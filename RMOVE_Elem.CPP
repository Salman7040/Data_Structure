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
 node *createnode(int d){
 node *h;
 h=(node *)malloc(sizeof(node));
 h->data=d;
 h->next=NULL;
 return h;
 }
node *addnode(node *h,int d){
  h=h->next=(node *)malloc(sizeof(node));
  h->data=d;
  h->next=NULL;
  return h;
}
void main(){
clrscr();
node *h,*p,*store;
h=createnode(10);
store=h;
p=addnode(h,20);
p=addnode(p,30);
p=addnode(p,40);
p=addnode(p,50);

 int rem=50,len=5;
 node *rem_str=h,*str;


 for(int i=0;i<len;i++){
	 if(rem==h->data){
		str=h=h->next;
		rem_str->data=h->data;
		rem_str->next=str->next;
	 }

  h->data= h->data;
 h=h->next;
 rem_str=h;


}
h=store;
prt(h);
getch();
}
