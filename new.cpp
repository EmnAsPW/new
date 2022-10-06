#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nn "\n"
#define sci(x) scanf("%d", &x)
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) (x & (1LL << k))
#define mod 1000000007
#define N 1003


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--){

      int a,b; cin>>a>>b;
      int arr[a];
      int arr1[a];
      int sum=0;
      for(int i=0; i<a; i++){
        cin>>arr[i];
        sum+=arr[i];
      }
      for(int i=0; i<a; i++){
        cin>>arr1[i];
      }
      sort(arr, arr+a);
      sort(arr1, arr1+a);
      reverse(arr1, arr1+a);
      int k=0;
      for(int i=0; i<a; i++){
        if(arr[i]<arr1[i]){
            swap(arr[i], arr1[i]);
            k++;
            if(k==b) break;
        }
      }
      int sum1=0;
      for(int i=0; i<a; i++){
        sum1+=arr[i];
      }

      if(b==0) cout<<sum<<endl;
      else cout<<sum1<<endl;
   }
    return 0;
}
