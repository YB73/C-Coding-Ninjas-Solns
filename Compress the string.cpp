#include <iostream>
#include <cstring>
using namespace std;

void stringCompression(char input[]) {
     int len = strlen(input); 
    for (int i = 0; i < len; i++) { 
   
        int count = 1; 
        while (i < len - 1 && input[i] == input[i + 1]) { 
            count++; 
            i++; 
        }
        if(count > 1)
           {cout<<input[i]<<count; }  
        else{
            cout<<input[i];
        }
       
         
    }
    input[0] = '\0';
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    stringCompression(str);
    cout << str;
}
