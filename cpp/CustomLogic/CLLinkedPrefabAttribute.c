// Type: CustomLogic.CLLinkedPrefabAttribute
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CLLinkedPrefabAttribute.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CLLinkedPrefabAttribute$$get_Name
// il2cpp: System_String_o* CustomLogic_CLLinkedPrefabAttribute__get_Name (CustomLogic_CLLinkedPrefabAttribute_o* __this, const MethodInfo* method);
// 0x1808fb3a0

System_String_o*
CustomLogic_CLLinkedPrefabAttribute__get_Name(CustomLogic_CLLinkedPrefabAttribute_o* __this, MethodInfo* method)

{
  return (__this->fields)._Name_k__BackingField;
}


// CustomLogic.CLLinkedPrefabAttribute$$get_Path
// il2cpp: System_String_o* CustomLogic_CLLinkedPrefabAttribute__get_Path (CustomLogic_CLLinkedPrefabAttribute_o* __this, const MethodInfo* method);
// 0x180573e90

System_String_o*
CustomLogic_CLLinkedPrefabAttribute__get_Path(CustomLogic_CLLinkedPrefabAttribute_o* __this, MethodInfo* method)

{
  return (__this->fields)._Path_k__BackingField;
}


// CustomLogic.CLLinkedPrefabAttribute$$.ctor
// il2cpp: void CustomLogic_CLLinkedPrefabAttribute___ctor (CustomLogic_CLLinkedPrefabAttribute_o* __this, System_String_o* name, System_String_o* path, const MethodInfo* method);
// 0x181a291f0

void
CustomLogic_CLLinkedPrefabAttribute___ctor_1a291f0(CustomLogic_CLLinkedPrefabAttribute_o* __this, System_String_o* name, System_String_o* path, MethodInfo* method)

{
  System_Attribute___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Name_k__BackingField = qualifiedCppName;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField,qualifiedCppName);
  (__this->fields)._Path_k__BackingField = declaration;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Path_k__BackingField,declaration);
  return;
}


