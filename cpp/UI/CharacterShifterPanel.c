// Type: UI.CharacterShifterPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterShifterPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterShifterPanel.cs
// --------------------------------

// UI.CharacterShifterPanel.<>c$$.cctor
// il2cpp: void UI_CharacterShifterPanel___c___cctor (const MethodInfo* method);
// 0x18223a470

void UI_CharacterShifterPanel___c___cctor(MethodInfo *method)

{
  UI_CharacterShifterPanel___c_o *__this;
  
  if (Il2CppMethodInitialized_1843471be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterShifterPanel_c);
    Il2CppMethodInitialized_1843471be = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CharacterShifterPanel_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_UI_CharacterShifterPanel_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_CharacterShifterPanel_c->static_fields->__9,__this);
  return;
}


// UI.CharacterShifterPanel.<>c$$.ctor
// il2cpp: void UI_CharacterShifterPanel___c___ctor (UI_CharacterShifterPanel___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_CharacterShifterPanel___c___ctor(UI_CharacterShifterPanel___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterShifterPanel.<>c$$<Setup>b__0_0
// il2cpp: System_String_o* UI_CharacterShifterPanel___c___Setup_b__0_0 (UI_CharacterShifterPanel___c_o* __this, System_String_o* loadout, const MethodInfo* method);
// 0x182239ae0

System_String_o *
UI_CharacterShifterPanel___c___Setup_b__0_0
          (UI_CharacterShifterPanel___c_o *__this,System_String_o *loadout,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843471bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/Shifters/Previews/");
    Il2CppMethodInitialized_1843471bf = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar1 = System_String__Concat_1969b70
                     (TypeInfo_Utility_ResourcePaths->static_fields->Characters,"/Shifters/Previews/",loadout,
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterShifterPanel$$Setup
// il2cpp: void UI_CharacterShifterPanel__Setup (UI_CharacterShifterPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182227380

void UI_CharacterShifterPanel__Setup
               (UI_CharacterShifterPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  Settings_InGameSet_o *pSVar4;
  Settings_InGameMiscSettings_o *pSVar5;
  Settings_InGameCharacterSettings_o *pSVar6;
  UI_CharacterPopup_o *__this_00;
  Settings_StringSetting_o *pSVar7;
  Il2CppObject *object;
  UnityEngine_Transform_o *pUVar8;
  Settings_IntSetting_o *pSVar9;
  System_String_o *pSVar10;
  MethodInfo *pMVar11;
  bool bVar12;
  System_Collections_Generic_List_string__o *__this_01;
  System_String_o *pSVar13;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this_02;
  System_Collections_Generic_List_TOutput__o *__this_03;
  System_String_o *pSVar14;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *options;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *icons;
  System_String_array *pSVar15;
  
  if (Il2CppMethodInitialized_1843471bd == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_TeamInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CharacterShifterPanel_c_Setup_b__0_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterShifterPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Eren");
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Team");
    il2cpp_codegen_initialize_runtime_metadata(&"Character");
    il2cpp_codegen_initialize_runtime_metadata(&"Annie");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843471bd = '\x01';
  }
  UI_CharacterCategoryPanel__Setup((UI_CharacterCategoryPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar10 = "CharacterPopup";
  pSVar14 = "General";
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (pSVar4 != (Settings_InGameSet_o *)0x0) {
    pSVar5 = (pSVar4->fields).Misc;
    pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings;
    if (Il2CppMethodInitialized_18434717c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterPopup);
      Il2CppMethodInitialized_18434717c = '\x01';
    }
    __this_00 = (UI_CharacterPopup_o *)(__this->fields).Parent;
    if (__this_00 != (UI_CharacterPopup_o *)0x0) {
      bVar2 = (TypeInfo_UI_CharacterPopup->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar2) ||
         ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_UI_CharacterPopup)) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_00);
      }
    }
    if ((TypeInfo_GameManagers_PlayerCharacter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerCharacter);
    }
    if (((__this_00 == (UI_CharacterPopup_o *)0x0) ||
        (UI_CharacterPopup__RestoreChoices
                   (__this_00,TypeInfo_GameManagers_PlayerCharacter->static_fields->Shifter,(MethodInfo *)0x0)
        , pSVar6 == (Settings_InGameCharacterSettings_o *)0x0)) ||
       (pSVar7 = (pSVar6->fields).CharacterType, pSVar7 == (Settings_StringSetting_o *)0x0))
    goto label_1822279ce;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar7,
               (Il2CppObject *)TypeInfo_GameManagers_PlayerCharacter->static_fields->Shifter,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar13 = "Eren";
    if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto label_1822279ce;
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar15 = (__this_01->fields)._items;
    if (pSVar15 == (System_String_array *)0x0) goto label_1822279ce;
    uVar3 = (__this_01->fields)._size;
    if (uVar3 < (uint)pSVar15->max_length) {
      (__this_01->fields)._size = uVar3 + 1;
      if ((uint)pSVar15->max_length <= uVar3) goto label_1822279d4;
      pSVar15->m_Items[(int)uVar3] = pSVar13;
      Il2CppCodeGenWriteBarrier(pSVar15->m_Items + (int)uVar3,pSVar13);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar13,
                 (MethodInfo_93DD50 *)pMVar11->klass->rgctx_data[0xe].method);
    }
    pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add;
    pSVar13 = "Annie";
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar15 = (__this_01->fields)._items;
    if (pSVar15 == (System_String_array *)0x0) goto label_1822279ce;
    uVar3 = (__this_01->fields)._size;
    if (uVar3 < (uint)pSVar15->max_length) {
      (__this_01->fields)._size = uVar3 + 1;
      if ((uint)pSVar15->max_length <= uVar3) goto label_1822279d4;
      pSVar15->m_Items[(int)uVar3] = pSVar13;
      Il2CppCodeGenWriteBarrier(pSVar15->m_Items + (int)uVar3,pSVar13);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar13,
                 (MethodInfo_93DD50 *)pMVar11->klass->rgctx_data[0xe].method);
    }
    pSVar7 = (pSVar6->fields).Loadout;
    if (pSVar7 != (Settings_StringSetting_o *)0x0) {
      bVar12 = System_Collections_Generic_List_object___Contains
                         ((System_Collections_Generic_List_object__o *)__this_01,
                          (Il2CppObject *)(pSVar7->fields)._value,
                          (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
      if (!bVar12) {
        pSVar7 = (pSVar6->fields).Loadout;
        pSVar13 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)__this_01,0,
                             (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
        if (pSVar7 == (Settings_StringSetting_o *)0x0) goto label_1822279ce;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar7,(Il2CppObject *)pSVar13,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      }
      if ((TypeInfo_UI_CharacterShifterPanel_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CharacterShifterPanel_c);
      }
      __this_02 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                  TypeInfo_UI_CharacterShifterPanel_c->static_fields->__9__0_0;
      if (__this_02 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
        if ((TypeInfo_UI_CharacterShifterPanel_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CharacterShifterPanel_c);
        }
        object = (Il2CppObject *)TypeInfo_UI_CharacterShifterPanel_c->static_fields->__9;
        __this_02 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Converter_string_string);
        System_Converter_object__object____ctor
                  (__this_02,object,(intptr_t)MethodInfo_UI_CharacterShifterPanel_c_Setup_b__0_0,
                   (MethodInfo_AF4D50 *)0x0);
        TypeInfo_UI_CharacterShifterPanel_c->static_fields->__9__0_0 =
             (System_Converter_string__string__o *)__this_02;
        Il2CppCodeGenWriteBarrier(&TypeInfo_UI_CharacterShifterPanel_c->static_fields->__9__0_0,__this_02);
      }
      __this_03 = System_Collections_Generic_List_object___ConvertAll_object_
                            ((System_Collections_Generic_List_object__o *)__this_01,
                             (System_Converter_T__TOutput__o *)__this_02,
                             (MethodInfo_59CC30 *)
                             MethodInfo_System_Collections_Generic_List_string_ConvertAll_string);
      pUVar8 = (__this->fields).DoublePanelLeft;
      pSVar7 = (pSVar6->fields).Loadout;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar14 = UI_UIManager__GetLocale
                          (pSVar10,pSVar14,"Character","","",
                           (MethodInfo *)0x0);
      options = System_Collections_Generic_List_object___ToArray
                          ((System_Collections_Generic_List_T__o *)__this_01,
                           (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      if (__this_03 != (System_Collections_Generic_List_TOutput__o *)0x0) {
        icons = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                          ((System_Collections_Generic_List_T__o *)__this_03,
                           (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        UI_CharacterCategoryPanel__IconPicker
                  ((UI_CharacterCategoryPanel_o *)__this,pUVar8,(Settings_BaseSetting_o *)pSVar7,pSVar14,
                   (System_String_array *)options,(System_String_array *)icons,(System_Action_o *)0x0,
                   (System_String_array *)0x0,144.0,(MethodInfo *)0x0);
        if ((pSVar5 != (Settings_InGameMiscSettings_o *)0x0) &&
           (pSVar9 = (pSVar5->fields).PVP, pSVar9 != (Settings_IntSetting_o *)0x0)) {
          if ((pSVar9->fields)._value != 2) {
            return;
          }
          pUVar8 = (__this->fields).DoublePanelRight;
          pSVar7 = (pSVar6->fields).Team;
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pSVar14 = UI_UIManager__GetLocaleCommon("Team",(MethodInfo *)0x0);
          pSVar15 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
          if ((TypeInfo_GameManagers_TeamInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_TeamInfo);
          }
          if (pSVar15 != (System_String_array *)0x0) {
            if ((int)pSVar15->max_length != 0) {
              pSVar10 = TypeInfo_GameManagers_TeamInfo->static_fields->Blue;
              pSVar15->m_Items[0] = pSVar10;
              Il2CppCodeGenWriteBarrier(pSVar15->m_Items,pSVar10);
              if (1 < (uint)pSVar15->max_length) {
                pSVar10 = TypeInfo_GameManagers_TeamInfo->static_fields->Red;
                pSVar15->m_Items[1] = pSVar10;
                Il2CppCodeGenWriteBarrier(pSVar15->m_Items + 1,pSVar10);
                UI_CharacterCategoryPanel__Choice
                          ((UI_CharacterCategoryPanel_o *)__this,pUVar8,(Settings_BaseSetting_o *)pSVar7,
                           pSVar14,pSVar15,(System_Action_o *)0x0,(MethodInfo *)0x0);
                return;
              }
            }
label_1822279d4:
            ThrowIndexOutOfRangeException();
          }
        }
      }
    }
  }
label_1822279ce:
  ThrowNullReferenceException();
}


// UI.CharacterShifterPanel$$.ctor
// il2cpp: void UI_CharacterShifterPanel___ctor (UI_CharacterShifterPanel_o* __this, const MethodInfo* method);
// 0x1822279f0

void UI_CharacterShifterPanel___ctor(UI_CharacterShifterPanel_o *__this,MethodInfo *method)

{
  UI_CharacterCategoryPanel___ctor((UI_CharacterCategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


