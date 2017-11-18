#include <iostream>
using namespace std;
int main()
{
int res,x,y;
char sign;
cin >> x >> y>>sign;
switch(sign){
	case '+': cout<< x+y<<endl;break;
	case '-': cout<< x-y<<endl;break;
	case '*': cout<< x*y<<endl;break;
	case '/': if(y==0) cout<<"Divided by zero!"<<endl;else res = x/y;break;
	default: cout<<"Invalid operator!"<<endl;
}
	/* code */
	return 0;
}
