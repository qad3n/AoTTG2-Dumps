// Type: UI.CharacterShifterPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/CharacterShifterPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterShifterPanel.cs
// --------------------------------

// UI.CharacterShifterPanel.<>c$$.cctor
// il2cpp: void UI_CharacterShifterPanel___c___cctor (const MethodInfo* method);
// 0x5d07500

void UI_CharacterShifterPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547d2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterShifterPanel_c);
    Il2CppMethodInitialized_07547d2e = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CharacterShifterPanel_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_CharacterShifterPanel_c->static_fields->__9 = (UI_CharacterShifterPanel___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_CharacterShifterPanel_c->static_fields->__9);
  return;
}


// UI.CharacterShifterPanel.<>c$$.ctor
// il2cpp: void UI_CharacterShifterPanel___c___ctor (UI_CharacterShifterPanel___c_o* __this, const MethodInfo* method);
// 0x5d07570

void UI_CharacterShifterPanel___c___ctor(UI_CharacterShifterPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterShifterPanel.<>c$$<Setup>b__0_0
// il2cpp: System_String_o* UI_CharacterShifterPanel___c___Setup_b__0_0 (UI_CharacterShifterPanel___c_o* __this, System_String_o* loadout, const MethodInfo* method);
// 0x5d07580

System_String_o *
UI_CharacterShifterPanel___c___Setup_b__0_0
          (UI_CharacterShifterPanel___c_o *__this,System_String_o *loadout,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547d2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/Shifters/Previews/");
    Il2CppMethodInitialized_07547d2f = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar1 = System_String__Concat_5301f10
                     (TypeInfo_Utility_ResourcePaths->static_fields->Characters,"/Shifters/Previews/",loadout,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterShifterPanel$$Setup
// il2cpp: void UI_CharacterShifterPanel__Setup (UI_CharacterShifterPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d06ff0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d0734d: jmp 0x5d07367

void UI_CharacterShifterPanel__Setup
               (UI_CharacterShifterPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameMiscSettings_o *pSVar4;
  Settings_InGameCharacterSettings_o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  Il2CppObject *object;
  UnityEngine_Transform_o *parent_00;
  Settings_IntSetting_o *pSVar7;
  System_String_o *subCategory;
  bool bVar8;
  UI_CharacterPopup_o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  System_String_o *pSVar9;
  UI_CharacterShifterPanel___c_StaticFields *pUVar10;
  System_Converter_TInput__TOutput__o *__this_02;
  System_Collections_Generic_List_TOutput__o *__this_03;
  System_String_o *pSVar11;
  System_String_array *pSVar12;
  System_String_array *icons;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar13;
  
  if (Il2CppMethodInitialized_07547d2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Converter_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ConvertAll_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterShifterPanel_c_Setup_b__0_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterShifterPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Character");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547d2d = '\x01';
  }
  UI_CharacterCategoryPanel__Setup((UI_CharacterCategoryPanel_o *)__this,parent,(MethodInfo *)0x0);
  subCategory = "General";
  pSVar11 = "CharacterPopup";
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (pSVar3 != (Settings_InGameSet_o *)0x0) {
    pSVar4 = (pSVar3->fields).Misc;
    pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
    __this_00 = UI_CharacterCategoryPanel__get_Popup((UI_CharacterCategoryPanel_o *)__this,(MethodInfo *)0x0);
    pMVar13 = extraout_RDX;
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
      pMVar13 = extraout_RDX_00;
    }
    if (((__this_00 != (UI_CharacterPopup_o *)0x0) &&
        (UI_CharacterPopup__RestoreChoices
                   (__this_00,TypeInfo_GameManagers_PlayerCharacter->static_fields->Shifter,pMVar13),
        pSVar5 != (Settings_InGameCharacterSettings_o *)0x0)) &&
       (pSVar6 = (pSVar5->fields).CharacterType, pSVar6 != (Settings_StringSetting_o *)0x0)) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar6,
                 (Il2CppObject *)TypeInfo_GameManagers_PlayerCharacter->static_fields->Shifter,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)__this_01,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      pSVar9 = "Eren";
      pMVar13 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar12 = (__this_01->fields)._items;
        if (pSVar12 != (System_String_array *)0x0) {
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pSVar12->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pSVar12->m_Items[(int)uVar2] = pSVar9;
            Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar9,
                       (MethodInfo_395D230 *)pMVar13->klass->rgctx_data[0xe].method);
          }
          pSVar9 = "Annie";
          pMVar13 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar12 = (__this_01->fields)._items;
          if (pSVar12 != (System_String_array *)0x0) {
            uVar2 = (__this_01->fields)._size;
            if (uVar2 < (uint)pSVar12->max_length) {
              (__this_01->fields)._size = uVar2 + 1;
              pSVar12->m_Items[(int)uVar2] = pSVar9;
              Il2CppCodeGenWriteBarrier(pSVar12->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar9,
                         (MethodInfo_395D230 *)pMVar13->klass->rgctx_data[0xe].method);
            }
            pSVar6 = (pSVar5->fields).Loadout;
            if (pSVar6 != (Settings_StringSetting_o *)0x0) {
              bVar8 = System_Collections_Generic_List_object___Contains
                                ((System_Collections_Generic_List_object__o *)__this_01,
                                 (Il2CppObject *)(pSVar6->fields)._value,
                                 (MethodInfo_395D6D0 *)
                                 MethodInfo_System_Collections_Generic_List_string_Contains);
              if (!bVar8) {
                pSVar6 = (pSVar5->fields).Loadout;
                pSVar9 = System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)__this_01,0,
                                    (MethodInfo_395CF20 *)
                                    MethodInfo_System_Collections_Generic_List_string_get_Item);
                if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_05d074e1;
                Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar9,
                           (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
              }
              if ((TypeInfo_UI_CharacterShifterPanel_c->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CharacterShifterPanel_c);
                pUVar10 = TypeInfo_UI_CharacterShifterPanel_c->static_fields;
                __this_02 = (System_Converter_TInput__TOutput__o *)pUVar10->__9__0_0;
              }
              else {
                pUVar10 = TypeInfo_UI_CharacterShifterPanel_c->static_fields;
                __this_02 = (System_Converter_TInput__TOutput__o *)pUVar10->__9__0_0;
              }
              if (__this_02 == (System_Converter_TInput__TOutput__o *)0x0) {
                if ((((Il2CppClass *)TypeInfo_UI_CharacterShifterPanel_c)->_2).cctor_finished_or_no_cctor == 0
                   ) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CharacterShifterPanel_c);
                  pUVar10 = TypeInfo_UI_CharacterShifterPanel_c->static_fields;
                }
                object = (Il2CppObject *)pUVar10->__9;
                __this_02 = (System_Converter_TInput__TOutput__o *)
                            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Converter_string_string);
                System_Converter_object__object____ctor
                          (__this_02,object,(intptr_t)MethodInfo_UI_CharacterShifterPanel_c_Setup_b__0_0,
                           (MethodInfo_494A3F0 *)0x0);
                pUVar10 = TypeInfo_UI_CharacterShifterPanel_c->static_fields;
                pUVar10->__9__0_0 = (System_Converter_string__string__o *)__this_02;
                Il2CppCodeGenWriteBarrier(&pUVar10->__9__0_0);
              }
              __this_03 = System_Collections_Generic_List_object___ConvertAll_object_
                                    ((System_Collections_Generic_List_object__o *)__this_01,
                                     (System_Converter_T__TOutput__o *)__this_02,
                                     (MethodInfo_31D7BB0 *)
                                     MethodInfo_System_Collections_Generic_List_string_ConvertAll_string);
              parent_00 = (__this->fields).DoublePanelLeft;
              pSVar6 = (pSVar5->fields).Loadout;
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pSVar11 = UI_UIManager__GetLocale
                                  (pSVar11,subCategory,"Character","",
                                   "",(MethodInfo *)0x0);
              pSVar12 = (System_String_array *)
                        System_Collections_Generic_List_object___ToArray
                                  ((System_Collections_Generic_List_object__o *)__this_01,
                                   (MethodInfo_395F5A0 *)
                                   MethodInfo_System_Collections_Generic_List_string_ToArray);
              if (__this_03 != (System_Collections_Generic_List_TOutput__o *)0x0) {
                icons = (System_String_array *)
                        System_Collections_Generic_List_object___ToArray
                                  ((System_Collections_Generic_List_object__o *)__this_03,
                                   (MethodInfo_395F5A0 *)
                                   MethodInfo_System_Collections_Generic_List_string_ToArray);
                UI_CharacterCategoryPanel__IconPicker
                          ((UI_CharacterCategoryPanel_o *)__this,parent_00,(Settings_BaseSetting_o *)pSVar6,
                           pSVar11,pSVar12,icons,(System_Action_o *)0x0,(System_String_array *)0x0,144.0,
                           (System_String_array *)0x0,(MethodInfo *)0x0);
                if ((pSVar4 != (Settings_InGameMiscSettings_o *)0x0) &&
                   (pSVar7 = (pSVar4->fields).PVP, pSVar7 != (Settings_IntSetting_o *)0x0)) {
                  if ((pSVar7->fields)._value == 2) {
                    UI_CharacterCategoryPanel__TeamChoice
                              ((UI_CharacterCategoryPanel_o *)__this,(__this->fields).DoublePanelRight,
                               (Settings_BaseSetting_o *)(pSVar5->fields).Team,(MethodInfo *)0x0);
                    return;
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_05d074e1:
  ThrowNullReferenceException();
}


// UI.CharacterShifterPanel$$.ctor
// il2cpp: void UI_CharacterShifterPanel___ctor (UI_CharacterShifterPanel_o* __this, const MethodInfo* method);
// 0x5d074f0

void UI_CharacterShifterPanel___ctor(UI_CharacterShifterPanel_o *__this,MethodInfo *method)

{
  UI_CharacterCategoryPanel___ctor((UI_CharacterCategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


