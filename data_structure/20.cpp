/*
基于图的广度优先搜索
*/
#include<iostream>
#include<queue>
#define MAX 200
using namespace std;

bool visit[MAX]={false};
queue<int> Q;
class Grap{
    private:
        int m, n;            //n:顶点数  m：边数
        int vi[MAX];        //顶点信息
        int ver[MAX][2];    //边的信息
    public:
        Grap();
        bool BFS(int vj);
};
Grap::Grap(){
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        cin>>vi[i];
    }
    for(int i = 0; i < m; i++){
        cin>>ver[i][0]>>ver[i][1];
    }
}
bool Grap::BFS(int vj){
    int vi = Q.front();
    Q.pop();
    visit[vi] = true;
    for(int i = 0; i < m; i++){
        if(ver[i][0] == vi){
            if(ver[i][1] == vj){
                return true;
            }else{
                if(!visit[ver[i][1]]){
                    Q.push(ver[i][1]);
                    visit[vi] = true;
                }
            }
        }
    }
    if(Q.empty())    return false;
    else             return BFS(vj);
}

int main()
{
    Grap M;
    int vi, vj;
    cin>>vi>>vj;
    Q.push(vi);
    if(M.BFS(vj))               cout<<"yes"<<endl;
    else                        cout<<"no"<<endl;
    return 0;
}