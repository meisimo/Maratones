#include <bits/stdc++.h>

using namespace std;

char mapExp(char c)
{
  if ('a' <= c && c <= 'z')
    return 'x';
  if ('0' <= c && c <= '9')
    return 'x';
  if (c == '(' || c == ')')
    return c;
  return 'b';
}

string completeMap(const string *s)
{
  string exp = "";
  char prev = 0, cur;
  int n = (*s).length();

  for (int i = 0; i < n; i++)
  {
    cur = mapExp((*s)[i]);
    if (cur != prev || '(' == cur || ')' == cur)
      exp += cur;
    prev = cur;
  }
  return exp;
}

void computeLPSArray(string &pat, int M, int *lps)
{
  int len = 0, i = 1;
  lps[0] = 0;

  while (i < M)
    if (pat[i] == pat[len])
      lps[i++] = ++len;
    else if (len)
      len = lps[len - 1];
    else
      lps[i++] = 0;
}

int KMPSearch(string &pat, string &txt)
{
  const int M = pat.size(), N = txt.size();
  int lps[M], i = 0, j = 0, S = 0;

  computeLPSArray(pat, M, lps);

  while (i < N)
  {
    if (pat[j] == txt[i])
    {
      j++;
      i++;
    }
    if (j == M)
    {
      S++;
      j = lps[j - 1];
    }
    else if (i < N && pat[j] != txt[i])
    {
      if (j)
        j = lps[j - 1];
      else
        i++;
    }
  }
  return S;
}

bool sol()
{
  string s1, s2, exp_1 = "", exp_2 = "";

  if (cin >> s1 >> s2)
  {
    exp_1 = completeMap(&s1);
    exp_2 = completeMap(&s2);
    cout << KMPSearch(exp_1, exp_2) << endl;
    return true;
  }
  return false;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  while (sol())
    ;
  return 0;
}

/*
1978
((x+0)+z)
(x+(3*z))
((x+(3*z))-((5-(2-y))/y))
*/