// Type: CustomLogic.CLTypeAttribute
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CLTypeAttribute.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CLTypeAttribute$$get_Abstract
// il2cpp: bool CustomLogic_CLTypeAttribute__get_Abstract (CustomLogic_CLTypeAttribute_o* __this, const MethodInfo* method);
// 0x3db30a0

bool_conflict
CustomLogic_CLTypeAttribute__get_Abstract(CustomLogic_CLTypeAttribute_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  *(undefined1 *)((long)&(__this->fields)._Static_k__BackingField + 2));
}


// CustomLogic.CLTypeAttribute$$set_Abstract
// il2cpp: void CustomLogic_CLTypeAttribute__set_Abstract (CustomLogic_CLTypeAttribute_o* __this, bool value, const MethodInfo* method);
// 0x3db30b0

void CustomLogic_CLTypeAttribute__set_Abstract
               (CustomLogic_CLTypeAttribute_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)((long)&(__this->fields)._Static_k__BackingField + 2) = (char)value;
  return;
}


// CustomLogic.CLTypeAttribute$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CLTypeAttribute__get_InheritBaseMembers (CustomLogic_CLTypeAttribute_o* __this, const MethodInfo* method);
// 0x3db30c0

bool_conflict
CustomLogic_CLTypeAttribute__get_InheritBaseMembers
          (CustomLogic_CLTypeAttribute_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  *(undefined1 *)((long)&(__this->fields)._Static_k__BackingField + 3));
}


// CustomLogic.CLTypeAttribute$$set_InheritBaseMembers
// il2cpp: void CustomLogic_CLTypeAttribute__set_InheritBaseMembers (CustomLogic_CLTypeAttribute_o* __this, bool value, const MethodInfo* method);
// 0x3db30d0

void CustomLogic_CLTypeAttribute__set_InheritBaseMembers
               (CustomLogic_CLTypeAttribute_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)((long)&(__this->fields)._Static_k__BackingField + 3) = (char)value;
  return;
}


// CustomLogic.CLTypeAttribute$$get_TypeParameters
// il2cpp: System_String_array* CustomLogic_CLTypeAttribute__get_TypeParameters (CustomLogic_CLTypeAttribute_o* __this, const MethodInfo* method);
// 0x3db30e0

System_String_array *
CustomLogic_CLTypeAttribute__get_TypeParameters
          (CustomLogic_CLTypeAttribute_o *__this,MethodInfo *method)

{
  return *(System_String_array **)&(__this->fields)._Abstract_k__BackingField;
}


// CustomLogic.CLTypeAttribute$$set_TypeParameters
// il2cpp: void CustomLogic_CLTypeAttribute__set_TypeParameters (CustomLogic_CLTypeAttribute_o* __this, System_String_array* value, const MethodInfo* method);
// 0x3db30f0

void CustomLogic_CLTypeAttribute__set_TypeParameters
               (CustomLogic_CLTypeAttribute_o *__this,System_String_array *value,MethodInfo *method)

{
  *(System_String_array **)&(__this->fields)._Abstract_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Abstract_k__BackingField);
  return;
}


// CustomLogic.CLTypeAttribute$$get_IsComponent
// il2cpp: bool CustomLogic_CLTypeAttribute__get_IsComponent (CustomLogic_CLTypeAttribute_o* __this, const MethodInfo* method);
// 0x3db3100

bool_conflict
CustomLogic_CLTypeAttribute__get_IsComponent
          (CustomLogic_CLTypeAttribute_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  *(undefined1 *)&(__this->fields)._TypeParameters_k__BackingField);
}


// CustomLogic.CLTypeAttribute$$set_IsComponent
// il2cpp: void CustomLogic_CLTypeAttribute__set_IsComponent (CustomLogic_CLTypeAttribute_o* __this, bool value, const MethodInfo* method);
// 0x3db3110

void CustomLogic_CLTypeAttribute__set_IsComponent
               (CustomLogic_CLTypeAttribute_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)&(__this->fields)._TypeParameters_k__BackingField = (char)value;
  return;
}


// CustomLogic.CLTypeAttribute$$.ctor
// il2cpp: void CustomLogic_CLTypeAttribute___ctor (CustomLogic_CLTypeAttribute_o* __this, const MethodInfo* method);
// 0x3db3120

void CustomLogic_CLTypeAttribute___ctor(CustomLogic_CLTypeAttribute_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._Static_k__BackingField + 3) = 1;
  if (DAT_057027d1 == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_057027d1 = '\x01';
  }
  (__this->fields)._Name_k__BackingField = "";
  il2cpp_runtime_glue(&__this->fields);
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  return;
}


