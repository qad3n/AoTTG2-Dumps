// Type: Gisketch.Aottg2UI.Code.AottgDialogAttribute
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgDialogAttribute.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgDialogAttribute$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogAttribute___ctor (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o* __this, System_String_o* id, const MethodInfo* method);
// 0x3af0f30

void Gisketch_Aottg2UI_Code_AottgDialogAttribute___ctor
               (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *__this,System_String_o *id,
               MethodInfo *method)

{
  *(undefined2 *)&(__this->fields)._Modal_k__BackingField = 0x101;
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Id_k__BackingField = id;
  il2cpp_runtime_glue(&__this->fields,id);
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogAttribute$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialogAttribute__get_Id (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o* __this, const MethodInfo* method);
// 0x3af0f70

System_String_o *
Gisketch_Aottg2UI_Code_AottgDialogAttribute__get_Id
          (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields)._Id_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgDialogAttribute$$get_Modal
// il2cpp: bool Gisketch_Aottg2UI_Code_AottgDialogAttribute__get_Modal (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o* __this, const MethodInfo* method);
// 0x3af0f80

bool_conflict
Gisketch_Aottg2UI_Code_AottgDialogAttribute__get_Modal
          (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._Modal_k__BackingField);
}


// Gisketch.Aottg2UI.Code.AottgDialogAttribute$$set_Modal
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogAttribute__set_Modal (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o* __this, bool value, const MethodInfo* method);
// 0x3af0f90

void Gisketch_Aottg2UI_Code_AottgDialogAttribute__set_Modal
               (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)&(__this->fields)._Modal_k__BackingField = (char)value;
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogAttribute$$get_DismissOnBackdrop
// il2cpp: bool Gisketch_Aottg2UI_Code_AottgDialogAttribute__get_DismissOnBackdrop (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o* __this, const MethodInfo* method);
// 0x3af0fa0

bool_conflict
Gisketch_Aottg2UI_Code_AottgDialogAttribute__get_DismissOnBackdrop
          (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  *(undefined1 *)((long)&(__this->fields)._Modal_k__BackingField + 1));
}


// Gisketch.Aottg2UI.Code.AottgDialogAttribute$$set_DismissOnBackdrop
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogAttribute__set_DismissOnBackdrop (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o* __this, bool value, const MethodInfo* method);
// 0x3af0fb0

void Gisketch_Aottg2UI_Code_AottgDialogAttribute__set_DismissOnBackdrop
               (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *__this,bool_conflict value,
               MethodInfo *method)

{
  *(char *)((long)&(__this->fields)._Modal_k__BackingField + 1) = (char)value;
  return;
}


