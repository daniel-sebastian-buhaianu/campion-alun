#include <fstream>
using namespace std;
int main()
{
	ifstream f("alun.in");
	int n1, n2, x, k, y;
	f >> n1 >> n2 >> x >> k >> y;
	f.close();
	ofstream g("alun.out");
	// cerinta 1
	g << (n1+n2)*(x/4) + n1*(x%4/2) - x/k << '\n';
	// cerinta 2
	g << y/(n1+n2)*4 + y%(n1+n2)/2*2;
	g.close();
	return 0;
}
