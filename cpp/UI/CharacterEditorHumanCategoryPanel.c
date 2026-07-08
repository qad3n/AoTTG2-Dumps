// Type: UI.CharacterEditorHumanCategoryPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CharacterEditorHumanCategoryPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorHumanCategoryPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.CharacterEditorHumanCategoryPanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorHumanCategoryPanel__get_Title (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x4052d90

System_String_o *
UI_CharacterEditorHumanCategoryPanel__get_Title
          (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704426 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Editor");
    DAT_05704426 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Editor",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorHumanCategoryPanel$$get_Height
// il2cpp: float UI_CharacterEditorHumanCategoryPanel__get_Height (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x4052df0

float UI_CharacterEditorHumanCategoryPanel__get_Height
                (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  return 340.0;
}


// UI.CharacterEditorHumanCategoryPanel$$Setup
// il2cpp: void UI_CharacterEditorHumanCategoryPanel__Setup (UI_CharacterEditorHumanCategoryPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4052e00

void UI_CharacterEditorHumanCategoryPanel__Setup
               (UI_CharacterEditorHumanCategoryPanel_o *__this,UI_BasePanel_o *parent,
               MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_SetSettingsContainer_T__o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  Settings_IntSetting_o *setting;
  Settings_StringSetting_o *setting_00;
  Il2CppClass *pIVar4;
  System_String_o *subCategory;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_01;
  System_String_o *title;
  System_String_array *pSVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  UI_CharacterEditorHumanMenu_o *pUVar8;
  
  if (DAT_05704427 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__6_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__6_1);
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Wave");
    il2cpp_init_method_metadata(&"Preview");
    il2cpp_init_method_metadata(&"Weapon");
    il2cpp_init_method_metadata(&"Blade");
    il2cpp_init_method_metadata(&"Shake");
    il2cpp_init_method_metadata(&"Nod");
    il2cpp_init_method_metadata(&"CharacterEditor");
    il2cpp_init_method_metadata(&"Eat");
    il2cpp_init_method_metadata(&"Emote");
    il2cpp_init_method_metadata(&"Dance");
    il2cpp_init_method_metadata(&"APG");
    il2cpp_init_method_metadata(&"Salute");
    il2cpp_init_method_metadata(&"AHSS");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Thunderspear");
    il2cpp_init_method_metadata(&"Flip");
    DAT_05704427 = '\x01';
  }
  UI_CharacterEditorCategoryPanel__Setup
            ((UI_CharacterEditorCategoryPanel_o *)__this,parent,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
    pUVar8 = *(UI_CharacterEditorHumanMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar8 != (UI_CharacterEditorHumanMenu_o *)0x0) goto LAB_04052f96;
LAB_0405301d:
    (__this->fields)._menu = (UI_CharacterEditorHumanMenu_o *)0x0;
  }
  else {
    pUVar8 = *(UI_CharacterEditorHumanMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar8 == (UI_CharacterEditorHumanMenu_o *)0x0) goto LAB_0405301d;
LAB_04052f96:
    pIVar4 = TypeInfo_CharacterEditorHumanMenu;
    bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    if (((pUVar8->klass->_2).naturalAligment < bVar1) ||
       ((pUVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CharacterEditorHumanMenu)) {
LAB_04053416:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pUVar8,pIVar4);
    }
    (__this->fields)._menu = pUVar8;
    if (((pUVar8->klass->_2).naturalAligment < bVar1) ||
       ((pUVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar4)) goto LAB_04053416;
  }
  il2cpp_runtime_glue(&(__this->fields)._menu);
  pSVar5 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,95.0,20.0,pSVar5,(MethodInfo *)0x0);
  subCategory = "Preview";
  pSVar5 = "CharacterEditor";
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar2 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    pUVar8 = (__this->fields)._menu;
    if (pUVar8 != (UI_CharacterEditorHumanMenu_o *)0x0) {
      pUVar3 = (__this->fields).SinglePanel;
      setting = (pUVar8->fields).Weapon;
      title = UI_UIManager__GetLocale
                        (pSVar5,subCategory,"Weapon","","",(MethodInfo *)0x0
                        );
      pSVar6 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,4);
      if (pSVar6 != (System_String_array *)0x0) {
        if ((int)pSVar6->max_length != 0) {
          pSVar6->m_Items[0] = "Blade";
          il2cpp_runtime_glue(pSVar6->m_Items);
          if (1 < (uint)pSVar6->max_length) {
            pSVar6->m_Items[1] = "AHSS";
            il2cpp_runtime_glue(pSVar6->m_Items + 1);
            if (2 < (uint)pSVar6->max_length) {
              pSVar6->m_Items[2] = "Thunderspear";
              il2cpp_runtime_glue(pSVar6->m_Items + 2);
              if (3 < (uint)pSVar6->max_length) {
                pSVar6->m_Items[3] = "APG";
                il2cpp_runtime_glue(pSVar6->m_Items + 3);
                pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                UI_ElementFactory__CreateDropdownSetting
                          (pUVar3,__this_01,(Settings_BaseSetting_o *)setting,title,pSVar6,
                           "",160.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar7,
                           (MethodInfo *)0x0);
                pSVar6 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,7);
                if (pSVar6 == (System_String_array *)0x0) goto LAB_04053411;
                if ((int)pSVar6->max_length != 0) {
                  pSVar6->m_Items[0] = "Salute";
                  il2cpp_runtime_glue(pSVar6->m_Items);
                  if (1 < (uint)pSVar6->max_length) {
                    pSVar6->m_Items[1] = "Wave";
                    il2cpp_runtime_glue(pSVar6->m_Items + 1);
                    if (2 < (uint)pSVar6->max_length) {
                      pSVar6->m_Items[2] = "Nod";
                      il2cpp_runtime_glue(pSVar6->m_Items + 2);
                      if (3 < (uint)pSVar6->max_length) {
                        pSVar6->m_Items[3] = "Shake";
                        il2cpp_runtime_glue(pSVar6->m_Items + 3);
                        if (4 < (uint)pSVar6->max_length) {
                          pSVar6->m_Items[4] = "Dance";
                          il2cpp_runtime_glue(pSVar6->m_Items + 4);
                          if (5 < (uint)pSVar6->max_length) {
                            pSVar6->m_Items[5] = "Eat";
                            il2cpp_runtime_glue(pSVar6->m_Items + 5);
                            if (6 < (uint)pSVar6->max_length) {
                              pSVar6->m_Items[6] = "Flip";
                              il2cpp_runtime_glue(pSVar6->m_Items + 6);
                              pUVar3 = (__this->fields).SinglePanel;
                              setting_00 = (__this->fields)._emote;
                              pSVar5 = UI_UIManager__GetLocale
                                                 (pSVar5,subCategory,"Emote","",
                                                  "",(MethodInfo *)0x0);
                              pUVar7 = (UnityEngine_Events_UnityAction_o *)
                                       il2cpp_runtime_glue(TypeInfo_UnityAction);
                              UnityEngine_Events_UnityAction___ctor();
                              UI_ElementFactory__CreateDropdownSetting
                                        (pUVar3,__this_01,(Settings_BaseSetting_o *)setting_00,
                                         pSVar5,pSVar6,"",160.0,40.0,300.0,
                                         (System_Nullable_float__o)0x0,pUVar7,(MethodInfo *)0x0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_04053411:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorHumanCategoryPanel$$OnWeaponChanged
// il2cpp: void UI_CharacterEditorHumanCategoryPanel__OnWeaponChanged (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x4053430

void UI_CharacterEditorHumanCategoryPanel__OnWeaponChanged
               (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorHumanMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel_o *__this_00;
  bool_conflict bVar3;
  System_Collections_IEnumerator_o *routine;
  
  if (DAT_05704428 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704428 = '\x01';
  }
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 != (UI_CharacterEditorHumanMenu_o *)0x0) {
    (*(pUVar2->klass->vtable)._9_ResetCharacter.methodPtr)
              (pUVar2,1,(pUVar2->klass->vtable)._9_ResetCharacter.method);
    if (DAT_05704371 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
      DAT_05704371 = '\x01';
    }
    if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
      if (DAT_05704372 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CharacterEditorSkinsPanel);
        DAT_05704372 = '\x01';
        cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
      }
      else {
        cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
      }
      if (cVar1 == '\0') {
        return;
      }
    }
    pUVar2 = (__this->fields)._menu;
    if (pUVar2 != (UI_CharacterEditorHumanMenu_o *)0x0) {
      __this_00 = (pUVar2->fields)._costumePanel;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
        routine = UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange
                            (__this_00,(MethodInfo *)0x0);
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorHumanCategoryPanel$$OnEmote
// il2cpp: void UI_CharacterEditorHumanCategoryPanel__OnEmote (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x4053550

void UI_CharacterEditorHumanCategoryPanel__OnEmote
               (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  GameManagers_CharacterEditorGameManager_o *pGVar1;
  Settings_StringSetting_o *pSVar2;
  Characters_DummyCharacter_o *__this_00;
  
  if (DAT_05704429 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704429 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_CharacterEditorGameManager_o *)0x0) &&
      (pSVar2 = (__this->fields)._emote, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
     (__this_00 = (pGVar1->fields).Character, __this_00 != (Characters_DummyCharacter_o *)0x0)) {
    Characters_DummyCharacter__EmoteAction(__this_00,(pSVar2->fields)._value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorHumanCategoryPanel$$.ctor
// il2cpp: void UI_CharacterEditorHumanCategoryPanel___ctor (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x40535b0

void UI_CharacterEditorHumanCategoryPanel___ctor
               (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  
  if (DAT_0570442a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&"Salute");
    DAT_0570442a = '\x01';
  }
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(__this_00,"Salute",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._emote = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._emote);
  UI_CharacterEditorCategoryPanel___ctor
            ((UI_CharacterEditorCategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorHumanCategoryPanel$$<Setup>b__6_0
// il2cpp: void UI_CharacterEditorHumanCategoryPanel___Setup_b__6_0 (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x4053640

void UI_CharacterEditorHumanCategoryPanel__<Setup>b__6_0
               (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorHumanCategoryPanel__OnWeaponChanged(__this,method);
  return;
}


// UI.CharacterEditorHumanCategoryPanel$$<Setup>b__6_1
// il2cpp: void UI_CharacterEditorHumanCategoryPanel___Setup_b__6_1 (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x4053650

void UI_CharacterEditorHumanCategoryPanel__<Setup>b__6_1
               (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  GameManagers_CharacterEditorGameManager_o *pGVar1;
  Settings_StringSetting_o *pSVar2;
  Characters_DummyCharacter_o *__this_00;
  
  if (DAT_05704429 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704429 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_CharacterEditorGameManager_o *)0x0) &&
      (pSVar2 = (__this->fields)._emote, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
     (__this_00 = (pGVar1->fields).Character, __this_00 != (Characters_DummyCharacter_o *)0x0)) {
    Characters_DummyCharacter__EmoteAction(__this_00,(pSVar2->fields)._value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


