// Type: CustomLogic.CustomLogicBinopExpressionAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicBinopExpressionAst.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Ast/CustomLogicBinopExpressionAst.cs  [prior source available (delta unverified)]
// --------------------------------

// CustomLogic.CustomLogicBinopExpressionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicBinopExpressionAst___ctor (CustomLogic_CustomLogicBinopExpressionAst_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t line, const MethodInfo* method);
// 0x3db20f0

void CustomLogic_CustomLogicBinopExpressionAst___ctor
               (CustomLogic_CustomLogicBinopExpressionAst_o *__this,
               CustomLogic_CustomLogicToken_o *token,int32_t line,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 9;
  (__this->fields).Line = line;
  (__this->fields).Token = token;
  il2cpp_runtime_glue(&(__this->fields).Token,token);
  return;
}


