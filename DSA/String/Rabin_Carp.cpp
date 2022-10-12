#include<bits/stdc++.h>
using namespace std;
bool check_equal(string pat , string txt , int j) {
	int k = 0;
	for (int i = j ; i < j + pat.size() ; i++) {
		if (pat[k] == txt[i]) {
			k++;
		}
		else {
			return false;
		}
	}
	return true;
}
int main() {
	string txt , pat;
	cin >> txt >> pat;
	int htxt = 0 , hpat = 0;
	int d = 26;
	int p = 5381;
	for (int i = 0 ; i < pat.length() ; i++) {
		hpat *= d;
		htxt *= d;
		hpat = hpat + ((pat[i] - 'a' + 1) % p);
		htxt = htxt + ((txt[i] - 'a' + 1) % p);
	}
	int i = pat.length() - 1;
	int n = txt.length() - i;
	int k = 0;
	while (i < n) {
		if (hpat == htxt) {
			if (check_equal(pat , txt , k)) {
				cout << "pattern is present at index" << k;
			}
		}
		htxt = (htxt - txt[k] - 'a' + 1) * pow();
	}
  return 0;
}
