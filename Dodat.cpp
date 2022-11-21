#include <iostream> 
using namespace std;

int main()
{
	const int n = 7;
	int array[n] = {123, 879, 27, 89, 42};
    int t = 0;
    int n1, n2;

    cout << "input first number: ";
	cin >> n1;
	cout << "input second number: ";
	cin >> n2;

    array[n-2] = n1;
    array[n-1] = n2;

 
	for (int i = 0; i < n - 1; i++){
		int j = i;
		for (int k = i + 1; k < n; k++){
			if (array[k] > array[j])
				j = k;
		}

        t = array[i];
        array[i] = array[j];
        array[j] = t;
	}
 
	for (int m = 0; m < n; m++)
		cout << array[m] << ' ';
 
	return 0;
}