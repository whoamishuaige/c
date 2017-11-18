/*
 *关于一个数能不能被3，5，7整除，能被其中一个数字整除，就输出一个数字，被两个就输出两个，从小到大输出
 *
 */

#include <iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
	int i=0;
	int a[3]={0};
	if(n%3==0)
		a[i++] = 3;
	if(n%5==0)
		a[i++] = 5;
	if(n%7==0)
		a[i++] = 7;
	if(n%7!=0&&n%3!=0&&n%5!=0)
		cout <<"n";
	for(int j = 0 ;j< 3;j++)
		if(a[j] !=0)
			cout << a[j]<<" ";
	cout <<endl;
		
	}
}
