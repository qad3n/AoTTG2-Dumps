// Type: Gisketch.Aottg2UI.Game.AottgProfileEntitlementOption
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileEntitlementOption.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileEntitlementOption$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption___ctor (Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o __this, System_String_o* id, System_String_o* label, System_String_o* icon, bool enabled, const MethodInfo* method);
// 0x5902c40

void Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o *__this,System_String_o *id,
               System_String_o *label,System_String_o *icon,bool enabled,MethodInfo *method)

{
  (__this->fields).Id = id;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields).Label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Label);
  (__this->fields).Icon = icon;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Icon);
  (__this->fields).Enabled = enabled;
  return;
}


