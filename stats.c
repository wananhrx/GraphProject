#include <stdio.h>
#include <string.h>
#include "stats.h"

void add_one_edge(Graph **g, int x, int y, int w);

static int numberOfEdges(char name[])
{
    FILE* f;
    int n = 0;
	int a, b, c;
	if ((f = fopen(name, "r")) == NULL) {
		printf("Can't read the file!");
		return 0;
	}
	while (fscanf(f, "%d %d %d", &a, &b, &c) == 3) {
		n++;
	}
	fclose(f);
	return n;
}

static int numberOfVertices(char name[])
{
	FILE *f;
	int* visited;
	int count = 0;
	int a, b, c;
	visited = (int*)malloc(MAX * sizeof(int));
	if ((f = fopen(name, "r")) == NULL) {
		printf("error");
		return 0;
	}
	while (fscanf(f, "%d %d %d", &a, &b, &c) == 3) {
		if (visited[a] == 0) {
			visited[a] = 1;
			count++;
		}
		if (visited[b] == 0) {
			visited[b] = 1;
			count++;
		}
		fclose(f);
		return count;
}

double freemanNetworkCentrality(char name[])
{
	Graph *g = (Graph *)malloc(sizeof(Graph));
	(*g)->e = 0;
	(*g)->n = 0;
	(*g)->adjlist = (HNode *)malloc(sizeof(HNode) * MAX);
	for (int i = 0; i < MAX; i++) {
		((*g)->adjlist + i)->fnode = NULL;
		((*g)->adjlist + i)->data = 0;
	}
	memset(ver, 0, sizeof(ver));
	g->n = 0;
	FILE *F = freopen(name, "r", stdin);
	if(F == NULL) {
		printf("error");
		return;
	}
	int n = 0, max = 0;
	int x, y, w;
	while (fscanf(F,"%d%d%d", &x, &y, &w) != EOF) {
		max = x > y ? x : y;
		n = n > max ? n : max;
		if (!ver[x]) {
			ver[x] = 1;
			g->n++;
		}
		if (!ver[y]) {
			ver[y] = 1;
			g->n++;
		}
		add_one_edge(&g, y, x, w);
	}
	g->node = n;
	return g;
}

void add_one_edge(Graph **g, int x, int y, int w)
{
	ENode *e = (ENode *)malloc(sizeof(ENode));
	e->ser = x;
	e->weight = w;
	e->next = ((*g)->adjlist + y)->fnode;
	((*g)->adjlist + y)->fnode = e;
	((*g)->adjlist + y)->data++;
	(*g)->e++;
}
}
