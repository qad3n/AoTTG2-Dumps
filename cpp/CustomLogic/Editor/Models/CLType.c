// Type: CustomLogic.Editor.Models.CLType
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic.Editor.Models/CLType.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.Editor.Models.CLType$$get_Name
// il2cpp: System_String_o* CustomLogic_Editor_Models_CLType__get_Name (CustomLogic_Editor_Models_CLType_o* __this, const MethodInfo* method);
// 0x4286dd0

System_String_o *
CustomLogic_Editor_Models_CLType__get_Name(CustomLogic_Editor_Models_CLType_o *__this,MethodInfo *method)

{
  return (__this->fields)._Name_k__BackingField;
}


// CustomLogic.Editor.Models.CLType$$set_Name
// il2cpp: void CustomLogic_Editor_Models_CLType__set_Name (CustomLogic_Editor_Models_CLType_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4286de0

void CustomLogic_Editor_Models_CLType__set_Name
               (CustomLogic_Editor_Models_CLType_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._Name_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Name_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.CLType$$get_Info
// il2cpp: CustomLogic_Editor_Models_XmlInfo_o* CustomLogic_Editor_Models_CLType__get_Info (CustomLogic_Editor_Models_CLType_o* __this, const MethodInfo* method);
// 0x4286df0

CustomLogic_Editor_Models_XmlInfo_o *
CustomLogic_Editor_Models_CLType__get_Info(CustomLogic_Editor_Models_CLType_o *__this,MethodInfo *method)

{
  return (__this->fields)._Info_k__BackingField;
}


// CustomLogic.Editor.Models.CLType$$set_Info
// il2cpp: void CustomLogic_Editor_Models_CLType__set_Info (CustomLogic_Editor_Models_CLType_o* __this, CustomLogic_Editor_Models_XmlInfo_o* value, const MethodInfo* method);
// 0x4286e00

void CustomLogic_Editor_Models_CLType__set_Info
               (CustomLogic_Editor_Models_CLType_o *__this,CustomLogic_Editor_Models_XmlInfo_o *value,
               MethodInfo *method)

{
  (__this->fields)._Info_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Info_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.CLType$$get_IsStatic
// il2cpp: bool CustomLogic_Editor_Models_CLType__get_IsStatic (CustomLogic_Editor_Models_CLType_o* __this, const MethodInfo* method);
// 0x4286e10

bool_conflict
CustomLogic_Editor_Models_CLType__get_IsStatic(CustomLogic_Editor_Models_CLType_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._IsStatic_k__BackingField);
}


// CustomLogic.Editor.Models.CLType$$set_IsStatic
// il2cpp: void CustomLogic_Editor_Models_CLType__set_IsStatic (CustomLogic_Editor_Models_CLType_o* __this, bool value, const MethodInfo* method);
// 0x4286e20

void CustomLogic_Editor_Models_CLType__set_IsStatic
               (CustomLogic_Editor_Models_CLType_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)&(__this->fields)._IsStatic_k__BackingField = (char)value;
  return;
}


// CustomLogic.Editor.Models.CLType$$get_IsAbstract
// il2cpp: bool CustomLogic_Editor_Models_CLType__get_IsAbstract (CustomLogic_Editor_Models_CLType_o* __this, const MethodInfo* method);
// 0x4286e30

bool_conflict
CustomLogic_Editor_Models_CLType__get_IsAbstract
          (CustomLogic_Editor_Models_CLType_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  *(undefined1 *)((long)&(__this->fields)._IsStatic_k__BackingField + 1));
}


// CustomLogic.Editor.Models.CLType$$set_IsAbstract
// il2cpp: void CustomLogic_Editor_Models_CLType__set_IsAbstract (CustomLogic_Editor_Models_CLType_o* __this, bool value, const MethodInfo* method);
// 0x4286e40

void CustomLogic_Editor_Models_CLType__set_IsAbstract
               (CustomLogic_Editor_Models_CLType_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)((long)&(__this->fields)._IsStatic_k__BackingField + 1) = (char)value;
  return;
}


// CustomLogic.Editor.Models.CLType$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_Editor_Models_CLType__get_InheritBaseMembers (CustomLogic_Editor_Models_CLType_o* __this, const MethodInfo* method);
// 0x4286e50

bool_conflict
CustomLogic_Editor_Models_CLType__get_InheritBaseMembers
          (CustomLogic_Editor_Models_CLType_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  *(undefined1 *)((long)&(__this->fields)._IsStatic_k__BackingField + 2));
}


// CustomLogic.Editor.Models.CLType$$set_InheritBaseMembers
// il2cpp: void CustomLogic_Editor_Models_CLType__set_InheritBaseMembers (CustomLogic_Editor_Models_CLType_o* __this, bool value, const MethodInfo* method);
// 0x4286e60

void CustomLogic_Editor_Models_CLType__set_InheritBaseMembers
               (CustomLogic_Editor_Models_CLType_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)((long)&(__this->fields)._IsStatic_k__BackingField + 2) = (char)value;
  return;
}


// CustomLogic.Editor.Models.CLType$$get_IsComponent
// il2cpp: bool CustomLogic_Editor_Models_CLType__get_IsComponent (CustomLogic_Editor_Models_CLType_o* __this, const MethodInfo* method);
// 0x4286e70

bool_conflict
CustomLogic_Editor_Models_CLType__get_IsComponent
          (CustomLogic_Editor_Models_CLType_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  *(undefined1 *)((long)&(__this->fields)._IsStatic_k__BackingField + 3));
}


// CustomLogic.Editor.Models.CLType$$set_IsComponent
// il2cpp: void CustomLogic_Editor_Models_CLType__set_IsComponent (CustomLogic_Editor_Models_CLType_o* __this, bool value, const MethodInfo* method);
// 0x4286e80

void CustomLogic_Editor_Models_CLType__set_IsComponent
               (CustomLogic_Editor_Models_CLType_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)((long)&(__this->fields)._IsStatic_k__BackingField + 3) = (char)value;
  return;
}


// CustomLogic.Editor.Models.CLType$$get_TypeParameters
// il2cpp: System_String_array* CustomLogic_Editor_Models_CLType__get_TypeParameters (CustomLogic_Editor_Models_CLType_o* __this, const MethodInfo* method);
// 0x4286e90

System_String_array *
CustomLogic_Editor_Models_CLType__get_TypeParameters
          (CustomLogic_Editor_Models_CLType_o *__this,MethodInfo *method)

{
  return *(System_String_array **)&(__this->fields)._InheritBaseMembers_k__BackingField;
}


// CustomLogic.Editor.Models.CLType$$set_TypeParameters
// il2cpp: void CustomLogic_Editor_Models_CLType__set_TypeParameters (CustomLogic_Editor_Models_CLType_o* __this, System_String_array* value, const MethodInfo* method);
// 0x4286ea0

void CustomLogic_Editor_Models_CLType__set_TypeParameters
               (CustomLogic_Editor_Models_CLType_o *__this,System_String_array *value,MethodInfo *method)

{
  *(System_String_array **)&(__this->fields)._InheritBaseMembers_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._InheritBaseMembers_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.CLType$$get_Category
// il2cpp: System_String_o* CustomLogic_Editor_Models_CLType__get_Category (CustomLogic_Editor_Models_CLType_o* __this, const MethodInfo* method);
// 0x4286eb0

System_String_o *
CustomLogic_Editor_Models_CLType__get_Category(CustomLogic_Editor_Models_CLType_o *__this,MethodInfo *method)

{
  return (System_String_o *)(__this->fields)._TypeParameters_k__BackingField;
}


// CustomLogic.Editor.Models.CLType$$set_Category
// il2cpp: void CustomLogic_Editor_Models_CLType__set_Category (CustomLogic_Editor_Models_CLType_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4286ec0

void CustomLogic_Editor_Models_CLType__set_Category
               (CustomLogic_Editor_Models_CLType_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._TypeParameters_k__BackingField = (System_String_array *)value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._TypeParameters_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.CLType$$get_BaseType
// il2cpp: CustomLogic_Editor_Models_CLType_o* CustomLogic_Editor_Models_CLType__get_BaseType (CustomLogic_Editor_Models_CLType_o* __this, const MethodInfo* method);
// 0x4286ed0

CustomLogic_Editor_Models_CLType_o *
CustomLogic_Editor_Models_CLType__get_BaseType(CustomLogic_Editor_Models_CLType_o *__this,MethodInfo *method)

{
  return (CustomLogic_Editor_Models_CLType_o *)(__this->fields)._Category_k__BackingField;
}


// CustomLogic.Editor.Models.CLType$$set_BaseType
// il2cpp: void CustomLogic_Editor_Models_CLType__set_BaseType (CustomLogic_Editor_Models_CLType_o* __this, CustomLogic_Editor_Models_CLType_o* value, const MethodInfo* method);
// 0x4286ee0

void CustomLogic_Editor_Models_CLType__set_BaseType
               (CustomLogic_Editor_Models_CLType_o *__this,CustomLogic_Editor_Models_CLType_o *value,
               MethodInfo *method)

{
  (__this->fields)._Category_k__BackingField = (System_String_o *)value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Category_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.CLType$$get_Constructors
// il2cpp: CustomLogic_Editor_Models_CLConstructor_array* CustomLogic_Editor_Models_CLType__get_Constructors (CustomLogic_Editor_Models_CLType_o* __this, const MethodInfo* method);
// 0x4286ef0

CustomLogic_Editor_Models_CLConstructor_array *
CustomLogic_Editor_Models_CLType__get_Constructors
          (CustomLogic_Editor_Models_CLType_o *__this,MethodInfo *method)

{
  return (CustomLogic_Editor_Models_CLConstructor_array *)(__this->fields)._BaseType_k__BackingField;
}


// CustomLogic.Editor.Models.CLType$$set_Constructors
// il2cpp: void CustomLogic_Editor_Models_CLType__set_Constructors (CustomLogic_Editor_Models_CLType_o* __this, CustomLogic_Editor_Models_CLConstructor_array* value, const MethodInfo* method);
// 0x4286f00

void CustomLogic_Editor_Models_CLType__set_Constructors
               (CustomLogic_Editor_Models_CLType_o *__this,
               CustomLogic_Editor_Models_CLConstructor_array *value,MethodInfo *method)

{
  (__this->fields)._BaseType_k__BackingField = (CustomLogic_Editor_Models_CLType_o *)value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._BaseType_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.CLType$$get_StaticProperties
// il2cpp: CustomLogic_Editor_Models_CLProperty_array* CustomLogic_Editor_Models_CLType__get_StaticProperties (CustomLogic_Editor_Models_CLType_o* __this, const MethodInfo* method);
// 0x4286f10

CustomLogic_Editor_Models_CLProperty_array *
CustomLogic_Editor_Models_CLType__get_StaticProperties
          (CustomLogic_Editor_Models_CLType_o *__this,MethodInfo *method)

{
  return (CustomLogic_Editor_Models_CLProperty_array *)(__this->fields)._Constructors_k__BackingField;
}


// CustomLogic.Editor.Models.CLType$$set_StaticProperties
// il2cpp: void CustomLogic_Editor_Models_CLType__set_StaticProperties (CustomLogic_Editor_Models_CLType_o* __this, CustomLogic_Editor_Models_CLProperty_array* value, const MethodInfo* method);
// 0x4286f20

void CustomLogic_Editor_Models_CLType__set_StaticProperties
               (CustomLogic_Editor_Models_CLType_o *__this,CustomLogic_Editor_Models_CLProperty_array *value,
               MethodInfo *method)

{
  (__this->fields)._Constructors_k__BackingField = (CustomLogic_Editor_Models_CLConstructor_array *)value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Constructors_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.CLType$$get_InstanceProperties
// il2cpp: CustomLogic_Editor_Models_CLProperty_array* CustomLogic_Editor_Models_CLType__get_InstanceProperties (CustomLogic_Editor_Models_CLType_o* __this, const MethodInfo* method);
// 0x4286f30

CustomLogic_Editor_Models_CLProperty_array *
CustomLogic_Editor_Models_CLType__get_InstanceProperties
          (CustomLogic_Editor_Models_CLType_o *__this,MethodInfo *method)

{
  return (__this->fields)._StaticProperties_k__BackingField;
}


// CustomLogic.Editor.Models.CLType$$set_InstanceProperties
// il2cpp: void CustomLogic_Editor_Models_CLType__set_InstanceProperties (CustomLogic_Editor_Models_CLType_o* __this, CustomLogic_Editor_Models_CLProperty_array* value, const MethodInfo* method);
// 0x4286f40

void CustomLogic_Editor_Models_CLType__set_InstanceProperties
               (CustomLogic_Editor_Models_CLType_o *__this,CustomLogic_Editor_Models_CLProperty_array *value,
               MethodInfo *method)

{
  (__this->fields)._StaticProperties_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._StaticProperties_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.CLType$$get_StaticMethods
// il2cpp: CustomLogic_Editor_Models_CLMethod_array* CustomLogic_Editor_Models_CLType__get_StaticMethods (CustomLogic_Editor_Models_CLType_o* __this, const MethodInfo* method);
// 0x4286f50

CustomLogic_Editor_Models_CLMethod_array *
CustomLogic_Editor_Models_CLType__get_StaticMethods
          (CustomLogic_Editor_Models_CLType_o *__this,MethodInfo *method)

{
  return (CustomLogic_Editor_Models_CLMethod_array *)(__this->fields)._InstanceProperties_k__BackingField;
}


// CustomLogic.Editor.Models.CLType$$set_StaticMethods
// il2cpp: void CustomLogic_Editor_Models_CLType__set_StaticMethods (CustomLogic_Editor_Models_CLType_o* __this, CustomLogic_Editor_Models_CLMethod_array* value, const MethodInfo* method);
// 0x4286f60

void CustomLogic_Editor_Models_CLType__set_StaticMethods
               (CustomLogic_Editor_Models_CLType_o *__this,CustomLogic_Editor_Models_CLMethod_array *value,
               MethodInfo *method)

{
  (__this->fields)._InstanceProperties_k__BackingField = (CustomLogic_Editor_Models_CLProperty_array *)value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._InstanceProperties_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.CLType$$get_InstanceMethods
// il2cpp: CustomLogic_Editor_Models_CLMethod_array* CustomLogic_Editor_Models_CLType__get_InstanceMethods (CustomLogic_Editor_Models_CLType_o* __this, const MethodInfo* method);
// 0x4286f70

CustomLogic_Editor_Models_CLMethod_array *
CustomLogic_Editor_Models_CLType__get_InstanceMethods
          (CustomLogic_Editor_Models_CLType_o *__this,MethodInfo *method)

{
  return (__this->fields)._StaticMethods_k__BackingField;
}


// CustomLogic.Editor.Models.CLType$$set_InstanceMethods
// il2cpp: void CustomLogic_Editor_Models_CLType__set_InstanceMethods (CustomLogic_Editor_Models_CLType_o* __this, CustomLogic_Editor_Models_CLMethod_array* value, const MethodInfo* method);
// 0x4286f80

void CustomLogic_Editor_Models_CLType__set_InstanceMethods
               (CustomLogic_Editor_Models_CLType_o *__this,CustomLogic_Editor_Models_CLMethod_array *value,
               MethodInfo *method)

{
  (__this->fields)._StaticMethods_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._StaticMethods_k__BackingField);
  return;
}


// CustomLogic.Editor.Models.CLType$$get_Kind
// il2cpp: System_String_o* CustomLogic_Editor_Models_CLType__get_Kind (CustomLogic_Editor_Models_CLType_o* __this, const MethodInfo* method);
// 0x4286f90

System_String_o *
CustomLogic_Editor_Models_CLType__get_Kind(CustomLogic_Editor_Models_CLType_o *__this,MethodInfo *method)

{
  if (g_data_057adcb0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"EXTENSION");
    il2cpp_runtime_helper_023445d0(&"CLASS");
    g_data_057adcb0 = '\x01';
  }
  if ((char)(__this->fields)._IsStatic_k__BackingField == '\0') {
    return "CLASS";
  }
  return "EXTENSION";
}


// CustomLogic.Editor.Models.CLType$$get_BaseTypeName
// il2cpp: System_String_o* CustomLogic_Editor_Models_CLType__get_BaseTypeName (CustomLogic_Editor_Models_CLType_o* __this, const MethodInfo* method);
// 0x4286fe0

System_String_o *
CustomLogic_Editor_Models_CLType__get_BaseTypeName
          (CustomLogic_Editor_Models_CLType_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_c *pSVar2;
  
  pSVar1 = (__this->fields)._Category_k__BackingField;
  if ((pSVar1 != (System_String_o *)0x0) && (pSVar2 = pSVar1[1].klass, pSVar2 != (System_String_c *)0x0)) {
    return (System_String_o *)pSVar2;
  }
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// CustomLogic.Editor.Models.CLType$$.ctor
// il2cpp: void CustomLogic_Editor_Models_CLType___ctor (CustomLogic_Editor_Models_CLType_o* __this, const MethodInfo* method);
// 0x4287010

void CustomLogic_Editor_Models_CLType___ctor(CustomLogic_Editor_Models_CLType_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


