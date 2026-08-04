// Type: CustomLogic.CustomLogicReturnExpressionAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicReturnExpressionAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicReturnExpressionAst.cs
// --------------------------------

// CustomLogic.CustomLogicReturnExpressionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicReturnExpressionAst___ctor (CustomLogic_CustomLogicReturnExpressionAst_o* __this, CustomLogic_CustomLogicBaseExpressionAst_o* returnValue, int32_t line, const MethodInfo* method);
// 0x40b8d50

void CustomLogic_CustomLogicReturnExpressionAst___ctor
               (CustomLogic_CustomLogicReturnExpressionAst_o *__this,
               CustomLogic_CustomLogicBaseExpressionAst_o *returnValue,int32_t line,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 0xc;
  (__this->fields).Line = line;
  (__this->fields).ReturnValue = returnValue;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ReturnValue,returnValue);
  return;
}


