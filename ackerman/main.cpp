#include <iostream>

using namespace std;

int ackerman(int m, int n){
    if (m == 0){
        return n+1;
    } else if ((m > 0) && (n == 0)){
        return ackerman(m-1, 1);
    } else if ((m > 0) && (n > 0)){
        return ackerman(m-1, ackerman(m, n-1));
    } else {
        return 1;
    }
}

int main() {
    int m, n;
    
    cout<<"insert m and n for Ackerman Function "; cin>>m>>n;
    cout<<"\nValue of a("<<m<<", "<<n<<") is "<< ackerman(m, n);
    cout<<endl;
    return 0;
}
