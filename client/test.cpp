#include<bits/stdc++.h>
using namespace std;
class hello{
    public:
    int a=5;
    void func(int a){
        cout<<"hello";
    }
    void x(){
        func(5);
    }
};
int main(){
    hello h;
    h.x();
   
    return 0;
}