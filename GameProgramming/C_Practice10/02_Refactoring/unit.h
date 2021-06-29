
#ifndef FIGHTER_H
#define FIGHTER_H

#include"Common.h"

class Fighter
{
public:
	Fighter();
	~Fighter();

	Status status;

	void InitRandomStatus();

	char name[32];
};
#endif // !FIGHTER_H

