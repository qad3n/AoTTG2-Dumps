// Type: UI.SettingsSkinsDefaultPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SettingsSkinsDefaultPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsSkinsDefaultPanel.cs
// --------------------------------

// UI.SettingsSkinsDefaultPanel$$get_ScrollBar
// il2cpp: bool UI_SettingsSkinsDefaultPanel__get_ScrollBar (UI_SettingsSkinsDefaultPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_SettingsSkinsDefaultPanel__get_ScrollBar(UI_SettingsSkinsDefaultPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.SettingsSkinsDefaultPanel$$get_VerticalSpacing
// il2cpp: float UI_SettingsSkinsDefaultPanel__get_VerticalSpacing (UI_SettingsSkinsDefaultPanel_o* __this, const MethodInfo* method);
// 0x182168bc0

float
UI_SettingsSkinsDefaultPanel__get_VerticalSpacing(UI_SettingsSkinsDefaultPanel_o* __this, MethodInfo* method)

{
  return 20.0;
}


// UI.SettingsSkinsDefaultPanel$$Setup
// il2cpp: void UI_SettingsSkinsDefaultPanel__Setup (UI_SettingsSkinsDefaultPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822e6890

void UI_SettingsSkinsDefaultPanel__Setup
               (UI_SettingsSkinsDefaultPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  
  if (Il2CppMethodInitialized_18434763a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SettingsSkinsPanel);
    Il2CppMethodInitialized_18434763a = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_UI_SettingsSkinsPanel->_2).typeHierarchyDepth;
    if ((bVar1 <= (parent->klass->_2).typeHierarchyDepth) &&
       ((parent->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UI_SettingsSkinsPanel)) {
      UI_SettingsSkinsPanel__CreateCommonSettings
                ((UI_SettingsSkinsPanel_o *)parent,(__this->fields).DoublePanelLeft,
                 (__this->fields).DoublePanelRight,(MethodInfo *)0x0);
      UI_BasePanel__CreateHorizontalDivider
                ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelRight,1.0,(MethodInfo *)0x0);
      UI_SettingsSkinsPanel__CreateSkinStringSettings
                ((UI_SettingsSkinsPanel_o *)parent,(__this->fields).DoublePanelLeft,
                 (__this->fields).DoublePanelRight,140.0,260.0,0,(MethodInfo *)0x0);
      return;
    }
    il2cpp_codegen_raise_invalid_cast_exception(parent);
  }
  ThrowNullReferenceException();
}


// UI.SettingsSkinsDefaultPanel$$.ctor
// il2cpp: void UI_SettingsSkinsDefaultPanel___ctor (UI_SettingsSkinsDefaultPanel_o* __this, const MethodInfo* method);
// 0x181da8ae0

void
UI_SettingsSkinsDefaultPanel___ctor(UI_SettingsSkinsDefaultPanel_o* __this, MethodInfo* method)

{
  UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}


