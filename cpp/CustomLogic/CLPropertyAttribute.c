// Type: CustomLogic.CLPropertyAttribute
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CLPropertyAttribute.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CLPropertyAttribute$$get_ReadOnly
// il2cpp: bool CustomLogic_CLPropertyAttribute__get_ReadOnly (CustomLogic_CLPropertyAttribute_o* __this, const MethodInfo* method);
// 0x59a98e0

bool CustomLogic_CLPropertyAttribute__get_ReadOnly
               (CustomLogic_CLPropertyAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._ReadOnly_k__BackingField;
}


// CustomLogic.CLPropertyAttribute$$set_ReadOnly
// il2cpp: void CustomLogic_CLPropertyAttribute__set_ReadOnly (CustomLogic_CLPropertyAttribute_o* __this, bool value, const MethodInfo* method);
// 0x59a98f0

void CustomLogic_CLPropertyAttribute__set_ReadOnly
               (CustomLogic_CLPropertyAttribute_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._ReadOnly_k__BackingField = value;
  return;
}


// CustomLogic.CLPropertyAttribute$$get_TypeArguments
// il2cpp: System_String_array* CustomLogic_CLPropertyAttribute__get_TypeArguments (CustomLogic_CLPropertyAttribute_o* __this, const MethodInfo* method);
// 0x59a9900

System_String_array *
CustomLogic_CLPropertyAttribute__get_TypeArguments
          (CustomLogic_CLPropertyAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._TypeArguments_k__BackingField;
}


// CustomLogic.CLPropertyAttribute$$set_TypeArguments
// il2cpp: void CustomLogic_CLPropertyAttribute__set_TypeArguments (CustomLogic_CLPropertyAttribute_o* __this, System_String_array* value, const MethodInfo* method);
// 0x59a9910

void CustomLogic_CLPropertyAttribute__set_TypeArguments
               (CustomLogic_CLPropertyAttribute_o *__this,System_String_array *value,MethodInfo *method)

{
  (__this->fields)._TypeArguments_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._TypeArguments_k__BackingField);
  return;
}


// CustomLogic.CLPropertyAttribute$$get_Enum
// il2cpp: System_Type_array* CustomLogic_CLPropertyAttribute__get_Enum (CustomLogic_CLPropertyAttribute_o* __this, const MethodInfo* method);
// 0x59a9920

System_Type_array *
CustomLogic_CLPropertyAttribute__get_Enum(CustomLogic_CLPropertyAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._Enum_k__BackingField;
}


// CustomLogic.CLPropertyAttribute$$set_Enum
// il2cpp: void CustomLogic_CLPropertyAttribute__set_Enum (CustomLogic_CLPropertyAttribute_o* __this, System_Type_array* value, const MethodInfo* method);
// 0x59a9930

void CustomLogic_CLPropertyAttribute__set_Enum
               (CustomLogic_CLPropertyAttribute_o *__this,System_Type_array *value,MethodInfo *method)

{
  (__this->fields)._Enum_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Enum_k__BackingField);
  return;
}


// CustomLogic.CLPropertyAttribute$$.ctor
// il2cpp: void CustomLogic_CLPropertyAttribute___ctor (CustomLogic_CLPropertyAttribute_o* __this, bool readOnly, const MethodInfo* method);
// 0x59a9940

void CustomLogic_CLPropertyAttribute___ctor
               (CustomLogic_CLPropertyAttribute_o *__this,bool readOnly,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545ad8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545ad8 = '\x01';
  }
  (__this->fields)._Name_k__BackingField = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField);
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._ReadOnly_k__BackingField = readOnly;
  return;
}


