/*大象喝水问题
 *1:喝20升=20*1000=20000cm^3
  2:计算每一桶容积 pi  r r h
  3:除法运算 + 1 
 * */
#include <iostream>
using namespace std;
int main(void){
float r,h,v;
const float PI=3.14159;
cin >> h >> r;
v = PI * r * r * h;
cout << int(20000 / v +1)<<endl;
}
