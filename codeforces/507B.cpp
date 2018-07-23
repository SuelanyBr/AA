#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int raio, x, y, x1, y1;
	
    cin >> raio >> x >> y >> x1 >> y1;
	
    double diametro = sqrt(pow(y1 - y, 2.0) + pow(x1 - x, 2.0));
	
    cout << (ceil)(diametro/raio/2.0) << endl;
	
    return 0;
} 