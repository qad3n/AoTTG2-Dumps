// Type: UI.SkillTooltipPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SkillTooltipPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/SkillTooltipPopup.cs
// --------------------------------

// UI.SkillTooltipPopup$$get_TextColor
// il2cpp: System_String_o* UI_SkillTooltipPopup__get_TextColor (UI_SkillTooltipPopup_o* __this, const MethodInfo* method);
// 0x1821e4850

System_String_o * UI_SkillTooltipPopup__get_TextColor(UI_SkillTooltipPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SkillTooltipTextColor");
    Il2CppMethodInitialized_184346f5d = '\x01';
  }
  return "SkillTooltipTextColor";
}


// UI.SkillTooltipPopup$$get_BackgroundColor
// il2cpp: System_String_o* UI_SkillTooltipPopup__get_BackgroundColor (UI_SkillTooltipPopup_o* __this, const MethodInfo* method);
// 0x1821e4820

System_String_o * UI_SkillTooltipPopup__get_BackgroundColor(UI_SkillTooltipPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SkillTooltipBackgroundColor");
    Il2CppMethodInitialized_184346f5e = '\x01';
  }
  return "SkillTooltipBackgroundColor";
}


// UI.SkillTooltipPopup$$.ctor
// il2cpp: void UI_SkillTooltipPopup___ctor (UI_SkillTooltipPopup_o* __this, const MethodInfo* method);
// 0x1821e47d0

void UI_SkillTooltipPopup___ctor(UI_SkillTooltipPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_TooltipPopup);
    Il2CppMethodInitialized_184346f5f = '\x01';
  }
  if ((TypeInfo_UI_TooltipPopup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_TooltipPopup);
  }
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


