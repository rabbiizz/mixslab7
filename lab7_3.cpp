//ไม่ต้องเติม function main()
#include <iostream>
#include <string>
using namespace std;

char before(char x){
    char ans;
    if(x == 'A'){
    ans = 'Z';
    return ans;
    }
    if(x < 'A' || x > 'Z'){
    ans = '0';
    return ans;
    }else{
    ans = x-1;
    return ans;
    }
    
}