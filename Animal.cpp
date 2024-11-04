#include "Animal.h"
#include<stdio.h>

Animal::Animal(){
	printf("%sが生まれた\n", name);
}

Animal::~Animal(){
	printf("%sが死んだ\n", name);
}

void Animal::Eating(){
	printf("%sが%sを食べた\n", name, food);
}
