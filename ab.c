//输入6个数，求最大奇数和最小偶数差的绝对值
#include <iostream>
using namespace std;
int main(){
	int n =0,maxOdd=0,minEven=100,m=0,ab=0;
	while ( n < 6){
		cin >> m;
		if(m % 2 ){
			if ( m > maxOdd)
				maxOdd = m;
		}//奇数
		else if (m % 2 == 0){
			if(m < minEven)
				minEven = m;
			}
	 	n++;
	}
	//求绝对值
	if(minEven > maxOdd)
		ab = minEven - maxOdd;
	else 
		ab = maxOdd -minEven;
	cout <<ab;
}
