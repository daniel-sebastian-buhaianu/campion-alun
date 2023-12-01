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
	int c = x/4, r = x%4;
	int nr = (n1+n2)*c + n1*(r/2) - x/k;
	g << nr << '\n';
	// cerinta 2
	c = y/(n1+n2), r = y%(n1+n2);
	nr = c*4;
	if (r > 0 && r <= n1) nr += 2;
	else if (r > 0 && r > n1) nr += 4;
	g << nr;
	g.close();
	return 0;
}
