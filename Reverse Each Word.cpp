#include <iostream>
#include<cstring>
using namespace std;
void reverse(char input[],int i, int j)
{
    int temp=0;
   while (i<j){
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }    
}

void reverseEachWord(char input[]) {
    int end=0;
    int i=0;
    int start=0;
    for(i=0;i<strlen(input);i++)
    { 
        if(input[i]==' ')
        {
            end=i-1;
             reverse(input,start,end);
             start=i+1;
        }
        
    }
    end=i-1;
    reverse(input,start,end);
}


int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}
