/*
源程序添加行号
*/
#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    FILE *fp_r, *fp_w;
    int no = 1;
    char buf[1024];

    fp_r = fopen("DATA5612.CPP", "r");
    if(!fp_r){
        cout<<"1:open the file fail"<<endl;
        return 1;
    } 

    fp_w = fopen("DATA5612.TXT", "w");
    if(!fp_w){
        cout<<"2:open the file fail"<<endl;
        return 1;
    } 

    while(fgets(buf, 1024, fp_r) != NULL){
        fprintf(fp_w, "%04d %s", no++, buf);
    }
    fclose(fp_r);
    fclose(fp_w);
    return 0;
}