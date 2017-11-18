//年龄和疾病
//统计一下某项疾病在特定年龄的发病率
//第一行输入一个数字n，数字为病人数目
//输入n个年龄
//统计
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n,m;
	float rate18,rate19,rate36,rate60;
	int num18=0,num19=0,num36=0,num60=0;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> m;
		if(m < 18)
			num18++;
		else if(m > 19 && m < 35)
			num19++;
		else if(m > 36 && m < 60)
			num36++;
		else 
			num60++;
	}
	
		rate18 =float(num18) / n;
		rate19 =float( num19)/ n;
		rate36 =float(num36) / n;
		rate60 =float(num60) / n;
		cout<<fixed<<setprecision(2) << "1-18: "<<rate18 * 100 << "%"<<endl;
		cout << "19-35: "<<rate19 * 100 << "%"<<endl;
		cout << "36-60: "<<rate60 * 100 << "%"<<endl;
		cout << "60-: "<<rate60 * 100 << "%"<<endl;
	return 0;
}
