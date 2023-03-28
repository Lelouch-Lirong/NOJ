/*
基于图的深度优先搜索策略
*/
#include<iostream>
#define MAX 200
using namespace std;

bool visit[MAX]={false};
class Grap{
    private:
        int m, n;            //n:顶点数  m：边数
        int vi[MAX];        //顶点信息
        int ver[MAX][2];    //边的信息
    public:
        Grap();
        bool deep_serch(int vi, int vj);
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
bool Grap::deep_serch(int vi, int vj){
    for(int i = 0; i < m; i++){
        if(ver[i][0] == vi){
            visit[vi] = true;
            if(ver[i][1] == vj){
                return true;
            }else{
                if(!visit[ver[i][1]] && deep_serch(ver[i][1], vj))   return true;
            }
        }
    }
    return false;
}

int main()
{
    Grap M;
    int vi, vj;
    cin>>vi>>vj;
    if(M.deep_serch(vi, vj))    cout<<"yes"<<endl;
    else                        cout<<"no"<<endl;
    return 0;
}