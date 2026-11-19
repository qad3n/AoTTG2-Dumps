// Type: CustomLogic.CustomLogicToken
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicToken.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicToken.cs
// --------------------------------

// CustomLogic.CustomLogicToken$$.ctor
// il2cpp: void CustomLogic_CustomLogicToken___ctor (CustomLogic_CustomLogicToken_o* __this, int32_t type, Il2CppObject* value, int32_t line, const MethodInfo* method);
// 0x5b75b70

void CustomLogic_CustomLogicToken___ctor
               (CustomLogic_CustomLogicToken_o *__this,int32_t type,Il2CppObject *value,int32_t line,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = type;
  (__this->fields).Value = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value);
  (__this->fields).Line = line;
  return;
}


