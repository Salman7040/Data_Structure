#include<stdio.h>
#include<conio.h>

void prt(char a[]){
for(int i=0;a[i]!='\0';i++)
printf("%c",a[i]);
}//for printing String

int getLen(char a[]){
int i;
for(i=0;a[i]!='\0';i++);
return i;
}//getLength


int find_ind(char a[],char f[],int *c){

int ctr=0,f1=0,i;
for(i=0;a[i]!='\0';i++){
if(a[i]==f[0]){
	for(int j=0;f[j]!='\0';j++){
		if(a[i+j]==f[j])
			ctr++;
			if(ctr==getLen(f)){
				f1=1;
				break;
			}
		}
	}
	if(f1==1)
	break;
}
*c=ctr;
return i;
} //find_index

void find_replace(char a[],char ch[],char ins[]){
int end_ind=0,str_ind=0;
str_ind=find_ind(a,ch,&end_ind);
int ch_len=getLen(ch);
int ins_len=getLen(ins);
int a_len=getLen(a);
int flag=0;

if(ins_len>ch_len)
flag=1;
else if(ins_len<ch_len)
flag=2;
else if(ins_len==ch_len)
flag=0;
if(flag==0){
	for(int i=0;i<a_len;i++)
	{
		if(str_ind==i){
			for(int j=0;j<ins_len;j++)
				a[i+j]=ins[j];
			break;
		}

	}
}
else if(flag==1){
int rem=ins_len-ch_len;
a_len=(a_len+(ins_len-ch_len))-1;
	for(int i=a_len;i>=0;i--)
	{
		if((str_ind+end_ind-1)==i){
			for(int j=str_ind,k=0;j<=((str_ind+end_ind)-1)+rem;j++,k++)
				a[j]=ins[k];
			break;
		}
	a[i]=a[i-rem];
	}
}
else if(flag==2){
int rem=ch_len-ins_len;
int fl1=0;
int last_i=0;
	for(int i=0;i<a_len;i++){
		if(i==str_ind){//starting length
		last_i=i;
			for(int j=0;j<ins_len;j++)
				a[i+j]=ins[j];
			fl1=rem;
			i=ins_len+last_i;
		}
		a[i]=a[i+fl1];
	}
}

}//find replace


void main(){
clrscr();
char a[200]={"it is crime for American to sell weapons to the enemy of American"};
char change[]={"sell"};
char ins[]={"uzair is good boy"};
find_replace(a,change,ins);
prt(a);
getch();
}
