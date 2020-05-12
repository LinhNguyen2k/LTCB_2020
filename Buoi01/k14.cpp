#include <iostream>
#include <math.h>

using namespace std;

int findMax(int n, int &max){
  int m;
  if(n == 0) return max;
  else {
  	m = n%10;
  	if(m>max)
  		max = m;
  }
  return findMax(n/10,max);

}
int dem(int n){
	if(n < 10 && n >= 0) return 1;
	return dem(n/10) + 1;
}

int indaonguoc(int n,int &a){
	if(n==0) return 0;
	else {
		a += (n%10)*pow(10,dem(n)-1);
	}
	return indaonguoc(n/10,a); 
}


int main() {
  int max, a;
 // cout << findMax(15943,max);
  indaonguoc(123456789, a);
  cout << a;
}
