// Type: CustomLogic.Editor.BaseCustomLogicDocsGenerator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic.Editor/BaseCustomLogicDocsGenerator.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.Editor.BaseCustomLogicDocsGenerator$$.ctor
// il2cpp: void CustomLogic_Editor_BaseCustomLogicDocsGenerator___ctor (CustomLogic_Editor_BaseCustomLogicDocsGenerator_o* __this, CustomLogic_Editor_Models_CLType_array* allTypes, const MethodInfo* method);
// 0x3f70a00

void CustomLogic_Editor_BaseCustomLogicDocsGenerator___ctor
               (CustomLogic_Editor_BaseCustomLogicDocsGenerator_o *__this,
               CustomLogic_Editor_Models_CLType_array *allTypes,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).AllTypes = allTypes;
  il2cpp_runtime_glue(&__this->fields,allTypes);
  return;
}


