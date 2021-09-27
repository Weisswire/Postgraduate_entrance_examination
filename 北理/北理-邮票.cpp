#include <iostream>
using namespace std;
int main(){

    int th[200]={0};
    for(int i=0;i<=5;i++){
        for(int j=0;j<=4;j++){
            for(int k=0; k<=6;k++){
                th[4*i+5*j+9*k]=1;
            }
        }
    }
    int num=0;
    for(int i=0;i<200;i++){
        if(th[i]==1){
            num++;
        }
    }
    cout << num-1;

}
