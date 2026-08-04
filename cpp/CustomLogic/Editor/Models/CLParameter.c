// Type: CustomLogic.Editor.Models.CLParameter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic.Editor.Models/CLParameter.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.Editor.Models.CLParameter$$get_Name
// il2cpp: System_String_o* CustomLogic_Editor_Models_CLParameter__get_Name (CustomLogic_Editor_Models_CLParameter_o* __this, const MethodInfo* method);
// 0x4286c30

System_String_o *
CustomLogic_Editor_Models_CLParameter__get_Name
          (CustomLogic_Editor_Models_CLParameter_o *__this,MethodInfo *method)

{
  return (__this->fields)._Name_k__BackingField;
}


// CustomLogic.Editor.Models.CLParameter$$set_Name
// il2cpp: void CustomLogic_Editor_Models_CLParameter__set_Name (CustomLogic_Editor_Models_CLParameter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4286c40

void CustomLogic_Editor_Models_CLParameter__set_Name
               (CustomLogic_Editor_Models_CLParameter_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._Name_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


// CustomLogic.Editor.Models.CLParameter$$get_Description
// il2cpp: System_String_o* CustomLogic_Editor_Models_CLParameter__get_Description (CustomLogic_Editor_Models_CLParameter_o* __this, const MethodInfo* method);
// 0x4286c50

System_String_o *
CustomLogic_Editor_Models_CLParameter__get_Description
          (CustomLogic_Editor_Models_CLParameter_o *__this,MethodInfo *method)

{
  return (__this->fields)._Description_k__BackingField;
}


// CustomLogic.Editor.Models.CLParameter$$set_Description
// il2cpp: void CustomLogic_Editor_Models_CLParameter__set_Description (CustomLogic_Editor_Models_CLParameter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4286c60

void CustomLogic_Editor_Models_CLParameter__set_Description
               (CustomLogic_Editor_Models_CLParameter_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._Description_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Description_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.CLParameter$$get_Type
// il2cpp: CustomLogic_Editor_Models_TypeReference_o* CustomLogic_Editor_Models_CLParameter__get_Type (CustomLogic_Editor_Models_CLParameter_o* __this, const MethodInfo* method);
// 0x4286c70

CustomLogic_Editor_Models_TypeReference_o *
CustomLogic_Editor_Models_CLParameter__get_Type
          (CustomLogic_Editor_Models_CLParameter_o *__this,MethodInfo *method)

{
  return (__this->fields)._Type_k__BackingField;
}


// CustomLogic.Editor.Models.CLParameter$$set_Type
// il2cpp: void CustomLogic_Editor_Models_CLParameter__set_Type (CustomLogic_Editor_Models_CLParameter_o* __this, CustomLogic_Editor_Models_TypeReference_o* value, const MethodInfo* method);
// 0x4286c80

void CustomLogic_Editor_Models_CLParameter__set_Type
               (CustomLogic_Editor_Models_CLParameter_o *__this,
               CustomLogic_Editor_Models_TypeReference_o *value,MethodInfo *method)

{
  (__this->fields)._Type_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Type_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.CLParameter$$get_DefaultValue
// il2cpp: System_String_o* CustomLogic_Editor_Models_CLParameter__get_DefaultValue (CustomLogic_Editor_Models_CLParameter_o* __this, const MethodInfo* method);
// 0x4286c90

System_String_o *
CustomLogic_Editor_Models_CLParameter__get_DefaultValue
          (CustomLogic_Editor_Models_CLParameter_o *__this,MethodInfo *method)

{
  return (__this->fields)._DefaultValue_k__BackingField;
}


// CustomLogic.Editor.Models.CLParameter$$set_DefaultValue
// il2cpp: void CustomLogic_Editor_Models_CLParameter__set_DefaultValue (CustomLogic_Editor_Models_CLParameter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4286ca0

void CustomLogic_Editor_Models_CLParameter__set_DefaultValue
               (CustomLogic_Editor_Models_CLParameter_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._DefaultValue_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._DefaultValue_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.CLParameter$$get_IsOptional
// il2cpp: bool CustomLogic_Editor_Models_CLParameter__get_IsOptional (CustomLogic_Editor_Models_CLParameter_o* __this, const MethodInfo* method);
// 0x4286cb0

bool_conflict
CustomLogic_Editor_Models_CLParameter__get_IsOptional
          (CustomLogic_Editor_Models_CLParameter_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._IsOptional_k__BackingField);
}


// CustomLogic.Editor.Models.CLParameter$$set_IsOptional
// il2cpp: void CustomLogic_Editor_Models_CLParameter__set_IsOptional (CustomLogic_Editor_Models_CLParameter_o* __this, bool value, const MethodInfo* method);
// 0x4286cc0

void CustomLogic_Editor_Models_CLParameter__set_IsOptional
               (CustomLogic_Editor_Models_CLParameter_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)&(__this->fields)._IsOptional_k__BackingField = (char)value;
  return;
}


// CustomLogic.Editor.Models.CLParameter$$get_IsVariadic
// il2cpp: bool CustomLogic_Editor_Models_CLParameter__get_IsVariadic (CustomLogic_Editor_Models_CLParameter_o* __this, const MethodInfo* method);
// 0x4286cd0

bool_conflict
CustomLogic_Editor_Models_CLParameter__get_IsVariadic
          (CustomLogic_Editor_Models_CLParameter_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  *(undefined1 *)((long)&(__this->fields)._IsOptional_k__BackingField + 1));
}


// CustomLogic.Editor.Models.CLParameter$$set_IsVariadic
// il2cpp: void CustomLogic_Editor_Models_CLParameter__set_IsVariadic (CustomLogic_Editor_Models_CLParameter_o* __this, bool value, const MethodInfo* method);
// 0x4286ce0

void CustomLogic_Editor_Models_CLParameter__set_IsVariadic
               (CustomLogic_Editor_Models_CLParameter_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)((long)&(__this->fields)._IsOptional_k__BackingField + 1) = (char)value;
  return;
}


// CustomLogic.Editor.Models.CLParameter$$get_EnumNames
// il2cpp: System_String_array* CustomLogic_Editor_Models_CLParameter__get_EnumNames (CustomLogic_Editor_Models_CLParameter_o* __this, const MethodInfo* method);
// 0x4286cf0

System_String_array *
CustomLogic_Editor_Models_CLParameter__get_EnumNames
          (CustomLogic_Editor_Models_CLParameter_o *__this,MethodInfo *method)

{
  return (__this->fields)._EnumNames_k__BackingField;
}


// CustomLogic.Editor.Models.CLParameter$$set_EnumNames
// il2cpp: void CustomLogic_Editor_Models_CLParameter__set_EnumNames (CustomLogic_Editor_Models_CLParameter_o* __this, System_String_array* value, const MethodInfo* method);
// 0x4286d00

void CustomLogic_Editor_Models_CLParameter__set_EnumNames
               (CustomLogic_Editor_Models_CLParameter_o *__this,System_String_array *value,MethodInfo *method)

{
  (__this->fields)._EnumNames_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._EnumNames_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.CLParameter$$.ctor
// il2cpp: void CustomLogic_Editor_Models_CLParameter___ctor (CustomLogic_Editor_Models_CLParameter_o* __this, const MethodInfo* method);
// 0x4286d10

void CustomLogic_Editor_Models_CLParameter___ctor
               (CustomLogic_Editor_Models_CLParameter_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


