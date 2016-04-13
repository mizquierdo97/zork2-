#include <stdio.h>
#include "object.h"
#include "player.h"
#include "exit.h"
#include "room.h"
#include "globals.h"
#include "Vector.h"



enum direction{
	north,
	south,
	east,
	west,
};








class World{
public:
	//World* w;
	Vector <Room*> rooms;
	Exit* exits;
	Player* player;
	Object* objects;
	World();		
	~World(){
		//delete[] rooms;
		delete[] exits;
		delete[] player;
		delete[] objects;

	}
	void createworld();
	bool loop();
	void open(char * inst, int dir);
	void close(char * inst, int dir);
	bool Go(char* inst, int dir);
	void look(char* inst, int dir)const;
	void take(char* inst);
	

};








