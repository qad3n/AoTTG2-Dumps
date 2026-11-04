// Type: UI.SettingsSkinsHumanPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SettingsSkinsHumanPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsSkinsHumanPanel.cs
// --------------------------------

// UI.SettingsSkinsHumanPanel$$get_VerticalSpacing
// il2cpp: float UI_SettingsSkinsHumanPanel__get_VerticalSpacing (UI_SettingsSkinsHumanPanel_o* __this, const MethodInfo* method);
// 0x182168bc0

float
UI_SettingsSkinsHumanPanel__get_VerticalSpacing(UI_SettingsSkinsHumanPanel_o* __this, MethodInfo* method)

{
  return 20.0;
}


// UI.SettingsSkinsHumanPanel$$get_ScrollBar
// il2cpp: bool UI_SettingsSkinsHumanPanel__get_ScrollBar (UI_SettingsSkinsHumanPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_SettingsSkinsHumanPanel__get_ScrollBar(UI_SettingsSkinsHumanPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.SettingsSkinsHumanPanel$$Setup
// il2cpp: void UI_SettingsSkinsHumanPanel__Setup (UI_SettingsSkinsHumanPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822e6980

void UI_SettingsSkinsHumanPanel__Setup
               (UI_SettingsSkinsHumanPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UI_BasePanel_o *pUVar2;
  Settings_CustomSkinSettings_o *pSVar3;
  Settings_HumanCustomSkinSettings_o *pSVar4;
  UnityEngine_Transform_o *pUVar5;
  Settings_BoolSetting_o *pSVar6;
  System_String_o *pSVar7;
  UI_ElementStyle_o *pUVar8;
  
  if (Il2CppMethodInitialized_18434763b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SettingsPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SettingsSkinsPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Human");
    il2cpp_codegen_initialize_runtime_metadata(&"HookEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"GasEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434763b = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_UI_SettingsSkinsPanel->_2).typeHierarchyDepth;
    if (((parent->klass->_2).typeHierarchyDepth < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_SettingsSkinsPanel)) {
      il2cpp_codegen_raise_invalid_cast_exception(parent);
    }
    pUVar2 = (parent->fields).Parent;
    if (pUVar2 != (UI_BasePanel_o *)0x0) {
      bVar1 = (TypeInfo_UI_SettingsPopup->_2).typeHierarchyDepth;
      if (((pUVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_SettingsPopup)
         ) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
      }
    }
    pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (pSVar3 != (Settings_CustomSkinSettings_o *)0x0) {
      pSVar4 = (pSVar3->fields).Human;
      UI_SettingsSkinsPanel__CreateCommonSettings
                ((UI_SettingsSkinsPanel_o *)parent,(__this->fields).DoublePanelLeft,
                 (__this->fields).DoublePanelRight,(MethodInfo *)0x0);
      pUVar5 = (__this->fields).DoublePanelRight;
      pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      UI_ElementStyle___ctor(pUVar8,0x18,200.0,20.0,pSVar7,(MethodInfo *)0x0);
      if ((pSVar4 != (Settings_HumanCustomSkinSettings_o *)0x0) && (pUVar2 != (UI_BasePanel_o *)0x0)) {
        pSVar6 = (pSVar4->fields).GasEnabled;
        pSVar7 = (System_String_o *)(*(uint64_t *)((char *)pUVar2 + 0xa8));
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar7 = UI_UIManager__GetLocale
                           (pSVar7,"Skins.Human","GasEnabled","",
                            "",(MethodInfo *)0x0);
        UI_ElementFactory__CreateToggleSetting
                  (pUVar5,pUVar8,(Settings_BaseSetting_o *)pSVar6,pSVar7,"",30.0,30.0,
                   (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
        pUVar5 = (__this->fields).DoublePanelRight;
        pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
        UI_ElementStyle___ctor(pUVar8,0x18,200.0,20.0,pSVar7,(MethodInfo *)0x0);
        pSVar6 = (pSVar4->fields).HookEnabled;
        pSVar7 = UI_UIManager__GetLocale
                           ((System_String_o *)(*(uint64_t *)((char *)pUVar2 + 0xa8)),"Skins.Human",
                            "HookEnabled","","",
                            (MethodInfo *)0x0);
        UI_ElementFactory__CreateToggleSetting
                  (pUVar5,pUVar8,(Settings_BaseSetting_o *)pSVar6,pSVar7,"",30.0,30.0,
                   (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
        UI_BasePanel__CreateHorizontalDivider
                  ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelLeft,1.0,(MethodInfo *)0x0);
        UI_BasePanel__CreateHorizontalDivider
                  ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelRight,1.0,(MethodInfo *)0x0);
        UI_SettingsSkinsPanel__CreateSkinStringSettings
                  ((UI_SettingsSkinsPanel_o *)parent,(__this->fields).DoublePanelLeft,
                   (__this->fields).DoublePanelRight,200.0,200.0,0xb,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SettingsSkinsHumanPanel$$.ctor
// il2cpp: void UI_SettingsSkinsHumanPanel___ctor (UI_SettingsSkinsHumanPanel_o* __this, const MethodInfo* method);
// 0x181da8ae0

void UI_SettingsSkinsHumanPanel___ctor(UI_SettingsSkinsHumanPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}


