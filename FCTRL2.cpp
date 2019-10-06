#include <bits/stdc++.h>

using namespace std;

#define max_size 200

int arr_mult(int i, int arr[], int arr_size)
{
    int carry = 0;

    for(int j = 0; j<arr_size; j++)
    {
        int prod = arr[j]*i + carry;
        carry = prod/10;
        arr[j] = prod % 10;
    }

    while(carry)
    {
        arr[arr_size] = carry%10;
        carry = carry/10;
        arr_size++;
    }

    return arr_size;
}

void factorial(int N)
{
    int arr[max_size];
    int arr_size;

    arr[0] = 1;
    arr_size = 1;


    for(int i = 2; i<=N; i++)
        arr_size = arr_mult(i,arr,arr_size);

    for(int i = arr_size-1; i>=0; i--)
        cout << arr[i];
    cout << endl;
}

int main()
{
    int T, N;

    cin >> T;
    while(T--)
        {
            cin >> N;
            factorial(N);
        }
    return 0;
}
