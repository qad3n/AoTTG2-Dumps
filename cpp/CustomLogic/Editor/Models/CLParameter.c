// Type: CustomLogic.Editor.Models.CLParameter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic.Editor.Models/CLParameter.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.Editor.Models.CLParameter$$get_Name
// il2cpp: System_String_o* CustomLogic_Editor_Models_CLParameter__get_Name (CustomLogic_Editor_Models_CLParameter_o* __this, const MethodInfo* method);
// 0x3f7a750

System_String_o *
CustomLogic_Editor_Models_CLParameter__get_Name
          (CustomLogic_Editor_Models_CLParameter_o *__this,MethodInfo *method)

{
  return (__this->fields)._Name_k__BackingField;
}


// CustomLogic.Editor.Models.CLParameter$$set_Name
// il2cpp: void CustomLogic_Editor_Models_CLParameter__set_Name (CustomLogic_Editor_Models_CLParameter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3f7a760

void CustomLogic_Editor_Models_CLParameter__set_Name
               (CustomLogic_Editor_Models_CLParameter_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Name_k__BackingField = value;
  il2cpp_runtime_glue(&__this->fields);
  return;
}


// CustomLogic.Editor.Models.CLParameter$$get_Description
// il2cpp: System_String_o* CustomLogic_Editor_Models_CLParameter__get_Description (CustomLogic_Editor_Models_CLParameter_o* __this, const MethodInfo* method);
// 0x3f7a770

System_String_o *
CustomLogic_Editor_Models_CLParameter__get_Description
          (CustomLogic_Editor_Models_CLParameter_o *__this,MethodInfo *method)

{
  return (__this->fields)._Description_k__BackingField;
}


// CustomLogic.Editor.Models.CLParameter$$set_Description
// il2cpp: void CustomLogic_Editor_Models_CLParameter__set_Description (CustomLogic_Editor_Models_CLParameter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3f7a780

void CustomLogic_Editor_Models_CLParameter__set_Description
               (CustomLogic_Editor_Models_CLParameter_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._Description_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Description_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.CLParameter$$get_Type
// il2cpp: CustomLogic_Editor_Models_TypeReference_o* CustomLogic_Editor_Models_CLParameter__get_Type (CustomLogic_Editor_Models_CLParameter_o* __this, const MethodInfo* method);
// 0x3f7a790

CustomLogic_Editor_Models_TypeReference_o *
CustomLogic_Editor_Models_CLParameter__get_Type
          (CustomLogic_Editor_Models_CLParameter_o *__this,MethodInfo *method)

{
  return (__this->fields)._Type_k__BackingField;
}


// CustomLogic.Editor.Models.CLParameter$$set_Type
// il2cpp: void CustomLogic_Editor_Models_CLParameter__set_Type (CustomLogic_Editor_Models_CLParameter_o* __this, CustomLogic_Editor_Models_TypeReference_o* value, const MethodInfo* method);
// 0x3f7a7a0

void CustomLogic_Editor_Models_CLParameter__set_Type
               (CustomLogic_Editor_Models_CLParameter_o *__this,
               CustomLogic_Editor_Models_TypeReference_o *value,MethodInfo *method)

{
  (__this->fields)._Type_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Type_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.CLParameter$$get_DefaultValue
// il2cpp: System_String_o* CustomLogic_Editor_Models_CLParameter__get_DefaultValue (CustomLogic_Editor_Models_CLParameter_o* __this, const MethodInfo* method);
// 0x3f7a7b0

System_String_o *
CustomLogic_Editor_Models_CLParameter__get_DefaultValue
          (CustomLogic_Editor_Models_CLParameter_o *__this,MethodInfo *method)

{
  return (__this->fields)._DefaultValue_k__BackingField;
}


// CustomLogic.Editor.Models.CLParameter$$set_DefaultValue
// il2cpp: void CustomLogic_Editor_Models_CLParameter__set_DefaultValue (CustomLogic_Editor_Models_CLParameter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3f7a7c0

void CustomLogic_Editor_Models_CLParameter__set_DefaultValue
               (CustomLogic_Editor_Models_CLParameter_o *__this,System_String_o *value,
               MethodInfo *method)

{
  (__this->fields)._DefaultValue_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._DefaultValue_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.CLParameter$$get_IsOptional
// il2cpp: bool CustomLogic_Editor_Models_CLParameter__get_IsOptional (CustomLogic_Editor_Models_CLParameter_o* __this, const MethodInfo* method);
// 0x3f7a7d0

bool_conflict
CustomLogic_Editor_Models_CLParameter__get_IsOptional
          (CustomLogic_Editor_Models_CLParameter_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._IsOptional_k__BackingField);
}


// CustomLogic.Editor.Models.CLParameter$$set_IsOptional
// il2cpp: void CustomLogic_Editor_Models_CLParameter__set_IsOptional (CustomLogic_Editor_Models_CLParameter_o* __this, bool value, const MethodInfo* method);
// 0x3f7a7e0

void CustomLogic_Editor_Models_CLParameter__set_IsOptional
               (CustomLogic_Editor_Models_CLParameter_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)&(__this->fields)._IsOptional_k__BackingField = (char)value;
  return;
}


// CustomLogic.Editor.Models.CLParameter$$get_IsVariadic
// il2cpp: bool CustomLogic_Editor_Models_CLParameter__get_IsVariadic (CustomLogic_Editor_Models_CLParameter_o* __this, const MethodInfo* method);
// 0x3f7a7f0

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
// 0x3f7a800

void CustomLogic_Editor_Models_CLParameter__set_IsVariadic
               (CustomLogic_Editor_Models_CLParameter_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)((long)&(__this->fields)._IsOptional_k__BackingField + 1) = (char)value;
  return;
}


// CustomLogic.Editor.Models.CLParameter$$get_EnumNames
// il2cpp: System_String_array* CustomLogic_Editor_Models_CLParameter__get_EnumNames (CustomLogic_Editor_Models_CLParameter_o* __this, const MethodInfo* method);
// 0x3f7a810

System_String_array *
CustomLogic_Editor_Models_CLParameter__get_EnumNames
          (CustomLogic_Editor_Models_CLParameter_o *__this,MethodInfo *method)

{
  return (__this->fields)._EnumNames_k__BackingField;
}


// CustomLogic.Editor.Models.CLParameter$$set_EnumNames
// il2cpp: void CustomLogic_Editor_Models_CLParameter__set_EnumNames (CustomLogic_Editor_Models_CLParameter_o* __this, System_String_array* value, const MethodInfo* method);
// 0x3f7a820

void CustomLogic_Editor_Models_CLParameter__set_EnumNames
               (CustomLogic_Editor_Models_CLParameter_o *__this,System_String_array *value,
               MethodInfo *method)

{
  (__this->fields)._EnumNames_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._EnumNames_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.CLParameter$$.ctor
// il2cpp: void CustomLogic_Editor_Models_CLParameter___ctor (CustomLogic_Editor_Models_CLParameter_o* __this, const MethodInfo* method);
// 0x3f7a830

void CustomLogic_Editor_Models_CLParameter___ctor
               (CustomLogic_Editor_Models_CLParameter_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


