// Type: Gisketch.Aottg2UI.Game.AottgSubtab
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgSubtab.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgSubtab$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtab___ctor (Gisketch_Aottg2UI_Game_AottgSubtab_o* __this, System_String_o* id, System_String_o* label, const MethodInfo* method);
// 0x5e7dde0

void Gisketch_Aottg2UI_Game_AottgSubtab___ctor
               (Gisketch_Aottg2UI_Game_AottgSubtab_o *__this,System_String_o *id,System_String_o *label,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (id == (System_String_o *)0x0) {
    id = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (__this == (Gisketch_Aottg2UI_Game_AottgSubtab_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._Id_k__BackingField = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Id_k__BackingField);
  if (label == (System_String_o *)0x0) {
    label = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields)._Label_k__BackingField = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Label_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtab$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSubtab__get_Id (Gisketch_Aottg2UI_Game_AottgSubtab_o* __this, const MethodInfo* method);
// 0x5e7de70

System_String_o *
Gisketch_Aottg2UI_Game_AottgSubtab__get_Id(Gisketch_Aottg2UI_Game_AottgSubtab_o *__this,MethodInfo *method)

{
  return (__this->fields)._Id_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgSubtab$$get_Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSubtab__get_Label (Gisketch_Aottg2UI_Game_AottgSubtab_o* __this, const MethodInfo* method);
// 0x5e7de80

System_String_o *
Gisketch_Aottg2UI_Game_AottgSubtab__get_Label(Gisketch_Aottg2UI_Game_AottgSubtab_o *__this,MethodInfo *method)

{
  return (__this->fields)._Label_k__BackingField;
}


