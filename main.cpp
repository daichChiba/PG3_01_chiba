#include<stdio.h>
#include <iostream>
#include <list>

using namespace std;

int main() {
	list<const char*>rosen = {
		"東京","神田","秋葉原","御徒町","上野",
		"鶯谷","日暮里","田端","駒込","巣鴨",
		"大塚","池袋","目白","高田馬場","新大久保",
		"新宿","代々木","原宿","渋谷","恵比寿",
		"目黒","五反田","大崎","品川","田町",
		"浜松町","新橋","有楽町"
	};

	printf("1970年山手線\n");
	for (list<char> itr = rosen.begin();
		itr != rosen.end();
		itr++) {
		cout << *itr << endl;
		printf("%s", rosen[itr]);
	}
	return 0;
}