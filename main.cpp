#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

using namespace std;

int main() {
	list<string>station = {
		"東京","神田","秋葉原","御徒町","上野",
		"鶯谷","日暮里","田端","駒込","巣鴨",
		"大塚","池袋","目白","高田馬場","新大久保",
		"新宿","代々木","原宿","渋谷","恵比寿",
		"目黒","五反田","大崎","品川","田町",
		"浜松町","新橋","有楽町"
	};

	printf("1970年山手線\n");
	for (auto itr = station.begin(); itr != station.end(); ++itr){
		std::cout << *itr << "\n";
	}
	//rosen
	printf("\n2019年山手線\n");
	for (auto itr = station.begin(); itr != station.end(); ++itr) {
		cout << *itr << endl;

		// "日暮里"の後に"西日暮里"を追加する
		if (*itr=="田端") {
			itr = station.insert(itr, "西日暮里");
			++itr;
		}
	}
	printf("\n2019年\n");
	for (auto itr = station.begin(); itr != station.end(); ++itr){
		std::cout << *itr << "\n";
	}
	//2019年の駅を表示
	for (auto itr = station.begin(); itr != station.end(); ++itr){
		std::cout << *itr << "\n";
	}


	printf("\n2022年\n");

	//要素の追加
	for (std::list<string>::iterator itr = station.begin(); itr != station.end(); ++itr){
		if (*itr == "田町"){
			itr = station.insert(itr, "高輪ゲートウェイ");
			++itr;
		}
	}

	//2022年の駅を表示
	for (auto itr = station.begin(); itr != station.end(); ++itr){
		std::cout << *itr << "\n";
	}

	return 0;
}