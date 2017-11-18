//你买了一箱n个苹果，很不幸的是买完时箱子里混进了一条虫子。虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，那么经过y小时你还有多少个完整的苹果？
/*
 * 输入10 4 9
 * 输出  1
 * 1:算法 10 - 9/4+1 n - y/x 如果y-x >n 输出0 
 *
 * */
#include<iostream>
using namespace std;
int main(void){
	int x,y,n,left;
	//输入n,y,x
	cin >> n >> x >>y;
	//计算
	if(y/x >= n)
		left = 0;
	else if(y%x==0)
		left = n- y/x;
	else 
		left = n - (y/x+1);
	cout <<left<<endl;
		
		
}
