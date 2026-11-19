// Type: CustomLogic.Editor.BaseCustomLogicDocsGenerator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic.Editor/BaseCustomLogicDocsGenerator.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.Editor.BaseCustomLogicDocsGenerator$$.ctor
// il2cpp: void CustomLogic_Editor_BaseCustomLogicDocsGenerator___ctor (CustomLogic_Editor_BaseCustomLogicDocsGenerator_o* __this, CustomLogic_Editor_Models_CLType_array* allTypes, const MethodInfo* method);
// 0x5b91b30

void CustomLogic_Editor_BaseCustomLogicDocsGenerator___ctor
               (CustomLogic_Editor_BaseCustomLogicDocsGenerator_o *__this,
               CustomLogic_Editor_Models_CLType_array *allTypes,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).AllTypes = allTypes;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AllTypes);
  return;
}


