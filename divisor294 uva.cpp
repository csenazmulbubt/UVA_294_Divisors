#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        scanf("%d %d",&a,&b);
        vector<int> v;
        int count=0,x=0,y=0;
        for(int i=a;i<=b;i++){
                count=0;
            for(int j=1;j<=sqrt(i);j++){
                if(i%j==0){
                    if(i/j==j)
                        count++;
                    else
                       count+=2;
                }
            }
            v.push_back(count);
            if(x<count){
                 x=count;
                 y=i;
            }
    }
    printf("Between %d and %d, %d has a maximum of %d divisors.\n",a,b,y,x);


    }
}

