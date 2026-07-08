// Type: UI.CreateGameModePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CreateGameModePanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/CreateGamePopup/CreateGameModePanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.CreateGameModePanel.<>c__DisplayClass2_0$$.ctor
// il2cpp: void UI_CreateGameModePanel___c__DisplayClass2_0___ctor (UI_CreateGameModePanel___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x406a4a0

void UI_CreateGameModePanel_<>c__DisplayClass2_0___ctor
               (UI_CreateGameModePanel___c__DisplayClass2_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameModePanel.<>c__DisplayClass2_0$$<Setup>b__0
// il2cpp: void UI_CreateGameModePanel___c__DisplayClass2_0___Setup_b__0 (UI_CreateGameModePanel___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x406bda0

void UI_CreateGameModePanel_<>c__DisplayClass2_0__<Setup>b__0
               (UI_CreateGameModePanel___c__DisplayClass2_0_o *__this,MethodInfo *method)

{
  UI_BasePanel_o *__this_00;
  
  __this_00 = (__this->fields).parent;
  if (__this_00 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameModePanel$$get_ScrollBar
// il2cpp: bool UI_CreateGameModePanel__get_ScrollBar (UI_CreateGameModePanel_o* __this, const MethodInfo* method);
// 0x4067740

bool_conflict
UI_CreateGameModePanel__get_ScrollBar(UI_CreateGameModePanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CreateGameModePanel$$Setup
// il2cpp: void UI_CreateGameModePanel__Setup (UI_CreateGameModePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4067750

/* WARNING: Removing unreachable block (ram,0x040692d4) */
/* WARNING: Removing unreachable block (ram,0x04069d10) */
/* WARNING: Removing unreachable block (ram,0x0406975c) */
/* WARNING: Removing unreachable block (ram,0x04069d18) */

void UI_CreateGameModePanel__Setup
               (UI_CreateGameModePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  Settings_InGameMiscSettings_o *settings;
  UI_CreateGamePopup_o *pUVar5;
  UI_BasePanel_o *pUVar6;
  UI_BasePopup_o *popup;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar7;
  UnityEngine_Transform_o *parent_00;
  UI_CollapsibleSection_c *pUVar8;
  Il2CppClass *pIVar9;
  Settings_BaseSetting_c *pSVar10;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_06;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_07;
  System_Collections_Generic_List_Enumerator_T__o __this_08;
  System_Collections_Generic_List_Enumerator_T__o __this_09;
  System_Collections_Generic_List_Enumerator_T__o __this_10;
  System_Collections_Generic_List_Enumerator_T__o __this_11;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_12;
  System_Collections_Generic_KeyValuePair_object__object__o item;
  bool_conflict bVar11;
  int32_t iVar12;
  uint uVar13;
  Il2CppObject *pIVar14;
  System_String_o *pSVar15;
  UI_ElementStyle_o *style;
  Map_MapScript_o *__this_13;
  System_Collections_Generic_Dictionary_object__object__o *pSVar16;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar17;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar18;
  System_String_o *pSVar19;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar20;
  System_Collections_Generic_Dictionary_object__object__o *pSVar21;
  System_Collections_Generic_List_object__o *pSVar22;
  System_String_array *pSVar23;
  System_Object_array *pSVar24;
  MethodInfo *pMVar25;
  UI_CollapsibleSection_o *pUVar26;
  System_String_o **ppSVar27;
  System_Collections_Generic_List_T__o *pSVar28;
  UnityEngine_GameObject_o *pUVar29;
  System_Collections_Generic_Dictionary_object__object__o *__this_14;
  System_String_o *pSVar30;
  long lVar31;
  Il2CppObject **value;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  long *plVar32;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX;
  MethodInfo *method_04;
  Settings_BaseSetting_o *pSVar33;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_05;
  uint uVar34;
  long lVar35;
  MethodInfo_347CEC0 *method_06;
  MethodInfo *method_07;
  undefined1 auVar36 [16];
  System_Collections_Generic_KeyValuePair_object__object__o __this_15;
  MethodInfo *in_stack_fffffffffffffeb8;
  undefined8 in_stack_fffffffffffffec0;
  MethodInfo *in_stack_fffffffffffffec8;
  MethodInfo *in_stack_fffffffffffffed8;
  int iStack_100;
  _union_231120 _Stack_f8;
  Il2CppObject *pIStack_f0;
  System_String_o *pSStack_e8;
  UI_CollapsibleSection_o *pUStack_d8;
  UI_CollapsibleSection_o *pUStack_d0;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_c8;
  System_String_o *pSStack_c0;
  _union_231120 _Stack_b8;
  Il2CppObject *pIStack_b0;
  System_String_o *pSStack_a8;
  undefined8 uStack_a0;
  System_String_o *pSStack_90;
  _union_231120 _Stack_88;
  Il2CppObject *pIStack_80;
  System_String_o *pSStack_78;
  undefined8 uStack_70;
  _union_231120 _Stack_68;
  Il2CppObject *pIStack_60;
  System_String_o *pSStack_58;
  System_String_o *pSStack_48;
  System_String_o *pSStack_40;
  Il2CppObject *pIStack_38;
  
  if (DAT_0570448f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_CreateGameGeneralPanel);
    il2cpp_init_method_metadata(&TypeInfo_CreateGamePopup);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_List_1_KeyValuePair_2);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_List_1_KeyValuePair_2_System_String_Settings_Bas);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_String___get_Item);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__List_KeyValuePair_string__Bas);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__BaseSetting);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_Settings_BaseSettin);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_Settings_BaseSettin);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_KeyValuePair_2_System_Strin);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_KeyValuePair_2_System_String_Settings_Bas);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_KeyValuePair_string__BaseSetting);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_MapScript);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass2_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"No settings for selected addons.");
    il2cpp_init_method_metadata(&"Dropbox");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"GameMode");
    il2cpp_init_method_metadata(&"CreateGamePopup");
    il2cpp_init_method_metadata(&"Tooltip");
    il2cpp_init_method_metadata(&"Addon Settings");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Description");
    il2cpp_init_method_metadata(&"Addon");
    il2cpp_init_method_metadata(&"Mode");
    DAT_0570448f = '\x01';
  }
  _Stack_f8.genericMethod = (Il2CppObject *)0x0;
  pIStack_f0 = (Il2CppObject *)0x0;
  pSStack_e8 = (System_String_o *)0x0;
  _Stack_68.genericMethod = (void *)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  pSStack_58 = (System_String_o *)0x0;
  pSStack_78 = (System_String_o *)0x0;
  uStack_70 = 0;
  _Stack_88.genericMethod = (Il2CppObject *)0x0;
  pIStack_80 = (Il2CppObject *)0x0;
  pIStack_38 = (Il2CppObject *)0x0;
  pIVar14 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass2_0);
  System_Object___ctor(pIVar14,(MethodInfo *)0x0);
  if (pIVar14 != (Il2CppObject *)0x0) {
    pIVar14[1].klass = (Il2CppClass *)parent;
    il2cpp_runtime_glue(pIVar14 + 1,parent);
    UI_BasePanel__Setup((UI_BasePanel_o *)__this,(UI_BasePanel_o *)pIVar14[1].klass,
                        (MethodInfo *)0x0);
    pSStack_48 = "CreateGamePopup";
    pSStack_40 = "Mode";
    pSVar15 = (System_String_o *)(*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)(__this);
    style = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    System_Object___ctor((Il2CppObject *)style,(MethodInfo *)0x0);
    (style->fields).FontSize = 0x18;
    (style->fields).TitleWidth = 200.0;
    (style->fields).Spacing = 20.0;
    (style->fields).ThemePanel = pSVar15;
    il2cpp_runtime_glue(&(style->fields).ThemePanel);
    lVar35 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
    if ((((lVar35 != 0) && (lVar35 = *(long *)(lVar35 + 0x38), lVar35 != 0)) &&
        (*(long *)(lVar35 + 0x20) != 0)) && (*(long *)(lVar35 + 0x28) != 0)) {
      pSVar15 = *(System_String_o **)(*(long *)(lVar35 + 0x20) + 0x18);
      pSVar19 = *(System_String_o **)(*(long *)(lVar35 + 0x28) + 0x18);
      __this_13 = (Map_MapScript_o *)il2cpp_runtime_glue(TypeInfo_MapScript);
      Map_MapScript___ctor(__this_13,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar15 = Map_BuiltinLevels__LoadMap(pSVar15,pSVar19,(MethodInfo *)0x0);
      if (__this_13 != (Map_MapScript_o *)0x0) {
        (*(__this_13->klass->vtable)._5_Deserialize.methodPtr)
                  (__this_13,pSVar15,(__this_13->klass->vtable)._5_Deserialize.method);
        lVar35 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
        if (((lVar35 != 0) && (lVar31 = *(long *)(lVar35 + 0x38), lVar31 != 0)) &&
           ((*(long *)(lVar31 + 0x30) != 0 && (*(long *)(lVar31 + 0x38) != 0)))) {
          bVar11 = System_String__op_Inequality
                             (*(System_String_o **)(*(long *)(lVar31 + 0x30) + 0x18),
                              *(System_String_o **)(*(long *)(lVar31 + 0x38) + 0x18),
                              (MethodInfo *)0x0);
          if ((char)bVar11 != '\0') {
            if (*(int *)(TypeInfo_CreateGameGeneralPanel + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UI_CreateGameGeneralPanel__SetDefaultMisc((MethodInfo *)0x0);
            lVar31 = *(long *)(lVar35 + 0x38);
            if (((lVar31 == 0) || (*(long *)(lVar31 + 0x20) == 0)) ||
               ((*(long *)(lVar31 + 0x28) == 0 || (*(long *)(lVar31 + 0x30) == 0))))
            goto LAB_04069ce8;
            pSVar15 = *(System_String_o **)(*(long *)(lVar31 + 0x20) + 0x18);
            pSVar19 = *(System_String_o **)(*(long *)(lVar31 + 0x28) + 0x18);
            pSVar30 = *(System_String_o **)(*(long *)(lVar31 + 0x30) + 0x18);
            settings = *(Settings_InGameMiscSettings_o **)(lVar35 + 0x58);
            if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
              il2cpp_init_class();
            }
            Map_BuiltinLevels__LoadMiscSettings(pSVar15,pSVar19,pSVar30,settings,(MethodInfo *)0x0);
            lVar31 = *(long *)(lVar35 + 0x40);
            pSVar16 = (System_Collections_Generic_Dictionary_object__object__o *)
                      il2cpp_runtime_glue(TypeInfo_Dictionary_string__BaseSetting);
            System_Collections_Generic_Dictionary<object__object>___ctor(pSVar16,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
            if (lVar31 == 0) goto LAB_04069ce8;
            *(System_Collections_Generic_Dictionary_object__object__o **)(lVar31 + 0x20) = pSVar16;
            il2cpp_runtime_glue(lVar31 + 0x20,pSVar16);
          }
          lVar35 = *(long *)(lVar35 + 0x38);
          if (((lVar35 != 0) && (*(long *)(lVar35 + 0x30) != 0)) &&
             (*(Settings_TypedSetting_T__o **)(lVar35 + 0x38) != (Settings_TypedSetting_T__o *)0x0))
          {
            Settings_TypedSetting<object>__set_Value
                      (*(Settings_TypedSetting_T__o **)(lVar35 + 0x38),
                       *(Il2CppObject **)(*(long *)(lVar35 + 0x30) + 0x18),MethodInfo_Void_set_Value);
            pUVar5 = (UI_CreateGamePopup_o *)(__this->fields).Parent;
            if (pUVar5 != (UI_CreateGamePopup_o *)0x0) {
              bVar2 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
              if (((pUVar5->klass->_2).naturalAligment < bVar2) ||
                 ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CreateGamePopup)) {
LAB_04069d20:
                    /* WARNING: Subroutine does not return */
                il2cpp_unwind_resume();
              }
              pSVar17 = UI_CreateGamePopup__SyncModeSettings(pUVar5,__this_13,method_00);
              if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar15 = CustomLogic_CustomLogicManager__GetModeDescription
                                  (pSVar17,(MethodInfo *)0x0);
              pUVar6 = (__this->fields).Parent;
              if (pUVar6 != (UI_BasePanel_o *)0x0) {
                bVar2 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
                if (((pUVar6->klass->_2).naturalAligment < bVar2) ||
                   ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CreateGamePopup))
                goto LAB_04069d20;
                lVar35 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
                if ((lVar35 != 0) && (lVar35 = *(long *)(lVar35 + 0x38), lVar35 != 0)) {
                  popup = (UI_BasePopup_o *)pUVar6[2].fields.m_CachedPtr;
                  pSVar7 = *(System_Collections_Generic_List_BasePopup_AnimationKeyframe__o **)
                            (lVar35 + 0x30);
                  pSVar18 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
                            il2cpp_runtime_glue(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  if (popup != (UI_BasePopup_o *)0x0) {
                    popup[1].fields.killPopupKeyframesIn = pSVar7;
                    il2cpp_runtime_glue(&popup[1].fields.killPopupKeyframesIn,pSVar7);
                    popup[1].fields.killPopupKeyframesOut = pSVar18;
                    il2cpp_runtime_glue(&popup[1].fields.killPopupKeyframesOut,pSVar18);
                    lVar35 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
                    if ((lVar35 != 0) && (lVar35 = *(long *)(lVar35 + 0x38), lVar35 != 0)) {
                      parent_00 = (__this->fields).DoublePanelLeft;
                      pSVar33 = *(Settings_BaseSetting_o **)(lVar35 + 0x30);
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      pSVar19 = UI_UIManager__GetLocale
                                          (pSStack_48,"General","GameMode",
                                           (System_String_o *)"",
                                           (System_String_o *)"",(MethodInfo *)0x0);
                      method_07 = "";
                      UI_ElementFactory__CreateButtonPopupSetting
                                (parent_00,style,pSVar33,pSVar19,popup,
                                 (System_String_o *)"",180.0,0.0,in_stack_fffffffffffffeb8
                                );
                      if ((pSVar17 !=
                           (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) &&
                         (pSVar20 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                                              ((System_Collections_Generic_Dictionary_object__object__o
                                                *)pSVar17,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
                         pSVar20 !=
                         (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
                         ) {
                        pUStack_d0 = (UI_CollapsibleSection_o *)&(__this->fields).DoublePanelLeft;
                        iVar12 = System_Collections_Generic_Dictionary_KeyCollection<object__object>__get_Count
                                           (pSVar20,MethodInfo_Int32_get_Count);
                        bVar11 = System_String__op_Inequality
                                           (pSVar15,(System_String_o *)"",
                                            (MethodInfo *)0x0);
                        iStack_100 = 1;
                        if ((char)bVar11 != '\0') {
                          UI_ElementFactory__CreateDefaultLabel
                                    ((UnityEngine_Transform_o *)pUStack_d0->klass,style,pSVar15,0,3,
                                     method_07);
                          iStack_100 = 2;
                        }
                        UI_BasePanel__CreateHorizontalDivider
                                  ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelLeft,1.0,
                                   (MethodInfo *)0x0);
                        pSVar16 = (System_Collections_Generic_Dictionary_object__object__o *)
                                  il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
                        System_Collections_Generic_Dictionary<object__object>___ctor
                                  (pSVar16,MethodInfo_Dictionary_2_System_String_System_String);
                        pSVar21 = (System_Collections_Generic_Dictionary_object__object__o *)
                                  il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
                        System_Collections_Generic_Dictionary<object__object>___ctor
                                  (pSVar21,MethodInfo_Dictionary_2_System_String_System_String);
                        pSVar20 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                                            ((System_Collections_Generic_Dictionary_object__object__o
                                              *)pSVar17,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
                        if (pSVar20 !=
                            (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)
                            0x0) {
                          System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                      *)&_Stack_b8,pSVar20,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
                          pSStack_e8 = pSStack_a8;
                          _Stack_f8 = _Stack_b8;
                          pIStack_f0 = pIStack_b0;
                          pSStack_c8 = pSVar16;
                          while( true ) {
                            __this_00.fields._index = (int)in_stack_fffffffffffffec0;
                            __this_00.fields._version =
                                 (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
                            __this_00.fields._dictionary =
                                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                 in_stack_fffffffffffffeb8;
                            __this_00.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffec8
                            ;
                            bVar11 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                               (__this_00,(MethodInfo_31D0850 *)&_Stack_f8);
                            pSVar15 = pSStack_e8;
                            if ((char)bVar11 == '\0') break;
                            pIVar14 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                                ((System_Collections_Generic_Dictionary_object__object__o
                                                  *)pSVar17,(Il2CppObject *)pSStack_e8,MethodInfo_BaseSetting_get_Item)
                            ;
                            uVar13 = System_String__op_Equality
                                               (pSVar15,"Description",(MethodInfo *)0x0);
                            iVar12 = iVar12 - (uVar13 & 0xff);
                            if (pSVar15 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                              il2cpp_raise_exception();
                            }
                            bVar11 = System_String__EndsWith(pSVar15,"Tooltip",(MethodInfo *)0x0)
                            ;
                            if (((char)bVar11 == '\0') || (pIVar14 == (Il2CppObject *)0x0)) {
LAB_04068210:
                              bVar11 = System_String__EndsWith
                                                 (pSVar15,"Dropbox",(MethodInfo *)0x0);
                              if (((char)bVar11 != '\0') && (pIVar14 != (Il2CppObject *)0x0)) {
                                bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
                                if ((bVar2 <= (pIVar14->klass->_2).naturalAligment) &&
                                   ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                                    TypeInfo_StringSetting)) {
                                  iVar12 = iVar12 + -1;
                                  pSVar22 = (System_Collections_Generic_List_object__o *)
                                            il2cpp_runtime_glue(TypeInfo_List_string);
                                  System_Collections_Generic_List<object>___ctor
                                            (pSVar22,MethodInfo_List_1_System_String);
                                  bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
                                  if (((pIVar14->klass->_2).naturalAligment < bVar2) ||
                                     ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                                      TypeInfo_StringSetting)) {
                    /* WARNING: Subroutine does not return */
                                    il2cpp_unwind_resume(pIVar14);
                                  }
                                  if (pIVar14[1].monitor == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    il2cpp_raise_exception();
                                  }
                                  pSVar23 = System_String__Split
                                                      (pIVar14[1].monitor,0x2c,0,(MethodInfo *)0x0);
                                  if (pSVar23 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    il2cpp_raise_exception();
                                  }
                                  iVar4 = (int)pSVar23->max_length;
                                  if (pSVar22 == (System_Collections_Generic_List_object__o *)0x0) {
                                    if (iVar4 < 1) {
                    /* WARNING: Subroutine does not return */
                                      il2cpp_raise_exception();
                                    }
                                    if (pSVar23->m_Items[0] != (System_String_o *)0x0) {
                                      System_String__Trim(pSVar23->m_Items[0],(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
                                      il2cpp_raise_exception();
                                    }
LAB_04069d47:
                    /* WARNING: Subroutine does not return */
                                    il2cpp_raise_exception();
                                  }
                                  if (0 < iVar4) {
                                    uVar13 = 0;
                                    if (iVar4 == 0) {
LAB_04069ce3:
                    /* WARNING: Subroutine does not return */
                                      il2cpp_raise_exception();
                                    }
                                    while( true ) {
                                      if (pSVar23->m_Items[(int)uVar13] == (System_String_o *)0x0)
                                      goto LAB_04069d47;
                                      pSVar19 = System_String__Trim(pSVar23->m_Items[(int)uVar13],
                                                                    (MethodInfo *)0x0);
                                      lVar35 = MethodInfo_Void_Add;
                                      piVar1 = &(pSVar22->fields)._version;
                                      *piVar1 = *piVar1 + 1;
                                      pSVar24 = (pSVar22->fields)._items;
                                      if (pSVar24 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        il2cpp_raise_exception();
                                      }
                                      uVar34 = (pSVar22->fields)._size;
                                      if (uVar34 < (uint)pSVar24->max_length) {
                                        (pSVar22->fields)._size = uVar34 + 1;
                                        pSVar24->m_Items[(int)uVar34] = (Il2CppObject *)pSVar19;
                                        il2cpp_runtime_glue(pSVar24->m_Items + (int)uVar34);
                                      }
                                      else {
                                        System_Collections_Generic_List<object>__AddWithResize
                                                  (pSVar22,(Il2CppObject *)pSVar19,
                                                   *(MethodInfo_35A7350 **)
                                                    (*(long *)(*(long *)(lVar35 + 0x20) + 0xc0) +
                                                    0x70));
                                      }
                                      uVar13 = uVar13 + 1;
                                      uVar34 = (uint)pSVar23->max_length;
                                      if ((int)uVar34 <= (int)uVar13) break;
                                      if (uVar34 <= uVar13) goto LAB_04069ce3;
                                    }
                                  }
                                  pSVar16 = pSStack_c8;
                                  pIVar14 = "None";
                                  lVar35 = MethodInfo_Void_Add;
                                  if ((pSVar22->fields)._size == 0) {
                                    piVar1 = &(pSVar22->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pSVar24 = (pSVar22->fields)._items;
                                    if (pSVar24 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      il2cpp_raise_exception();
                                    }
                                    if ((int)pSVar24->max_length == 0) {
                                      System_Collections_Generic_List<object>__AddWithResize
                                                (pSVar22,pIVar14,
                                                 *(MethodInfo_35A7350 **)
                                                  (*(long *)(*(long *)(lVar35 + 0x20) + 0xc0) + 0x70
                                                  ));
                                    }
                                    else {
                                      (pSVar22->fields)._size = 1;
                                      pSVar24->m_Items[0] = pIVar14;
                                      il2cpp_runtime_glue(pSVar24->m_Items);
                                    }
                                  }
                                  pSVar15 = System_String__Substring
                                                      (pSVar15,0,
                                                       (pSVar15->fields)._stringLength + -7,
                                                       (MethodInfo *)0x0);
                                  pSVar24 = System_Collections_Generic_List<object>__ToArray
                                                      (pSVar22,MethodInfo_String___ToArray);
                                  if (pSVar21 ==
                                      (System_Collections_Generic_Dictionary_object__object__o *)0x0
                                     ) {
                    /* WARNING: Subroutine does not return */
                                    il2cpp_raise_exception();
                                  }
                                  System_Collections_Generic_Dictionary<object__object>__set_Item
                                            (pSVar21,(Il2CppObject *)pSVar15,&pSVar24->obj,
                                             MethodInfo_Void_set_Item);
                                }
                              }
                            }
                            else {
                              bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
                              if (((pIVar14->klass->_2).naturalAligment < bVar2) ||
                                 ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                                  TypeInfo_StringSetting)) goto LAB_04068210;
                              iVar12 = iVar12 + -1;
                              pSVar15 = System_String__Substring
                                                  (pSVar15,0,(pSVar15->fields)._stringLength + -7,
                                                   (MethodInfo *)0x0);
                              bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
                              if (((pIVar14->klass->_2).naturalAligment < bVar2) ||
                                 ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                                  TypeInfo_StringSetting)) {
                    /* WARNING: Subroutine does not return */
                                il2cpp_unwind_resume(pIVar14);
                              }
                              if (pSVar16 ==
                                  (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                il2cpp_raise_exception();
                              }
                              System_Collections_Generic_Dictionary<object__object>__set_Item
                                        (pSVar16,(Il2CppObject *)pSVar15,pIVar14[1].monitor,
                                         MethodInfo_Void_set_Item);
                            }
                          }
                          __this_01.fields._index = (int)in_stack_fffffffffffffec0;
                          __this_01.fields._version =
                               (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
                          __this_01.fields._dictionary =
                               (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                               in_stack_fffffffffffffeb8;
                          __this_01.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffec8;
                          System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                                    (__this_01,(MethodInfo_31D0840 *)&_Stack_f8);
                          pSStack_c0._0_4_ = 0x7fffffff;
                          if (5 < iVar12) {
                            pSStack_c0._0_4_ = iVar12 / 2;
                          }
                          pSVar20 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                                              ((System_Collections_Generic_Dictionary_object__object__o
                                                *)pSVar17,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
                          if (pSVar20 !=
                              (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *
                              )0x0) {
                            System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                        *)&_Stack_b8,pSVar20,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
                            pSStack_e8 = pSStack_a8;
                            _Stack_f8 = _Stack_b8;
                            pIStack_f0 = pIStack_b0;
                            pUStack_d8 = (UI_CollapsibleSection_o *)
                                         &(__this->fields).DoublePanelRight;
LAB_040685b4:
                            pUVar26 = pUStack_d8;
                            if (iStack_100 < (int)pSStack_c0) {
                              pUVar26 = pUStack_d0;
                            }
LAB_040685d0:
                            do {
                              do {
                                __this_02.fields._index = (int)in_stack_fffffffffffffec0;
                                __this_02.fields._version =
                                     (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
                                __this_02.fields._dictionary =
                                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                     in_stack_fffffffffffffeb8;
                                __this_02.fields._currentKey =
                                     (Il2CppObject *)in_stack_fffffffffffffec8;
                                bVar11 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                                   (__this_02,(MethodInfo_31D0850 *)&_Stack_f8);
                                pSVar15 = pSStack_e8;
                                if ((char)bVar11 == '\0') {
                                  __this_03.fields._index = (int)in_stack_fffffffffffffec0;
                                  __this_03.fields._version =
                                       (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
                                  __this_03.fields._dictionary =
                                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                       in_stack_fffffffffffffeb8;
                                  __this_03.fields._currentKey =
                                       (Il2CppObject *)in_stack_fffffffffffffec8;
                                  System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                                            (__this_03,(MethodInfo_31D0840 *)&_Stack_f8);
                                  pUVar5 = (UI_CreateGamePopup_o *)(__this->fields).Parent;
                                  if (pUVar5 == (UI_CreateGamePopup_o *)0x0) goto LAB_04069ce8;
                                  bVar2 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
                                  if (((pUVar5->klass->_2).naturalAligment < bVar2) ||
                                     ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                                      TypeInfo_CreateGamePopup)) goto LAB_04069d20;
                                  pSVar17 = UI_CreateGamePopup__SyncAddonSettings
                                                      (pUVar5,(MethodInfo *)TypeInfo_CreateGamePopup);
                                  UI_BasePanel__CreateHorizontalDivider
                                            ((UI_BasePanel_o *)__this,
                                             (__this->fields).DoublePanelRight,1.0,(MethodInfo *)0x0
                                            );
                                  method_06 = (MethodInfo_347CEC0 *)0x0;
                                  pUVar26 = UI_ElementFactory__CreateCollapsibleSection
                                                      ((__this->fields).DoublePanelRight,style,
                                                       "Addon Settings",0,(System_Action_bool__o *)0x0,
                                                       method_07);
                                  if (pSVar17 ==
                                      (System_Collections_Generic_Dictionary_string__BaseSetting__o
                                       *)0x0) goto LAB_04069ce8;
                                  iVar12 = System_Collections_Generic_Dictionary<object__object>__get_Count
                                                     ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)pSVar17,MethodInfo_Int32_get_Count);
                                  if (iVar12 == 0) {
                                    pUVar29 = UI_ElementFactory__CreateDefaultLabel
                                                        ((UnityEngine_Transform_o *)
                                                         pUStack_d8->klass,style,"No settings for selected addons.",0,3,
                                                         method_07);
                                    if (pUVar26 != (UI_CollapsibleSection_o *)0x0) {
                                      UI_CollapsibleSection__AddChild(pUVar26,pUVar29,method_01);
                                      return;
                                    }
                                    goto LAB_04069ce8;
                                  }
                                  pSVar16 = (System_Collections_Generic_Dictionary_object__object__o
                                             *)il2cpp_runtime_glue(TypeInfo_Dictionary_string__List_KeyValuePair_string__Bas);
                                  System_Collections_Generic_Dictionary<object__object>___ctor
                                            (pSVar16,MethodInfo_Dictionary_2_System_String_List_1_KeyValuePair_2);
                                  pSVar20 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                                                      ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)pSVar17,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
                                  if (pSVar20 ==
                                      (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o
                                       *)0x0) goto LAB_04069ce8;
                                  System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                                            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                              *)&_Stack_b8,pSVar20,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
                                  pSStack_e8 = pSStack_a8;
                                  _Stack_f8 = _Stack_b8;
                                  pIStack_f0 = pIStack_b0;
                                  pUStack_d0 = pUVar26;
                                  if (pSVar16 !=
                                      (System_Collections_Generic_Dictionary_object__object__o *)0x0
                                     ) {
                                    goto LAB_04068a97;
                                  }
                                  __this_05.fields._index = (int)in_stack_fffffffffffffec0;
                                  __this_05.fields._version =
                                       (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
                                  __this_05.fields._dictionary =
                                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                       in_stack_fffffffffffffeb8;
                                  __this_05.fields._currentKey =
                                       (Il2CppObject *)in_stack_fffffffffffffec8;
                                  bVar11 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                                     (__this_05,(MethodInfo_31D0850 *)&_Stack_f8);
                                  if ((char)bVar11 == '\0') goto LAB_04068c64;
                                  if (pSStack_e8 == (System_String_o *)0x0) goto LAB_04069d85;
                                  pSVar23 = System_String__Split
                                                      (pSStack_e8,0x2e,0,(MethodInfo *)0x0);
                                  if (pSVar23 != (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    il2cpp_raise_exception();
                                  }
                                  goto LAB_04069d9d;
                                }
                                pUVar8 = pUVar26->klass;
                                pIVar14 = System_Collections_Generic_Dictionary<object__object>__get_Item
                                                    ((
                                                  System_Collections_Generic_Dictionary_object__object__o
                                                  *)pSVar17,(Il2CppObject *)pSStack_e8,MethodInfo_BaseSetting_get_Item)
                                ;
                                bVar11 = System_String__op_Equality
                                                   (pSVar15,"Description",(MethodInfo *)0x0);
                              } while ((char)bVar11 != '\0');
                              if (pSVar15 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                il2cpp_raise_exception();
                              }
                              bVar11 = System_String__EndsWith
                                                 (pSVar15,"Tooltip",(MethodInfo *)0x0);
                              if (((char)bVar11 != '\0') && (pIVar14 != (Il2CppObject *)0x0)) {
                                bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
                                if ((bVar2 <= (pIVar14->klass->_2).naturalAligment) &&
                                   ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                                    TypeInfo_StringSetting)) goto LAB_040685d0;
                              }
                              bVar11 = System_String__EndsWith
                                                 (pSVar15,"Dropbox",(MethodInfo *)0x0);
                              if (((char)bVar11 == '\0') || (pIVar14 == (Il2CppObject *)0x0))
                              goto LAB_040686cb;
                              bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
                              if (((pIVar14->klass->_2).naturalAligment < bVar2) ||
                                 ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
                                  TypeInfo_StringSetting)) goto LAB_040686cb;
                            } while( true );
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
    }
  }
  goto LAB_04069ce8;
LAB_04069730:
  __this_11.fields._index = (int)in_stack_fffffffffffffec0;
  __this_11.fields._version = (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_11.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8;
  __this_11.fields._current = (Il2CppObject *)in_stack_fffffffffffffec8;
  System_Collections_Generic_List_Enumerator<KeyValuePair<object__object>>__Dispose
            (__this_11,(MethodInfo_3176CE0 *)&_Stack_88);
  pUVar29 = UI_BasePanel__CreateHorizontalDivider
                      ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelRight,1.0,
                       (MethodInfo *)0x0);
  UI_CollapsibleSection__AddChild(pUStack_d0,pUVar29,method_05);
  goto LAB_04068ce0;
LAB_040686cb:
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar19 = Utility_Util__PascalToSentence(pSVar15,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_07 = (MethodInfo *)0x0;
  pSStack_90 = UI_UIManager__GetLocale
                         (pSStack_48,pSStack_40,pSVar15,(System_String_o *)"",pSVar19,
                          (MethodInfo *)0x0);
  pMVar25 = "";
  if (pSStack_c8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar11 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                     (pSStack_c8,(Il2CppObject *)pSVar15,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar11 != '\0') {
    pMVar25 = (MethodInfo *)
              System_Collections_Generic_Dictionary<object__object>__get_Item
                        (pSStack_c8,(Il2CppObject *)pSVar15,MethodInfo_String_get_Item);
  }
  if (pSVar21 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar11 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                     (pSVar21,(Il2CppObject *)pSVar15,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar11 == '\0') {
    if (pIVar14 == (Il2CppObject *)0x0) goto LAB_040685a8;
  }
  else {
    if (pIVar14 == (Il2CppObject *)0x0) goto LAB_040685a8;
    bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
    if ((bVar2 <= (pIVar14->klass->_2).naturalAligment) &&
       ((pIVar14->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_StringSetting)) {
      pSVar23 = (System_String_array *)
                System_Collections_Generic_Dictionary<object__object>__get_Item
                          (pSVar21,(Il2CppObject *)pSVar15,MethodInfo_String___get_Item);
      in_stack_fffffffffffffeb8 = (MethodInfo *)0x0;
      in_stack_fffffffffffffec0 = 0;
      UI_ElementFactory__CreateDropdownSetting
                ((UnityEngine_Transform_o *)pUVar8,style,(Settings_BaseSetting_o *)pIVar14,
                 pSStack_90,pSVar23,(System_String_o *)pMVar25,180.0,40.0,300.0,
                 (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 in_stack_fffffffffffffec8);
      method_07 = pMVar25;
      goto LAB_040685a8;
    }
  }
  pIVar9 = pIVar14->klass;
  bVar2 = (pIVar9->_2).naturalAligment;
  bVar3 = (TypeInfo_BoolSetting->_2).naturalAligment;
  if ((bVar2 < bVar3) || ((pIVar9->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_BoolSetting)) {
    bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
    if ((((bVar3 <= bVar2) && ((pIVar9->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_StringSetting)) ||
        ((bVar3 = (TypeInfo_FloatSetting->_2).naturalAligment, bVar3 <= bVar2 &&
         ((pIVar9->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_FloatSetting)))) ||
       ((bVar3 = (TypeInfo_IntSetting->_2).naturalAligment, bVar3 <= bVar2 &&
        ((pIVar9->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_IntSetting)))) {
      in_stack_fffffffffffffec8 = (MethodInfo *)0x0;
      in_stack_fffffffffffffeb8 = (MethodInfo *)0x0;
      in_stack_fffffffffffffec0 = 0;
      method_07 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateInputSetting
                ((UnityEngine_Transform_o *)pUVar8,style,(Settings_BaseSetting_o *)pIVar14,
                 pSStack_90,(System_String_o *)pMVar25,180.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 in_stack_fffffffffffffed8);
    }
  }
  else {
    method_07 = (MethodInfo *)0x0;
    UI_ElementFactory__CreateToggleSetting
              ((UnityEngine_Transform_o *)pUVar8,style,(Settings_BaseSetting_o *)pIVar14,pSStack_90,
               (System_String_o *)pMVar25,30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,
               in_stack_fffffffffffffeb8);
  }
LAB_040685a8:
  iStack_100 = iStack_100 + 1;
  goto LAB_040685b4;
LAB_04068a97:
  __this_04.fields._index = (int)in_stack_fffffffffffffec0;
  __this_04.fields._version = (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_04.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffeb8;
  __this_04.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffec8;
  bVar11 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                     (__this_04,(MethodInfo_31D0850 *)&_Stack_f8);
  pSVar15 = pSStack_e8;
  if ((char)bVar11 != '\0') {
    if (pSStack_e8 == (System_String_o *)0x0) {
LAB_04069d85:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar23 = System_String__Split(pSStack_e8,0x2e,0,(MethodInfo *)0x0);
    if (pSVar23 == (System_String_array *)0x0) {
LAB_04069d9d:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((int)pSVar23->max_length < 2) {
      ppSVar27 = (System_String_o **)&"Addon";
    }
    else {
      ppSVar27 = pSVar23->m_Items;
    }
    pSVar19 = *ppSVar27;
    bVar11 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                       (pSVar16,(Il2CppObject *)pSVar19,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar11 == '\0') {
      pSVar28 = (System_Collections_Generic_List_T__o *)il2cpp_runtime_glue(TypeInfo_List_KeyValuePair_string__BaseSetting);
      System_Collections_Generic_List<KeyValuePair<object__object>>___ctor(pSVar28,MethodInfo_List_1_KeyValuePair_2_System_String_Settings_Bas);
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (pSVar16,(Il2CppObject *)pSVar19,(Il2CppObject *)pSVar28,MethodInfo_Void_set_Item);
    }
    pSVar28 = (System_Collections_Generic_List_T__o *)
              System_Collections_Generic_Dictionary<object__object>__get_Item
                        (pSVar16,(Il2CppObject *)pSVar19,MethodInfo_List_1_KeyValuePair_2_System_String_Settings_Bas);
    pIVar14 = System_Collections_Generic_Dictionary<object__object>__get_Item
                        ((System_Collections_Generic_Dictionary_object__object__o *)pSVar17,
                         (Il2CppObject *)pSVar15,MethodInfo_BaseSetting_get_Item);
    _Stack_b8.genericMethod = (Il2CppObject *)0x0;
    pIStack_b0 = (Il2CppObject *)0x0;
    __this_15.fields.value = (Il2CppObject *)pSVar15;
    __this_15.fields.key = (Il2CppObject *)&_Stack_b8;
    System_Collections_Generic_KeyValuePair<object__object>___ctor
              (__this_15,pIVar14,MethodInfo_KeyValuePair_2_System_String_Settings_BaseSettin,method_06);
    lVar35 = MethodInfo_Void_Add;
    if (pSVar28 == (System_Collections_Generic_List_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    item.fields.value = pIStack_b0;
    item.fields.key = _Stack_b8.genericMethod;
    piVar1 = &(pSVar28->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar24 = (pSVar28->fields)._items;
    if (pSVar24 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar13 = (pSVar28->fields)._size;
    lVar31 = (long)(int)uVar13;
    if (uVar13 < (uint)pSVar24->max_length) {
      (pSVar28->fields)._size = uVar13 + 1;
      ((_union_231120 *)(pSVar24->m_Items + lVar31 * 2))->genericMethod = (void *)_Stack_b8;
      pSVar24->m_Items[lVar31 * 2 + 1] = pIStack_b0;
      il2cpp_runtime_glue(pSVar24->m_Items + lVar31 * 2,0);
    }
    else {
      System_Collections_Generic_List<KeyValuePair<object__object>>__AddWithResize
                (pSVar28,item,
                 *(MethodInfo_34A6320 **)(*(long *)(*(long *)(lVar35 + 0x20) + 0xc0) + 0x70));
    }
    goto LAB_04068a97;
  }
LAB_04068c64:
  __this_06.fields._index = (int)in_stack_fffffffffffffec0;
  __this_06.fields._version = (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_06.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffeb8;
  __this_06.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffec8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
            (__this_06,(MethodInfo_31D0840 *)&_Stack_f8);
  if ((pSVar16 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (pSVar20 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                          (pSVar16,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
     pSVar20 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               &_Stack_b8,pSVar20,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    pSStack_58 = pSStack_a8;
    _Stack_68 = _Stack_b8;
    pIStack_60 = pIStack_b0;
LAB_04068ce0:
    __this_07.fields._index = (int)in_stack_fffffffffffffec0;
    __this_07.fields._version = (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
    __this_07.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffeb8;
    __this_07.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffec8;
    bVar11 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                       (__this_07,(MethodInfo_31D0850 *)&_Stack_68);
    pSVar15 = pSStack_58;
    if ((char)bVar11 == '\0') {
      __this_12.fields._index = (int)in_stack_fffffffffffffec0;
      __this_12.fields._version = (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
      __this_12.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffeb8;
      __this_12.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffec8;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                (__this_12,(MethodInfo_31D0840 *)&_Stack_68);
      return;
    }
    pUVar29 = UI_ElementFactory__CreateDefaultLabel
                        ((UnityEngine_Transform_o *)pUStack_d8->klass,style,pSStack_58,1,3,method_07
                        );
    if (pUStack_d0 == (UI_CollapsibleSection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UI_CollapsibleSection__AddChild(pUStack_d0,pUVar29,method_02);
    pSVar19 = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8);
    pSVar21 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
    System_Collections_Generic_Dictionary<object__object>___ctor(pSVar21,MethodInfo_Dictionary_2_System_String_System_String);
    __this_14 = (System_Collections_Generic_Dictionary_object__object__o *)
                il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
    System_Collections_Generic_Dictionary<object__object>___ctor(__this_14,MethodInfo_Dictionary_2_System_String_System_String);
    pSStack_c8 = __this_14;
    pSVar28 = (System_Collections_Generic_List_T__o *)
              System_Collections_Generic_Dictionary<object__object>__get_Item
                        (pSVar16,(Il2CppObject *)pSVar15,MethodInfo_List_1_KeyValuePair_2_System_String_Settings_Bas);
    pSStack_c0 = pSVar19;
    if (pSVar28 == (System_Collections_Generic_List_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_List<KeyValuePair<object__object>>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_b8,pSVar28,MethodInfo_List_1_T__Enumerator_KeyValuePair_2_System_Strin);
    pSStack_78 = pSStack_a8;
    uStack_70 = uStack_a0;
    _Stack_88 = _Stack_b8;
    pIStack_80 = pIStack_b0;
LAB_04068e10:
    __this_08.fields._index = (int)in_stack_fffffffffffffec0;
    __this_08.fields._version = (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
    __this_08.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8;
    __this_08.fields._current = (Il2CppObject *)in_stack_fffffffffffffec8;
    bVar11 = System_Collections_Generic_List_Enumerator<KeyValuePair<object__object>>__MoveNext
                       (__this_08,(MethodInfo_3176CF0 *)&_Stack_88);
    pSVar19 = pSStack_c0;
    if ((char)bVar11 != '\0') {
      auVar36 = il2cpp_glue_03c129b0(&_Stack_88,MethodInfo_KeyValuePair_2_System_String_Settings_BaseSettin);
      plVar32 = auVar36._8_8_;
      pSVar19 = auVar36._0_8_;
      if (pSVar19 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar23 = System_String__Split(pSVar19,0x2e,0,(MethodInfo *)0x0);
      if (pSVar23 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (1 < (int)pSVar23->max_length) {
        pSVar19 = pSVar23->m_Items[1];
      }
      bVar11 = System_String__op_Equality(pSVar19,"Description",(MethodInfo *)0x0);
      if (((char)bVar11 == '\0') || (plVar32 == (long *)0x0)) {
LAB_04068ed0:
        if (pSVar19 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar11 = System_String__EndsWith(pSVar19,"Tooltip",(MethodInfo *)0x0);
        if (((char)bVar11 != '\0') && (plVar32 != (long *)0x0)) {
          bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
          if ((bVar2 <= *(byte *)(*plVar32 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar32 + 200) + -8 + (ulong)bVar2 * 8) == TypeInfo_StringSetting))
          {
            pSVar19 = System_String__Substring
                                (pSVar19,0,(pSVar19->fields)._stringLength + -7,(MethodInfo *)0x0);
            bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
            if ((*(byte *)(*plVar32 + 0x130) < bVar2) ||
               (*(Il2CppClass **)(*(long *)(*plVar32 + 200) + -8 + (ulong)bVar2 * 8) != TypeInfo_StringSetting
               )) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(plVar32);
            }
            if (pSVar21 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            System_Collections_Generic_Dictionary<object__object>__set_Item
                      (pSVar21,(Il2CppObject *)pSVar19,(Il2CppObject *)plVar32[3],MethodInfo_Void_set_Item);
            goto LAB_04068e10;
          }
        }
        bVar11 = System_String__EndsWith(pSVar19,"Dropbox",(MethodInfo *)0x0);
        if (((char)bVar11 != '\0') && (plVar32 != (long *)0x0)) {
          bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
          if ((bVar2 <= *(byte *)(*plVar32 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar32 + 200) + -8 + (ulong)bVar2 * 8) == TypeInfo_StringSetting))
          {
            pSVar22 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
            System_Collections_Generic_List<object>___ctor(pSVar22,MethodInfo_List_1_System_String);
            bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
            if ((*(byte *)(*plVar32 + 0x130) < bVar2) ||
               (*(Il2CppClass **)(*(long *)(*plVar32 + 200) + -8 + (ulong)bVar2 * 8) != TypeInfo_StringSetting
               )) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(plVar32);
            }
            if ((System_String_o *)plVar32[3] == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar23 = System_String__Split((System_String_o *)plVar32[3],0x2c,0,(MethodInfo *)0x0);
            if (pSVar23 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar13 = (uint)pSVar23->max_length;
            if (pSVar22 == (System_Collections_Generic_List_object__o *)0x0) {
              if (0 < (int)uVar13) {
                lVar35 = 0;
                do {
                  if (uVar13 <= (uint)lVar35) goto LAB_04069798;
                  if (pSVar23->m_Items[lVar35] == (System_String_o *)0x0) goto LAB_0406978e;
                  pSVar30 = System_String__Trim(pSVar23->m_Items[lVar35],(MethodInfo *)0x0);
                  bVar11 = System_String__op_Inequality
                                     (pSVar30,(System_String_o *)
                                              **(undefined8 **)(DAT_057110b0 + 0xb8),
                                      (MethodInfo *)0x0);
                  if ((char)bVar11 != '\0') {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  uVar13 = (uint)pSVar23->max_length;
                  lVar35 = lVar35 + 1;
                } while ((int)lVar35 < (int)uVar13);
              }
            }
            else if (0 < (int)uVar13) {
              uVar34 = 0;
              if (uVar13 == 0) {
LAB_04069798:
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              do {
                if (pSVar23->m_Items[(int)uVar34] == (System_String_o *)0x0) {
LAB_0406978e:
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pSVar30 = System_String__Trim(pSVar23->m_Items[(int)uVar34],(MethodInfo *)0x0);
                bVar11 = System_String__op_Inequality
                                   (pSVar30,(System_String_o *)
                                            **(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0
                                   );
                lVar35 = MethodInfo_Void_Add;
                if ((char)bVar11 != '\0') {
                  piVar1 = &(pSVar22->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar24 = (pSVar22->fields)._items;
                  if (pSVar24 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  uVar13 = (pSVar22->fields)._size;
                  if (uVar13 < (uint)pSVar24->max_length) {
                    (pSVar22->fields)._size = uVar13 + 1;
                    pSVar24->m_Items[(int)uVar13] = (Il2CppObject *)pSVar30;
                    il2cpp_runtime_glue(pSVar24->m_Items + (int)uVar13);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              (pSVar22,(Il2CppObject *)pSVar30,
                               *(MethodInfo_35A7350 **)
                                (*(long *)(*(long *)(lVar35 + 0x20) + 0xc0) + 0x70));
                  }
                }
                uVar34 = uVar34 + 1;
                uVar13 = (uint)pSVar23->max_length;
                if ((int)uVar13 <= (int)uVar34) break;
                if (uVar13 <= uVar34) goto LAB_04069798;
              } while( true );
            }
            pIVar14 = "None";
            lVar35 = MethodInfo_Void_Add;
            if (pSVar22 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if ((pSVar22->fields)._size == 0) {
              piVar1 = &(pSVar22->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar24 = (pSVar22->fields)._items;
              if (pSVar24 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              if ((int)pSVar24->max_length == 0) {
                System_Collections_Generic_List<object>__AddWithResize
                          (pSVar22,pIVar14,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar35 + 0x20) + 0xc0) + 0x70));
              }
              else {
                (pSVar22->fields)._size = 1;
                pSVar24->m_Items[0] = pIVar14;
                il2cpp_runtime_glue(pSVar24->m_Items);
              }
            }
            pSVar19 = System_String__Substring
                                (pSVar19,0,(pSVar19->fields)._stringLength + -7,(MethodInfo *)0x0);
            pSVar24 = System_Collections_Generic_List<object>__ToArray(pSVar22,MethodInfo_String___ToArray);
            if (pSStack_c8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            System_Collections_Generic_Dictionary<object__object>__set_Item
                      (pSStack_c8,(Il2CppObject *)pSVar19,&pSVar24->obj,MethodInfo_Void_set_Item);
          }
        }
      }
      else {
        bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
        if ((*(byte *)(*plVar32 + 0x130) < bVar2) ||
           (*(Il2CppClass **)(*(long *)(*plVar32 + 200) + -8 + (ulong)bVar2 * 8) != TypeInfo_StringSetting))
        goto LAB_04068ed0;
        pSStack_c0 = (System_String_o *)plVar32[3];
      }
      goto LAB_04068e10;
    }
    __this_09.fields._index = (int)in_stack_fffffffffffffec0;
    __this_09.fields._version = (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
    __this_09.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8;
    __this_09.fields._current = (Il2CppObject *)in_stack_fffffffffffffec8;
    System_Collections_Generic_List_Enumerator<KeyValuePair<object__object>>__Dispose
              (__this_09,(MethodInfo_3176CE0 *)&_Stack_88);
    bVar11 = System_String__op_Inequality
                       (pSVar19,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                        (MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      pUVar29 = UI_ElementFactory__CreateDefaultLabel
                          ((UnityEngine_Transform_o *)pUStack_d8->klass,style,pSVar19,0,3,method_07)
      ;
      UI_CollapsibleSection__AddChild(pUStack_d0,pUVar29,method_03);
    }
    pSVar28 = (System_Collections_Generic_List_T__o *)
              System_Collections_Generic_Dictionary<object__object>__get_Item
                        (pSVar16,(Il2CppObject *)pSVar15,MethodInfo_List_1_KeyValuePair_2_System_String_Settings_Bas);
    if (pSVar28 == (System_Collections_Generic_List_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_List<KeyValuePair<object__object>>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_b8,pSVar28,MethodInfo_List_1_T__Enumerator_KeyValuePair_2_System_Strin);
    pSStack_78 = pSStack_a8;
    uStack_70 = uStack_a0;
    _Stack_88 = _Stack_b8;
    pIStack_80 = pIStack_b0;
LAB_040693e0:
    do {
      __this_10.fields._index = (int)in_stack_fffffffffffffec0;
      __this_10.fields._version = (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
      __this_10.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffeb8;
      __this_10.fields._current = (Il2CppObject *)in_stack_fffffffffffffec8;
      bVar11 = System_Collections_Generic_List_Enumerator<KeyValuePair<object__object>>__MoveNext
                         (__this_10,(MethodInfo_3176CF0 *)&_Stack_88);
      if ((char)bVar11 == '\0') goto LAB_04069730;
      auVar36 = il2cpp_glue_03c129b0(&_Stack_88,MethodInfo_KeyValuePair_2_System_String_Settings_BaseSettin);
      pSVar33 = auVar36._8_8_;
      pSVar15 = auVar36._0_8_;
      if (pSVar15 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar23 = System_String__Split(pSVar15,0x2e,0,(MethodInfo *)0x0);
      if (pSVar23 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (1 < (int)pSVar23->max_length) {
        pSVar15 = pSVar23->m_Items[1];
      }
      bVar11 = System_String__op_Equality(pSVar15,"Description",(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        if (pSVar15 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar11 = System_String__EndsWith(pSVar15,"Tooltip",(MethodInfo *)0x0);
        if (((char)bVar11 != '\0') && (pSVar33 != (Settings_BaseSetting_o *)0x0)) {
          bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
          if ((bVar2 <= (pSVar33->klass->_2).naturalAligment) &&
             ((pSVar33->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_StringSetting))
          goto LAB_040693e0;
        }
        bVar11 = System_String__EndsWith(pSVar15,"Dropbox",(MethodInfo *)0x0);
        if (((char)bVar11 != '\0') && (pSVar33 != (Settings_BaseSetting_o *)0x0)) {
          bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
          if ((bVar2 <= (pSVar33->klass->_2).naturalAligment) &&
             ((pSVar33->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_StringSetting))
          goto LAB_040693e0;
        }
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar19 = Utility_Util__PascalToSentence(pSVar15,(MethodInfo *)0x0);
        if (pSVar21 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        value = &pIStack_38;
        bVar11 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                           (pSVar21,(Il2CppObject *)pSVar15,value,MethodInfo_Boolean_TryGetValue);
        if ((char)bVar11 == '\0') {
          value = *(Il2CppObject ***)(DAT_057110b0 + 0xb8);
        }
        if (pSStack_c8 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pMVar25 = (MethodInfo *)*value;
        bVar11 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                           (pSStack_c8,(Il2CppObject *)pSVar15,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar11 == '\0') {
          if (pSVar33 == (Settings_BaseSetting_o *)0x0) goto LAB_040693e0;
LAB_04069649:
          pSVar10 = pSVar33->klass;
          bVar2 = (pSVar10->_2).naturalAligment;
          bVar3 = (TypeInfo_BoolSetting->_2).naturalAligment;
          if ((bVar2 < bVar3) || ((pSVar10->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_BoolSetting)) {
            bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
            if ((((bVar2 < bVar3) || ((pSVar10->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_StringSetting)
                 ) && ((bVar3 = (TypeInfo_FloatSetting->_2).naturalAligment, bVar2 < bVar3 ||
                       ((pSVar10->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_FloatSetting)))) &&
               ((bVar3 = (TypeInfo_IntSetting->_2).naturalAligment, bVar2 < bVar3 ||
                ((pSVar10->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_IntSetting))))
            goto LAB_040693e0;
            in_stack_fffffffffffffec8 = (MethodInfo *)0x0;
            in_stack_fffffffffffffeb8 = (MethodInfo *)0x0;
            in_stack_fffffffffffffec0 = 0;
            method_07 = (MethodInfo *)0x0;
            pUVar29 = UI_ElementFactory__CreateInputSetting
                                ((UnityEngine_Transform_o *)pUStack_d8->klass,style,pSVar33,pSVar19,
                                 (System_String_o *)pMVar25,180.0,40.0,0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                 (System_Func_string__bool__o *)0x0,
                                 (System_Func_string__string__o *)0x0,in_stack_fffffffffffffed8);
            method_04 = extraout_RDX;
          }
          else {
            method_07 = (MethodInfo *)0x0;
            pUVar29 = UI_ElementFactory__CreateToggleSetting
                                ((UnityEngine_Transform_o *)pUStack_d8->klass,style,pSVar33,pSVar19,
                                 (System_String_o *)pMVar25,30.0,30.0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,in_stack_fffffffffffffeb8);
            method_04 = extraout_RDX_01;
          }
        }
        else {
          if (pSVar33 == (Settings_BaseSetting_o *)0x0) goto LAB_040693e0;
          bVar2 = (TypeInfo_StringSetting->_2).naturalAligment;
          if (((pSVar33->klass->_2).naturalAligment < bVar2) ||
             ((pSVar33->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_StringSetting))
          goto LAB_04069649;
          pUVar8 = pUStack_d8->klass;
          pSVar23 = (System_String_array *)
                    System_Collections_Generic_Dictionary<object__object>__get_Item
                              (pSStack_c8,(Il2CppObject *)pSVar15,MethodInfo_String___get_Item);
          in_stack_fffffffffffffeb8 = (MethodInfo *)0x0;
          in_stack_fffffffffffffec0 = 0;
          pUVar29 = UI_ElementFactory__CreateDropdownSetting
                              ((UnityEngine_Transform_o *)pUVar8,style,pSVar33,pSVar19,pSVar23,
                               (System_String_o *)pMVar25,180.0,40.0,300.0,
                               (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0
                               ,in_stack_fffffffffffffec8);
          method_04 = extraout_RDX_00;
          method_07 = pMVar25;
        }
        UI_CollapsibleSection__AddChild(pUStack_d0,pUVar29,method_04);
      }
    } while( true );
  }
LAB_04069ce8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CreateGameModePanel$$.ctor
// il2cpp: void UI_CreateGameModePanel___ctor (UI_CreateGameModePanel_o* __this, const MethodInfo* method);
// 0x406bd90

void UI_CreateGameModePanel___ctor(UI_CreateGameModePanel_o *__this,MethodInfo *method)

{
  UI_CreateGameCategoryPanel___ctor((UI_CreateGameCategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


