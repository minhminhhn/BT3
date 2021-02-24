/**
Viết chương trình nhập từ bàn phím một xâu kí tự độ dài tối đa 100,
sau đó kiểm tra xem xâu kí tự đó có đối xứng hay không.
Chẳng hạn “abcba", “abba" là đối xứng, còn “abcda” không đối xứng.
Nếu có thì in ra “Yes”, nếu không thì in ra “No”.
*/
#include <iostream>
using namespace std;
bool check(string s, int n)
{
    for(int i=0; i<=n/2; i++)
    {
        if (s[i]!=s[n-i-1]) return false;
    }
    return true;
}
int main ()
{
    string s;
    cin >> s;
    int n= s.size();
    if (check(s,n)) cout << "YES";
    else cout << "NO";
    return 0;
}
