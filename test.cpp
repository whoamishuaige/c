#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	/*有一种细菌分为A、B两个亚种，它们的外在特征几乎完全相同，仅仅在繁殖能力上有显著差别，A亚种繁殖能力非常强，B亚种的繁殖能力很弱。在一次为时一个小时的细菌繁殖实验中，实验员由于疏忽把细菌培养皿搞乱了，请你编写一个程序，根据实验结果，把两个亚种的培养皿重新分成两组。

细菌繁殖能力（繁殖率）的量化标准为一个小时内细菌数量增长的比例（繁殖率 = 一小时后细菌数量 / 原本细菌数量）。

两个亚种繁殖能力差异很大，这意味着对于任意两个同种细菌培养皿的繁殖率的测量值之间的差异要小于任意两个异种细菌培养皿繁殖率的测量值之间的差异。即：


输入

输入有多行，第一行为整数n（n≤100），表示有n个培养皿。

其余n行，每行有三个整数，分别代表培养皿编号，试验前细菌数量，试验后细菌数量。假设试验没有误差。

输出

输出有多行：

第一行输出A亚种培养皿的数量，其后每行输出A亚种培养皿的编号，按繁殖率升序排列。

然后一行输出B亚种培养皿的数量，其后每行输出B亚种培养皿的编号，也按繁殖率升序排列。*/

//总结：1：分组出现问题。2：a繁殖强b繁殖弱3：繁殖率=繁殖率 = 一小时后细菌数量 / 原本细菌数量(目测结果为1.x)
int n;
int id[100];
double rate[100];

cin >> n;
//求每一个的概率
for (int i = 0; i < n; ++i)
{
	int initial final;
	cin >>id[i]>>initial>final;
	rate[i] = (double)initial / final;
	/* code */
}
for (int i = 0; i < n; ++i)
{
	for (int j = 0; j < n-i-1; ++j)
	{
		if (rate[j+1] >rate[j])
		{
			int tempId = id[j];	
			id[j] = id[j+1];
			id[j+1] = tempId;
			double tempRate  = rate[j]
			rate[j] = rate[j+1];
			rate[j+1] =tempRate;
			/* code */
		}
	}
}
//记录最大的差,原因是需要输出
//这是为了排序之后确定分界线
double maxDiff = 0;
//和最大的下标
int maxDiffIndex =0;
for (int i = 0; i < n-1; ++i)
{
	/* code */
	double diff = rate[i] - rate[i+1];
	if(maxDiff < diff){
		maxDiff =diff;
		maxDiffIndex = i;
	}
}

cout<<maxDiffIndex + 1 <<endl;
for (int i = 0; i < maxDiffIndex; ++i)
{
	/* code */
	cout<<id[i]<<endl;
}

cout<<n-maxDiffIndex -1<<endl;
for (int i = 0; i >maxDiffIndex+1;  --i)
{
	/* code */
	cout<<id[i]<<endl;
}

return 0;
}
