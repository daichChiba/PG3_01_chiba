#include "Human.h"
#include<stdio.h>

Human::Human(){
	printf("%sが生まれた\n", name);
}

Human::~Human(){
	printf("%sが死んだ\n", name);
}

void Human::Eating(){
	printf("%sが%sを食べた\n", name, food);
}
