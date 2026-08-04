// Type: UI.SkillTooltipPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SkillTooltipPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/SkillTooltipPopup.cs
// --------------------------------

// UI.SkillTooltipPopup$$get_TextColor
// il2cpp: System_String_o* UI_SkillTooltipPopup__get_TextColor (UI_SkillTooltipPopup_o* __this, const MethodInfo* method);
// 0x4355f30

System_String_o * UI_SkillTooltipPopup__get_TextColor(UI_SkillTooltipPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae15f == '\0') {
    il2cpp_runtime_helper_023445d0(&"SkillTooltipTextColor");
    g_data_057ae15f = '\x01';
  }
  return "SkillTooltipTextColor";
}


// UI.SkillTooltipPopup$$get_BackgroundColor
// il2cpp: System_String_o* UI_SkillTooltipPopup__get_BackgroundColor (UI_SkillTooltipPopup_o* __this, const MethodInfo* method);
// 0x4355f60

System_String_o * UI_SkillTooltipPopup__get_BackgroundColor(UI_SkillTooltipPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae160 == '\0') {
    il2cpp_runtime_helper_023445d0(&"SkillTooltipBackgroundColor");
    g_data_057ae160 = '\x01';
  }
  return "SkillTooltipBackgroundColor";
}


// UI.SkillTooltipPopup$$.ctor
// il2cpp: void UI_SkillTooltipPopup___ctor (UI_SkillTooltipPopup_o* __this, const MethodInfo* method);
// 0x4355f90

void UI_SkillTooltipPopup___ctor(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor(__this,method);
  return;
}


