#include"Definition.h"
#include"CNF_Reader.h"
#include"Solver.h"
#include"Stack.h"
//extern int count_value, count_clause;
int main()
{
	ReadCNF(GetLine_Exclude_C());
	DPLL();
	return 0;
}
/*
c qw q
c wawa
p cnf 6 2
3 -4 5 0
-3 -4 5 0

3 0
-3 2 -1 0
*/