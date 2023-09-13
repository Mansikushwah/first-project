#include<iostream>
#include<vector>
using namespace std;
 void fun(int N, vector<int>& vec) {
        vec.push_back(N);
        if (N < 1) {
            return;
        }
        fun(N-5,vec);
        vec.push_back(N);
    }
    
    vector<int> pattern(int N) {
        vector<int> vec;
        fun(N, vec);
        return vec;
    }
// void fun(int N,vector<int> vec){
//      if(N<0){vec.push_back(N);}
//        vec.push_back(N);
//         fun(N-5,vec);
//         vec.push_back(N);
// }
//     vector<int> pattern(int N){
//       vector<int> vec;
//       fun(N,vec);
//       return vec;
//         // code here
//     }
    int main(){
     vector<int> veca =pattern(6);
     return 0; 
    }