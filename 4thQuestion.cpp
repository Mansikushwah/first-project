#include <iostream>
#include <math.h>
using namespace std;
 	int Nth_term(int a, int r, int n){
    while(n-1){
   	        a=(((long long)a%1000000007)*(r%1000000007))%1000000007;
   	        n=n-1;
   	    }
   	    return a;// Code here
   	}    
int main(){
   cout<< Nth_term(67,381,236);
    return 0;}