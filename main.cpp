#include <iostream>
#include <cstdint>
#include <cmath>

using namespace std;

#define LIM 4000000

int main(int argc, char **argv)
{	
	int sum = 0;
	int bn2, bn1 = 0, bn = 2;
	while(bn <= LIM){
		sum += bn;
		
		bn2 = bn1;
		bn1 = bn;
		bn = (bn1<<2)+bn2;
	}
	
	cout << sum << endl;
	
    return 0;
}
