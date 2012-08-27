#include "Room.h"

Room::Room(void)
{
	backgroundImage = NULL;
}


Room::~Room(void)
{
}

void Room::addObject(int obj, double x, double y)
{
	RoomObj ro = RoomObj();
	ro.obj = obj;
	ro.x = x;
	ro.y = y;
	roomObjList.push_back(ro);
}

void Room::buildRoom()
{
	for each(RoomObj o in roomObjList)
	{
		makeObj(o.obj, o.x, o.y);
	}
}

Obj* Room::makeObj(int o, double x, double y)
{
	switch(o)
	{
		//TODO
	}
	return NULL;
}