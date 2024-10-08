#include<stdio.h>

int WageRecursive(int recurrentWage,int count, int recurrentMoney, int wageMoney, int wage) {


	//if (recurrentMoney>100){
	//	recurrentWage = recurrentWage * 2 - 50;
	//}
	wageMoney = wage * count;
	recurrentMoney += recurrentWage;

	if (recurrentMoney>wageMoney){
		printf("再帰のお金と時間  お金=%d,時給=%d,時間=%d\n", recurrentMoney, recurrentWage,count);
		printf("一般のお金と時間  お金=%d,時給=%d,時間=%d\n", wageMoney, wage, count);
		return 0;
	} else{
		printf("再帰のお金と時間  お金=%d,時給=%d,時間=%d\n", recurrentMoney, recurrentWage, count);
		printf("一般のお金と時間  お金=%d,時給=%d,時間=%d\n", wageMoney, wage, count);
		return WageRecursive(recurrentWage * 2 - 50, count + 1, recurrentMoney, wageMoney, wage);
	}
}

int main() {
	int recurrentWage = 100;
	int timeCount = 1;
	int recurrentMoney=0;
	int wageMoney=0;
	int wage = 1072;
	//printf("ああああ");
	WageRecursive(recurrentWage, timeCount, recurrentMoney, wageMoney, wage);

	return 0;
}