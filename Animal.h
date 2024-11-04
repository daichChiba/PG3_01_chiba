#pragma once
#include "Biology.h"
class Animal : public Biology{
public:
	//コンストラクタ
	Animal();
	//デストラクタ
	~Animal();
	//食事
	void Eating() override;


private:
	//名前
	const char* name = "ニワトリ";
	//食べ物
	const char* food = "田中";
};

