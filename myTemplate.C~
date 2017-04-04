// classes example
#include <iostream>
#include "myTemplate.h"
using namespace std;

//Constructor
template<class a_type> cube<a_type>::cube(a_type x, a_type y, a_type z) : L(x), B(y), H(z) {
	cout << "Object being built." << endl;
}

//Member function definition
template<class a_type> a_type cube<a_type>::area() {
	return 2*L*B + 2*L*H + 2*B*H;
}

template<class a_type> a_type cube<a_type>::volume() {
	return L*B*H;
}

//Just a function not related to the class cube
template<class a_type>
void printTwice(a_type input) {
	cout << "Twice the input number = " << input * 2 << endl;
}

/*NOW NOW
If we use (T input) the input has to be copied and can be modified inside the function

If we use (T& input) the input is passed by reference and copy isnt necessary (makes the code leaner). Nonetheless, the input may still be modified inside the function

If we use (const T& input) we have the above plus the fact the input wont be modified inside the function. That is wise if the input lives longer than the function (the input is relevant downstream the code).
*/
template<class T>
double GetAverage(T tArray[], int nElements)
{
    T tSum = T(); // tSum = 0 -- gotta initialize this way bcs datatype is still abstract

    for (int nIndex = 0; nIndex < nElements; ++nIndex)
    {
        tSum += tArray[nIndex];
    }

    // Whatever type of T is, convert to double
    return double(tSum) / nElements;
}



//Main function
int main() {

cube<int> willCube(1,1,1);

cout << "The area is: " << willCube.area() << endl;
cout << "The volume is: " << willCube.volume() << endl;

//int  IntArray[5] = {100, 200, 400, 500, 1000};
float FloatArray[3] = { 1.55, 5.44, 12.36};
//cout << GetAverage(IntArray, 5) << endl;
cout << GetAverage(FloatArray, 3) << endl;

return 0;
}
