//一次展览，1，3，5不看
//方法：输入一个数字，1到7，如果是1，3，5则不看，否则看
//看回答yes，不看回答no
#include <iostream>
using namespace std;
int main(){
//输入一个数字
int i;
cin >> i;
if(i==1||i==3||i==5)
	cout <<"no"<<endl;
else 
	cout <<"yes"<<endl;

return 0;
}
