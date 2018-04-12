#include <iostream>
#include <vector>
#include "proj1.h"
using namespace std;
/*
 * Calculates a equal e
 *      using arethmetic operators.
 */
/*
void arethmetic(int e, int v[]){
   char a[]  = {'+','-','*','/'};
   int record[4];
   for(int i = 0; i < 4; i++){
            int sum = v[0];
      for(int s = 0; s < 25 ; s++){
         for(int j = 0; j < 4; j++){
               if(j == 1){
                  sum += v[s%5];
                 record[j] = j;
               } else if (j == 1){
                       sum -= v[s];
                 record[j] = j;
               } else if (j == 2){
                       sum *= v[s];
                 record[j] = j;
               } else {
                       sum /= v[s];
                 record[j] = j;
               }
            }
         }

      }
      
      cout << sum << endl;

      /* if(sum == e) {
         cout << "((((" << endl;
         for(int m = 0; m < 5;m++) {
            for(int n = 0; n < 4;n++) {
               cout << v[m] << endl;
               if(m != 5){
                  cout << "(" + a[record[n]] << endl;
               }
            }
         }
         }*/ 
/*
   }
}

*/
/*
 * Calculates and prints all possible ways v[] could equal e
 *      using bitwise operators.
 */
void bitwise(int e, int v[]){
   
}

//void arethmootic(int e, int numArray[]){
//   vector<char> op = {'+','-','*','/','%'};
//   vector<unsigned int> record;
//     //Iterate through 5! for all possible number combinations.
//   for(unsigned int n = 0; n < 120; n++){
//     //Iterate through numArray and assign to v.
//    vector<unsigned int> v;
//     for(unsigned int i = 0; i < 5 ; i++){
//         v.push_back(numArray[i]);
//     }
//     int sum;
//     cout << n << endl;
//     cout << n%v.size() << endl;
//     if(n%v.size() == 0){
//        sum = v[0];
//     }else{
//        for(unsigned int m = 0; m < op.size()*4; m++){
//           if(op[m%op.size()] == '+'){
//              sum += v[n%v.size()];
//              op.erase (op.begin()+m%op.size());
//           }else if(op[m%op.size()] == '-'){
//             sum -= v[n%v.size()];
//              op.erase (op.begin()+m%op.size());
//           }else if(op[m%op.size()] == '*'){
//              sum *= v[n%v.size()];
//              op.erase (op.begin()+m%op.size());
//           }else if(op[m%op.size()] == '/'){
//              sum /= v[n%v.size()];
//              op.erase (op.begin()+m%op.size());
//           }else if(op[m%op.size()] == '%'){
//              sum %= v[n%v.size()];
//              op.erase (op.begin()+m%op.size());
//           }
//        }
//     }
//     cout << sum << endl;
//     
//     if(sum == e) {
//        cout << "((((" << endl;
//        for(int m = 0; m < 5;m++) {
//           for(int n = 0; n < 4;n++) {
//              cout << v[m] << endl;
//              if(m != 5){
//                 cout << "("  << endl;
//              }
//           }
//        }
//     }
//         
//  }

//void arethmootic(int e, int numArray[]){
//   vector<char> op = {'+','-','*','/','%'};
//   vector<int> record;
//     //Iterate through 5! for all possible number combinations.
//     //5 numbers
//   for(unsigned int i = 0; i < 5; i++){
//     //4 total operators
//     for(int n = 0; n < 4; n++){
////Iterate through numArray and assign to v.
//vector<int> v;
//for(unsigned int f = 0; f < 5 ; f++){
//    v.push_back(numArray[f]);
//}
//int sum =v[0];
//       //iterate through operators
//        for(unsigned int m = 0; m < 5; m++){
//       //iterate through remaining numbers
//           for(int k = 1; k < v.size();k++){
//              if(op[m] == '+'){
//                 sum += v[k];
//                 v.erase (v.begin()+k);
//
//              }else if(op[m] == '-'){
//                sum -= v[k];
//                 v.erase (v.begin()+k-1);
//               
//              }else if(op[m] == '*'){
//                 sum *= v[k];
//                 v.erase (v.begin()+k-1);
//
//              }else if(op[m] == '/'){
//                 sum /= v[k];
//                 v.erase (v.begin()+k-1);
//               
//              }else if(op[m] == '%'){
//                 sum %= v[k];
//                 v.erase (v.begin()+k-1);
//              }
//     cout << sum << endl;
//
//           }
//        }
//     }
//   }
//     
   void arethmootic(int total, int numArray[]){
     int possibleCombination[] = {7,2,3,6,1};
     arethOp(total, possibleCombination);
   }

/*
 * returns all possible combinations in a vector or int arrays
 */ 
//   vector<vector<int>> allCombos(int numArray[]){
//      for(int i = 0;i < 5; i++){
//         for(int j = 1;j < 5; j++){
//            for(int k = 2;k < 5; k++){
//               for(int m = 3;m < 5; m++){
//                  for(int n = 4;n < 5; n++){
//		    aCombo = {i,j,k,m,n};
//                  }
//               }
//            }
//         }
//      }
//      return allCombos;
//   }

   void arethOp(int total, int numArray[]){
     //     vector<vector<int>> possibleCombos = allPossibleCombos(numArray);
     //  cout << possibleCombos.back().back<< endl;
     //   vector<int> aCombo = possibleCombos.back();
      char op[] = {'+','-','*','/','%'};
      for(int i = 0;i < 5; i++){
         for(int j = 0;j < 5; j++){
            for(int k = 0;k < 5; k++){
               for(int m = 0;m < 5; m++){
                  for(int n = 0;n < 5; n++){
                     for(int a = 0; a < 5; a++){ 
                        for(int b = 0; b < 5; b++){
                           for(int c = 0; c < 5; c++){
                              for(int s = 0; s < 5; s++){
                                 int sum = numArray[i];
                                 int nextNum = numArray[j];
                                 switch(a){
                                    case 0 : sum += nextNum; break;
                                    case 1 : sum -= nextNum; break;
                                    case 2 : sum *= nextNum; break;
                                    case 3 : sum /= nextNum; break;
                                    case 4 : sum %= nextNum; break;
                                 }
                                 nextNum = numArray[k];
                                 switch(b){
                                    case 0 : sum += nextNum; break;
                                    case 1 : sum -= nextNum; break;
                                    case 2 : sum *= nextNum; break;
                                    case 3 : sum /= nextNum; break;
                                    case 4 : sum %= nextNum; break;
                                 }
                                 nextNum = numArray[m];
                                 switch(c){
                                    case 0 : sum += nextNum; break;
                                    case 1 : sum -= nextNum; break;
                                    case 2 : sum *= nextNum; break;
                                    case 3 : sum /= nextNum; break;
                                    case 4 : sum %= nextNum; break;
                                 }
                                 nextNum = numArray[n];
                                 switch(s){
                                    case 0 : sum += nextNum; break;
                                    case 1 : sum -= nextNum; break;
                                    case 2 : sum *= nextNum; break;
                                    case 3 : sum /= nextNum; break;
                                    case 4 : sum %= nextNum; break;
                                 }
                                 if(sum == total){
                                   cout <<"(((" << numArray[i];
                                   cout << op[a] << numArray[j]<< ")";
                                   cout << op[b] << numArray[k]<< ")";
                                   cout << op[c] << numArray[m]<< ")";
                                   cout << op[s] << numArray[n];
				   cout <<endl;
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
	 // aCombo = possibleCombos.back();
	 // possibleCombos.pop_back();
   }
       
     //     if(sum == e) {
     //        cout << "((((" << endl;
     //        for(int m = 0; m < 5;m++) {
     //           for(int n = 0; n < 4;n++) {
     //              cout << v[m] << endl;
     //              if(m != 5){
     //                 cout << "("  << endl;
     //              }
     //           }
     //        }
     //     }
     //         
     //  }
