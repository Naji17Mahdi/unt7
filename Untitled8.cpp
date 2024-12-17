#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

float f ( float  );


main()
{
	float a;
	float b;
	
	cout<<"Please enter a : "<<endl;
	cin>>a;
	
	b = f ( a );
	
	cout<<b;
}

float f ( float a )
{
	return 2 * a;
}
