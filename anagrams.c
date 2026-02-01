#include<stdio.h>
#include<string.h>
int main(){
    printf("enter number of string in the array\n");
    char str[26];
    int n;
    scanf("%d",&n);
    char arr[n];
    printf("Enter the input array of strings\n");
    fgets(arr,sizeof(arr),stdin);
    for (int i=0; i<n; i++){
        str[ascii(i)-ascii('a')]=i;
        for (int j=i+1; j<n; j++){
            if (strlen(arr[j])==strlen(arr[i])){
                int flag=1;
                for (int k=0; k<strlen(arr[i]); k++){
                    if (str[ascii(arr[i][k])-ascii('a')]==0){
                        flag=0;
                        break;
                    }
                    else{
                        str[ascii(arr[i][k])-ascii('a')]=0;
                    }
                }
                if (flag==1){
                    printf("%s and %s are anagrams\n",arr[i],arr[j]);
                }
            }
        }

    }

}