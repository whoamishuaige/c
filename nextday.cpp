#include<iostream>
#include <stdio.h>
using namespace std;
//输出下一天的日期
int year,month,day;
//判断闰年，如果是闰年，输入yes，否则输出y
bool isYearAndMonthTrue();
bool isLeap();
int dayOfMonth(bool isLeapYear);
bool isDayTrue(int monthDay);
bool yearLastDay();	
bool monthLastDay(int monthDay);
void printDay(bool isYearLastDay,bool IsMonthlastday);
int main(int argc, char const *argv[])
{
	/* code */
	scanf("%d-%d-%d",&year,&month,&day);
	/*将输入的字符串变成三个数字 年月日*/
	/*判断年的输入是不是合理*/
	bool aa = isYearAndMonthTrue(); //判断输入的年和月是否合理
	/*判断年是否是闰年*/
	bool isLeapYear = isLeap();
	/*返回当前月的天数*/
	int monthDay = dayOfMonth(isLeapYear);
	/*查看输入的天数是不是合法*/
	bool bb = isDayTrue(monthDay);
	if(aa&&bb){
	/*输入下一日*/
	/*判断是不是一年的最后一天*/
	bool isYearLastDay = yearLastDay();
	/*查看是不是一个月的最后一天*/
	bool IsMonthlastday = monthLastDay(monthDay);
	printDay(isYearLastDay,IsMonthlastday);
}
	return 0;
}



bool isYearAndMonthTrue(){
	if(year >2999 || year <1600 ||month < 1 ||month > 12){
			cout <<"你的年份或者月份输入错误";
			return false;
	}
	return true;
}
bool isDayTrue(int monthDay){
	if(day<0||day>monthDay){
		cout <<"你输入的日期有误";
		return false;
	}
	else
		return true;
}


bool isLeap(){
	if((year%4==0)&&(year%100!=0) ||(year%400 ==0))
		return true;
	else 
		return false;
}

//返回当月天数
int dayOfMonth(bool isLeapYear){
	int LeapYear[12] = {31,29,31,30,31,30,31,31,30,31,30,31};//闰年
	int notLeapYear[12] = {31,28,31,30,31,30,31,31,30,31,30,31};//平年
	if(isLeapYear)
			return LeapYear[month];
	else 
			return notLeapYear[month];
}
/*查看输入的天是不是一个月的最后一天*/
bool monthLastDay(int monthDay){//monthDay 这个月有的天数，当前天数
		if(monthDay == day)
			return true;
		else 
			return false;
}
/*查看输出是不是一年的最后一天*/
bool yearLastDay(){
	if((month==12)&&(day==31))
		return true;
	else 
		return false;
}

/*计算明天日期并且输出*/
void printDay(bool isYearLastDay,bool IsMonthlastday){
	if(isYearLastDay){year += 1;month=1;day=1;}
	if(IsMonthlastday){month+=1;day=1;}
	day+=1;
	cout<<year<<"-"<<month<<"-"<<day<<endl;
}
