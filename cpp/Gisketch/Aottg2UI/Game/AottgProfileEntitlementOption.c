// Type: Gisketch.Aottg2UI.Game.AottgProfileEntitlementOption
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileEntitlementOption.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileEntitlementOption$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption___ctor (Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o __this, System_String_o* id, System_String_o* label, System_String_o* icon, bool enabled, const MethodInfo* method);
// 0x4526b20

void Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o __this,System_String_o *id,
               System_String_o *label,System_String_o *icon,bool_conflict enabled,MethodInfo *method)

{
  System_String_Fields SVar1;
  undefined4 in_register_0000000c;
  
  SVar1._4_4_ = in_register_0000000c;
  SVar1._stringLength = enabled;
  id->klass = (System_String_c *)label;
  il2cpp_runtime_helper_022b4080();
  id->monitor = icon;
  il2cpp_runtime_helper_022b4080(&id->monitor,icon);
  id->fields = SVar1;
  il2cpp_runtime_helper_022b4080(&id->fields,SVar1);
  *(char *)&id[1].klass = (char)method;
  return;
}


