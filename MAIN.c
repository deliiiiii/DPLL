#include"Definition.h"
#include"CNF_Reader.h"
#include"Solver.h"
#include"Stack.h"
#include"HaniddokuC.h"
//extern int count_value, count_clause;
int main()
{
	strcpy(position_InPut_CNF, "E:\\U\\DPLL\\OutPut_Sodoku.txt");
	strcpy(position_InPut_Sodoku, "E:\\U\\DPLL\\InPut_Sodoku.txt");
	strcpy(position_OutPut_Sodoku_CNF, "E:\\U\\DPLL\\OutPut_Sodoku.txt");

	Convert_Sodoku_to_CNF();
	
	bool isCheckValue = false;
	//bool isCheckValue = true;
	clock_t start, end;
	fp_InPut_CNF = fopen(position_InPut_CNF, "r");
	ReadCNF(GetLine_Exclude_C());
	start = clock();
	if (isCheckValue)
	{
		ReadValue();
		CheckValue();
	}
	else
	{
		count_solution = 0;
		DPLL();
		if (count_solution == 0)
			printf("��ɱ�����!\n");
	}
	end = clock();
	printf("time = %f s\n", (double)(end - start) / CLK_TCK);
	
	return 0;
}
/*
c qw q
c wawa
p cnf 4 4
1 2 3 0
-1 -2 0
3 3 3 0
-1 -1 -1 0

c wawa
p cnf 2 1
1 0
*/
/*


*/