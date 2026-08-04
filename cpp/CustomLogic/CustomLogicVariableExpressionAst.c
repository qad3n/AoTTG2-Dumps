// Type: CustomLogic.CustomLogicVariableExpressionAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicVariableExpressionAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicVariableExpressionAst.cs
// --------------------------------

// CustomLogic.CustomLogicVariableExpressionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicVariableExpressionAst___ctor (CustomLogic_CustomLogicVariableExpressionAst_o* __this, System_String_o* name, int32_t line, const MethodInfo* method);
// 0x40b90d0

void CustomLogic_CustomLogicVariableExpressionAst___ctor
               (CustomLogic_CustomLogicVariableExpressionAst_o *__this,System_String_o *name,int32_t line,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 0xb;
  (__this->fields).Line = line;
  (__this->fields).Name = name;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Name,name);
  return;
}


