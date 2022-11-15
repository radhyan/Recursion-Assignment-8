#include <iostream>

using namespace std;

void reverse(int n){
    if (n < 10) {
          cout<<n;
          return;
       }

       else{
          cout<<n%10;
          reverse(n/10);
       }
}

int main() {
    int n;
    
    cout<<"enter number"<<endl; cin>>n;
    cout<<"the reverse of "<<n<<" is"<<endl;
    reverse(n);
    return 0;
}
