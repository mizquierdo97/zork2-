#include <stdio.h>






class Room{
public:
	char* name;
	char* description;
	Room(char* name1, char* description1){ 
		name = name1;
		description = description1;
	};
	~Room();
	
};