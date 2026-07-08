// Type: CustomLogic.CustomLogicBaseAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicBaseAst.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Ast/CustomLogicBaseAst.cs  [prior source available (delta unverified)]
// --------------------------------

// CustomLogic.CustomLogicBaseAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicBaseAst___ctor (CustomLogic_CustomLogicBaseAst_o* __this, int32_t type, int32_t line, const MethodInfo* method);
// 0x3db20d0

void CustomLogic_CustomLogicBaseAst___ctor
               (CustomLogic_CustomLogicBaseAst_o *__this,int32_t type,int32_t line,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = type;
  (__this->fields).Line = line;
  return;
}


