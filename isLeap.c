//判断是否是闰年
//四年一闰,百年不闰,四百年再闰
//输入
//
//输入只有一行，包含一个整数a(0 < a < 3000)
//
//输出
//
//一行，如果公元a年是闰年输出Y，否则输出N
//
//样例输入
#include <iostream>
using namespace std;
int main(){
	int a;
	cin >>a;
	if(a%4==0 && a%100!=0 || a%400==0)
		cout<<"y"<<endl;
	else 
	cout<<"n"<<endl;
}
