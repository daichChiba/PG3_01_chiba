#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

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
	for (auto itr = rosen.begin(); itr != rosen.end(); ++itr)
	{
		std::cout << *itr << "\n";
	}
	//rosen
	printf("\n2019年山手線\n");
	for (auto itr = rosen.begin(); itr != rosen.end(); ++itr) {
		cout << *itr << endl;

		// "日暮里"の後に"西日暮里"を追加する
		if (strcmp(*itr, "日暮里") == 0) {
			itr = rosen.insert(itr, "西日暮里");
			++itr;
		}
	}
	printf("\n2019年\n");

	//要素の追加
	for (std::list<char>::iterator itr = rosen.begin(); itr != rosen.end(); ++itr)
	{
		if (*itr == "Tabata")
		{
			itr = rosen.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}

	return 0;
}