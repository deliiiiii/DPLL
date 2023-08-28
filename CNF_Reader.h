void MyGetString(char t[10]);
void MyGetChar(char* f_char);
void MyGetInt(int* f_int);
char GetLine_Exclude_C();
int Change_string_to_int(char t[10]);
struct ValueNode* CreateNewValueNode(bool isNegative, int index_value, int index_clause);
void AddCountAppear(int f_index_value);
void MinusCountAppear(int f_index_value);
void AddCountPoN(int f_index_value, bool f_isNegative);
void MinusCountPoN(int f_index_value, bool f_isNegative);
void AddNextValue_of_Clause(int index_clause, struct ValueNode* new_value);
void AddNextValue_of_Value(int index_value, struct ValueNode* new_value);
void CreateValueHeadLink();
void CreateClauseHeadLink();
void ReadClause(int index_clause);
void ReadCNF(char t);
void ReadValue();
bool CheckValue();