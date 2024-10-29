#include<iostream>
using namespace std;
int main(){
     int p=0,sum =0;
    int nums[5]={4,8,7,6,2};
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            for(int k=i;k<=j;k++){
                 cout<< nums[k];  
                 sum += nums[k]; 
              
            }  
            cout<<" ";
            cout<< sum;
            if(sum > p){
                p =sum;
            }
            sum =0;

            cout<<" "; 
            
           
            

        }
        cout<<endl;
       
    }
    cout<<"the final answer is "<< p;
    
    
    return 0;
}