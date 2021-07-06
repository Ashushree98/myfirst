include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
//Global Declaration of Variables
int flag=0,fptr,*ptr,rno,year,maxrollno,cnt=0,false1=0;
int num1;
char branch[6],br1[6];

//Structure that holds candidate name and count of vote
typedef struct cd
{
	 char nm[20];
	 int count;
}CD;
CD *a;
//fn to store names of candidates standing for election

void cdname(CD *a)
{
	FILE*f1;
	printf("Enter Candidate name:");
	scanf("\n");
	gets(a->nm);
	a->count=0;

	//Names are stored in text file
	f1=fopen("PreviousElection.txt","r+");
	fseek(f1,0,SEEK_END);
	fprintf(f1,"\n%s",a->nm);
	fptr=ftell(f1);
	fclose(f1);

}
