//进行统计的程序，针对特定的题目
//输入程序，源自于这个程序的特殊性，因为每次输入内容不确定长度
#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
double sum[7]={0.0};
int id;
int length;
char c;
double num;
for (int j= 0; j < 3; ++j)
{
	cin >>id;
	cin>>length;
	/* code */
for (int i = 0; i < length; ++i)
{
	/* code */
	cin >> c;
	cin >>num;
		if(c == 'A'){
				sum[4] +=num;
		}else if(c == 'B'){
				sum[5] +=num;
		}else if(c == 'C'){
				sum[6] +=num;
		}else if(c == 'C'){
		}
	sum[id] += num;
}
}
cout<<1<<" "<<fixed<<setprecision(2)<<sum[1]<<endl;
cout<<2<<" "<<sum[2]<<endl;
cout<<3<<" "<<sum[3]<<endl;
cout<<'A'<<" "<<sum[4]<<endl;
cout<<'B'<<" "<<sum[5]<<endl;
cout<<'C'<<" "<<sum[6]<<endl;
	return 0;
}
