// Type: CustomLogic.CustomLogicAssignmentExpressionAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAssignmentExpressionAst.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Ast/CustomLogicAssignmentExpressionAst.cs  [prior source available (delta unverified)]
// --------------------------------

// CustomLogic.CustomLogicAssignmentExpressionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicAssignmentExpressionAst___ctor (CustomLogic_CustomLogicAssignmentExpressionAst_o* __this, CustomLogic_CustomLogicBaseExpressionAst_o* left, CustomLogic_CustomLogicToken_o* operator, int32_t line, const MethodInfo* method);
// 0x3db2050

void CustomLogic_CustomLogicAssignmentExpressionAst___ctor
               (CustomLogic_CustomLogicAssignmentExpressionAst_o *__this,
               CustomLogic_CustomLogicBaseExpressionAst_o *left,
               CustomLogic_CustomLogicToken_o *operator,int32_t line,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 3;
  (__this->fields).Line = line;
  (__this->fields).Left = left;
  il2cpp_runtime_glue(&(__this->fields).Left,left);
  (__this->fields).Operator = operator;
  il2cpp_runtime_glue(&(__this->fields).Operator,operator);
  return;
}


