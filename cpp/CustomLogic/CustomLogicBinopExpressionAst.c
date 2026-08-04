// Type: CustomLogic.CustomLogicBinopExpressionAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicBinopExpressionAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicBinopExpressionAst.cs
// --------------------------------

// CustomLogic.CustomLogicBinopExpressionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicBinopExpressionAst___ctor (CustomLogic_CustomLogicBinopExpressionAst_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t line, const MethodInfo* method);
// 0x40b8430

void CustomLogic_CustomLogicBinopExpressionAst___ctor
               (CustomLogic_CustomLogicBinopExpressionAst_o *__this,CustomLogic_CustomLogicToken_o *token,
               int32_t line,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 9;
  (__this->fields).Line = line;
  (__this->fields).Token = token;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Token,token);
  return;
}


