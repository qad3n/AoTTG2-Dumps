// Type: Gisketch.Aottg2UI.Code.AottgDialogEntry
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgDialogEntry.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgDialogEntry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgDialogEntry___ctor (Gisketch_Aottg2UI_Code_AottgDialogEntry_o* __this, System_String_o* id, System_Type_o* type, Gisketch_Aottg2UI_Code_AottgDialogAttribute_o* attribute, const MethodInfo* method);
// 0x3af24f0

void Gisketch_Aottg2UI_Code_AottgDialogEntry___ctor
               (Gisketch_Aottg2UI_Code_AottgDialogEntry_o *__this,System_String_o *id,
               System_Type_o *type,Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *attribute,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Id_k__BackingField = id;
  il2cpp_runtime_glue(&__this->fields,id);
  (__this->fields)._Type_k__BackingField = type;
  il2cpp_runtime_glue(&(__this->fields)._Type_k__BackingField,type);
  (__this->fields)._Attribute_k__BackingField = attribute;
  il2cpp_runtime_glue(&(__this->fields)._Attribute_k__BackingField,attribute);
  return;
}


// Gisketch.Aottg2UI.Code.AottgDialogEntry$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgDialogEntry__get_Id (Gisketch_Aottg2UI_Code_AottgDialogEntry_o* __this, const MethodInfo* method);
// 0x3af26f0

System_String_o *
Gisketch_Aottg2UI_Code_AottgDialogEntry__get_Id
          (Gisketch_Aottg2UI_Code_AottgDialogEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Id_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgDialogEntry$$get_Type
// il2cpp: System_Type_o* Gisketch_Aottg2UI_Code_AottgDialogEntry__get_Type (Gisketch_Aottg2UI_Code_AottgDialogEntry_o* __this, const MethodInfo* method);
// 0x3af2700

System_Type_o *
Gisketch_Aottg2UI_Code_AottgDialogEntry__get_Type
          (Gisketch_Aottg2UI_Code_AottgDialogEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Type_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgDialogEntry$$get_Attribute
// il2cpp: Gisketch_Aottg2UI_Code_AottgDialogAttribute_o* Gisketch_Aottg2UI_Code_AottgDialogEntry__get_Attribute (Gisketch_Aottg2UI_Code_AottgDialogEntry_o* __this, const MethodInfo* method);
// 0x3af2710

Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *
Gisketch_Aottg2UI_Code_AottgDialogEntry__get_Attribute
          (Gisketch_Aottg2UI_Code_AottgDialogEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Attribute_k__BackingField;
}


