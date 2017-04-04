#ifndef MYTEMPLATE_H
#define MYTEMPLATE_H

//Now let's make a template:
template<class a_type> class cube {
	public:
	//Declarations
	a_type area ();
	a_type volume ();
	cube(a_type x, a_type y, a_type z);

	//Private exists so that only member functions of the class can access it -- not even objects can access them
	private:
	a_type L, B, H;
};

#endif
