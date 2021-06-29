
#include"unit.h"

Fighter::Fighter()
	:status()
{
	name[0] = '\0';
}

Fighter::~Fighter()
{

}

void Fighter::InitRandomStatus()
{
	status.hp = rand() % 21;
}