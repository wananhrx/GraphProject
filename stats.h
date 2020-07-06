#include <stdio.h>
#include <stdlib.h>
#include "search.h"
#define MAX 1000000;
int numberOfEdges(char name[]);
int numberOfVertices(char name[]);
int freemanNetworkCentrality(char name[]);

typedef struct eode{
	int ser;
	int weight;
    struct node *next;
}ENode;

typedef struct hnode{
	int data;
	ENode *fnode;
}HNode;

typedef struct{
	HNode *adjlist; //邻接表头节点数组
	int n; //顶点个数
	int e; //边数
	int node;
}Graph;

int numberOfEdges(char name[]);
int numberOfVertices(char name[]);
int freemanNetworkCentrality(char name[]);
