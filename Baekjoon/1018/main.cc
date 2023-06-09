#include <bits/stdc++.h>

using namespace std;

string arr[51];

string whitef[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};

string blackf[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};

int checkBlack(int y, int x) {
	int cnt = 0;
	for(int i = 0; i < 8; i++) {
		for(int j = 0; j < 8; j++) {
			if(blackf[i][j] != arr[i + y][j + x]) {
				cnt++;
			}
		}
	}
	return cnt;
}

int checkWhite(int y, int x) {
	int cnt = 0;
	for(int i = 0; i < 8; i++) {
		for(int j = 0; j < 8; j++) {
			if(whitef[i][j] != arr[i + y][j + x])
				cnt++;
		}
	}
	return cnt;
}

int main() {
    int n, m;
	int res = 987654321;
    
	cin >> n >> m;

    for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

    for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(i + 8 > n || j + 8 > m) continue;
			int n = 0;
			int w = checkWhite(i, j);
			int b = checkBlack(i, j);
			n = min(w, b);
			res = min(res, n);
		}
	}
	cout << res;
}
