#include <bits/stdc++.h>
using namespace std;
int main()
{

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string givenString;
	cin >> givenString;
	int length = givenString.size();
	int itr = 0;
	int startPoint = length / 2;
	for (itr = 1; itr <= length; itr++)
	{
		/* Print required Spaces */
		for (int itr1 = itr; itr1 < length; itr1++)
			cout << " ";
		int middleStart = startPoint;
		int beginStart = 0;
		/* Print Characters */
		for (int itr2 = 1; itr2 <= itr; itr2++)
		{
			if (middleStart < length)
			{
				cout << givenString[middleStart++];
			}
			else
			{
				cout << givenString[beginStart++];
			}
		}
		cout << "\n";
	}

}