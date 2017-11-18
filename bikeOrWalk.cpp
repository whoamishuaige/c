/*
* 直接比较两着时间成本
骑车时间成本(27+23)+n/3.0
走路时间成本n/1.2

*/
#include <iostream>
using namespace std;
int main(){
double n;
cin>>n;
if(50 + n/3.0 > n/1.2)
	cout << "walk";

else if(50+n/3.0<n/1.2)
	cout << "Bike";
else 
	cout <<"all";
return 0;
}
