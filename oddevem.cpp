/*奇偶排序
 * 结论:输入诺干数字，分别进行奇数偶数排序
 * 方法
 * 1:建立两个数组，奇数放在左边数组，偶数放在右边数组
 * 2:对奇数组进行排序
 * 3:对偶数组进行拍寻
 * 4:输出奇数组
 * 5:输出偶数组
 * */
#include <iostream>
using namespace std;
int main(){
	int a[10];
	for(int i = 0;i<10;i++)
		cin >> a[i];
	int l = 0,r = 9;//左和右分别指向数组两端 加起来内容为10个
	while(l <= r ){
	bool leftIsOdd = a[l] %2 == 1;
	bool rightIsEven = a[r] %2 == 0;
	if(leftIsOdd) {
		l++;
	}else if(rightIsEven){
		r--;
		}else if(!leftIsOdd && !rightIsEven){
			int temp = a[l];
			a[l] = a[r];
			a[r] = temp;
		}

	}
	//对左边进行排序
	int start = 0,end = l;
	for(int i = start;i<end - 1;i++)
		for (int j = start+1;j<start +end -i ;j++)
			if (a[j-1] > a[j]){
				int temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;		
		}

	
	//对右边进行排序
	 start = l,end = 10;
	for(int i = start;i<end - 1;i++)
		for (int j = start+1;j<start +end -i ;j++)
			if (a[j-1] > a[j]){
				int temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;		
		}
	for(int i = 0;i < 10; i++){
		cout << a[i] << ' ';
		}
	return 0;
}
