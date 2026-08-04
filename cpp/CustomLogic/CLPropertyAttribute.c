// Type: CustomLogic.CLPropertyAttribute
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CLPropertyAttribute.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CLPropertyAttribute$$get_ReadOnly
// il2cpp: bool CustomLogic_CLPropertyAttribute__get_ReadOnly (CustomLogic_CLPropertyAttribute_o* __this, const MethodInfo* method);
// 0x40b9330

bool_conflict
CustomLogic_CLPropertyAttribute__get_ReadOnly(CustomLogic_CLPropertyAttribute_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  *(undefined1 *)((long)&(__this->fields)._Static_k__BackingField + 2));
}


// CustomLogic.CLPropertyAttribute$$set_ReadOnly
// il2cpp: void CustomLogic_CLPropertyAttribute__set_ReadOnly (CustomLogic_CLPropertyAttribute_o* __this, bool value, const MethodInfo* method);
// 0x40b9340

void CustomLogic_CLPropertyAttribute__set_ReadOnly
               (CustomLogic_CLPropertyAttribute_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)((long)&(__this->fields)._Static_k__BackingField + 2) = (char)value;
  return;
}


// CustomLogic.CLPropertyAttribute$$get_TypeArguments
// il2cpp: System_String_array* CustomLogic_CLPropertyAttribute__get_TypeArguments (CustomLogic_CLPropertyAttribute_o* __this, const MethodInfo* method);
// 0x40b9350

System_String_array *
CustomLogic_CLPropertyAttribute__get_TypeArguments
          (CustomLogic_CLPropertyAttribute_o *__this,MethodInfo *method)

{
  return *(System_String_array **)&(__this->fields)._ReadOnly_k__BackingField;
}


// CustomLogic.CLPropertyAttribute$$set_TypeArguments
// il2cpp: void CustomLogic_CLPropertyAttribute__set_TypeArguments (CustomLogic_CLPropertyAttribute_o* __this, System_String_array* value, const MethodInfo* method);
// 0x40b9360

void CustomLogic_CLPropertyAttribute__set_TypeArguments
               (CustomLogic_CLPropertyAttribute_o *__this,System_String_array *value,MethodInfo *method)

{
  *(System_String_array **)&(__this->fields)._ReadOnly_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._ReadOnly_k__BackingField);
  return;
}


// CustomLogic.CLPropertyAttribute$$get_Enum
// il2cpp: System_Type_array* CustomLogic_CLPropertyAttribute__get_Enum (CustomLogic_CLPropertyAttribute_o* __this, const MethodInfo* method);
// 0x40b9370

System_Type_array *
CustomLogic_CLPropertyAttribute__get_Enum(CustomLogic_CLPropertyAttribute_o *__this,MethodInfo *method)

{
  return (System_Type_array *)(__this->fields)._TypeArguments_k__BackingField;
}


// CustomLogic.CLPropertyAttribute$$set_Enum
// il2cpp: void CustomLogic_CLPropertyAttribute__set_Enum (CustomLogic_CLPropertyAttribute_o* __this, System_Type_array* value, const MethodInfo* method);
// 0x40b9380

void CustomLogic_CLPropertyAttribute__set_Enum
               (CustomLogic_CLPropertyAttribute_o *__this,System_Type_array *value,MethodInfo *method)

{
  (__this->fields)._TypeArguments_k__BackingField = (System_String_array *)value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._TypeArguments_k__BackingField);
  return;
}


// CustomLogic.CLPropertyAttribute$$.ctor
// il2cpp: void CustomLogic_CLPropertyAttribute___ctor (CustomLogic_CLPropertyAttribute_o* __this, bool readOnly, const MethodInfo* method);
// 0x40b9390

void CustomLogic_CLPropertyAttribute___ctor
               (CustomLogic_CLPropertyAttribute_o *__this,bool_conflict readOnly,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ac506 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac506 = '\x01';
    method = extraout_RDX;
  }
  pSVar1 = "";
  (__this->fields)._Name_k__BackingField = "";
  il2cpp_runtime_helper_022b4080(&__this->fields,pSVar1,method);
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  *(char *)((long)&(__this->fields)._Static_k__BackingField + 2) = (char)readOnly;
  return;
}


