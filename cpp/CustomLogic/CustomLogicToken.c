// Type: CustomLogic.CustomLogicToken
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicToken.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/CustomLogicToken.cs  [prior source available (delta unverified)]
// --------------------------------

// CustomLogic.CustomLogicToken$$.ctor
// il2cpp: void CustomLogic_CustomLogicToken___ctor (CustomLogic_CustomLogicToken_o* __this, int32_t type, Il2CppObject* value, int32_t line, const MethodInfo* method);
// 0x3f5ad80

void CustomLogic_CustomLogicToken___ctor
               (CustomLogic_CustomLogicToken_o *__this,int32_t type,Il2CppObject *value,int32_t line
               ,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = type;
  (__this->fields).Value = value;
  il2cpp_runtime_glue(&(__this->fields).Value,value);
  (__this->fields).Line = line;
  return;
}


