// Type: CustomLogic.CLMethodAttribute
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CLMethodAttribute.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CLMethodAttribute$$get_ReturnTypeArguments
// il2cpp: System_String_array* CustomLogic_CLMethodAttribute__get_ReturnTypeArguments (CustomLogic_CLMethodAttribute_o* __this, const MethodInfo* method);
// 0x3db2f30

System_String_array *
CustomLogic_CLMethodAttribute__get_ReturnTypeArguments
          (CustomLogic_CLMethodAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._ReturnTypeArguments_k__BackingField;
}


// CustomLogic.CLMethodAttribute$$set_ReturnTypeArguments
// il2cpp: void CustomLogic_CLMethodAttribute__set_ReturnTypeArguments (CustomLogic_CLMethodAttribute_o* __this, System_String_array* value, const MethodInfo* method);
// 0x3db2f40

void CustomLogic_CLMethodAttribute__set_ReturnTypeArguments
               (CustomLogic_CLMethodAttribute_o *__this,System_String_array *value,
               MethodInfo *method)

{
  (__this->fields)._ReturnTypeArguments_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._ReturnTypeArguments_k__BackingField);
  return;
}


// CustomLogic.CLMethodAttribute$$.ctor
// il2cpp: void CustomLogic_CLMethodAttribute___ctor (CustomLogic_CLMethodAttribute_o* __this, const MethodInfo* method);
// 0x3db2f50

void CustomLogic_CLMethodAttribute___ctor
               (CustomLogic_CLMethodAttribute_o *__this,MethodInfo *method)

{
  if (DAT_057027d1 == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_057027d1 = '\x01';
  }
  (__this->fields)._Name_k__BackingField = "";
  il2cpp_runtime_glue(&__this->fields);
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  return;
}


