#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

	string status = "Not Weird";
	if (N % 2 == 1 || (N % 2 == 0 && (N >= 6 && N <= 20))) {
		status = "Weird";
	}

	if (N % 2 == 0 && ((N >= 2 && N <= 5) || (N > 20)))
			status = "Not Weird";

	cout << status << endl;

    return 0;
}