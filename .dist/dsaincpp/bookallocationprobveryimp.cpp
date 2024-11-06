#include<iostream>
#include<vector>
using namespace std;
bool valid(vector<int> arr,int n,int m,int mid){
    
   int  student=1; int pages=0;
   for(int j=0;j<n;j++){
    if(arr[j]>mid){
        return false;
    }
    if(pages+arr[j]<=mid){
        pages+=arr[j];
    }
    else{
        student++;
        pages=arr[j];
    }

   }
   
    return student>m ? false:true;
   
}
int allocate(vector<int> arr,int n,int m){
    int sum=0;
     int start=0;
    if(m>n){
        return -1;
    }
    for(int i=0;i<4;i++){
        sum+=arr[i];
    }
    while(start<=sum){
        int mid=start +(sum-start)/2;
        if(valid(arr,n,m,mid)){ 
            sum=mid-1;

        }
        else{
            start=mid+1;
        }
    }
    

    


}


int main(){
    
    vector<int> arr={15,17,20,14};
    int n=4,m=3;
    cout<< allocate(arr,n,m) <<endl;
    return 0;
}
 

