// Type: UI.SettingsSkinsDefaultPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/SettingsSkinsDefaultPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/SettingsPopup/SettingsSkinsDefaultPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.SettingsSkinsDefaultPanel$$get_ScrollBar
// il2cpp: bool UI_SettingsSkinsDefaultPanel__get_ScrollBar (UI_SettingsSkinsDefaultPanel_o* __this, const MethodInfo* method);
// 0x41338a0

bool_conflict
UI_SettingsSkinsDefaultPanel__get_ScrollBar
          (UI_SettingsSkinsDefaultPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SettingsSkinsDefaultPanel$$get_VerticalSpacing
// il2cpp: float UI_SettingsSkinsDefaultPanel__get_VerticalSpacing (UI_SettingsSkinsDefaultPanel_o* __this, const MethodInfo* method);
// 0x41338b0

float UI_SettingsSkinsDefaultPanel__get_VerticalSpacing
                (UI_SettingsSkinsDefaultPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.SettingsSkinsDefaultPanel$$Setup
// il2cpp: void UI_SettingsSkinsDefaultPanel__Setup (UI_SettingsSkinsDefaultPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x41338c0

void UI_SettingsSkinsDefaultPanel__Setup
               (UI_SettingsSkinsDefaultPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  MethodInfo *in_R8;
  
  if (DAT_05704954 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsSkinsPanel);
    DAT_05704954 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_SettingsSkinsPanel->_2).naturalAligment;
    if ((bVar1 <= (parent->klass->_2).naturalAligment) &&
       ((parent->klass->_2).typeHierarchy[(long)&((MethodInfo *)(ulong)bVar1)[-1].field_0x57] ==
        TypeInfo_SettingsSkinsPanel)) {
      UI_SettingsSkinsPanel__CreateCommonSettings
                ((UI_SettingsSkinsPanel_o *)parent,(__this->fields).DoublePanelLeft,
                 (__this->fields).DoublePanelRight,(MethodInfo *)(ulong)bVar1);
      UI_BasePanel__CreateHorizontalDivider
                ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelRight,1.0,(MethodInfo *)0x0);
      UI_SettingsSkinsPanel__CreateSkinStringSettings
                ((UI_SettingsSkinsPanel_o *)parent,(__this->fields).DoublePanelLeft,
                 (__this->fields).DoublePanelRight,140.0,260.0,0,in_R8);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(parent);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsSkinsDefaultPanel$$.ctor
// il2cpp: void UI_SettingsSkinsDefaultPanel___ctor (UI_SettingsSkinsDefaultPanel_o* __this, const MethodInfo* method);
// 0x41362b0

void UI_SettingsSkinsDefaultPanel___ctor(UI_SettingsSkinsDefaultPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


