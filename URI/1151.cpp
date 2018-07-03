#include <iostream>
using namespace std;
 
int main (){
	
  int n;
  
  cin >> n;
  
  int f[n+2];
  f[0] = 0;
  f[1] = 1;
  cout << f[0] << " ";
  cout << f[1] << " ";
 
  for(int i = 2; i < n-1; i++){
      f[i] = f[i-1] + f[i-2];
      cout << f[i] << " ";
  }
  
  f[n-1] = f[n-2] + f[n-3];
  cout << f[n-1] << endl;

  return 0;
}
