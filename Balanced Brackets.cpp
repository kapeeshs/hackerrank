#include <bits/stdc++.h>

using namespace std;

string isBalanced(string s) {
    // Complete this function
    stack<char>stack1;
    int n,i,j=0;
    for(n=0;s[n]!='\0';n++);
    for(i=0;i<n;i++){
      switch(s[i]){
          case '(':
          case '{':
          case '[':
              stack1.push(s[i]);
              break;
          case ')':
              if((stack1.empty())||(stack1.top()!='('))
                  return("NO");
              stack1.pop();
              break;
              case '}':
              if((stack1.empty())||(stack1.top()!='{'))
                  return("NO");
              stack1.pop();
              break;
              case ']':
              if((stack1.empty())||(stack1.top()!='['))
                  return("NO");
              stack1.pop();
              break;
      }
    }
    if(stack1.empty())
        return("YES");
    else
        return("NO");
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        string result = isBalanced(s);
        cout << result << endl;
    }
    return 0;
}
