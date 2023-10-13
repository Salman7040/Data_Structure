#include<stdio.h>
#include<conio.h>

int getLen(char a[]){
int i;
for(i=0;a[i]!='\0';i++);
return i;
}
void prt(char a[]){
for(int i=0;a[i]!='\0';i++)
printf("%c",a[i]);
printf("\n\n");
}

void main(){
clrscr();
char a[200]={"hello hii to hii to hii"};
char ins[]={"hii"};
char ch[]={"abc"};
int *index_no,index_inc=0;
int ctr=0,f1=0,i,time=0;

for(i=0;a[i]!='\0';i++){

if(a[i]==ins[0]){
ctr=0;
	for(int j=0;ins[j]!='\0';j++){
		if(a[i+j]==ins[j])
			ctr++;
		else
			break;
		if(ctr==getLen(ins)){
			time++;
			index_no[index_inc]=i;
			index_inc++;
			}
	   }
	}
}

prt(a);
int flag=0;
int a_len=getLen(a);
int ch_len=getLen(ch);
int ins_len=getLen(ins);

if(ins_len==ch_len)
flag=0;
else if(ch_len>ins_len)
flag=1;
else if(ins_len>ch_len)
flag=2;




if(flag==0){
int next=0;
int len;
	for(int k=0;k<a_len;k++)
	{
		if(index_no[next]==k){
			for(int j=0;j<ch_len;j++)
				a[k+j]=ch[j];
				next++;
		}
	}

}//if whene flag==0
/*
else if(flag==1){
int next=0;
for(next=0;index_no[next]!='\0';next++);

 for(int k=a_len;k>=0;k--){
if(index_no[next]==kd)

 }
}//if whene flag==0
*/
getch();
}