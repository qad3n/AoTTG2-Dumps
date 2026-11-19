// Type: UI.SkillTooltipPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SkillTooltipPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/SkillTooltipPopup.cs
// --------------------------------

// UI.SkillTooltipPopup$$get_TextColor
// il2cpp: System_String_o* UI_SkillTooltipPopup__get_TextColor (UI_SkillTooltipPopup_o* __this, const MethodInfo* method);
// 0x5cc8160

System_String_o * UI_SkillTooltipPopup__get_TextColor(UI_SkillTooltipPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547b57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SkillTooltipTextColor");
    Il2CppMethodInitialized_07547b57 = '\x01';
  }
  return "SkillTooltipTextColor";
}


// UI.SkillTooltipPopup$$get_BackgroundColor
// il2cpp: System_String_o* UI_SkillTooltipPopup__get_BackgroundColor (UI_SkillTooltipPopup_o* __this, const MethodInfo* method);
// 0x5cc8190

System_String_o * UI_SkillTooltipPopup__get_BackgroundColor(UI_SkillTooltipPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547b58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SkillTooltipBackgroundColor");
    Il2CppMethodInitialized_07547b58 = '\x01';
  }
  return "SkillTooltipBackgroundColor";
}


// UI.SkillTooltipPopup$$.ctor
// il2cpp: void UI_SkillTooltipPopup___ctor (UI_SkillTooltipPopup_o* __this, const MethodInfo* method);
// 0x5cc81c0

void UI_SkillTooltipPopup___ctor(UI_SkillTooltipPopup_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07547b59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_TooltipPopup);
    Il2CppMethodInitialized_07547b59 = '\x01';
    uVar1 = (TypeInfo_UI_TooltipPopup->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_TooltipPopup->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_TooltipPopup);
    UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method);
    return;
  }
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method);
  return;
}


