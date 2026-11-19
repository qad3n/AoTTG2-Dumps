// Type: CustomLogic.CLTypeAttribute
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CLTypeAttribute.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CLTypeAttribute$$get_Abstract
// il2cpp: bool CustomLogic_CLTypeAttribute__get_Abstract (CustomLogic_CLTypeAttribute_o* __this, const MethodInfo* method);
// 0x59a9990

bool CustomLogic_CLTypeAttribute__get_Abstract(CustomLogic_CLTypeAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._Abstract_k__BackingField;
}


// CustomLogic.CLTypeAttribute$$set_Abstract
// il2cpp: void CustomLogic_CLTypeAttribute__set_Abstract (CustomLogic_CLTypeAttribute_o* __this, bool value, const MethodInfo* method);
// 0x59a99a0

void CustomLogic_CLTypeAttribute__set_Abstract
               (CustomLogic_CLTypeAttribute_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._Abstract_k__BackingField = value;
  return;
}


// CustomLogic.CLTypeAttribute$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CLTypeAttribute__get_InheritBaseMembers (CustomLogic_CLTypeAttribute_o* __this, const MethodInfo* method);
// 0x59a99b0

bool CustomLogic_CLTypeAttribute__get_InheritBaseMembers
               (CustomLogic_CLTypeAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._InheritBaseMembers_k__BackingField;
}


// CustomLogic.CLTypeAttribute$$set_InheritBaseMembers
// il2cpp: void CustomLogic_CLTypeAttribute__set_InheritBaseMembers (CustomLogic_CLTypeAttribute_o* __this, bool value, const MethodInfo* method);
// 0x59a99c0

void CustomLogic_CLTypeAttribute__set_InheritBaseMembers
               (CustomLogic_CLTypeAttribute_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._InheritBaseMembers_k__BackingField = value;
  return;
}


// CustomLogic.CLTypeAttribute$$get_TypeParameters
// il2cpp: System_String_array* CustomLogic_CLTypeAttribute__get_TypeParameters (CustomLogic_CLTypeAttribute_o* __this, const MethodInfo* method);
// 0x59a99d0

System_String_array *
CustomLogic_CLTypeAttribute__get_TypeParameters(CustomLogic_CLTypeAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._TypeParameters_k__BackingField;
}


// CustomLogic.CLTypeAttribute$$set_TypeParameters
// il2cpp: void CustomLogic_CLTypeAttribute__set_TypeParameters (CustomLogic_CLTypeAttribute_o* __this, System_String_array* value, const MethodInfo* method);
// 0x59a99e0

void CustomLogic_CLTypeAttribute__set_TypeParameters
               (CustomLogic_CLTypeAttribute_o *__this,System_String_array *value,MethodInfo *method)

{
  (__this->fields)._TypeParameters_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._TypeParameters_k__BackingField);
  return;
}


// CustomLogic.CLTypeAttribute$$get_IsComponent
// il2cpp: bool CustomLogic_CLTypeAttribute__get_IsComponent (CustomLogic_CLTypeAttribute_o* __this, const MethodInfo* method);
// 0x59a99f0

bool CustomLogic_CLTypeAttribute__get_IsComponent(CustomLogic_CLTypeAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._IsComponent_k__BackingField;
}


// CustomLogic.CLTypeAttribute$$set_IsComponent
// il2cpp: void CustomLogic_CLTypeAttribute__set_IsComponent (CustomLogic_CLTypeAttribute_o* __this, bool value, const MethodInfo* method);
// 0x59a9a00

void CustomLogic_CLTypeAttribute__set_IsComponent
               (CustomLogic_CLTypeAttribute_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._IsComponent_k__BackingField = value;
  return;
}


// CustomLogic.CLTypeAttribute$$.ctor
// il2cpp: void CustomLogic_CLTypeAttribute___ctor (CustomLogic_CLTypeAttribute_o* __this, const MethodInfo* method);
// 0x59a9a10

void CustomLogic_CLTypeAttribute___ctor(CustomLogic_CLTypeAttribute_o *__this,MethodInfo *method)

{
  (__this->fields)._InheritBaseMembers_k__BackingField = true;
  if (Il2CppMethodInitialized_07545ad8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07545ad8 = '\x01';
  }
  (__this->fields)._Name_k__BackingField = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField);
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  return;
}


