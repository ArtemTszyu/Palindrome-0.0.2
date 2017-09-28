#include <iostream> 
#include <string>

using namespace std;

int c(char a)
{
   int b;
   b = (int)a;
   return b;
   }

int main()

{
    string s, k, m;
    int i, p;
    getline(cin,s);
    p = s.length();
    for (i = p - 1; i >= 0; --i)
{
    if (c(s[i])>96) 
    {
     if (c(s[i])<123) {k+=s[i];
    }
    }
     if (c(s[i])>64)
    {
     if (c(s[i])<91) {k+=s[i]+32;
    }
    }
     if (c(s[i])>47) 
    {
     if (c(s[i])<58) {k+=s[i];
    }
}
    
}
    p=k.length();
    for (i = p - 1; i >= 0; i=i-1)
    {
        m +=k[i];
    }
    if (m == k)
    {
    cout << "1";
    }
    else 
    {
      cout << "0";
    }
}
