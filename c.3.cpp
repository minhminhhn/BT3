/**
Cho các số A và B, đếm số các số nguyên N sao cho A <= N <= B và N là một số đối gương.
Ví dụ, các số đối gương: 121, 11, 11411
Các số không đối gương: 122, 10
Input:
Dữ liệu đọc từ input chuẩn (bàn phím). Dòng đầu chứa số tự nhiên T là số test case,
N dòng tiếp theo, mỗi dòng chứa hai giá trị A và B trên cùng một dòng
Output:
Với mỗi test case, in giá trị cần thiết trên một dòng.
Ràng buộc: 1 <= T <= 100
0 <= A <= B <= 10^5
*/
#include <iostream>
#include <cmath>

using namespace std;
int pow(int x, int y)
{
    int n=1;
    for(int i=1; i<=y; i++)
    {
       n*=x;
    }
    return n;
}
bool check (int n)
{
    int m=n, dem=0;
    while (m>0)
    {
      m/=10;
      dem ++;
    }
    while (n>=10)
    {
        if ( n%10 != n / pow(10,dem-1) ) return false;
        n %= 1*pow(10,dem-1);
        n /= 10;
        dem-=2;
    }
    return true;
}
void nhap(int **a, const int n)
{
    for (int i=0; i<n; i++) cin >> a[i][1] >> a[i][2];
}
int main()
{
    int n;
    cin >> n;
    int **a = new int*[n];
    for(int i=0; i<n; i++)
        *(a+i)= new int [2];
    nhap(a,n);
    for (int i=0; i<n; i++)
    {
        int dem=0;
        for(int j=a[i][1]; j <= a[i][2]; j++)
            if (check(j)) dem++;
        cout << dem << '\n';
    }
}

