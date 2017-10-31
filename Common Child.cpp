#include <bits/stdc++.h>

using namespace std;

int commonChild(string s1, string s2){
vector < vector<int> > arr(s1.length()+1,vector<int>(s2.length()+1));
for (int i=1;i<=s1.length();i++) {
    for (int j=1;j<=s2.length();j++) {
        if (s1[i-1]==s2[j-1]) arr[i][j]=arr[i-1][j-1]+1;
        else arr[i][j]=max(arr[i][j-1], arr[i-1][j]);
    }
}

return(arr[s1.length()][s2.length()]);
}

int main() {
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    int result = commonChild(s1, s2);
    cout << result << endl;
    return 0;
}
