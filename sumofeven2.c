#include <iostream>
//n到m之间的奇数和
//方法：1：保证n和m都是奇数，如果不是n+1 m-1
//2:用求和公式进行判断 ((m+n)/2) *(((n-m)/2)+1)
using namespace std;
int main(){
	int n,m,sum;
	cin >> n >>m;
	if(n%2==0)
		n++;
	if(m%2==0)
		m--;
	sum = ((m+n)/2) *(((m-n)/2)+1);
	cout <<sum <<endl;
}
