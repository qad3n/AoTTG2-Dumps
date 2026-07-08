// Type: UI.SkillTooltipPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/SkillTooltipPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/BaseMenu/SkillTooltipPopup.cs  [prior source available (delta unverified)]
// --------------------------------

// UI.SkillTooltipPopup$$get_TextColor
// il2cpp: System_String_o* UI_SkillTooltipPopup__get_TextColor (UI_SkillTooltipPopup_o* __this, const MethodInfo* method);
// 0x402c750

System_String_o *
UI_SkillTooltipPopup__get_TextColor(UI_SkillTooltipPopup_o *__this,MethodInfo *method)

{
  if (DAT_05704349 == '\0') {
    il2cpp_init_method_metadata(&"SkillTooltipTextColor");
    DAT_05704349 = '\x01';
  }
  return "SkillTooltipTextColor";
}


// UI.SkillTooltipPopup$$get_BackgroundColor
// il2cpp: System_String_o* UI_SkillTooltipPopup__get_BackgroundColor (UI_SkillTooltipPopup_o* __this, const MethodInfo* method);
// 0x402c780

System_String_o *
UI_SkillTooltipPopup__get_BackgroundColor(UI_SkillTooltipPopup_o *__this,MethodInfo *method)

{
  if (DAT_0570434a == '\0') {
    il2cpp_init_method_metadata(&"SkillTooltipBackgroundColor");
    DAT_0570434a = '\x01';
  }
  return "SkillTooltipBackgroundColor";
}


// UI.SkillTooltipPopup$$.ctor
// il2cpp: void UI_SkillTooltipPopup___ctor (UI_SkillTooltipPopup_o* __this, const MethodInfo* method);
// 0x402c7b0

void UI_SkillTooltipPopup___ctor(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor(__this,method);
  return;
}


