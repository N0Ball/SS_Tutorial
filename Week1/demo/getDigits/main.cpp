#include <iostream>

using namespace std;

void getDigits(int a){
    int ans[100000] = {0};
 
    int i = 0;
    do{
        ans[i] = a%10;
        i++;
    }while(a /= 10);
 
    cout << ans[i-1];
    for (int j = i-2; j >= 0; j--)
    {
        cout << ',' << ans[j];
    }
    cout << endl;
}

int main (void)
{
    int a;
    cin >> a;

    int tmp = a;

    int ans[100000] = {0};

    int i = 0;
    do{
        ans[i] = a%10;
        i++;
    }while(a /= 10);

    cout << ans[i-1];
    for (int j = i-2; j >= 0; j--)
    {
        cout << ',' << ans[j];
    }
    cout << endl;

    getDigits(tmp);

    return 0;
}