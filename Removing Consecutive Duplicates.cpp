#include<cstring>
#include <iostream>
#include <cstring>
using namespace std;
void removeConsecutiveDuplicates(char input[]) {
    int i=1 , j=0 , len=strlen(input);
    if(len<2){
        return;
    }
 for(i=1;i<strlen(input);i++){
       
       if(input[j] != input[i]){
             j = j + 1 ;
            input[j] = input[i];           
        }  
    }
    j = j + 1 ;
    input[j] = '\0' ;
    
}
int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}

