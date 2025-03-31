#include <iostream> 
#include <vector>
#include <numeric> 
#include <functional>
using namespace std;

int myfunction(int x, int y) { return x + 2 * y; }

int main() {
	vector <int> V { 10, 20, 30 } ;
	int init = 100;

	copy(V.begin(), V.end(), ostream_iterator<int>(cout, "  "));
	cout << "\ninit = " << init << endl;

	cout << "Using default accumulate: " ;
	cout << accumulate(V.begin(), V.end(), init);
	cout << endl;

	cout << "Using custom function: ";
	cout << accumulate(V.begin(), V.end(), init, myfunction);
	cout << endl;

	cout << "Using functional's minus: ";
	cout << accumulate(V.begin(), V.end(), init, minus<int>());
	cout << endl;

	return 0;
}
