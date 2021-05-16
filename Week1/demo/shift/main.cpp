#include <iostream>

using namespace std;

int main (void)
{
    int N;
    cin >> N;
    int tmp = N;
    int ans[100] = {0};
    int index = 0;

    while(tmp){
        tmp = tmp >> 1;
        ans[index++] = tmp & 1;
    }

    for(int i = index-1; i >= 0; i--)
    {
        cout << ans[i];
    }

    cout << endl;

    printf("0x%x\n", N);
}