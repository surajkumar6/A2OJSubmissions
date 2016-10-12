#include <iostream>
#include <string>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
		string s[110];
		bool flag=false;
		int n;
		cin >> n;
		for (int i = 0; i < n; ++i)
			cin >> s[i];
		int i;
		for (i = 0; i < n; ++i) {
		    if(s[i][0]!='#') {
		         flag=true;
		         break;
		    }
		}
		if(flag) {
		    for(int j=i+1;j<n;j++)
		        cout << s[j] + " ";
		        cout << s[i] + " ";
		    for(int j=0;j<i;j++) {
		        if(j==i-1)
		            cout << s[j];
		        else
		            cout << s[j] + " ";
		    }
		}
		else for (int i = 0; i < n; ++i) {
		    if(i==n-1)
			    cout << s[i];
			else
			    cout << s[i] + " ";
		}
		if(t!=0)
		    cout << endl;
	}
	return 0;
}
