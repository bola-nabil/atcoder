#include <bits/stdc++.h>
using namespace std;
 
signed main(){
   int64_t N;
   cin >> N;
      
   int k = 0;
   while (N > 1){
     if (N % 2){
       N--;
       N /=2;
       k++;
     } else {
       N /= 2;
       k++;
     }
   }
   cout << k << endl;
  return 0;  
}