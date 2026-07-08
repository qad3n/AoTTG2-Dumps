// Type: CustomLogic.CustomLogicPrimitiveExpressionAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPrimitiveExpressionAst.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Ast/CustomLogicPrimitiveExpressionAst.cs  [prior source available (delta unverified)]
// --------------------------------

// CustomLogic.CustomLogicPrimitiveExpressionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicPrimitiveExpressionAst___ctor (CustomLogic_CustomLogicPrimitiveExpressionAst_o* __this, Il2CppObject* value, int32_t line, const MethodInfo* method);
// 0x3db29d0

void CustomLogic_CustomLogicPrimitiveExpressionAst___ctor
               (CustomLogic_CustomLogicPrimitiveExpressionAst_o *__this,Il2CppObject *value,
               int32_t line,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 7;
  (__this->fields).Line = line;
  (__this->fields).Value = value;
  il2cpp_runtime_glue(&(__this->fields).Value,value);
  return;
}


