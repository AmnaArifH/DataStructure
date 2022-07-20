#include <iostream>
using namespace std;
int main()
{
//	int marks[]={44,66,88,99,46};
//	cout<<"marks [0] :"<<marks[0]<<endl;
//	cout<<"address of 0 index: "<<&marks[0]<<endl;
//	int *p;
//	p=marks;
//	cout<<"address of 0 index: "<<p<<endl;
//	cout<<"value of 0 index: "<<*p<<endl;
//	cout<<"marks [2] :"<<marks[2]<<endl;


//int marks[5];
//for(int i=0;i<5;i++)
//{
//	cout<<"ENTER MARKS ["<<i<<"]:";
//	cin>>marks[i];
//}
//cout<<"ALL THE MARKS YOU HAVE ENTERED: "<<endl;
//for(int i=0;i<5;i++)
//{
//	cout<<marks[i]<<" ";
//}


//int marks[]={10,20,30,40,00};
//int sum=0;
//int n=5;
//for(int i=0;i<n;i++)
//{
//	sum=sum+marks[i];
//}
//cout<<"sum is : "<<sum;


int marks[50];
int i;
int size;
cout<<"ENTER SIZE OF ARRAY  YOU WNAT TO ENTER :";
cin>>size;
int p;
cout<<"ENTER POSITION:";
cin>>p;
cout<<"ENTER "<<size<<" ELEMENTS FOR ARRAY:"<<endl;
for(int i=0;i<size;i++)
{
	cin>>marks[i];
}
cout<<"ALL ELEMENTS ARE:"<<endl;
for(int i=0;i<size;i++)
{
	cout<<marks[i]<<" ";
}
int ele;
cout<<"ENTER ELEMENT:"<<endl;
cin>>ele;
cout<<"\n";
for(int i=size;i>=p;i--)
{
	marks[i]=marks[i-1];
}
marks[i]=ele;
cout<<"AFTER CHANGING: "<<endl;
for(int i=0;i<size;i++)
{
	cout<<marks[i]<<" ";
}
}
