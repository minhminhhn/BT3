/**
Viết chương trình nhập một số nguyên dương N <= 10000 và một chuỗi
gồm N số trong khoảng từ 1 đến N,
xác định xem trong chuỗi đó hai số nào bằng nhau hay không.
Nếu có thì in ra “Yes”, nếu không thì in ra “No”.

*/
#include <iostream>
using namespace std;
bool check (int *a, int n)
{
    for (int i=0; i<n; i++)
         for (int j=i+1; j<n; j++)
         {
           if (a[i]==a[j]) return true;
         }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int *a= new int[n];
    for(int i=0; i<n; i++) cin >> *(a+i);
    if (check(a,n)) cout << "YES";
    else cout << "NO";
    return 0;
}

