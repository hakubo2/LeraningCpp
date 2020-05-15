#include<iostream>
#include<queue>

using namespace std;
static const int N = 100;
static const int INFTY = (1<<21);

int n, M[N][N];
int d[N]; //距離で訪問状態(color)を管理する

void bfs(int s){
    queue<int> q; //標準ライブラリのqueueを使用
    q.push(s);
    for(int i=0; i<n; i++) d[i] = INFTY;
    d[s] = 0; //最初の距離をゼロに設定
    int u;
    while(!q.empty()){ //キューがある限りループ
        u = q.front(); q.pop(); //キューを取り出し、削除
        for(int v=0; v<n; v++){
            if(M[u][v] == 0) continue; //初項は飛ばす
            if(d[v] != INFTY) continue; //すでに距離が記録されたものは飛ばす
            d[v] = d[u] + 1; //距離をプラス１して代入
            q.push(v); //キューに追加
        }
    }
    for(int i=0; i<n; i++){
        cout << i+1 << " " << ( (d[i] == INFTY) ? (-1) : d[i] ) << endl;
    }
}

int main(){
    int u, k, v;

    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) M[i][j] = 0;
    }

    for(int i=0; i<n; i++){ //隣接リストから隣接行列へ変換
        cin >> u >> k;
        u--;
        for(int j=0; j<k; j++){
            cin >> v;
            v--;
            M[i][v] = 1;
        }
    }

    bfs(0);

    return 0;
}