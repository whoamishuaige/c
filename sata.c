//统计分数，求出最大值
#include<iostream>
using namespace std;
int main(){
	int n,score;
	cin >> n;
	int  max = 0;
	while (n > 0){
		cin>>score;
		if (score > max)
			max = score;
		n --;
	}
	cout <<max<<endl;
}
