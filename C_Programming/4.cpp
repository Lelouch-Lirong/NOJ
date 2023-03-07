/*
find the max number
*/
#include<iostream>
using namespace std;

class find_the_max{
    public:
        void max(void);
};
void find_the_max::max(){
    int a, b, c;
    cin>>a>>b>>c;
    cout<<( ((a>b)? a:b)>c? ((a>b)? a:b): c )<<endl;
    return;
}

int main()
{
    find_the_max f;
    f.max();
    return 0;
}
