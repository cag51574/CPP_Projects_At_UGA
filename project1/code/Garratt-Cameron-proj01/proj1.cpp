#include <iostream>
#include <vector>
#include "proj1.h"
using namespace std;

/*
 * Calculates and prints all possible ways the 5 different integert could equal 
 *      the total using bitwise operators.
 */
void bitOp(int total, int numArray[]){
   vector<int> v;
   int count = 0;
   string op[] = {"<<",">>","&","|","^"};
   for(int i = 0;i < 5; i++){
      for(int j = 0;j < 4; j++){
         for(int k = 0;k < 3; k++){
            for(int m = 0;m < 2; m++){
               for(int n = 0;n < 1; n++){
                  for(int a = 0; a < 5; a++){ 
                     for(int b = 0; b < 5; b++){
                        for(int c = 0; c < 5; c++){
                           for(int s = 0; s < 5; s++){
                              for(int x = 0; x < 5; x++){
                                 v.push_back(numArray[x]);
                              }
                              int sum = v.at(i);
                              int num1 = v.at(i);
                              v.erase(v.begin()+ i);
                              int num2 = v.at(j);
                              v.erase(v.begin()+ j);
                              switch(a){
			         case 0 : sum <<= num2; break;
			         case 1 : sum >>= num2; break;
                                 case 2 : sum &= num2; break;
                                 case 3 : sum |= num2; break;
                                 case 4 : sum ^= num2; break;
                              }
                              int num3 = v.at(k);
                              v.erase(v.begin()+ k);
                              switch(b){
                                 case 0 : sum <<= num3; break;
                                 case 1 : sum >>= num3; break;
                                 case 2 : sum &= num3; break;
                                 case 3 : sum |= num3; break;
                                 case 4 : sum ^= num3; break;
                              }
                              int num4 = v.at(m);
                              v.erase(v.begin()+ m);
                              switch(c){
                                 case 0 : sum <<= num4; break;
                                 case 1 : sum >>= num4; break;
                                 case 2 : sum &= num4; break;
                                 case 3 : sum |= num4; break;
                                 case 4 : sum ^= num4; break;
                              }
                              int num5 = v.at(n);
                              v.erase(v.begin()+ n);
                              switch(s){
                                 case 0 : sum <<= num5; break;
                                 case 1 : sum >>= num5; break;
                                 case 2 : sum &= num5; break;
                                 case 3 : sum |= num5; break;
                                 case 4 : sum ^= num5; break;
                              }
                              if(sum == total){
                                cout <<"(((" << num1;
                                cout << op[a] << num2<< ")";
                                cout << op[b] << num3<< ")";
                                cout << op[c] << num4<< ")";
                                cout << op[s] << num5;
                                cout <<endl;
				count++;
                              }
                           }
                        }
                     }
                  }
               }
            }
         }
      }
   }
   cout << count << " bitwise expressions found that evaluate to " << total << endl; 
   
}
/*
 * Calculates and prints all possible ways the 5 different integert could equal 
 *      the total using arethmetic operators.
 */
void arethOp(int total, int numArray[]){
   vector<int> v;
   int count = 0;
   char op[] = {'+','-','*','/','%'};
   for(int i = 0;i < 5; i++){
      for(int j = 0;j < 4; j++){
         for(int k = 0;k < 3; k++){
            for(int m = 0;m < 2; m++){
               for(int n = 0;n < 1; n++){
                  for(int a = 0; a < 5; a++){ 
                     for(int b = 0; b < 5; b++){
                        for(int c = 0; c < 5; c++){
                           for(int s = 0; s < 5; s++){
                              for(int x = 0; x < 5; x++){
                                 v.push_back(numArray[x]);
                              }
                              int sum = v.at(i);
                              int num1 = v.at(i);
                              v.erase(v.begin()+ i);
                              int num2 = v.at(j);
                              v.erase(v.begin()+ j);
                              switch(a){
                                 case 0 : sum += num2; break;
                                 case 1 : sum -= num2; break;
                                 case 2 : sum *= num2; break;
                                 case 3 : sum /= num2; break;
                                 case 4 : sum %= num2; break;
                              }
                              int num3 = v.at(k);
                              v.erase(v.begin()+ k);
                              switch(b){
                                 case 0 : sum += num3; break;
                                 case 1 : sum -= num3; break;
                                 case 2 : sum *= num3; break;
                                 case 3 : sum /= num3; break;
                                 case 4 : sum %= num3; break;
                              }
                              int num4 = v.at(m);
                              v.erase(v.begin()+ m);
                              switch(c){
                                 case 0 : sum += num4; break;
                                 case 1 : sum -= num4; break;
                                 case 2 : sum *= num4; break;
                                 case 3 : sum /= num4; break;
                                 case 4 : sum %= num4; break;
                              }
                              int num5 = v.at(n);
                              v.erase(v.begin()+ n);
                              switch(s){
                                 case 0 : sum += num5; break;
                                 case 1 : sum -= num5; break;
                                 case 2 : sum *= num5; break;
                                 case 3 : sum /= num5; break;
                                 case 4 : sum %= num5; break;
                              }
                              if(sum == total){
                                cout <<"(((" << num1;
                                cout << op[a] << num2<< ")";
                                cout << op[b] << num3<< ")";
                                cout << op[c] << num4<< ")";
                                cout << op[s] << num5;
                                cout <<endl;
				count++;
                              }
                           }
                        }
                     }
                  }
               }
            }
         }
      }
   }
   cout << count << " arethmenic expressions found that evaluate to " << total << endl; 
}
    
