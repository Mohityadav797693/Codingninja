#include <iostream>
#include <string>
//#include "solution.h"
using namespace std;




int keypad(int num, string output[]){
   int m = num/10;
   int n = num%10;
   int z=0;
   if(n!=7 && n!=9){
    z=3;
   }
   else{
    z=4;
   }

char A[z];
switch (n)
{
case 2 : strcpy(A, "abc"); break;
case 3 : strcpy(A, "def"); break;
case 4 : strcpy(A, "ghi"); break;
case 5 : strcpy(A, "jkl"); break;
case 6 : strcpy(A, "mno"); break;
case 7 : strcpy(A, "pqrs"); break;
case 8 : strcpy(A, "tuv"); break;
case 9 : strcpy(A, "wxyz"); break;
default:
    break;
}

   if (num==0 || num==1 ) {
		output[0] = "";
		return 1;
	}


int i=0;int j=0;
	//string smallString = input.substr(1);
    int smallOutputSize = keypad(m, output);
	//int smallOutputSize = subs(smallString, output);
	for ( j = 0; j < z; j++)
    {
          for (i = 0; i < smallOutputSize; i++) {
		output[i + j*smallOutputSize] = output[i] + A[j];
	}
    }
    
  
    
	return (z) * smallOutputSize;

}






int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
