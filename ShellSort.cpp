#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define REPD(i,n) for(ll i=(ll)(n)-1;i>=0;i--)
#define FOR(i,a,b) for(ll i=(a);i<=(b);i++)
#define FORD(i,a,b) for(ll i=(a);i>=(b);i--)
#define ALL(x) (x).begin(),(x).end() //sortなどの引数を省略したい
#define SIZE(x) ((ll)(x).size()) //sizeをsize_tからllに直しておく
#define MAX(x) *max_element(ALL(x))
#define INF 1000000000000
#define MOD 10000007
#define PB push_back
#define MP make_pair
#define F first
#define S second

ll cnt;
int l;
int A[1000000];
int n;
vector<int> G;

//間隔gを指定した挿入ソート
void insertionSort(int A[], int n, int g){
    for(int i=g; i<n; i++){
        int v = A[i]; //A[i]の値を一時的に保持しておくための変数
        int j = i-g; //ソート済み部分列からvを挿入するための位置を探すループ変数
        while(j >= 0 && A[j] > v){
            A[j+g] = A[j];
            j -= g;
            cnt++;
        }
        A[j+g] = v; //挿入操作
    }
}

void shellSort(int A[], int n){
    //数列G = {1,4,13,40,121,364,1093,...}を生成
    for(int h = 1;;){
        if(h>n) break;
        G.push_back(h);
        h = 3*h + 1;
    }

    //逆順にG[i]=gを指定
    for(int i = G.size()-1; i>=0; i--){
        insertionSort(A, n, G[i]);
    }
}

int main() {
    cin >> n;
    //より速い入力scanf関数を使用
    for(int i=0; i<n; i++) scanf("%d", &A[i]);
    cnt = 0;

    shellSort(A, n);

    cout << G.size() << endl;
    for(int i=G.size()-1; i>=0; i--){
        printf("%d", G[i]);
        if(i) printf(" ");
    }
    printf("\n");
    printf("%lld\n", cnt);
    for(int i=0; i<n; i++) printf("%d\n", A[i]);

    return 0;
}