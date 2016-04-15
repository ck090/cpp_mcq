#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
char ques[50],option[75];
int main()
{

int count = 0, count1 = 0, cans= 0, rans=0;
char w = 'a';
char chk[10];
int chk1=0;
int i=0;

ifstream check("Ans.txt");
check.getline(chk,7,'#');
for(int f=0;chk[f]!='\0';f++)
{chk1++;}
check.close();

for(int z=1;z<=chk1;z++)
{

ifstream q("Ques.txt");
q.seekg(count,ios::beg);
q.getline(ques,50,'\n');
cout<<"\n\nQuestion "<<ques<<endl;
int n=0;
for(int h=0;ques[h]!='\0';h++)
{n++;}
count+=n;
count+=2;

ifstream op("Mcq.txt");
op.seekg(count1,ios::beg);
op.getline(option,100,'#');
cout<<"Your options are:"<<endl<<option;
int o=0;
for(int l=0;option[l]!='\0';l++)
{o++;}
count1+=o;
count1+=2;

char answers[10];
char val;
ifstream ans("Ans.txt");
ans.getline(answers,12,'#');
cout<<"\nEnter your option:\t";
cin>>val;
cout<<val;
//cout<<answers;
//char *comp=new char[10];
//comp=answers[i];
if (val == answers[i])
{ cout << "HHH"; cans++; }
else
{ cout << "YYY"; rans++; }
i++;
val='\0';
}

cout<<"\n\n\nYOUR FINAL SCORE IS------\n";
cout<<"Correct answers: "<<cans<<endl<<"Percentage: "<<(cans/chk1)*100<<endl;
}
