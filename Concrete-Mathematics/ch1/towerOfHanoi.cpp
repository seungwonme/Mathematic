#include <iostream>
using namespace std;

// Move n disks from rod 'from' to rod 'to' using rod 'aux' as auxiliary
// We have three rods: 1, 2, 3
// Goal: Move all disks from rod 1 to rod 3

void towerOfHanoi(int n, int from, int to, int aux)
{
	if (n == 1) 
	{
		cout << "Move disk 1 from rod " << from << " to rod " << to << endl;
		return;
	}
	towerOfHanoi(n - 1, from, aux, to);
	cout << "Move disk " << n << " from rod " << from << " to rod " << to << endl;
	towerOfHanoi(n - 1, aux, to, from);
}

int	main(void)
{
	int n; cin >> n;
	towerOfHanoi(n, 1, 3, 2);
	return 0;
}
