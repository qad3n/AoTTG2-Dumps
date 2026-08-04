// Type: CustomLogic.CLBaseAttribute
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CLBaseAttribute.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CLBaseAttribute$$get_Name
// il2cpp: System_String_o* CustomLogic_CLBaseAttribute__get_Name (CustomLogic_CLBaseAttribute_o* __this, const MethodInfo* method);
// 0x40b9160

System_String_o *
CustomLogic_CLBaseAttribute__get_Name(CustomLogic_CLBaseAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._Name_k__BackingField;
}


// CustomLogic.CLBaseAttribute$$set_Name
// il2cpp: void CustomLogic_CLBaseAttribute__set_Name (CustomLogic_CLBaseAttribute_o* __this, System_String_o* value, const MethodInfo* method);
// 0x40b9170

void CustomLogic_CLBaseAttribute__set_Name
               (CustomLogic_CLBaseAttribute_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._Name_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


// CustomLogic.CLBaseAttribute$$get_Static
// il2cpp: bool CustomLogic_CLBaseAttribute__get_Static (CustomLogic_CLBaseAttribute_o* __this, const MethodInfo* method);
// 0x40b9180

bool_conflict
CustomLogic_CLBaseAttribute__get_Static(CustomLogic_CLBaseAttribute_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._Static_k__BackingField);
}


// CustomLogic.CLBaseAttribute$$set_Static
// il2cpp: void CustomLogic_CLBaseAttribute__set_Static (CustomLogic_CLBaseAttribute_o* __this, bool value, const MethodInfo* method);
// 0x40b9190

void CustomLogic_CLBaseAttribute__set_Static
               (CustomLogic_CLBaseAttribute_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)&(__this->fields)._Static_k__BackingField = (char)value;
  return;
}


// CustomLogic.CLBaseAttribute$$get_Hybrid
// il2cpp: bool CustomLogic_CLBaseAttribute__get_Hybrid (CustomLogic_CLBaseAttribute_o* __this, const MethodInfo* method);
// 0x40b91a0

bool_conflict
CustomLogic_CLBaseAttribute__get_Hybrid(CustomLogic_CLBaseAttribute_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  *(undefined1 *)((long)&(__this->fields)._Static_k__BackingField + 1));
}


// CustomLogic.CLBaseAttribute$$set_Hybrid
// il2cpp: void CustomLogic_CLBaseAttribute__set_Hybrid (CustomLogic_CLBaseAttribute_o* __this, bool value, const MethodInfo* method);
// 0x40b91b0

void CustomLogic_CLBaseAttribute__set_Hybrid
               (CustomLogic_CLBaseAttribute_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)((long)&(__this->fields)._Static_k__BackingField + 1) = (char)value;
  return;
}


// CustomLogic.CLBaseAttribute$$.ctor
// il2cpp: void CustomLogic_CLBaseAttribute___ctor (CustomLogic_CLBaseAttribute_o* __this, const MethodInfo* method);
// 0x40b91c0

void CustomLogic_CLBaseAttribute___ctor(CustomLogic_CLBaseAttribute_o *__this,MethodInfo *method)

{
  if (g_data_057ac506 == '\0') {
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac506 = '\x01';
  }
  (__this->fields)._Name_k__BackingField = "";
  il2cpp_runtime_helper_022b4080(&__this->fields);
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  return;
}


