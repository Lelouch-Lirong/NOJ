/*
邻接表 Dijkstra算法
*/
#include<iostream>
using namespace std;
#define INF 0x7fffffff
#define MaxVNum 100                //最大顶点数

typedef struct ArcNode{           //边结点
	int adjvex;                  //该边所指向的顶点的位置
	struct ArcNode *nextarc;     //指向下一条边的指针
	int weight;                       //权值
}ArcNode;

typedef struct VNode{
	int data;                //顶点信息
	ArcNode *firstarc;       //指向第一条依附该顶点的边的指针
}VNode;

class Graph{                      //邻接表
    private:
        VNode AdjList[MaxVNum];
        int m, n;               //m:边数    n：点数 
    public:
        Graph();
        void create();
        void Dijkstra();
        
};
Graph::Graph(){
    for(int i = 0; i < MaxVNum; i++){
        AdjList[i].firstarc = NULL;
        AdjList[i].data = -1;
    }
}


void Graph::create(){
    cin>>n>>m;
    int vi, vj, val;
    for(int i = 0; i < m; i++){
        cin>>vi>>vj>>val;
        AdjList[vi].data = vi;
        //头插法插入新结点
        ArcNode *tmp = (ArcNode*)malloc(sizeof(ArcNode));   
        tmp->weight = val;
        tmp->adjvex = vj;
        tmp->nextarc = AdjList[vi].firstarc;
        AdjList[vi].firstarc = tmp;
    }
    // for(int i = 1; i <= n; i ++){
    //     ArcNode *tmp = AdjList[i].firstarc;
    //     while(tmp){
    //         cout<<i<<endl;
    //         cout<<tmp->adjvex<<" "<<tmp->weight<<endl;
    //         tmp = tmp->nextarc;
    //     }
    // }
}
void Graph::Dijkstra(){
    int *dist = (int*)malloc(sizeof(int)*(n+2));     //原点到其他点的距离
    int *visit = (int*)malloc(sizeof(int)*(n+2));     //访问flag
    for(int i = 0; i <= n+1; i++){
        dist[i] = -1;
        visit[i] = 0;
    }
    dist[1] = 0;
    visit[1] = 1;

    ArcNode *arc = AdjList[1].firstarc;
    while(arc != NULL){
        dist[arc->adjvex] = arc->weight;
        arc = arc->nextarc;
    }

    for(int i = 2; i < n+1; i++){
        int min_val = INF;
        int next_node;
        for(int j = 2; j < n+1; j++){
            if(visit[j] != 1 && dist[j] != -1 && dist[j] < min_val){
                next_node = j;
                min_val = dist[j];
            }
        }
        visit[next_node] = 1;
        arc = AdjList[next_node].firstarc;
        while(arc != NULL){
            if(dist[arc->adjvex] == -1 || dist[arc->adjvex] > dist[next_node] + arc->weight)
                dist[arc->adjvex] = dist[next_node] + arc->weight;
            arc = arc->nextarc;
        }
    }

    //输出结果  NOJ要求的输出够麻烦的
    int flag[n+1] = {0};
    for(int i = 2; i < n+1; i++){
        int min = INF;
        int Node = -1;
        for(int j =2; j < n+1; j++){
            if(flag[j]!=1 && dist[j] != -1 && dist[j] < min){
                Node = j;
                min = dist[j];
            }
        }
        if(Node == -1)  break;
        flag[Node] = 1;
        cout<<"1 "<<Node<<" "<<dist[Node]<<endl;
    }
    for(int i = 2; i < n+1; i++){
        if(flag[i] == 0){
           cout<<"1 "<<i<<" "<<dist[i]<<endl; 
        }
    }

    return;
}

int main()
{
    Graph G;
    G.create();
    G.Dijkstra();
    return 0;
}