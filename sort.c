//冒泡排序
/*冒泡排序步骤
 *1:输入排序数量
 *2:输入每一个待排序的数字
 *3:进行冒泡排序
 *3.1第一重循环，从0到n-1，从第一个数字比较到最后一个数字
 *3.2第二重循环，从1到n-i，从第一个数字到n-i个数字
 *3.3相邻比较
 *4:输出排序结果
 * */
#include <iostream>
using namespace std;
int main(){
	int n,a[1000];	
	//1:输入冒泡排序的数目
	cin >> n;
	for(int i = 0;i < n;i++)
		cin >> a[i];	
	//冒泡排序
	for(int i = 0;i< n -1;i++){
		for(int j = 1;j< n- i; j++){
			if(a[j - 1] > a[j]){
				int temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
	//输出结果
	for(int i = 0;i<n;i++)
		cout << a[i] << endl ;	
}
