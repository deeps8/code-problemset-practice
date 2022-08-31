#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    //write your code here
    int f1 = 0, f2 = 1,f3;
    cout<<endl;
    if(n==1)
        cout<<f1<<endl;
    if(n>=2){
        cout<<f1<<endl<<f2<<endl;
        n-=2;
    }
    
    while(n--){
        f3 = f1 + f2;
        cout<<f3<<endl;
        
        f1 = f2;
        f2 = f3;
    }
}
