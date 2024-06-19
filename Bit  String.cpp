
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
//modulo
#define MOD 1000000007

int main(){
 ll n,i,j;
 cin>>n;
 j=1;
  for ( i=0 ; i < n; i++)
  {
     //realizar a potencia e faz com que ela seja modulo de 10^9+7
     j=j*2;
     j=j%MOD;
  }
  cout<<j;
}