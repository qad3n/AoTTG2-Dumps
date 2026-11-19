// Type: UI.CharacterEditorHumanCategoryPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/CharacterEditorHumanCategoryPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorHumanCategoryPanel.cs
// --------------------------------

// UI.CharacterEditorHumanCategoryPanel.<>c$$.cctor
// il2cpp: void UI_CharacterEditorHumanCategoryPanel___c___cctor (const MethodInfo* method);
// 0x5cd4e10

void UI_CharacterEditorHumanCategoryPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547ba6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorHumanCategoryPanel_c);
    Il2CppMethodInitialized_07547ba6 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CharacterEditorHumanCategoryPanel_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_CharacterEditorHumanCategoryPanel_c->static_fields->__9 =
       (UI_CharacterEditorHumanCategoryPanel___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_CharacterEditorHumanCategoryPanel_c->static_fields->__9);
  return;
}


// UI.CharacterEditorHumanCategoryPanel.<>c$$.ctor
// il2cpp: void UI_CharacterEditorHumanCategoryPanel___c___ctor (UI_CharacterEditorHumanCategoryPanel___c_o* __this, const MethodInfo* method);
// 0x5cd4e80

void UI_CharacterEditorHumanCategoryPanel___c___ctor
               (UI_CharacterEditorHumanCategoryPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorHumanCategoryPanel.<>c$$<Setup>b__6_1
// il2cpp: System_String_o* UI_CharacterEditorHumanCategoryPanel___c___Setup_b__6_1 (UI_CharacterEditorHumanCategoryPanel___c_o* __this, System_String_o* weapon, const MethodInfo* method);
// 0x5cd4e90

System_String_o *
UI_CharacterEditorHumanCategoryPanel___c___Setup_b__6_1
          (UI_CharacterEditorHumanCategoryPanel___c_o *__this,System_String_o *weapon,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547ba7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Loadout");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547ba7 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("CharacterPopup","Loadout",weapon,"",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorHumanCategoryPanel$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorHumanCategoryPanel__get_Title (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x5cd4260

System_String_o *
UI_CharacterEditorHumanCategoryPanel__get_Title
          (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547ba1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Editor");
    Il2CppMethodInitialized_07547ba1 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Editor",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorHumanCategoryPanel$$get_Height
// il2cpp: float UI_CharacterEditorHumanCategoryPanel__get_Height (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x5cd42c0

float UI_CharacterEditorHumanCategoryPanel__get_Height
                (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  return 340.0;
}


// UI.CharacterEditorHumanCategoryPanel$$Setup
// il2cpp: void UI_CharacterEditorHumanCategoryPanel__Setup (UI_CharacterEditorHumanCategoryPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cd42d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cd44ea: lea rdi, [rbp + 0x90]
// asm:   0x5cd44f1: jmp 0x5cd451d

void UI_CharacterEditorHumanCategoryPanel__Setup
               (UI_CharacterEditorHumanCategoryPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  Settings_IntSetting_o *setting;
  Il2CppObject *object;
  Settings_StringSetting_o *setting_00;
  UI_CharacterEditorHumanMenu_c *pUVar4;
  System_String_o *tooltip;
  System_String_o *subCategory;
  System_String_o *pSVar5;
  UI_ElementStyle_o *__this_01;
  System_String_o *title;
  System_String_array *pSVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  UI_CharacterEditorHumanCategoryPanel___c_StaticFields *pUVar8;
  System_Func_string__string__o *pSVar9;
  UI_CharacterEditorHumanMenu_o *pUVar10;
  MethodInfo *in_stack_ffffffffffffff88;
  
  if (Il2CppMethodInitialized_07547ba2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorHumanCategoryPanel_Setup_b__6_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterEditorHumanCategoryPanel_Setup_b__6_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorHumanMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_EmoteHandler_ActionLabel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CharacterEditorHumanCategoryPanel_c_Setup_b__6_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorHumanCategoryPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Wave");
    il2cpp_codegen_initialize_runtime_metadata(&"Preview");
    il2cpp_codegen_initialize_runtime_metadata(&"Weapon");
    il2cpp_codegen_initialize_runtime_metadata(&"Blade");
    il2cpp_codegen_initialize_runtime_metadata(&"Shake");
    il2cpp_codegen_initialize_runtime_metadata(&"Nod");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterEditor");
    il2cpp_codegen_initialize_runtime_metadata(&"Eat");
    il2cpp_codegen_initialize_runtime_metadata(&"Emote");
    il2cpp_codegen_initialize_runtime_metadata(&"Dance");
    il2cpp_codegen_initialize_runtime_metadata(&"APG");
    il2cpp_codegen_initialize_runtime_metadata(&"Salute");
    il2cpp_codegen_initialize_runtime_metadata(&"AHSS");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    il2cpp_codegen_initialize_runtime_metadata(&"Flip");
    Il2CppMethodInitialized_07547ba2 = '\x01';
  }
  UI_CharacterEditorCategoryPanel__Setup((UI_CharacterEditorCategoryPanel_o *)__this,parent,(MethodInfo *)0x0)
  ;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar10 = (UI_CharacterEditorHumanMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar10 != (UI_CharacterEditorHumanMenu_o *)0x0) goto label_05cd4490;
label_05cd450b:
    (__this->fields)._menu = (UI_CharacterEditorHumanMenu_o *)0x0;
  }
  else {
    pUVar10 = (UI_CharacterEditorHumanMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar10 == (UI_CharacterEditorHumanMenu_o *)0x0) goto label_05cd450b;
label_05cd4490:
    pUVar4 = TypeInfo_UI_CharacterEditorHumanMenu;
    bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
    if (((pUVar10->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
label_05cd49fe:
      il2cpp_codegen_raise_invalid_cast_exception(pUVar10,pUVar4);
    }
    (__this->fields)._menu = pUVar10;
    if (((pUVar10->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pUVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pUVar4)) goto label_05cd49fe;
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu);
  pSVar5 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,95.0,20.0,pSVar5,(MethodInfo *)0x0);
  subCategory = "Preview";
  pSVar5 = "CharacterEditor";
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
     (__this_00 = (pSVar2->fields).CustomSets,
     __this_00 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
    Settings_SetSettingsContainer_object___GetSelectedSet
              ((Settings_SetSettingsContainer_T__o *)__this_00,
               (MethodInfo_40477A0 *)MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    pUVar10 = (__this->fields)._menu;
    if (pUVar10 != (UI_CharacterEditorHumanMenu_o *)0x0) {
      pUVar3 = (__this->fields).SinglePanel;
      setting = (pUVar10->fields).Weapon;
      title = UI_UIManager__GetLocale
                        (pSVar5,subCategory,"Weapon","","",
                         (MethodInfo *)0x0);
      pSVar6 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
      if (pSVar6 != (System_String_array *)0x0) {
        if ((int)pSVar6->max_length != 0) {
          pSVar6->m_Items[0] = "Blade";
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items);
          if ((pSVar6->max_length & 0xfffffffe) != 0) {
            pSVar6->m_Items[1] = "AHSS";
            Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1);
            if (2 < (uint)pSVar6->max_length) {
              pSVar6->m_Items[2] = "Thunderspear";
              Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 2);
              if ((pSVar6->max_length & 0xfffffffc) != 0) {
                pSVar6->m_Items[3] = "APG";
                Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 3);
                pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                UnityEngine_Events_UnityAction___ctor
                          (pUVar7,(Il2CppObject *)__this,
                           (intptr_t)MethodInfo_UI_CharacterEditorHumanCategoryPanel_Setup_b__6_0,
                           (MethodInfo *)0x0);
                if ((TypeInfo_UI_CharacterEditorHumanCategoryPanel_c->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_UI_CharacterEditorHumanCategoryPanel_c);
                }
                tooltip = "";
                pUVar8 = TypeInfo_UI_CharacterEditorHumanCategoryPanel_c->static_fields;
                pSVar9 = pUVar8->__9__6_1;
                if (pSVar9 == (System_Func_string__string__o *)0x0) {
                  if ((TypeInfo_UI_CharacterEditorHumanCategoryPanel_c->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_UI_CharacterEditorHumanCategoryPanel_c);
                    pUVar8 = TypeInfo_UI_CharacterEditorHumanCategoryPanel_c->static_fields;
                  }
                  object = (Il2CppObject *)pUVar8->__9;
                  pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
                  System_Func_object__object____ctor
                            ((System_Func_object__object__o *)pSVar9,object,
                             (intptr_t)MethodInfo_UI_CharacterEditorHumanCategoryPanel_c_Setup_b__6_1,
                             (MethodInfo_4F19B50 *)0x0);
                  pUVar8 = TypeInfo_UI_CharacterEditorHumanCategoryPanel_c->static_fields;
                  pUVar8->__9__6_1 = pSVar9;
                  Il2CppCodeGenWriteBarrier(&pUVar8->__9__6_1);
                }
                UI_ElementFactory__CreateDropdownSetting
                          (pUVar3,__this_01,(Settings_BaseSetting_o *)setting,title,pSVar6,tooltip,160.0,40.0,
                           300.0,(System_Nullable_float__o)0x0,pUVar7,(System_Int32_array *)0x0,pSVar9,
                           in_stack_ffffffffffffff88);
                pSVar6 = (System_String_array *)SZArrayNew(TypeInfo_string_array,7);
                if (pSVar6 == (System_String_array *)0x0) goto label_05cd49f9;
                if ((int)pSVar6->max_length != 0) {
                  pSVar6->m_Items[0] = "Salute";
                  Il2CppCodeGenWriteBarrier(pSVar6->m_Items);
                  if ((pSVar6->max_length & 0xfffffffe) != 0) {
                    pSVar6->m_Items[1] = "Wave";
                    Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1);
                    if (2 < (uint)pSVar6->max_length) {
                      pSVar6->m_Items[2] = "Nod";
                      Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 2);
                      if ((pSVar6->max_length & 0xfffffffc) != 0) {
                        pSVar6->m_Items[3] = "Shake";
                        Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 3);
                        if (4 < (uint)pSVar6->max_length) {
                          pSVar6->m_Items[4] = "Dance";
                          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 4);
                          if (5 < (uint)pSVar6->max_length) {
                            pSVar6->m_Items[5] = "Eat";
                            Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 5);
                            if (6 < (uint)pSVar6->max_length) {
                              pSVar6->m_Items[6] = "Flip";
                              Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 6);
                              pUVar3 = (__this->fields).SinglePanel;
                              setting_00 = (__this->fields)._emote;
                              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                              }
                              pSVar5 = UI_UIManager__GetLocale
                                                 (pSVar5,subCategory,"Emote",
                                                  "","",
                                                  (MethodInfo *)0x0);
                              pSVar9 = il2cpp_codegen_object_new
                                                 ((Il2CppClass *)TypeInfo_System_Func_string_string);
                              System_Func_object__object____ctor
                                        ((System_Func_object__object__o *)pSVar9,(Il2CppObject *)0x0,
                                         (intptr_t)MethodInfo_UI_EmoteHandler_ActionLabel,
                                         (MethodInfo_4F19B50 *)0x0);
                              pUVar7 = il2cpp_codegen_object_new
                                                 ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                              UnityEngine_Events_UnityAction___ctor
                                        (pUVar7,(Il2CppObject *)__this,
                                         (intptr_t)
                                         MethodInfo_UI_CharacterEditorHumanCategoryPanel_Setup_b__6_2,
                                         (MethodInfo *)0x0);
                              UI_ElementFactory__CreateDropdownSetting
                                        (pUVar3,__this_01,(Settings_BaseSetting_o *)setting_00,pSVar5,pSVar6,
                                         "",160.0,40.0,300.0,(System_Nullable_float__o)0x0,
                                         pUVar7,(System_Int32_array *)0x0,pSVar9,in_stack_ffffffffffffff88);
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
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_05cd49f9:
  ThrowNullReferenceException();
}


// UI.CharacterEditorHumanCategoryPanel$$OnWeaponChanged
// il2cpp: void UI_CharacterEditorHumanCategoryPanel__OnWeaponChanged (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x5cd4b90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cd4c19: jmp 0x5cd4c98

void UI_CharacterEditorHumanCategoryPanel__OnWeaponChanged
               (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  char cVar1;
  UI_CharacterEditorHumanMenu_o *pUVar2;
  UI_CharacterEditorCostumePanel_o *__this_00;
  bool bVar3;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_07547ba3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547ba3 = '\x01';
  }
  pUVar2 = (__this->fields)._menu;
  if (pUVar2 != (UI_CharacterEditorHumanMenu_o *)0x0) {
    (*(pUVar2->klass->vtable)._10_ResetCharacter.methodPtr)
              (pUVar2,true,(pUVar2->klass->vtable)._10_ResetCharacter.method);
    if (Il2CppMethodInitialized_07547b84 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
      Il2CppMethodInitialized_07547b84 = '\x01';
    }
    if (TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview == false) {
      if (Il2CppMethodInitialized_07547b85 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
        Il2CppMethodInitialized_07547b85 = '\x01';
        cVar1 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview;
      }
      else {
        cVar1 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview;
      }
      if (cVar1 == '\0') {
        return;
      }
    }
    pUVar2 = (__this->fields)._menu;
    if (pUVar2 != (UI_CharacterEditorHumanMenu_o *)0x0) {
      __this_00 = (pUVar2->fields)._costumePanel;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      if (__this_00 != (UI_CharacterEditorCostumePanel_o *)0x0) {
        routine = UI_CharacterEditorCostumePanel__ApplySkinPreviewAfterCostumeChange
                            (__this_00,(MethodInfo *)0x0);
        UnityEngine_MonoBehaviour__StartCoroutine_691c390
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.CharacterEditorHumanCategoryPanel$$OnEmote
// il2cpp: void UI_CharacterEditorHumanCategoryPanel__OnEmote (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x5cd4cb0

void UI_CharacterEditorHumanCategoryPanel__OnEmote
               (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  GameManagers_CharacterEditorGameManager_o *pGVar1;
  Settings_StringSetting_o *pSVar2;
  Characters_DummyCharacter_o *__this_00;
  
  if (Il2CppMethodInitialized_07547ba4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547ba4 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 == (GameManagers_CharacterEditorGameManager_o *)0x0) ||
      (pSVar2 = (__this->fields)._emote, pSVar2 == (Settings_StringSetting_o *)0x0)) ||
     (__this_00 = (pGVar1->fields).Character, __this_00 == (Characters_DummyCharacter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Characters_DummyCharacter__EmoteAction(__this_00,(pSVar2->fields)._value,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorHumanCategoryPanel$$.ctor
// il2cpp: void UI_CharacterEditorHumanCategoryPanel___ctor (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x5cd4d10

void UI_CharacterEditorHumanCategoryPanel___ctor
               (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_07547ba5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"Salute");
    Il2CppMethodInitialized_07547ba5 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(__this_00,"Salute",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._emote = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._emote);
  UI_CharacterEditorCategoryPanel___ctor((UI_CharacterEditorCategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorHumanCategoryPanel$$<Setup>b__6_0
// il2cpp: void UI_CharacterEditorHumanCategoryPanel___Setup_b__6_0 (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x5cd4da0

void UI_CharacterEditorHumanCategoryPanel___Setup_b__6_0
               (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  UI_CharacterEditorHumanCategoryPanel__OnWeaponChanged(__this,method);
  return;
}


// UI.CharacterEditorHumanCategoryPanel$$<Setup>b__6_2
// il2cpp: void UI_CharacterEditorHumanCategoryPanel___Setup_b__6_2 (UI_CharacterEditorHumanCategoryPanel_o* __this, const MethodInfo* method);
// 0x5cd4db0

void UI_CharacterEditorHumanCategoryPanel___Setup_b__6_2
               (UI_CharacterEditorHumanCategoryPanel_o *__this,MethodInfo *method)

{
  GameManagers_CharacterEditorGameManager_o *pGVar1;
  Settings_StringSetting_o *pSVar2;
  Characters_DummyCharacter_o *__this_00;
  
  if (Il2CppMethodInitialized_07547ba4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547ba4 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 == (GameManagers_CharacterEditorGameManager_o *)0x0) ||
      (pSVar2 = (__this->fields)._emote, pSVar2 == (Settings_StringSetting_o *)0x0)) ||
     (__this_00 = (pGVar1->fields).Character, __this_00 == (Characters_DummyCharacter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Characters_DummyCharacter__EmoteAction(__this_00,(pSVar2->fields)._value,(MethodInfo *)0x0);
  return;
}


