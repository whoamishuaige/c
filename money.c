//从键盘输入一指定金额（以元为单位，如345），然后输出支付该金额的各种面额的人民币数量，显示100元，50元，20元，10元，5元，1元各多少张，要求尽量使用大面额的钞票。
//一个小于1000的正整数。

//输出

//输出分行，每行显示一个整数，从上到下分别表示100元，50元，20元，10元，5元，1元人民币的张数
#include <iostream>
using namespace std;
int main(){
	int num100=0,num50=0,num20=0,num10=0,num5=0,num1=0;
	int  n;
	cin >>n;
	if(n>=100)
	{
		num100 = n / 100;
		n = n - num100*100;
	}
	cout << n<<endl;
	if(n >= 50)
	{
		num50 = n / 50;
		n = n - num50*50;
	}
	if(n>=20)
	{
		num20 = n / 20;
		n = n - num20*20;
	}
	cout << n;
	if(n>=10)
	{
		num10 = n / 10;
		n = n - num10*10;
	}
	if(n>=5)
	{
		num5 = n / 5;
		n = n - num5*5;
	}
	num1 = n;
	cout <<num100<<endl;
	cout <<num50<<endl;
	cout <<num20<<endl;
	cout <<num10<<endl;
	cout <<num5<<endl;
	cout <<num1<<endl;

}
