// Type: Gisketch.Aottg2UI.Code.AottgPopoverEntry
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgPopoverEntry.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgPopoverEntry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgPopoverEntry___ctor (Gisketch_Aottg2UI_Code_AottgPopoverEntry_o* __this, System_String_o* id, System_Type_o* type, Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o* attribute, const MethodInfo* method);
// 0x3b5d2d0

void Gisketch_Aottg2UI_Code_AottgPopoverEntry___ctor
               (Gisketch_Aottg2UI_Code_AottgPopoverEntry_o *__this,System_String_o *id,System_Type_o *type,
               Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *attribute,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Id_k__BackingField = id;
  il2cpp_runtime_helper_022b4080(&__this->fields,id);
  (__this->fields)._Type_k__BackingField = type;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Type_k__BackingField,type);
  (__this->fields)._Attribute_k__BackingField = attribute;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Attribute_k__BackingField,attribute);
  return;
}


// Gisketch.Aottg2UI.Code.AottgPopoverEntry$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgPopoverEntry__get_Id (Gisketch_Aottg2UI_Code_AottgPopoverEntry_o* __this, const MethodInfo* method);
// 0x3b5d4a0

System_String_o *
Gisketch_Aottg2UI_Code_AottgPopoverEntry__get_Id
          (Gisketch_Aottg2UI_Code_AottgPopoverEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Id_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgPopoverEntry$$get_Type
// il2cpp: System_Type_o* Gisketch_Aottg2UI_Code_AottgPopoverEntry__get_Type (Gisketch_Aottg2UI_Code_AottgPopoverEntry_o* __this, const MethodInfo* method);
// 0x3b5d4b0

System_Type_o *
Gisketch_Aottg2UI_Code_AottgPopoverEntry__get_Type
          (Gisketch_Aottg2UI_Code_AottgPopoverEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Type_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgPopoverEntry$$get_Attribute
// il2cpp: Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o* Gisketch_Aottg2UI_Code_AottgPopoverEntry__get_Attribute (Gisketch_Aottg2UI_Code_AottgPopoverEntry_o* __this, const MethodInfo* method);
// 0x3b5d4c0

Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *
Gisketch_Aottg2UI_Code_AottgPopoverEntry__get_Attribute
          (Gisketch_Aottg2UI_Code_AottgPopoverEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Attribute_k__BackingField;
}


