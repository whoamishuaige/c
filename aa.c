//分离整数的每一位数字

//输入任意一个三位数，输出百位，十位，个位
#include<iostream>
using namespace std;
int main(){
int x,ge,bai,shi;
//输入一个三位数字
cin >> x;
ge  = x % 10;
shi = (x/10)%10; 
bai = (x/10/10)%10; 
//输出百位，十位，个位
cout <<bai<<endl<<shi<<endl<<ge<<endl;
}
