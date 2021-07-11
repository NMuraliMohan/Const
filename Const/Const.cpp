// Const.cpp : Defines the entry point for the console application.
//

#include "Person.h"
#include <iostream>

int DoubleIt(int const & x)
{
	return x * 2;
}


int main()
{
	const int maxNumberOfPlayers = 11;  // understood by the compiler

	//std::cout << "Max players" << MAX_NO_OF_PLAYERS << std::endl;
	int i = 3;

	int const ci = 3;
	const int constant_int = 25;
	i = 4;
	//ci = 4;
	//constant_int = 26;

	int& ri = i; 
	ri = 5;

	int const & cri = i;
	//cri = 6;

	int const& non_const_ref_i = ci;
	
	int j = 10;
	int DoubleJ = DoubleIt(j);
	int DoubleTen = DoubleIt(10);

	Person Kate("Kate", "Gregory", 234);
	Kate.SetNumber(235);
	Person const cKate = Kate;
	const Person constant_Kate = Kate;
	//cKate.SetNumber(236);
	int KateNumber = cKate.GetNumber();

	int* pI = &i;
	//int* pII = &pI;
	//pI = &Kate;_
	Person* ptr_to_murali = new Person("Muraloi", "N", 435);
	Person* pPerson = &ptr_to_murali;
	
	int const * pcI = pI; // pointer to a const
	//*pcI = 4;
	pcI = &j;
	j = *pcI;

	int * const cpI = pI; // const pointer
	*cpI = 4;
	//cpI = &j;

	int const * const crazy = pI; // const pointer to a const
	//*crazy = 4;
	//crazy = &j;
	j = *crazy;

	return 0;
}

