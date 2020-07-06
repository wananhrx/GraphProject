#include <stdio.h>
#include <string.h>
#include "search.h"
#include "stats.h"

int main(int argc, char *argv[]])
{
	if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0) {
		printf("--------帮助菜单---------\n");
		printf("1、                      \n");
		printf("2、                      \n");
		printf("-------------------------\n");
	}
	if (strcmp(argv[1], "-g") == 0 || strcmp(argv[1], "--graph") == 0) {
		if (strcmp(argv[3], "-s") == 0 || strcmp(argv[3], "stats") == 0) {
			FILE *fp;
			fp = fopen("argv[2]", "r");
			while (fscanf("%d%d%d"))
			if (strcmp(argv[4], edges) == 0) {
				return numberOfEdges(argv[2]);
			} else if (strcmp(argv[4], "vertices") == 0) {
				return numberOfVertices(argv[2]);
			} else if (strcmp(argv[4], "freeman") == 0) {
				return freemanNetworkCentrality(argv[2]);
			}
		}
		if (strcmp(argv[3], "-sp") == 0 || strcmp(argv[3], "--shortestpath") == 0) {
			if (strcmp(argv[4], "Dijkstra") == 0) {
				Dijkstra(argv[2], argv[5][1], argv[7][1]);
			} else if (strcmp(argv[4], "DFS") == 0) {
			
			} else if (strcmp(argv[4], "BFS") == 0) {
				
			}
		}
	}
}


									@	
					   @	   	   @@
						@		  @ @
					   @ @		 @	@	
                      @@ @		@	@
                      @   @     @ 	@@
					 @@   @    @ 	  @	
					@    @     @	  @	
				  @      @@@@@@@	   @@
				 @@						@@
			   @@ 	 					 @@
			  @@    /———/		/———/	   @
			  @      \O/         \O/	   @@
			  @ 						    @	
			  @@						    @	
			   @@		___________		   @@	
			     @		V V	V V V V		  @@
				  @@@				    @@
				     @@@@		      @@@
				    	@@@@@@@@@@@@@@








