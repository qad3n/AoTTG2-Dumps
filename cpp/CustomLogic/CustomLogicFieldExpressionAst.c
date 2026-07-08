// Type: CustomLogic.CustomLogicFieldExpressionAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicFieldExpressionAst.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Ast/CustomLogicFieldExpressionAst.cs  [prior source available (delta unverified)]
// --------------------------------

// CustomLogic.CustomLogicFieldExpressionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicFieldExpressionAst___ctor (CustomLogic_CustomLogicFieldExpressionAst_o* __this, System_String_o* name, int32_t line, const MethodInfo* method);
// 0x3db26c0

void CustomLogic_CustomLogicFieldExpressionAst___ctor
               (CustomLogic_CustomLogicFieldExpressionAst_o *__this,System_String_o *name,
               int32_t line,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 6;
  (__this->fields).Line = line;
  (__this->fields).FieldName = name;
  il2cpp_runtime_glue(&(__this->fields).FieldName,name);
  return;
}


