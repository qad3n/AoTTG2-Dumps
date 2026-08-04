// Type: CustomLogic.CustomLogicWaitExpressionAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicWaitExpressionAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicWaitExpressionAst.cs
// --------------------------------

// CustomLogic.CustomLogicWaitExpressionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicWaitExpressionAst___ctor (CustomLogic_CustomLogicWaitExpressionAst_o* __this, CustomLogic_CustomLogicBaseExpressionAst_o* waitTime, int32_t line, const MethodInfo* method);
// 0x40b9110

void CustomLogic_CustomLogicWaitExpressionAst___ctor
               (CustomLogic_CustomLogicWaitExpressionAst_o *__this,
               CustomLogic_CustomLogicBaseExpressionAst_o *waitTime,int32_t line,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 0xf;
  (__this->fields).Line = line;
  (__this->fields).WaitTime = waitTime;
  il2cpp_runtime_helper_022b4080(&(__this->fields).WaitTime,waitTime);
  return;
}


