#pragma once
//生物
class Biology {
public:/*メンバ関数*/
	//コンストラクタ
	Biology();
	//デストラクタ
	virtual ~Biology();
	//食事(宣言)
	virtual void Eating();
	

private:
	//名前
	const char* name;
};

