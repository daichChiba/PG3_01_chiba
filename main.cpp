#include<stdio.h>
#include"Animal.h"
#include"Human.h"

int main() {
	Biology* biology[3];

	//誕生
	for (int i = 0; i < 3; i++){
		if (i<1){
			biology[i] = new Human;
		} else{
			biology[i] = new Animal;
		}
	}

	//食事
	for (int i = 0; i < 3; i++){
		biology[i]->Eating();
	}
	//破棄
	for (int i = 0; i < 3; i++) {
		delete biology[i];
	}
	//for (int i = 0; i < 3; i++) {
	//	if (i < 1) {
	//		delete biology[i] = Human::~Human();
	//	} else {
	//		biology[i] = new Animal;
	//	}
	//}
	return 0;
}