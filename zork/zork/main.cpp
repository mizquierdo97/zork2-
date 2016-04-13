#include <stdio.h>
#include "world.h"
#include <stdlib.h>
#include <string.h>




int main(){
	bool quit = false;
	printf("Welcome to my Zork \"Scape The Prison\"\n");
	//static bool quit = true;
	World my_world;
		
	my_world.createworld();
	while (quit != true){
		quit = my_world.loop();
	}

	


	
}