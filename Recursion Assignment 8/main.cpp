#include <iostream>
#include <cstring>

using namespace std;

bool palindromerec(char str[], int s, int e){
    if (s == e) {
        return true;
    } else if (str[s] != str[e]){
        return false;
    } else if (s<e+1){
        return palindromerec(str, s+1, e-1);
    } else
    return true;
}

bool isPalindrome(char str[]){
    int n = strlen(str);
    if (n == 0)
        return true;
         
    return palindromerec(str, 0, n-1);
}

int main() {
    char str[] = "";
    
    cout<<"Input word "; cin>>str;
    if (isPalindrome(str))
       cout << "Yes\n";
    else
       cout << "No\n";
    
       return 0;
    return 0;
}
