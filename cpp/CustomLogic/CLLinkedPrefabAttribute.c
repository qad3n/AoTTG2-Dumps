// Type: CustomLogic.CLLinkedPrefabAttribute
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CLLinkedPrefabAttribute.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CLLinkedPrefabAttribute$$get_Name
// il2cpp: System_String_o* CustomLogic_CLLinkedPrefabAttribute__get_Name (CustomLogic_CLLinkedPrefabAttribute_o* __this, const MethodInfo* method);
// 0x59a97c0

System_String_o *
CustomLogic_CLLinkedPrefabAttribute__get_Name
          (CustomLogic_CLLinkedPrefabAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._Name_k__BackingField;
}


// CustomLogic.CLLinkedPrefabAttribute$$get_Path
// il2cpp: System_String_o* CustomLogic_CLLinkedPrefabAttribute__get_Path (CustomLogic_CLLinkedPrefabAttribute_o* __this, const MethodInfo* method);
// 0x59a97d0

System_String_o *
CustomLogic_CLLinkedPrefabAttribute__get_Path
          (CustomLogic_CLLinkedPrefabAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._Path_k__BackingField;
}


// CustomLogic.CLLinkedPrefabAttribute$$.ctor
// il2cpp: void CustomLogic_CLLinkedPrefabAttribute___ctor (CustomLogic_CLLinkedPrefabAttribute_o* __this, System_String_o* name, System_String_o* path, const MethodInfo* method);
// 0x59a97e0

void CustomLogic_CLLinkedPrefabAttribute___ctor
               (CustomLogic_CLLinkedPrefabAttribute_o *__this,System_String_o *name,System_String_o *path,
               MethodInfo *method)

{
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Name_k__BackingField = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField);
  (__this->fields)._Path_k__BackingField = path;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Path_k__BackingField);
  return;
}


