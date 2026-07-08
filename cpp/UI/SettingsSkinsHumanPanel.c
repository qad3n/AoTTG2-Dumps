// Type: UI.SettingsSkinsHumanPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/SettingsSkinsHumanPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/SettingsPopup/SettingsSkinsHumanPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.SettingsSkinsHumanPanel$$get_VerticalSpacing
// il2cpp: float UI_SettingsSkinsHumanPanel__get_VerticalSpacing (UI_SettingsSkinsHumanPanel_o* __this, const MethodInfo* method);
// 0x4136300

float UI_SettingsSkinsHumanPanel__get_VerticalSpacing
                (UI_SettingsSkinsHumanPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.SettingsSkinsHumanPanel$$get_ScrollBar
// il2cpp: bool UI_SettingsSkinsHumanPanel__get_ScrollBar (UI_SettingsSkinsHumanPanel_o* __this, const MethodInfo* method);
// 0x4136310

bool_conflict
UI_SettingsSkinsHumanPanel__get_ScrollBar(UI_SettingsSkinsHumanPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SettingsSkinsHumanPanel$$Setup
// il2cpp: void UI_SettingsSkinsHumanPanel__Setup (UI_SettingsSkinsHumanPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4136320

void UI_SettingsSkinsHumanPanel__Setup
               (UI_SettingsSkinsHumanPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UI_BasePanel_o *pUVar2;
  long lVar3;
  UnityEngine_Transform_o *pUVar4;
  Settings_BaseSetting_o *pSVar5;
  System_String_o *pSVar6;
  UI_ElementStyle_o *pUVar7;
  MethodInfo *pMVar8;
  MethodInfo *in_R9;
  
  if (DAT_05704955 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsPopup);
    il2cpp_init_method_metadata(&TypeInfo_SettingsSkinsPanel);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Skins.Human");
    il2cpp_init_method_metadata(&"HookEnabled");
    il2cpp_init_method_metadata(&"GasEnabled");
    il2cpp_init_method_metadata(&"");
    DAT_05704955 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_SettingsSkinsPanel->_2).naturalAligment;
    pMVar8 = (MethodInfo *)(ulong)bVar1;
    if (((parent->klass->_2).naturalAligment < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(long)&pMVar8[-1].field_0x57] != TypeInfo_SettingsSkinsPanel)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(parent);
    }
    pUVar2 = (parent->fields).Parent;
    if (pUVar2 != (UI_BasePanel_o *)0x0) {
      bVar1 = (TypeInfo_SettingsPopup->_2).naturalAligment;
      pMVar8 = (MethodInfo *)(ulong)bVar1;
      if (((pUVar2->klass->_2).naturalAligment < bVar1) ||
         ((pUVar2->klass->_2).typeHierarchy[(long)&pMVar8[-1].field_0x57] != TypeInfo_SettingsPopup)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pUVar2);
      }
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (lVar3 != 0) {
      lVar3 = *(long *)(lVar3 + 0x20);
      UI_SettingsSkinsPanel__CreateCommonSettings
                ((UI_SettingsSkinsPanel_o *)parent,(__this->fields).DoublePanelLeft,
                 (__this->fields).DoublePanelRight,pMVar8);
      pUVar4 = (__this->fields).DoublePanelRight;
      pSVar6 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      pUVar7 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor(pUVar7,0x18,200.0,20.0,pSVar6,(MethodInfo *)0x0);
      if ((lVar3 != 0) && (pUVar2 != (UI_BasePanel_o *)0x0)) {
        pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x48);
        pSVar6 = (System_String_o *)pUVar2[1].fields._currentCategoryPanel;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar6 = UI_UIManager__GetLocale
                           (pSVar6,"Skins.Human","GasEnabled",(System_String_o *)"",
                            (System_String_o *)"",in_R9);
        pMVar8 = (MethodInfo *)0x0;
        UI_ElementFactory__CreateToggleSetting
                  (pUVar4,pUVar7,pSVar5,pSVar6,(System_String_o *)"",30.0,30.0,
                   (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
        pUVar4 = (__this->fields).DoublePanelRight;
        pSVar6 = (System_String_o *)
                 (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        pUVar7 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
        UI_ElementStyle___ctor(pUVar7,0x18,200.0,20.0,pSVar6,(MethodInfo *)0x0);
        pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x50);
        pSVar6 = UI_UIManager__GetLocale
                           ((System_String_o *)pUVar2[1].fields._currentCategoryPanel,"Skins.Human",
                            "HookEnabled",(System_String_o *)"",
                            (System_String_o *)"",pMVar8);
        pMVar8 = "";
        UI_ElementFactory__CreateToggleSetting
                  (pUVar4,pUVar7,pSVar5,pSVar6,(System_String_o *)"",30.0,30.0,
                   (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
        UI_BasePanel__CreateHorizontalDivider
                  ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelLeft,1.0,(MethodInfo *)0x0);
        UI_BasePanel__CreateHorizontalDivider
                  ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelRight,1.0,(MethodInfo *)0x0)
        ;
        UI_SettingsSkinsPanel__CreateSkinStringSettings
                  ((UI_SettingsSkinsPanel_o *)parent,(__this->fields).DoublePanelLeft,
                   (__this->fields).DoublePanelRight,200.0,200.0,0xb,pMVar8);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsSkinsHumanPanel$$.ctor
// il2cpp: void UI_SettingsSkinsHumanPanel___ctor (UI_SettingsSkinsHumanPanel_o* __this, const MethodInfo* method);
// 0x4136680

void UI_SettingsSkinsHumanPanel___ctor(UI_SettingsSkinsHumanPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


