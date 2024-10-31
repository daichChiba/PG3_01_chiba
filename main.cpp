#include<stdio.h>
#include"Enemy.h"
int main() {
	Enemy enemy_;
	while (true){
		enemy_.Update();
		int s;
		printf("0で次のフェーズ、１でループを抜ける\n");
		scanf_s("%d",& s);
		if (s==1){
			break;
		}
	}

	return 0;
}