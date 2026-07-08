// Type: CustomLogic.CustomLogicUnaryExpressionAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicUnaryExpressionAst.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicUnaryExpressionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicUnaryExpressionAst___ctor (CustomLogic_CustomLogicUnaryExpressionAst_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t line, const MethodInfo* method);
// 0x3db2d50

void CustomLogic_CustomLogicUnaryExpressionAst___ctor
               (CustomLogic_CustomLogicUnaryExpressionAst_o *__this,
               CustomLogic_CustomLogicToken_o *token,int32_t line,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 8;
  (__this->fields).Line = line;
  (__this->fields).Token = token;
  il2cpp_runtime_glue(&(__this->fields).Token,token);
  return;
}


