// Type: Gisketch.Aottg2UI.Game.AottgSubtab
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgSubtab.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgSubtab$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtab___ctor (Gisketch_Aottg2UI_Game_AottgSubtab_o* __this, System_String_o* id, System_String_o* label, const MethodInfo* method);
// 0x1823b92a0

void Gisketch_Aottg2UI_Game_AottgSubtab___ctor
               (Gisketch_Aottg2UI_Game_AottgSubtab_o *__this,System_String_o *id,System_String_o *label,
               MethodInfo *method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (id == (System_String_o *)0x0) {
    id = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgSubtab_o *)0x0) {
    (__this->fields)._Id_k__BackingField = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Id_k__BackingField,id);
    if (label == (System_String_o *)0x0) {
      label = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    (__this->fields)._Label_k__BackingField = label;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Label_k__BackingField,label);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSubtab$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSubtab__get_Id (Gisketch_Aottg2UI_Game_AottgSubtab_o* __this, const MethodInfo* method);
// 0x1808fb3a0

System_String_o*
Gisketch_Aottg2UI_Game_AottgSubtab__get_Id(Gisketch_Aottg2UI_Game_AottgSubtab_o* __this, MethodInfo* method)

{
  return (__this->fields)._Id_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgSubtab$$get_Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSubtab__get_Label (Gisketch_Aottg2UI_Game_AottgSubtab_o* __this, const MethodInfo* method);
// 0x180573e90

System_String_o*
Gisketch_Aottg2UI_Game_AottgSubtab__get_Label(Gisketch_Aottg2UI_Game_AottgSubtab_o* __this, MethodInfo* method)

{
  return (__this->fields)._Label_k__BackingField;
}


