#include <stdio.h>
#include <stdlib.h>
#include "search.h"

void Dijkstra(Graph* G, int u, int v)
{
	eNode* p = G->adjlist[u].firstedge;
	memset(pre, G->n, -1);
	memset(path, G->n, max);
	memset(visit, G->n, 0);
	while (p) {
		path[p->adjvex] = p->weight;
       	pre[p->adjvex] = u;
	    p = p->next;
	}
	visited[u] = 1;
	for (int i = 0; i < G->n; i++) {
		int min = max + 1;
       	for (int j = 0; j < G->n; j++) {
			if (!visit[j] && path[j] < min) {
				min = path[j];
			}
			visit[j] = 1;
			p = G->adjlist[j].firstedge;
			while (p) {
				if (!visit[p->adjvex]) {
					int mpth = p->weight + path[k];
					if (mpth < path[p->adjvex]) {
						path[p->adjvex] = mpth;
						pre[p->adjvex] = k;
					}
				}
				p = p->next;
			}																															            }
	}
	int k = 0;
	pth[k] = v;
	k++;
	int t = pre[v];
	while (t != u) {
		pth[k] = t;
		t = pre[t];
		k++;
		t++;
	}
	printf("%d", u);
	for (int i = k - 1; i >=0; i--) {
		printf(" -> %d", pth[i]);
	}
	return 0;
}
