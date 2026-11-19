// Type: CustomLogic.CLMethodAttribute
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CLMethodAttribute.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CLMethodAttribute$$get_ReturnTypeArguments
// il2cpp: System_String_array* CustomLogic_CLMethodAttribute__get_ReturnTypeArguments (CustomLogic_CLMethodAttribute_o* __this, const MethodInfo* method);
// 0x59a9820

System_String_array *
CustomLogic_CLMethodAttribute__get_ReturnTypeArguments
          (CustomLogic_CLMethodAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._ReturnTypeArguments_k__BackingField;
}


// CustomLogic.CLMethodAttribute$$set_ReturnTypeArguments
// il2cpp: void CustomLogic_CLMethodAttribute__set_ReturnTypeArguments (CustomLogic_CLMethodAttribute_o* __this, System_String_array* value, const MethodInfo* method);
// 0x59a9830

void CustomLogic_CLMethodAttribute__set_ReturnTypeArguments
               (CustomLogic_CLMethodAttribute_o *__this,System_String_array *value,MethodInfo *method)

{
  (__this->fields)._ReturnTypeArguments_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._ReturnTypeArguments_k__BackingField);
  return;
}


// CustomLogic.CLMethodAttribute$$.ctor
// il2cpp: void CustomLogic_CLMethodAttribute___ctor (CustomLogic_CLMethodAttribute_o* __this, const MethodInfo* method);
// 0x59a9840

void CustomLogic_CLMethodAttribute___ctor(CustomLogic_CLMethodAttribute_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545ad8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545ad8 = '\x01';
  }
  (__this->fields)._Name_k__BackingField = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField);
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  return;
}


