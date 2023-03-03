/*
输入：日期
输出：是当年的第几天

需要考虑闰年
但我记得ctime那个库里好像有相关的函数可以直接用
*/
#include<iostream>
#include<cstdlib>
using namespace std;

class data{
    private:
        int YYYY;
        int MM;
        int DD;
    public:
        data(char*);
        int solution();
};
data::data(char *input){
    //将年份转化为数字
    input[4] = '\0';
    YYYY = atoi(input);
    /*不用atoi也可以
    YYYY = (input[0]-'0') * 1000;
    YYYY += (input[1]-'0') * 100;
    YYYY += (input[2]-'0') * 10;
    YYYY += (input[3]-'0') ;
    */

    if(input[6] == '-'){
        input[6] ='\0';
        DD = atoi(input+7);
    }else{
        input[7] = '\0';
        DD = atoi(input+8);
    }
    MM = atoi(input+5);

}
int data::solution(){
    int days_of_month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int day = 0;
    for(int i = 0; i < MM-1; i++){
        day += days_of_month[i];
        //cout<<day<<endl;
    }
    day += DD;
    if(YYYY%400 == 0 || (YYYY%4 == 0 && YYYY%100 != 0)){
        //闰年
        if(MM > 2)  day++;
    }
    //cout<<YYYY<<"-"<<MM<<"-"<<DD<<endl;
    return day;
}

int main()
{
    char input[11];
    scanf("%s", input);
    data d(input);
    cout << d.solution();
    return 0;
}