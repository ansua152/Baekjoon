#include <iostream>

int arr[10];

int main(){
    int n,k,ans = 0;
    int sum = 0;

    std::cin >> n >> k;

    for(int i=0;i<n;i++)
        std::cin >> arr[i];

    for(int i=n-1;i>=1;i--){
        int cnt = (k-sum)/arr[i];

        ans += cnt;
        sum += cnt*arr[i];
    }

    ans += k-sum;

    std::cout << ans;

    return 0;
 }