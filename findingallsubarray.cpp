#include<iostream>
using namespace std;
int main(){
    int nums[5]={4,8,7,6,2};
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            for(int k=i;k<=j;k++){
                cout<< nums[k];
                
            }
            cout<<" ";
            

        }
        cout<<endl;
    }
    return 0;
}