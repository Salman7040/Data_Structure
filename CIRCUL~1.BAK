#include<stdio.h>
#include<conio.h>

const int N=4;
int cq[N];
int f=-1,r=-1;
int str=0;
int flag=0;
void init(){
for(int i=0;i<N;i++)
cq[i]=0;
}

void prt(){
printf("\n ");
printf("Circular Queue Value: ");

for(int i=0;i<N;i++)
printf("%d ",cq[i]);
}

int che(){

for(int i=0;i<N;i++){
if(cq[i]!=0)
return 0;
}
return 1;
}


void enqueue(int get){
if(flag==1){
if(r==N-1)
r=-1;
}

if(r>=N-1 || f-1==r || r==f && !(f==-1 || r==-1 && f==0 || r==0)){
printf("\n queueu is full\n");
}
else{
r++;
 if(r==0)
 f=str;
cq[r]=get;
}

}


int dequeue(){
if(f>N-1)
f=0;

if(che()==1){
printf("\nqueue is empty\n");
}
else
{
cq[f]=0;
f++;
flag=1;
str=f;
}

}


void main()
{
clrscr();

enqueue(10);
enqueue(20);
enqueue(30);
enqueue(40);

prt();
getch();
}
