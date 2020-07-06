#include <stdio.h>
#include <stdlib.h>
#define max 10000000

typedef struct node{
	int adjvex;
	struct node *next;
	int weight;
}eNode;

typedef struct headnode{
	char vertex;
	eNode *firstedge;
}hNode;

typedef struct{
	hNode adjlist[MAX];
	int n; //顶点数
	int e; //边数
}Graph;

int pre[max];
int path[max];
int visit[max];

void Dijkstra(Graph* G, int u, int v);
void DFS(Graph *G, int u, int v);
void BFS(Graph *G, int u, int v);
