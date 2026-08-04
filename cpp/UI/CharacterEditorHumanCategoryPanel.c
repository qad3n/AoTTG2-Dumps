// Type: UI.CharacterEditorHumanCategoryPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorHumanCategoryPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorHumanCategoryPanel.cs
// --------------------------------

// UI.CharacterEditorHumanCategoryPanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorHumanCategoryPanel__get_Title (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x4360c10

System_String_o *
UI_CharacterEditorHumanCategoryPanel__get_Title
          (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae1a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Editor");
    g_data_057ae1a0 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Editor",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorHumanCategoryPanel$$get_Height
// il2cpp: float UI_CharacterEditorHumanCategoryPanel__get_Height (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x4360c70

float UI_CharacterEditorHumanCategoryPanel__get_Height
                (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  return 340.0;
}


// UI.CharacterEditorHumanCategoryPanel$$Setup
// il2cpp: void UI_CharacterEditorHumanCategoryPanel__Setup (UI_CharacterEditorHumanCategoryPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4360c80

void UI_CharacterEditorHumanCategoryPanel__Setup
               (UI_CharacterEditorHumanCategoryPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  char cVar2;
  UnityEngine_MonoBehaviour_c *__this_00;
  long lVar3;
  Settings_SetSettingsContainer_T__o *__this_01;
  UnityEngine_Transform_o *pUVar4;
  Settings_IntSetting_o *setting;
  Settings_StringSetting_o *setting_00;
  System_Collections_Generic_HashSet_Transform__o *pSVar5;
  undefined8 uVar6;
  System_String_o *subCategory;
  bool_conflict bVar7;
  System_String_o *pSVar8;
  UI_ElementStyle_o *__this_02;
  System_String_o *title;
  System_String_array *pSVar9;
  UnityEngine_Events_UnityAction_o *pUVar10;
  Il2CppClass *pIVar11;
  System_Collections_IEnumerator_o *routine;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar12;
  MethodInfo *method_00;
  UI_CharacterEditorHumanMenu_o *__this_03;
  UI_CharacterEditorHumanMenu_o *pUVar13;
  UI_CharacterEditorHumanMenu_o *pUVar14;
  UnityEngine_MonoBehaviour_o *__this_04;
  long *plVar15;
  UI_SelectListPopup_o *pUVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  
  if (g_data_057ae1a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__6_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__6_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Wave");
    il2cpp_runtime_helper_023445d0(&"Preview");
    il2cpp_runtime_helper_023445d0(&"Weapon");
    il2cpp_runtime_helper_023445d0(&"Blade");
    il2cpp_runtime_helper_023445d0(&"Shake");
    il2cpp_runtime_helper_023445d0(&"Nod");
    il2cpp_runtime_helper_023445d0(&"CharacterEditor");
    il2cpp_runtime_helper_023445d0(&"Eat");
    il2cpp_runtime_helper_023445d0(&"Emote");
    il2cpp_runtime_helper_023445d0(&"Dance");
    il2cpp_runtime_helper_023445d0(&"APG");
    il2cpp_runtime_helper_023445d0(&"Salute");
    il2cpp_runtime_helper_023445d0(&"AHSS");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Thunderspear");
    il2cpp_runtime_helper_023445d0(&"Flip");
    g_data_057ae1a1 = '\x01';
  }
  UI_CharacterEditorCategoryPanel__Setup((UI_CharacterEditorCategoryPanel_o *)__this,parent,(MethodInfo *)0x0)
  ;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_03 = *(UI_CharacterEditorHumanMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_03 != (UI_CharacterEditorHumanMenu_o *)0x0) goto label_04360e16;
label_04360e9d:
    (__this->fields)._menu = (UI_CharacterEditorHumanMenu_o *)0x0;
  }
  else {
    __this_03 = *(UI_CharacterEditorHumanMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this_03 == (UI_CharacterEditorHumanMenu_o *)0x0) goto label_04360e9d;
label_04360e16:
    pIVar11 = TypeInfo_CharacterEditorHumanMenu;
    bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    if (((__this_03->klass->_2).naturalAligment < bVar1) ||
       ((__this_03->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CharacterEditorHumanMenu)) goto label_04361296;
    (__this->fields)._menu = __this_03;
    if (((__this_03->klass->_2).naturalAligment < bVar1) ||
       ((__this_03->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar11)) goto label_04361296;
  }
  il2cpp_runtime_helper_022b4080(&(__this->fields)._menu);
  pSVar8 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_02 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  __this_03 = (UI_CharacterEditorHumanMenu_o *)&g_data_00000018;
  UI_ElementStyle___ctor(__this_02,0x18,95.0,20.0,pSVar8,(MethodInfo *)0x0);
  subCategory = "Preview";
  pSVar8 = "CharacterEditor";
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar3 != 0) &&
     (__this_01 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
     __this_01 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    __this_03 = MethodInfo_BaseSetSetting_GetSelectedSet;
    Settings_SetSettingsContainer_object___GetSelectedSet(__this_01,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet);
    pUVar13 = (__this->fields)._menu;
    if (pUVar13 != (UI_CharacterEditorHumanMenu_o *)0x0) {
      pUVar4 = (__this->fields).SinglePanel;
      setting = (pUVar13->fields).Weapon;
      title = UI_UIManager__GetLocale
                        (pSVar8,subCategory,"Weapon","","",(MethodInfo *)0x0);
      __this_03 = (UI_CharacterEditorHumanMenu_o *)&g_data_00000004;
      pSVar9 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
      pUVar13 = "Blade";
      if (pSVar9 != (System_String_array *)0x0) {
        if ((int)pSVar9->max_length != 0) {
          pSVar9->m_Items[0] = (System_String_o *)"Blade";
          il2cpp_runtime_helper_022b4080(pSVar9->m_Items);
          pUVar14 = "AHSS";
          __this_03 = pUVar13;
          if (1 < (uint)pSVar9->max_length) {
            pSVar9->m_Items[1] = (System_String_o *)"AHSS";
            il2cpp_runtime_helper_022b4080(pSVar9->m_Items + 1);
            pUVar13 = "Thunderspear";
            __this_03 = pUVar14;
            if (2 < (uint)pSVar9->max_length) {
              pSVar9->m_Items[2] = (System_String_o *)"Thunderspear";
              il2cpp_runtime_helper_022b4080(pSVar9->m_Items + 2);
              __this_03 = pUVar13;
              if (3 < (uint)pSVar9->max_length) {
                pSVar9->m_Items[3] = "APG";
                il2cpp_runtime_helper_022b4080(pSVar9->m_Items + 3);
                pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                UI_ElementFactory__CreateDropdownSetting
                          (pUVar4,__this_02,(Settings_BaseSetting_o *)setting,title,pSVar9,"",160.0,
                           40.0,300.0,(System_Nullable_float__o)0x0,pUVar10,(MethodInfo *)0x0);
                __this_03 = (UI_CharacterEditorHumanMenu_o *)0x7;
                pSVar9 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
                pUVar13 = "Salute";
                if (pSVar9 == (System_String_array *)0x0) goto label_04361291;
                if ((int)pSVar9->max_length != 0) {
                  pSVar9->m_Items[0] = (System_String_o *)"Salute";
                  il2cpp_runtime_helper_022b4080(pSVar9->m_Items);
                  pUVar14 = "Wave";
                  __this_03 = pUVar13;
                  if (1 < (uint)pSVar9->max_length) {
                    pSVar9->m_Items[1] = (System_String_o *)"Wave";
                    il2cpp_runtime_helper_022b4080(pSVar9->m_Items + 1);
                    pUVar13 = "Nod";
                    __this_03 = pUVar14;
                    if (2 < (uint)pSVar9->max_length) {
                      pSVar9->m_Items[2] = (System_String_o *)"Nod";
                      il2cpp_runtime_helper_022b4080(pSVar9->m_Items + 2);
                      pUVar14 = "Shake";
                      __this_03 = pUVar13;
                      if (3 < (uint)pSVar9->max_length) {
                        pSVar9->m_Items[3] = (System_String_o *)"Shake";
                        il2cpp_runtime_helper_022b4080(pSVar9->m_Items + 3);
                        pUVar13 = "Dance";
                        __this_03 = pUVar14;
                        if (4 < (uint)pSVar9->max_length) {
                          pSVar9->m_Items[4] = (System_String_o *)"Dance";
                          il2cpp_runtime_helper_022b4080(pSVar9->m_Items + 4);
                          pUVar14 = "Eat";
                          __this_03 = pUVar13;
                          if (5 < (uint)pSVar9->max_length) {
                            pSVar9->m_Items[5] = (System_String_o *)"Eat";
                            il2cpp_runtime_helper_022b4080(pSVar9->m_Items + 5);
                            __this_03 = pUVar14;
                            if (6 < (uint)pSVar9->max_length) {
                              pSVar9->m_Items[6] = "Flip";
                              il2cpp_runtime_helper_022b4080(pSVar9->m_Items + 6);
                              pUVar4 = (__this->fields).SinglePanel;
                              setting_00 = (__this->fields)._emote;
                              pSVar8 = UI_UIManager__GetLocale
                                                 (pSVar8,subCategory,"Emote","","",
                                                  (MethodInfo *)0x0);
                              pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                              UnityEngine_Events_UnityAction___ctor();
                              UI_ElementFactory__CreateDropdownSetting
                                        (pUVar4,__this_02,(Settings_BaseSetting_o *)setting_00,pSVar8,pSVar9,
                                         "",160.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar10,
                                         (MethodInfo *)0x0);
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
        il2cpp_runtime_helper_022b2ca0();
      }
    }
  }
label_04361291:
  pIVar11 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
label_04361296:
  il2cpp_runtime_helper_022b2fd0(__this_03,pIVar11);
  if (g_data_057ae1a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae1a2 = '\x01';
  }
  plVar15 = (long *)(__this_03->fields).SelectListPopup;
  if ((UI_SelectListPopup_o *)plVar15 != (UI_SelectListPopup_o *)0x0) {
    (*(((UI_SelectListPopup_o *)plVar15)->klass->vtable)._9_get_VerticalPadding.methodPtr)
              (plVar15,1,(((UI_SelectListPopup_o *)plVar15)->klass->vtable)._9_get_VerticalPadding.method);
    if (g_data_057ae187 == '\0') {
      plVar15 = &TypeInfo_CharacterEditorSkinsPanel;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae187 = '\x01';
    }
    if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
      if (g_data_057ae188 == '\0') {
        plVar15 = &TypeInfo_CharacterEditorSkinsPanel;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae188 = '\x01';
        cVar2 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
      }
      else {
        cVar2 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
      }
      if (cVar2 == '\0') {
        return;
      }
    }
    pUVar16 = (__this_03->fields).SelectListPopup;
    if (pUVar16 != (UI_SelectListPopup_o *)0x0) {
      pUVar16 = (UI_SelectListPopup_o *)(pUVar16->fields).killPopupKeyframesOut;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar15 = (long *)pUVar16;
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      if (pUVar16 != (UI_SelectListPopup_o *)0x0) {
        routine = UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange
                            ((UI_CharacterEditorCostumePanel_o *)pUVar16,(MethodInfo *)0x0);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this_03,routine,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar16 = (UI_SelectListPopup_o *)plVar15;
  if (g_data_057ae1a3 == '\0') {
    pUVar16 = (UI_SelectListPopup_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1a3 = '\x01';
  }
  pSVar5 = (((UI_SelectListPopup_o *)plVar15)->fields)._staticTransforms;
  if ((pSVar5 != (System_Collections_Generic_HashSet_Transform__o *)0x0) &&
     (pSVar12 = (((UI_SelectListPopup_o *)plVar15)->fields).killPopupKeyframesIn,
     pSVar12 != (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0)) {
    plVar15 = *(long **)&(pSVar5->fields)._version;
    pUVar16 = (UI_SelectListPopup_o *)0x0;
    if (plVar15 != (long *)0x0) {
      uVar6._0_4_ = (pSVar12->fields)._size;
      uVar6._4_4_ = (pSVar12->fields)._version;
      *(undefined4 *)(plVar15 + 5) = 1;
      auVar19 = (**(code **)(*plVar15 + 0x198))(plVar15,uVar6,*(undefined8 *)(*plVar15 + 0x1a0));
      if ((Characters_AnimationHandler_o *)plVar15[4] != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__CrossFade
                  ((Characters_AnimationHandler_o *)plVar15[4],auVar19._0_8_,0.1,0.0,auVar19._8_8_);
        if ((Characters_AnimationHandler_o *)plVar15[4] != (Characters_AnimationHandler_o *)0x0) {
          fVar17 = Characters_AnimationHandler__GetLength
                             ((Characters_AnimationHandler_o *)plVar15[4],auVar19._0_8_,method_00);
          *(float *)((long)plVar15 + 0x2c) = fVar17;
          return;
        }
      }
      __this_04 = (UnityEngine_MonoBehaviour_o *)0x0;
      il2cpp_runtime_helper_022b2c90();
      if (*(int *)&__this_04[1].monitor != 0) {
        fVar17 = *(float *)((long)&__this_04[1].monitor + 4);
        fVar18 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        fVar17 = fVar17 - fVar18;
        *(float *)((long)&__this_04[1].monitor + 4) = fVar17;
        if (fVar17 <= 0.0) {
          *(undefined4 *)&__this_04[1].monitor = 0;
          __this_00 = __this_04[1].klass;
          auVar19 = (*(code *)__this_04->klass[1]._1.name)();
          if (__this_00 == (UnityEngine_MonoBehaviour_c *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            UnityEngine_MonoBehaviour___ctor(__this_04,(MethodInfo *)0x0);
            return;
          }
          Characters_AnimationHandler__CrossFade
                    ((Characters_AnimationHandler_o *)__this_00,auVar19._0_8_,0.1,0.0,auVar19._8_8_);
          return;
        }
      }
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&"Salute");
    g_data_057ae1a4 = '\x01';
  }
  pSVar12 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting)
  ;
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)pSVar12,(System_String_o *)"Salute",0x7fffffff,(MethodInfo *)0x0)
  ;
  (pUVar16->fields).killPopupKeyframesIn = pSVar12;
  il2cpp_runtime_helper_022b4080(&(pUVar16->fields).killPopupKeyframesIn);
  UI_CharacterEditorCategoryPanel___ctor((UI_CharacterEditorCategoryPanel_o *)pUVar16,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorHumanCategoryPanel$$OnWeaponChanged
// il2cpp: void UI_CharacterEditorHumanCategoryPanel__OnWeaponChanged (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x43612b0

void UI_CharacterEditorHumanCategoryPanel__OnWeaponChanged
               (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  char cVar1;
  Characters_AnimationHandler_o *pCVar2;
  UnityEngine_MonoBehaviour_c *__this_00;
  UI_SetNamePopup_o *pUVar3;
  System_Collections_Generic_List_BasePopup__o *pSVar4;
  System_Threading_CancellationTokenSource_o *pSVar5;
  bool_conflict bVar6;
  System_Collections_IEnumerator_o *routine;
  GameManagers_CharacterEditorGameManager_o *pGVar7;
  MethodInfo *method_00;
  UnityEngine_MonoBehaviour_o *__this_01;
  long *plVar8;
  UI_CharacterEditorHumanMenu_o *pUVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  if (g_data_057ae1a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae1a2 = '\x01';
  }
  plVar8 = (long *)(__this->fields)._menu;
  if ((UI_CharacterEditorHumanMenu_o *)plVar8 != (UI_CharacterEditorHumanMenu_o *)0x0) {
    (*(((UI_CharacterEditorCostumePanel_c *)((UI_CharacterEditorHumanMenu_o *)plVar8)->klass)->vtable).
      _9_get_VerticalPadding.methodPtr)
              (plVar8,1,(((UI_CharacterEditorCostumePanel_c *)((UI_CharacterEditorHumanMenu_o *)plVar8)->klass
                         )->vtable)._9_get_VerticalPadding.method);
    if (g_data_057ae187 == '\0') {
      plVar8 = &TypeInfo_CharacterEditorSkinsPanel;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae187 = '\x01';
    }
    if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
      if (g_data_057ae188 == '\0') {
        plVar8 = &TypeInfo_CharacterEditorSkinsPanel;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae188 = '\x01';
        cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
      }
      else {
        cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
      }
      if (cVar1 == '\0') {
        return;
      }
    }
    pUVar9 = (__this->fields)._menu;
    if (pUVar9 != (UI_CharacterEditorHumanMenu_o *)0x0) {
      pUVar9 = (UI_CharacterEditorHumanMenu_o *)(pUVar9->fields)._costumePanel;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar8 = (long *)pUVar9;
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      if (pUVar9 != (UI_CharacterEditorHumanMenu_o *)0x0) {
        routine = UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange
                            ((UI_CharacterEditorCostumePanel_o *)pUVar9,(MethodInfo *)0x0);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = (UI_CharacterEditorHumanMenu_o *)plVar8;
  if (g_data_057ae1a3 == '\0') {
    pUVar9 = (UI_CharacterEditorHumanMenu_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1a3 = '\x01';
  }
  pUVar3 = (((UI_CharacterEditorHumanMenu_o *)plVar8)->fields).SetNamePopup;
  if ((pUVar3 != (UI_SetNamePopup_o *)0x0) &&
     (pGVar7 = (((UI_CharacterEditorHumanMenu_o *)plVar8)->fields)._gameManager,
     pGVar7 != (GameManagers_CharacterEditorGameManager_o *)0x0)) {
    pSVar4 = (pUVar3->fields)._popups;
    pUVar9 = (UI_CharacterEditorHumanMenu_o *)0x0;
    if (pSVar4 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
      pSVar5 = (pGVar7->fields).m_CancellationTokenSource;
      *(undefined4 *)&pSVar4[1].klass = 1;
      auVar12 = (*(pSVar4->klass->vtable)._6_IndexOf.methodPtr)
                          (pSVar4,pSVar5,(pSVar4->klass->vtable)._6_IndexOf.method);
      pCVar2 = (Characters_AnimationHandler_o *)(pSVar4->fields)._syncRoot;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__CrossFade(pCVar2,auVar12._0_8_,0.1,0.0,auVar12._8_8_);
        pCVar2 = (Characters_AnimationHandler_o *)(pSVar4->fields)._syncRoot;
        if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
          fVar10 = Characters_AnimationHandler__GetLength(pCVar2,auVar12._0_8_,method_00);
          *(float *)((long)&pSVar4[1].klass + 4) = fVar10;
          return;
        }
      }
      __this_01 = (UnityEngine_MonoBehaviour_o *)0x0;
      il2cpp_runtime_helper_022b2c90();
      if (*(int *)&__this_01[1].monitor != 0) {
        fVar10 = *(float *)((long)&__this_01[1].monitor + 4);
        fVar11 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        fVar10 = fVar10 - fVar11;
        *(float *)((long)&__this_01[1].monitor + 4) = fVar10;
        if (fVar10 <= 0.0) {
          *(undefined4 *)&__this_01[1].monitor = 0;
          __this_00 = __this_01[1].klass;
          auVar12 = (*(code *)__this_01->klass[1]._1.name)();
          if (__this_00 != (UnityEngine_MonoBehaviour_c *)0x0) {
            Characters_AnimationHandler__CrossFade
                      ((Characters_AnimationHandler_o *)__this_00,auVar12._0_8_,0.1,0.0,auVar12._8_8_);
            return;
          }
          il2cpp_runtime_helper_022b2c90();
          UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
          return;
        }
      }
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&"Salute");
    g_data_057ae1a4 = '\x01';
  }
  pGVar7 = (GameManagers_CharacterEditorGameManager_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)pGVar7,"Salute",0x7fffffff,(MethodInfo *)0x0);
  (pUVar9->fields)._gameManager = pGVar7;
  il2cpp_runtime_helper_022b4080(&(pUVar9->fields)._gameManager);
  UI_CharacterEditorCategoryPanel___ctor((UI_CharacterEditorCategoryPanel_o *)pUVar9,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorHumanCategoryPanel$$OnEmote
// il2cpp: void UI_CharacterEditorHumanCategoryPanel__OnEmote (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x43613d0

void UI_CharacterEditorHumanCategoryPanel__OnEmote
               (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  UnityEngine_MonoBehaviour_c *__this_00;
  GameManagers_CharacterEditorGameManager_o *pGVar2;
  Characters_DummyCharacter_o *pCVar3;
  System_String_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  MethodInfo *method_00;
  UnityEngine_MonoBehaviour_o *__this_01;
  UI_CharacterEditorHumanCategoryPanel_o *__this_02;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  __this_02 = __this;
  if (g_data_057ae1a3 == '\0') {
    __this_02 = (UI_CharacterEditorHumanCategoryPanel_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1a3 = '\x01';
  }
  pGVar2 = (__this->fields)._gameManager;
  if (((pGVar2 != (GameManagers_CharacterEditorGameManager_o *)0x0) &&
      (pSVar5 = (__this->fields)._emote, pSVar5 != (Settings_StringSetting_o *)0x0)) &&
     (pCVar3 = (pGVar2->fields).Character, __this_02 = (UI_CharacterEditorHumanCategoryPanel_o *)0x0,
     pCVar3 != (Characters_DummyCharacter_o *)0x0)) {
    pSVar4 = (pSVar5->fields)._value;
    (pCVar3->fields).State = 1;
    auVar8 = (*(pCVar3->klass->vtable)._6_GetEmoteAnimation.methodPtr)
                       (pCVar3,pSVar4,(pCVar3->klass->vtable)._6_GetEmoteAnimation.method);
    pCVar1 = (pCVar3->fields).Animation;
    if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__CrossFade(pCVar1,auVar8._0_8_,0.1,0.0,auVar8._8_8_);
      pCVar1 = (pCVar3->fields).Animation;
      if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
        fVar6 = Characters_AnimationHandler__GetLength(pCVar1,auVar8._0_8_,method_00);
        (pCVar3->fields)._stateTimeLeft = fVar6;
        return;
      }
    }
    __this_01 = (UnityEngine_MonoBehaviour_o *)0x0;
    il2cpp_runtime_helper_022b2c90();
    if (*(int *)&__this_01[1].monitor != 0) {
      fVar6 = *(float *)((long)&__this_01[1].monitor + 4);
      fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar6 = fVar6 - fVar7;
      *(float *)((long)&__this_01[1].monitor + 4) = fVar6;
      if (fVar6 <= 0.0) {
        *(undefined4 *)&__this_01[1].monitor = 0;
        __this_00 = __this_01[1].klass;
        auVar8 = (*(code *)__this_01->klass[1]._1.name)();
        if (__this_00 != (UnityEngine_MonoBehaviour_c *)0x0) {
          Characters_AnimationHandler__CrossFade
                    ((Characters_AnimationHandler_o *)__this_00,auVar8._0_8_,0.1,0.0,auVar8._8_8_);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&"Salute");
    g_data_057ae1a4 = '\x01';
  }
  pSVar5 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar5,"Salute",0x7fffffff,(MethodInfo *)0x0);
  (__this_02->fields)._emote = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._emote);
  UI_CharacterEditorCategoryPanel___ctor((UI_CharacterEditorCategoryPanel_o *)__this_02,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorHumanCategoryPanel$$.ctor
// il2cpp: void UI_CharacterEditorHumanCategoryPanel___ctor (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x4361430

void UI_CharacterEditorHumanCategoryPanel___ctor
               (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  
  if (g_data_057ae1a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&"Salute");
    g_data_057ae1a4 = '\x01';
  }
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_00,"Salute",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._emote = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._emote);
  UI_CharacterEditorCategoryPanel___ctor((UI_CharacterEditorCategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorHumanCategoryPanel$$<Setup>b__6_0
// il2cpp: void UI_CharacterEditorHumanCategoryPanel___Setup_b__6_0 (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x43614c0

void UI_CharacterEditorHumanCategoryPanel___Setup_b__6_0
               (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  char cVar1;
  Characters_AnimationHandler_o *pCVar2;
  UnityEngine_MonoBehaviour_c *__this_00;
  UI_SetNamePopup_o *pUVar3;
  System_Collections_Generic_List_BasePopup__o *pSVar4;
  System_Threading_CancellationTokenSource_o *pSVar5;
  bool_conflict bVar6;
  System_Collections_IEnumerator_o *routine;
  GameManagers_CharacterEditorGameManager_o *pGVar7;
  MethodInfo *method_00;
  UnityEngine_MonoBehaviour_o *__this_01;
  long *plVar8;
  UI_CharacterEditorHumanMenu_o *pUVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  if (g_data_057ae1a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae1a2 = '\x01';
  }
  plVar8 = (long *)(__this->fields)._menu;
  if ((UI_CharacterEditorHumanMenu_o *)plVar8 != (UI_CharacterEditorHumanMenu_o *)0x0) {
    (*(((UI_CharacterEditorCostumePanel_c *)((UI_CharacterEditorHumanMenu_o *)plVar8)->klass)->vtable).
      _9_get_VerticalPadding.methodPtr)
              (plVar8,1,(((UI_CharacterEditorCostumePanel_c *)((UI_CharacterEditorHumanMenu_o *)plVar8)->klass
                         )->vtable)._9_get_VerticalPadding.method);
    if (g_data_057ae187 == '\0') {
      plVar8 = &TypeInfo_CharacterEditorSkinsPanel;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae187 = '\x01';
    }
    if (**(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) == '\0') {
      if (g_data_057ae188 == '\0') {
        plVar8 = &TypeInfo_CharacterEditorSkinsPanel;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae188 = '\x01';
        cVar1 = *(char *)(*(long *)(TypeInfo_CharacterEditorSkinsPanel + 0xb8) + 1);
      }
      else {
        cVar1 = (*(char **)(TypeInfo_CharacterEditorSkinsPanel + 0xb8))[1];
      }
      if (cVar1 == '\0') {
        return;
      }
    }
    pUVar9 = (__this->fields)._menu;
    if (pUVar9 != (UI_CharacterEditorHumanMenu_o *)0x0) {
      pUVar9 = (UI_CharacterEditorHumanMenu_o *)(pUVar9->fields)._costumePanel;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar8 = (long *)pUVar9;
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      if (pUVar9 != (UI_CharacterEditorHumanMenu_o *)0x0) {
        routine = UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange
                            ((UI_CharacterEditorCostumePanel_o *)pUVar9,(MethodInfo *)0x0);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar9 = (UI_CharacterEditorHumanMenu_o *)plVar8;
  if (g_data_057ae1a3 == '\0') {
    pUVar9 = (UI_CharacterEditorHumanMenu_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1a3 = '\x01';
  }
  pUVar3 = (((UI_CharacterEditorHumanMenu_o *)plVar8)->fields).SetNamePopup;
  if ((pUVar3 != (UI_SetNamePopup_o *)0x0) &&
     (pGVar7 = (((UI_CharacterEditorHumanMenu_o *)plVar8)->fields)._gameManager,
     pGVar7 != (GameManagers_CharacterEditorGameManager_o *)0x0)) {
    pSVar4 = (pUVar3->fields)._popups;
    pUVar9 = (UI_CharacterEditorHumanMenu_o *)0x0;
    if (pSVar4 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
      pSVar5 = (pGVar7->fields).m_CancellationTokenSource;
      *(undefined4 *)&pSVar4[1].klass = 1;
      auVar12 = (*(pSVar4->klass->vtable)._6_IndexOf.methodPtr)
                          (pSVar4,pSVar5,(pSVar4->klass->vtable)._6_IndexOf.method);
      pCVar2 = (Characters_AnimationHandler_o *)(pSVar4->fields)._syncRoot;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__CrossFade(pCVar2,auVar12._0_8_,0.1,0.0,auVar12._8_8_);
        pCVar2 = (Characters_AnimationHandler_o *)(pSVar4->fields)._syncRoot;
        if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
          fVar10 = Characters_AnimationHandler__GetLength(pCVar2,auVar12._0_8_,method_00);
          *(float *)((long)&pSVar4[1].klass + 4) = fVar10;
          return;
        }
      }
      __this_01 = (UnityEngine_MonoBehaviour_o *)0x0;
      il2cpp_runtime_helper_022b2c90();
      if (*(int *)&__this_01[1].monitor != 0) {
        fVar10 = *(float *)((long)&__this_01[1].monitor + 4);
        fVar11 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        fVar10 = fVar10 - fVar11;
        *(float *)((long)&__this_01[1].monitor + 4) = fVar10;
        if (fVar10 <= 0.0) {
          *(undefined4 *)&__this_01[1].monitor = 0;
          __this_00 = __this_01[1].klass;
          auVar12 = (*(code *)__this_01->klass[1]._1.name)();
          if (__this_00 != (UnityEngine_MonoBehaviour_c *)0x0) {
            Characters_AnimationHandler__CrossFade
                      ((Characters_AnimationHandler_o *)__this_00,auVar12._0_8_,0.1,0.0,auVar12._8_8_);
            return;
          }
          il2cpp_runtime_helper_022b2c90();
          UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
          return;
        }
      }
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae1a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&"Salute");
    g_data_057ae1a4 = '\x01';
  }
  pGVar7 = (GameManagers_CharacterEditorGameManager_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)pGVar7,"Salute",0x7fffffff,(MethodInfo *)0x0);
  (pUVar9->fields)._gameManager = pGVar7;
  il2cpp_runtime_helper_022b4080(&(pUVar9->fields)._gameManager);
  UI_CharacterEditorCategoryPanel___ctor((UI_CharacterEditorCategoryPanel_o *)pUVar9,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorHumanCategoryPanel$$<Setup>b__6_1
// il2cpp: void UI_CharacterEditorHumanCategoryPanel___Setup_b__6_1 (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x43614d0

void UI_CharacterEditorHumanCategoryPanel___Setup_b__6_1
               (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  UnityEngine_MonoBehaviour_c *__this_00;
  GameManagers_CharacterEditorGameManager_o *pGVar2;
  Settings_StringSetting_o *pSVar3;
  Characters_DummyCharacter_o *pCVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  UnityEngine_MonoBehaviour_o *__this_01;
  UI_CharacterEditorHumanCategoryPanel_o *__this_02;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  __this_02 = __this;
  if (g_data_057ae1a3 == '\0') {
    __this_02 = (UI_CharacterEditorHumanCategoryPanel_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae1a3 = '\x01';
  }
  pGVar2 = (__this->fields)._gameManager;
  if (((pGVar2 != (GameManagers_CharacterEditorGameManager_o *)0x0) &&
      (pSVar3 = (__this->fields)._emote, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (pCVar4 = (pGVar2->fields).Character, __this_02 = (UI_CharacterEditorHumanCategoryPanel_o *)0x0,
     pCVar4 != (Characters_DummyCharacter_o *)0x0)) {
    pSVar5 = (pSVar3->fields)._value;
    (pCVar4->fields).State = 1;
    auVar8 = (*(pCVar4->klass->vtable)._6_GetEmoteAnimation.methodPtr)
                       (pCVar4,pSVar5,(pCVar4->klass->vtable)._6_GetEmoteAnimation.method);
    pCVar1 = (pCVar4->fields).Animation;
    if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__CrossFade(pCVar1,auVar8._0_8_,0.1,0.0,auVar8._8_8_);
      pCVar1 = (pCVar4->fields).Animation;
      if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
        fVar6 = Characters_AnimationHandler__GetLength(pCVar1,auVar8._0_8_,method_00);
        (pCVar4->fields)._stateTimeLeft = fVar6;
        return;
      }
    }
    __this_01 = (UnityEngine_MonoBehaviour_o *)0x0;
    il2cpp_runtime_helper_022b2c90();
    if (*(int *)&__this_01[1].monitor != 0) {
      fVar6 = *(float *)((long)&__this_01[1].monitor + 4);
      fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar6 = fVar6 - fVar7;
      *(float *)((long)&__this_01[1].monitor + 4) = fVar6;
      if (fVar6 <= 0.0) {
        *(undefined4 *)&__this_01[1].monitor = 0;
        __this_00 = __this_01[1].klass;
        auVar8 = (*(code *)__this_01->klass[1]._1.name)();
        if (__this_00 != (UnityEngine_MonoBehaviour_c *)0x0) {
          Characters_AnimationHandler__CrossFade
                    ((Characters_AnimationHandler_o *)__this_00,auVar8._0_8_,0.1,0.0,auVar8._8_8_);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UI_CharacterEditorMenu__Setup((UI_CharacterEditorMenu_o *)__this_02,method);
  return;
}


