// Type: Gisketch.Aottg2UI.Code.AottgPopoverAttribute
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgPopoverAttribute.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgPopoverAttribute$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgPopoverAttribute___ctor (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o* __this, System_String_o* id, const MethodInfo* method);
// 0x3b5bd40

void Gisketch_Aottg2UI_Code_AottgPopoverAttribute___ctor
               (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *__this,System_String_o *id,MethodInfo *method)

{
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Id_k__BackingField = id;
  il2cpp_runtime_helper_022b4080(&__this->fields,id);
  return;
}


// Gisketch.Aottg2UI.Code.AottgPopoverAttribute$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgPopoverAttribute__get_Id (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o* __this, const MethodInfo* method);
// 0x3b5bd70

System_String_o *
Gisketch_Aottg2UI_Code_AottgPopoverAttribute__get_Id
          (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._Id_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgPopoverAttribute$$get_DismissOnBackdrop
// il2cpp: bool Gisketch_Aottg2UI_Code_AottgPopoverAttribute__get_DismissOnBackdrop (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o* __this, const MethodInfo* method);
// 0x3b5bd80

bool_conflict
Gisketch_Aottg2UI_Code_AottgPopoverAttribute__get_DismissOnBackdrop
          (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._DismissOnBackdrop_k__BackingField);
}


// Gisketch.Aottg2UI.Code.AottgPopoverAttribute$$set_DismissOnBackdrop
// il2cpp: void Gisketch_Aottg2UI_Code_AottgPopoverAttribute__set_DismissOnBackdrop (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o* __this, bool value, const MethodInfo* method);
// 0x3b5bd90

void Gisketch_Aottg2UI_Code_AottgPopoverAttribute__set_DismissOnBackdrop
               (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)&(__this->fields)._DismissOnBackdrop_k__BackingField = (char)value;
  return;
}


