//找出a[i]=i的值，有多个返回第一个
#include<iostream>
using namespace std;
int  main(){
int n;
cin >>n;
int a[100];
for (int i = 0; i < n; ++i){
		cin >>a[i];
	if(a[i] !=i)
		continue;
	else 
	{
		cout<<a[i]<<endl;
			break;
	}
	}
	if(a[n-1]!=(n-1))
		cout <<"n"<<endl;
}
