// classes example
#include <iostream>
using namespace std;

//Now let's make a template:

class cube {
	public: //why we use public?
	//cube (int x1, int x2, int x3) : L(x1), B(x2), H(x3) { }
	int area ();
	int volume ();
	cube(int x, int y, int z);
	//Private exists because, probably, the compiler checks the return of the member functions. If the class inner variables are not previously defined, compiler will say: "In member function ‘int cube::volume(int, int, int)’: noTemplate.C:27:2: error: ‘L’ was not declared in this scope L = x; B = y; H = z;"

	private:
	int L, B, H;
};
/*
//Constructor
cube::cube(int x, int y, int z) {
	L = x; B = y; H = z;
	cout << "Object being build." << endl;
}
*/
//which is the same as:
cube::cube(int x, int y, int z) : L(x), B(y), H(z) {
	cout << "Object being build." << endl;
}


//Member function definition
int cube::area() {
	//L = x; B = y; H = z;
	return 2*L*B + 2*L*H + 2*B*H;
}

int cube::volume() {
	//L = x; B = y; H = z;	
	return L*B*H;
}

//Main function
int main() {

cube willCube(1,1,1);

cout << "The area is: " << willCube.area() << endl;
cout << "The volume is: " << willCube.volume() << endl;
return 0;
}
