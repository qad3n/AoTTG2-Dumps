// Type: CustomLogic.CLBaseAttribute
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CLBaseAttribute.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CLBaseAttribute$$get_Name
// il2cpp: System_String_o* CustomLogic_CLBaseAttribute__get_Name (CustomLogic_CLBaseAttribute_o* __this, const MethodInfo* method);
// 0x3db2e20

System_String_o *
CustomLogic_CLBaseAttribute__get_Name(CustomLogic_CLBaseAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._Name_k__BackingField;
}


// CustomLogic.CLBaseAttribute$$set_Name
// il2cpp: void CustomLogic_CLBaseAttribute__set_Name (CustomLogic_CLBaseAttribute_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3db2e30

void CustomLogic_CLBaseAttribute__set_Name
               (CustomLogic_CLBaseAttribute_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._Name_k__BackingField = value;
  il2cpp_runtime_glue(&__this->fields);
  return;
}


// CustomLogic.CLBaseAttribute$$get_Static
// il2cpp: bool CustomLogic_CLBaseAttribute__get_Static (CustomLogic_CLBaseAttribute_o* __this, const MethodInfo* method);
// 0x3db2e40

bool_conflict
CustomLogic_CLBaseAttribute__get_Static(CustomLogic_CLBaseAttribute_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._Static_k__BackingField);
}


// CustomLogic.CLBaseAttribute$$set_Static
// il2cpp: void CustomLogic_CLBaseAttribute__set_Static (CustomLogic_CLBaseAttribute_o* __this, bool value, const MethodInfo* method);
// 0x3db2e50

void CustomLogic_CLBaseAttribute__set_Static
               (CustomLogic_CLBaseAttribute_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)&(__this->fields)._Static_k__BackingField = (char)value;
  return;
}


// CustomLogic.CLBaseAttribute$$get_Hybrid
// il2cpp: bool CustomLogic_CLBaseAttribute__get_Hybrid (CustomLogic_CLBaseAttribute_o* __this, const MethodInfo* method);
// 0x3db2e60

bool_conflict
CustomLogic_CLBaseAttribute__get_Hybrid(CustomLogic_CLBaseAttribute_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  *(undefined1 *)((long)&(__this->fields)._Static_k__BackingField + 1));
}


// CustomLogic.CLBaseAttribute$$set_Hybrid
// il2cpp: void CustomLogic_CLBaseAttribute__set_Hybrid (CustomLogic_CLBaseAttribute_o* __this, bool value, const MethodInfo* method);
// 0x3db2e70

void CustomLogic_CLBaseAttribute__set_Hybrid
               (CustomLogic_CLBaseAttribute_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)((long)&(__this->fields)._Static_k__BackingField + 1) = (char)value;
  return;
}


// CustomLogic.CLBaseAttribute$$.ctor
// il2cpp: void CustomLogic_CLBaseAttribute___ctor (CustomLogic_CLBaseAttribute_o* __this, const MethodInfo* method);
// 0x3db2e80

void CustomLogic_CLBaseAttribute___ctor(CustomLogic_CLBaseAttribute_o *__this,MethodInfo *method)

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


