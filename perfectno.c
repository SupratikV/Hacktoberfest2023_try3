#include <stdio.h>
int checkPerfect(int n);
int main(){
    int n;
    scanf("%d",&n);
    if (checkPerfect(n)){
        printf("Perfect number");
    }
    else{
        printf("Not a perfect number");
    }
}

int checkPerfect(int n){
    int factor=0;
    for(int i=1;i<n;i++){
        if (n%i==0){
            factor+=i;
        }
    }
    if (factor==n){
        return(1);
    }
    return(0);
}
