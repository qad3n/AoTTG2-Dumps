// Type: CustomLogic.Editor.BaseCustomLogicDocsGenerator
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic.Editor/BaseCustomLogicDocsGenerator.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.Editor.BaseCustomLogicDocsGenerator$$.ctor
// il2cpp: void CustomLogic_Editor_BaseCustomLogicDocsGenerator___ctor (CustomLogic_Editor_BaseCustomLogicDocsGenerator_o* __this, CustomLogic_Editor_Models_CLType_array* allTypes, const MethodInfo* method);
// 0x180577fb0

void
CustomLogic_Editor_BaseCustomLogicDocsGenerator___ctor(CustomLogic_Editor_BaseCustomLogicDocsGenerator_o* __this, CustomLogic_Editor_Models_CLType_array* allTypes, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).AllTypes = method;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllTypes,method);
  return;
}


