#define IOS ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

void fileIOP(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
}

int main(){
    IOS
    fileIOP();
    int n,m;  cin>>n>>m;
    cout<<n<<m<<endl;
    return 0;
}