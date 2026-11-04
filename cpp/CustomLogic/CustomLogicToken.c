// Type: CustomLogic.CustomLogicToken
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicToken.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicToken.cs
// --------------------------------

// CustomLogic.CustomLogicToken$$.ctor
// il2cpp: void CustomLogic_CustomLogicToken___ctor (CustomLogic_CustomLogicToken_o* __this, int32_t type, Il2CppObject* value, int32_t line, const MethodInfo* method);
// 0x1820ea1f0

void CustomLogic_CustomLogicToken___ctor
               (CustomLogic_CustomLogicToken_o *__this,int32_t type,Il2CppObject *value,int32_t line,
               MethodInfo *method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = type;
  (__this->fields).Value = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,value);
  (__this->fields).Line = line;
  return;
}


