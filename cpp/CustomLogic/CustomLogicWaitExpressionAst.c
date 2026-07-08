// Type: CustomLogic.CustomLogicWaitExpressionAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicWaitExpressionAst.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Ast/CustomLogicWaitExpressionAst.cs  [prior source available (delta unverified)]
// --------------------------------

// CustomLogic.CustomLogicWaitExpressionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicWaitExpressionAst___ctor (CustomLogic_CustomLogicWaitExpressionAst_o* __this, CustomLogic_CustomLogicBaseExpressionAst_o* waitTime, int32_t line, const MethodInfo* method);
// 0x3db2dd0

void CustomLogic_CustomLogicWaitExpressionAst___ctor
               (CustomLogic_CustomLogicWaitExpressionAst_o *__this,
               CustomLogic_CustomLogicBaseExpressionAst_o *waitTime,int32_t line,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 0xf;
  (__this->fields).Line = line;
  (__this->fields).WaitTime = waitTime;
  il2cpp_runtime_glue(&(__this->fields).WaitTime,waitTime);
  return;
}


