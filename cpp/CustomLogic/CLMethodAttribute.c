// Type: CustomLogic.CLMethodAttribute
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CLMethodAttribute.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CLMethodAttribute$$get_ReturnTypeArguments
// il2cpp: System_String_array* CustomLogic_CLMethodAttribute__get_ReturnTypeArguments (CustomLogic_CLMethodAttribute_o* __this, const MethodInfo* method);
// 0x1805852b0

System_String_array*
CustomLogic_CLMethodAttribute__get_ReturnTypeArguments(CustomLogic_CLMethodAttribute_o* __this, MethodInfo* method)

{
  return (__this->fields)._ReturnTypeArguments_k__BackingField;
}


// CustomLogic.CLMethodAttribute$$set_ReturnTypeArguments
// il2cpp: void CustomLogic_CLMethodAttribute__set_ReturnTypeArguments (CustomLogic_CLMethodAttribute_o* __this, System_String_array* value, const MethodInfo* method);
// 0x180ace2f0

void
CustomLogic_CLMethodAttribute__set_ReturnTypeArguments(CustomLogic_CLMethodAttribute_o* __this, System_String_array* value, MethodInfo* method)

{
  (__this->fields)._ReturnTypeArguments_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._ReturnTypeArguments_k__BackingField,value);
  return;
}


// CustomLogic.CLMethodAttribute$$.ctor
// il2cpp: void CustomLogic_CLMethodAttribute___ctor (CustomLogic_CLMethodAttribute_o* __this, const MethodInfo* method);
// 0x181ecd490

void CustomLogic_CLMethodAttribute___ctor(CustomLogic_CLMethodAttribute_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434513f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434513f = '\x01';
  }
  (__this->fields)._Name_k__BackingField = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField,"");
  System_Attribute___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


