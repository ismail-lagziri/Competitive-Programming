#include <iostream>
#include <cstring>

using namespace std;

void SieveOfEratosthenes(int n)
{
	bool prime[n + 2];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n+1; p++) {

		if (prime[p] == true) {
			for (int i = p * p; i <= n+1; i += p)
				prime[i] = false;
		}
	}

	if (n==1) cout << 1 << endl << 1;
	else if (n==2){
	 	cout << 1 << endl << 1 << " " << 1;
	}
	else {
		cout << 2 << endl;
		for (int p = 2; p <= n+1; p++)
			if (prime[p])
				cout << 1 << " ";
			else
				cout << 2 << " ";
	}
	cout << endl;
	
}

int main()
{
	int n;
	cin >> n;
	SieveOfEratosthenes(n);
	return 0;
}

