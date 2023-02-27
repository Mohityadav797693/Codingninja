#include <cstring>
bool checkAB(char input[]) {
	
	int n=0;
for(int i=0;i<100;i++){
	if(input[i]=='\0'){
		n=i;
		break;
	}
}

	if(input[0] != 'a'){
		return false;
		}

int m=0;

for(int i=0;i<n;i++){
	if (input[i]== 'a' ){
          if (input[i + 1] == 'a' || input[i + 1] == '\0' ||
              (input[i + 1] == 'b' && input[i + 2] == 'b')) {
            for (int j = 0; j < n; j++)
              if (input[j] == 'b' && input[j + 1] == 'b' && j!=n){
                if (input[j + 2] == 'a' || input[j + 2] == '\0') {
                  m++;
                }
              }
          }
        }
}

if(m==n || m==n-1){return true;}
//std :: cout << n << m;
return false;
}














