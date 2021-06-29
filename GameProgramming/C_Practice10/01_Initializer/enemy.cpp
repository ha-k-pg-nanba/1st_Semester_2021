
#include"enemy.h"

Enemy::Enemy()
:Hp(8)
,Mp(1)
,Atk(2)
,Def(1)
{
	printf("コンストラクタ\n");
	Name[0] = '\0';
	Hp = 8;
	Mp = 1;
	Atk = 2;
	Def = 1;
}

Enemy::~Enemy()
{
	printf("デストラクタ\n");
}

void Enemy::InitStatus(const char* enemyName)
{
	sprintf_s(Name, 32, "%s", enemyName);
	Hp = 8;
	Atk = 2;
	Def = 1;
}

void Enemy::ShowStatus()
{
	printf("--- Enemy Status ---\n");
	printf("Name : %s\n", Name);
	printf("Hp:%d\n", Hp);
	printf("Mp:%2d\n", Mp);
	printf("Atk:%2d\n", Atk);
	printf("Def:%2d\n", Def);
}