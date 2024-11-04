#pragma once
#include "Biology.h"
class Human :public Biology{
public:
	//コンストラクタ
	Human();
	//デストラクタ
	~Human();
	//食事
	void Eating() override;


private:
	//名前
	const char* name = "佐藤";
	//食べ物
	const char* food = "カレー";

};

