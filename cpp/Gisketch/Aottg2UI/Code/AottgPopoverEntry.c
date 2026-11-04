// Type: Gisketch.Aottg2UI.Code.AottgPopoverEntry
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgPopoverEntry.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgPopoverEntry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgPopoverEntry___ctor (Gisketch_Aottg2UI_Code_AottgPopoverEntry_o* __this, System_String_o* id, System_Type_o* type, Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o* attribute, const MethodInfo* method);
// 0x180e56de0

void
Gisketch_Aottg2UI_Code_AottgPopoverEntry___ctor(Gisketch_Aottg2UI_Code_AottgPopoverEntry_o* __this, System_String_o* id, System_Type_o* type, Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o* attribute, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Id_k__BackingField = version;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Id_k__BackingField,version);
  (__this->fields)._Type_k__BackingField = encoding;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Type_k__BackingField,encoding);
  (__this->fields)._Attribute_k__BackingField = standalone;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Attribute_k__BackingField,standalone);
  return;
}


// Gisketch.Aottg2UI.Code.AottgPopoverEntry$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgPopoverEntry__get_Id (Gisketch_Aottg2UI_Code_AottgPopoverEntry_o* __this, const MethodInfo* method);
// 0x1808fb3a0

System_String_o*
Gisketch_Aottg2UI_Code_AottgPopoverEntry__get_Id(Gisketch_Aottg2UI_Code_AottgPopoverEntry_o* __this, MethodInfo* method)

{
  return (__this->fields)._Id_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgPopoverEntry$$get_Type
// il2cpp: System_Type_o* Gisketch_Aottg2UI_Code_AottgPopoverEntry__get_Type (Gisketch_Aottg2UI_Code_AottgPopoverEntry_o* __this, const MethodInfo* method);
// 0x180573e90

System_Type_o*
Gisketch_Aottg2UI_Code_AottgPopoverEntry__get_Type(Gisketch_Aottg2UI_Code_AottgPopoverEntry_o* __this, MethodInfo* method)

{
  return (__this->fields)._Type_k__BackingField;
}


// Gisketch.Aottg2UI.Code.AottgPopoverEntry$$get_Attribute
// il2cpp: Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o* Gisketch_Aottg2UI_Code_AottgPopoverEntry__get_Attribute (Gisketch_Aottg2UI_Code_AottgPopoverEntry_o* __this, const MethodInfo* method);
// 0x1805852b0

Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o*
Gisketch_Aottg2UI_Code_AottgPopoverEntry__get_Attribute(Gisketch_Aottg2UI_Code_AottgPopoverEntry_o* __this, MethodInfo* method)

{
  return (__this->fields)._Attribute_k__BackingField;
}


