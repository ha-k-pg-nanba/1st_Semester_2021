
#ifndef FIGHTER_H
#define FIGHTER_H

#include"Common.h"

class Fighter
{
public:
	Fighter();
	~Fighter();

	char name[32];
};

Status::Status()
{
	void InitRandomStatus();
}

#endif // !FIGHTER_H

