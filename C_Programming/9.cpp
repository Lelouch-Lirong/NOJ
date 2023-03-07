#include<iostream>
using namespace std;
class grade{
    public:
        char solution(void);
};
char grade::solution(){
    int grade;
    cin>>grade;
    grade /= 10;
    switch(grade){
        case 10:
        case 9:
            return 'A';
        case 8:
            return 'B';
        case 7:
            return 'C';
        case 6:
            return 'D';
        default:
            return 'E';
    }
}

int main()
{
    grade g;
    cout<<g.solution()<<endl;
    return 0;
}