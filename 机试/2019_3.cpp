#include<iostream>
#include<cstdlib>
using namespace std;

void function(char *data){
    int i, j = 0;
    for(i = 0; data[i] !='\0'; i++){
        if(data[i] ==  '.' ){
            data[i] = '\0';
            int tmp = atoi(data+j);
            cout<<tmp<<endl;
            if(tmp > 255 || tmp < 0){
                cout<<"no"<<endl;
                return;
            }
            j = i+1;
        }
    }
    int tmp = atoi(data+j);
    cout<<tmp<<endl;
    if(tmp > 255 || tmp < 0){
        cout<<"no"<<endl;
        return;
    }
    cout<<"yes"<<endl;
    return;
}

int main()
{

    int n;
    cin>>n;
    char data[100];
    while(n--){
        cin>>data;
        function(data);
    }
}
