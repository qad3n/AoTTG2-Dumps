// Type: UI.CreateGameModePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CreateGameModePanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CreateGamePopup/CreateGameModePanel.cs
// --------------------------------

// UI.CreateGameModePanel.<>c__DisplayClass2_0$$.ctor
// il2cpp: void UI_CreateGameModePanel___c__DisplayClass2_0___ctor (UI_CreateGameModePanel___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x4377c20

void UI_CreateGameModePanel___c__DisplayClass2_0___ctor
               (UI_CreateGameModePanel___c__DisplayClass2_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameModePanel.<>c__DisplayClass2_0$$<Setup>b__0
// il2cpp: void UI_CreateGameModePanel___c__DisplayClass2_0___Setup_b__0 (UI_CreateGameModePanel___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x43797b0

void UI_CreateGameModePanel___c__DisplayClass2_0___Setup_b__0
               (UI_CreateGameModePanel___c__DisplayClass2_0_o *__this,MethodInfo *method)

{
  UI_BasePanel_o *__this_00;
  
  __this_00 = (__this->fields).parent;
  if (__this_00 != (UI_BasePanel_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel(__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.CreateGameModePanel$$get_ScrollBar
// il2cpp: bool UI_CreateGameModePanel__get_ScrollBar (UI_CreateGameModePanel_o* __this, const MethodInfo* method);
// 0x43755c0

bool_conflict UI_CreateGameModePanel__get_ScrollBar(UI_CreateGameModePanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CreateGameModePanel$$Setup
// il2cpp: void UI_CreateGameModePanel__Setup (UI_CreateGameModePanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43755d0

void UI_CreateGameModePanel__Setup(UI_CreateGameModePanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  int *piVar2;
  MethodInfo_3251160 *method_00;
  byte bVar3;
  byte bVar4;
  long lVar5;
  Il2CppRGCTXData *pIVar6;
  System_String_o *gameMode;
  void *pvVar7;
  UI_CreateGamePopup_o *pUVar8;
  UI_BasePanel_o *pUVar9;
  Il2CppClass *pIVar10;
  Il2CppClass *pIVar11;
  System_Collections_Specialized_OrderedDictionary_o *pSVar12;
  UnityEngine_Transform_o *parent_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_06;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_07;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_08;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_09;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_10;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_11;
  Il2CppObject *pIVar13;
  undefined8 a;
  bool_conflict bVar14;
  uint uVar15;
  int32_t iVar16;
  int iVar17;
  UI_BasePopup_o *pUVar18;
  Map_MapScript_o *__this_12;
  System_String_o *pSVar19;
  System_Collections_Generic_Dictionary_object__object__o *pSVar20;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *settings;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar21;
  System_String_o *pSVar22;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar23;
  System_Collections_Generic_List_object__o *__this_13;
  System_String_array *defaultValue;
  System_String_array *pSVar24;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *__this_14;
  UnityEngine_GameObject_o *pUVar25;
  System_Collections_Generic_Dictionary_object__object__o *__this_15;
  UI_BasePopup_o *__this_16;
  System_Collections_Generic_Dictionary_object__object__o *__this_17;
  System_Object_array *pSVar26;
  long *plVar27;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c **value;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX;
  MethodInfo *method_04;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_05;
  MethodInfo *method_06;
  uint uVar28;
  System_String_array *in_R9;
  System_String_array *unaff_R13;
  long *unaff_R15;
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  MethodInfo *in_stack_fffffffffffffeb8;
  undefined8 in_stack_fffffffffffffec0;
  MethodInfo *in_stack_fffffffffffffec8;
  undefined8 in_stack_fffffffffffffed0;
  MethodInfo *in_stack_fffffffffffffed8;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_118;
  UI_ElementStyle_o *pUStack_110;
  UI_BasePopup_o *pUStack_100;
  UI_BasePopup_o *pUStack_f8;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_f0;
  System_String_array *pSStack_e8;
  undefined1 auStack_d8 [40];
  Il2CppType *pIStack_b0;
  UI_BasePopup_o *pUStack_a8;
  Il2CppRGCTXData *pIStack_a0;
  _union_233249 _Stack_98;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *pSStack_90;
  System_String_o *pSStack_88;
  undefined1 auStack_80 [16];
  UI_BasePopup_o *pUStack_70;
  Il2CppRGCTXData *pIStack_68;
  _union_233249 _Stack_60;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSStack_58;
  Il2CppType *pIStack_50;
  UI_BasePopup_o *pUStack_48;
  System_String_o *pSStack_40;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSStack_38;
  
  if (g_data_057ae209 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGameGeneralPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Settin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_Settings_BaseSetting_get_Cu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass2_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"No settings for selected addons.");
    il2cpp_runtime_helper_023445d0(&"Dropbox");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"GameMode");
    il2cpp_runtime_helper_023445d0(&"CreateGamePopup");
    il2cpp_runtime_helper_023445d0(&"Tooltip");
    il2cpp_runtime_helper_023445d0(&"Addon Settings");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Description");
    il2cpp_runtime_helper_023445d0(&"Mode");
    g_data_057ae209 = '\x01';
  }
  auStack_d8._0_8_ = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  auStack_d8._8_8_ = (Il2CppType *)0x0;
  auStack_d8._16_8_ = (UI_BasePopup_o *)0x0;
  pSStack_58 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  pUStack_48 = (UI_BasePopup_o *)0x0;
  pUStack_a8 = (UI_BasePopup_o *)0x0;
  pIStack_a0 = (Il2CppRGCTXData *)0x0;
  auStack_d8._32_8_ = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIStack_b0 = (Il2CppType *)0x0;
  _Stack_98.genericMethod = (void *)0x0;
  pSStack_38 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pUVar18 = (UI_BasePopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass2_0);
  System_Object___ctor((Il2CppObject *)pUVar18,(MethodInfo *)0x0);
  if (pUVar18 == (UI_BasePopup_o *)0x0) goto label_04377706;
  (pUVar18->fields).m_CachedPtr = (intptr_t)parent;
  il2cpp_runtime_helper_022b4080(&pUVar18->fields,parent);
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,(UI_BasePanel_o *)(pUVar18->fields).m_CachedPtr,
                      (MethodInfo *)0x0);
  pSStack_90 = "CreateGamePopup";
  pSStack_40 = "Mode";
  parent = (UI_BasePanel_o *)(*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)(__this);
  pUStack_110 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  System_Object___ctor((Il2CppObject *)pUStack_110,(MethodInfo *)0x0);
  (pUStack_110->fields).FontSize = 0x18;
  (pUStack_110->fields).TitleWidth = 200.0;
  (pUStack_110->fields).Spacing = 20.0;
  (pUStack_110->fields).ThemePanel = (System_String_o *)parent;
  il2cpp_runtime_helper_022b4080(&(pUStack_110->fields).ThemePanel);
  unaff_R15 = &TypeInfo_SettingsManager;
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if (lVar5 == 0) goto label_04377706;
  lVar5 = *(long *)(lVar5 + 0x38);
  if (lVar5 == 0) goto label_04377706;
  if (*(long *)(lVar5 + 0x20) == 0) goto label_04377706;
  pUStack_100 = pUVar18;
  if (*(long *)(lVar5 + 0x28) == 0) goto label_04377706;
  pSVar19 = *(System_String_o **)(*(long *)(lVar5 + 0x20) + 0x18);
  parent = *(UI_BasePanel_o **)(*(long *)(lVar5 + 0x28) + 0x18);
  __this_12 = (Map_MapScript_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
  Map_MapScript___ctor(__this_12,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar19 = Map_BuiltinLevels__LoadMap(pSVar19,(System_String_o *)parent,(MethodInfo *)0x0);
  if (__this_12 == (Map_MapScript_o *)0x0) goto label_04377706;
  (*(__this_12->klass->vtable)._5_Deserialize.methodPtr)
            (__this_12,pSVar19,(__this_12->klass->vtable)._5_Deserialize.method);
  unaff_R15 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if ((MethodInfo_3251160 *)unaff_R15 == (MethodInfo_3251160 *)0x0) goto label_04377706;
  pIVar6 = ((MethodInfo_3251160 *)unaff_R15)->rgctx_data;
  if (pIVar6 == (Il2CppRGCTXData *)0x0) goto label_04377706;
  if (pIVar6[6].method == (MethodInfo *)0x0) goto label_04377706;
  if (pIVar6[7].method == (MethodInfo *)0x0) goto label_04377706;
  bVar14 = System_String__op_Inequality
                     ((System_String_o *)(pIVar6[6].method)->name,(System_String_o *)(pIVar6[7].method)->name,
                      (MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    if (*(int *)(TypeInfo_CreateGameGeneralPanel + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UI_CreateGameGeneralPanel__SetDefaultMisc((MethodInfo *)0x0);
    pIVar6 = ((MethodInfo_3251160 *)unaff_R15)->rgctx_data;
    if (pIVar6 == (Il2CppRGCTXData *)0x0) goto label_04377706;
    if (pIVar6[4].method == (MethodInfo *)0x0) goto label_04377706;
    if (pIVar6[5].method == (MethodInfo *)0x0) goto label_04377706;
    if (pIVar6[6].method == (MethodInfo *)0x0) goto label_04377706;
    pSVar19 = (System_String_o *)(pIVar6[4].method)->name;
    pSVar22 = (System_String_o *)(pIVar6[5].method)->name;
    gameMode = (System_String_o *)(pIVar6[6].method)->name;
    unaff_R13 = (System_String_array *)((MethodInfo_3251160 *)((long)unaff_R15 + 0x58))->methodPointer;
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Map_BuiltinLevels__LoadMiscSettings
              (pSVar19,pSVar22,gameMode,(Settings_InGameMiscSettings_o *)unaff_R13,(MethodInfo *)0x0);
    pvVar7 = (((MethodInfo_3251160 *)unaff_R15)->field8_0x40).genericMethod;
    pSVar20 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_BaseSetting);
    System_Collections_Generic_Dictionary_object__object____ctor(pSVar20,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    parent = (UI_BasePanel_o *)(UI_BasePopup_o *)0x0;
    if (pvVar7 == (void *)0x0) goto label_04377706;
    *(System_Collections_Generic_Dictionary_object__object__o **)((long)pvVar7 + 0x20) = pSVar20;
    parent = (UI_BasePanel_o *)((long)pvVar7 + 0x20);
    il2cpp_runtime_helper_022b4080(parent);
  }
  pIVar6 = ((MethodInfo_3251160 *)unaff_R15)->rgctx_data;
  if (pIVar6 == (Il2CppRGCTXData *)0x0) goto label_04377706;
  unaff_R15 = &TypeInfo_SettingsManager;
  if (pIVar6[6].method == (MethodInfo *)0x0) goto label_04377706;
  if (pIVar6[7].method == (MethodInfo *)0x0) goto label_04377706;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pIVar6[7].method,(Il2CppObject *)(pIVar6[6].method)->name,
             MethodInfo_Void_set_Value);
  pUVar8 = (UI_CreateGamePopup_o *)(__this->fields).Parent;
  if (pUVar8 == (UI_CreateGamePopup_o *)0x0) goto label_04377706;
  bVar3 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
  if ((pUVar8->klass->_2).naturalAligment < bVar3) goto label_0437772a;
  if ((pUVar8->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CreateGamePopup) goto label_0437772a;
  settings = UI_CreateGamePopup__SyncModeSettings(pUVar8,__this_12,method_01);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar19 = CustomLogic_CustomLogicManager__GetModeDescription(settings,(MethodInfo *)0x0);
  pUVar9 = (__this->fields).Parent;
  parent = (UI_BasePanel_o *)&TypeInfo_CreateGamePopup;
  if (pUVar9 == (UI_BasePanel_o *)0x0) goto label_04377706;
  bVar3 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
  if ((pUVar9->klass->_2).naturalAligment < bVar3) goto label_0437772a;
  if ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CreateGamePopup) goto label_0437772a;
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  parent = (UI_BasePanel_o *)&TypeInfo_CreateGamePopup;
  if (lVar5 == 0) goto label_04377706;
  lVar5 = *(long *)(lVar5 + 0x38);
  parent = (UI_BasePanel_o *)&TypeInfo_CreateGamePopup;
  if (lVar5 == 0) goto label_04377706;
  parent = (UI_BasePanel_o *)pUVar9[2].fields.m_CachedPtr;
  unaff_R13 = *(System_String_array **)(lVar5 + 0x30);
  pSVar21 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction)
  ;
  UnityEngine_Events_UnityAction___ctor();
  if ((UI_BasePopup_o *)parent == (UI_BasePopup_o *)0x0) goto label_04377706;
  (((UI_BasePopup_o *)((long)parent + 0xa8))->fields).killPopupKeyframesIn =
       (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)unaff_R13;
  il2cpp_runtime_helper_022b4080(&(((UI_BasePopup_o *)((long)parent + 0xa8))->fields).killPopupKeyframesIn,unaff_R13);
  (((UI_BasePopup_o *)((long)parent + 0xa8))->fields).killPopupKeyframesOut = pSVar21;
  il2cpp_runtime_helper_022b4080(&(((UI_BasePopup_o *)((long)parent + 0xa8))->fields).killPopupKeyframesOut);
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if (lVar5 == 0) goto label_04377706;
  lVar5 = *(long *)(lVar5 + 0x38);
  if (lVar5 == 0) goto label_04377706;
  unaff_R13 = (System_String_array *)(__this->fields).DoublePanelLeft;
  unaff_R15 = *(long **)(lVar5 + 0x30);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar22 = UI_UIManager__GetLocale
                      ((System_String_o *)pSStack_90,"General","GameMode",(System_String_o *)""
                       ,(System_String_o *)"",(MethodInfo *)0x0);
  in_R9 = "";
  UI_ElementFactory__CreateButtonPopupSetting
            ((UnityEngine_Transform_o *)unaff_R13,pUStack_110,(Settings_BaseSetting_o *)unaff_R15,pSVar22,
             (UI_BasePopup_o *)parent,(System_String_o *)"",180.0,0.0,in_stack_fffffffffffffeb8);
  if (settings == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) goto label_04377706;
  pSVar23 = System_Collections_Generic_Dictionary_object__object___get_Keys
                      ((System_Collections_Generic_Dictionary_object__object__o *)settings,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
  parent = (UI_BasePanel_o *)&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set;
  if (pSVar23 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_04377706;
  pSStack_e8 = (System_String_array *)&(__this->fields).DoublePanelLeft;
  uVar15 = System_Collections_Generic_Dictionary_KeyCollection_object__object___get_Count
                     (pSVar23,MethodInfo_Int32_get_Count);
  unaff_R15 = (long *)(ulong)uVar15;
  bVar14 = System_String__op_Inequality(pSVar19,(System_String_o *)"",(MethodInfo *)0x0);
  uVar15 = 1;
  if ((char)bVar14 != '\0') {
    UI_ElementFactory__CreateDefaultLabel
              (*(UnityEngine_Transform_o **)pSStack_e8,pUStack_110,pSVar19,0,3,(MethodInfo *)in_R9);
    uVar15 = 2;
  }
  pUStack_100 = (UI_BasePopup_o *)(ulong)uVar15;
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelLeft,1.0,(MethodInfo *)0x0);
  pSStack_f0 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(pSStack_f0,MethodInfo_Dictionary_2_System_String_System_String);
  pUStack_f8 = (UI_BasePopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pUStack_f8,MethodInfo_Dictionary_2_System_String_System_String);
  pSVar23 = System_Collections_Generic_Dictionary_object__object___get_Keys
                      ((System_Collections_Generic_Dictionary_object__object__o *)settings,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
  parent = (UI_BasePanel_o *)&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set;
  if (pSVar23 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_04377706;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_80,
             pSVar23,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  auStack_d8._16_8_ = pUStack_70;
  auStack_d8._0_8_ = auStack_80._0_8_;
  auStack_d8._8_8_ = auStack_80._8_8_;
label_04375f80:
  do {
    __this_00.fields._index = (int)in_stack_fffffffffffffec0;
    __this_00.fields._version = (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
    __this_00.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffeb8;
    __this_00.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffec8;
    bVar14 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                       (__this_00,(MethodInfo_3251B20 *)auStack_d8);
    parent = (UI_BasePanel_o *)auStack_d8._16_8_;
    pSStack_118 = (System_Collections_Generic_Dictionary_object__object__o *)settings;
    if ((char)bVar14 == '\0') {
      __this_01.fields._index = (int)in_stack_fffffffffffffec0;
      __this_01.fields._version = (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
      __this_01.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffeb8;
      __this_01.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffec8;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_01,(MethodInfo_3251B10 *)auStack_d8);
      goto label_043762ff;
    }
    unaff_R13 = (System_String_array *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                           (Il2CppObject *)auStack_d8._16_8_,MethodInfo_BaseSetting_get_Item);
    uVar15 = System_String__op_Equality((System_String_o *)parent,"Description",(MethodInfo *)0x0);
    uVar15 = (int)unaff_R15 - (uVar15 & 0xff);
    unaff_R15 = (long *)(ulong)uVar15;
    if ((UI_BasePopup_o *)parent == (UI_BasePopup_o *)0x0) goto label_04377701;
    bVar14 = System_String__EndsWith((System_String_o *)parent,"Tooltip",(MethodInfo *)0x0);
    if (((char)bVar14 != '\0') && (unaff_R13 != (System_String_array *)0x0)) {
      pIVar10 = (unaff_R13->obj).klass;
      bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
      if ((bVar3 <= (pIVar10->_2).naturalAligment) &&
         ((pIVar10->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_StringSetting)) {
        unaff_R15 = (long *)(ulong)(uVar15 - 1);
        pSVar19 = System_String__Substring_3af8da0
                            ((System_String_o *)parent,0,
                             (int)((UI_BasePopup_Fields *)((long)parent + 0x10))->m_CachedPtr + -7,
                             (MethodInfo *)0x0);
        pIVar10 = (unaff_R13->obj).klass;
        bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
        if ((pIVar10->_2).naturalAligment < bVar3) goto label_0437772f;
        if ((pIVar10->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_StringSetting) goto label_0437772f;
        pSVar24 = (System_String_array *)0x0;
        if (pSStack_f0 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSStack_f0,(Il2CppObject *)pSVar19,(Il2CppObject *)unaff_R13->max_length,MethodInfo_Void_set_Item);
        goto label_04375f80;
      }
    }
    bVar14 = System_String__EndsWith((System_String_o *)parent,"Dropbox",(MethodInfo *)0x0);
    if (((char)bVar14 != '\0') && (unaff_R13 != (System_String_array *)0x0)) {
      pIVar10 = (unaff_R13->obj).klass;
      bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
      if ((bVar3 <= (pIVar10->_2).naturalAligment) &&
         ((pIVar10->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_StringSetting)) {
        unaff_R15 = (long *)(ulong)(uVar15 - 1);
        __this_13 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
        System_Collections_Generic_List_object____ctor(__this_13,MethodInfo_List_1_System_String);
        pIVar10 = (unaff_R13->obj).klass;
        bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
        if ((pIVar10->_2).naturalAligment < bVar3) goto label_04377737;
        if ((pIVar10->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_StringSetting) goto label_04377737;
        pSVar24 = (System_String_array *)unaff_R13->max_length;
        if (pSVar24 == (System_String_array *)0x0) goto label_04377744;
        unaff_R13 = System_String__Split((System_String_o *)pSVar24,0x2c,0,(MethodInfo *)0x0);
        if (unaff_R13 == (System_String_array *)0x0) goto label_04377749;
        iVar17 = (int)unaff_R13->max_length;
        if (__this_13 == (System_Collections_Generic_List_object__o *)0x0) goto label_0437774e;
        if (0 < iVar17) {
          uVar15 = 0;
          if (iVar17 == 0) goto label_043776fc;
          while( true ) {
            pSVar24 = (System_String_array *)0x0;
            if (unaff_R13->m_Items[(int)uVar15] == (System_String_o *)0x0) goto label_0437775b;
            pSVar19 = System_String__Trim(unaff_R13->m_Items[(int)uVar15],(MethodInfo *)0x0);
            lVar5 = MethodInfo_Void_Add;
            piVar1 = &(__this_13->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar26 = (__this_13->fields)._items;
            if (pSVar26 == (System_Object_array *)0x0) goto label_043776f7;
            uVar28 = (__this_13->fields)._size;
            if (uVar28 < (uint)pSVar26->max_length) {
              (__this_13->fields)._size = uVar28 + 1;
              pSVar26->m_Items[(int)uVar28] = (Il2CppObject *)pSVar19;
              il2cpp_runtime_helper_022b4080(pSVar26->m_Items + (int)uVar28);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_13,(Il2CppObject *)pSVar19,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
            uVar15 = uVar15 + 1;
            uVar28 = (uint)unaff_R13->max_length;
            if ((int)uVar28 <= (int)uVar15) break;
            if (uVar28 <= uVar15) goto label_043776fc;
          }
        }
        pIVar13 = "None";
        lVar5 = MethodInfo_Void_Add;
        if ((__this_13->fields)._size == 0) {
          piVar1 = &(__this_13->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar26 = (__this_13->fields)._items;
          pSVar24 = (System_String_array *)0x0;
          if (pSVar26 == (System_Object_array *)0x0) goto label_04377760;
          if ((int)pSVar26->max_length == 0) {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_13,pIVar13,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          else {
            (__this_13->fields)._size = 1;
            pSVar26->m_Items[0] = pIVar13;
            il2cpp_runtime_helper_022b4080(pSVar26->m_Items);
          }
        }
        pSVar19 = System_String__Substring_3af8da0
                            ((System_String_o *)parent,0,
                             (int)((UI_BasePopup_Fields *)((long)parent + 0x10))->m_CachedPtr + -7,
                             (MethodInfo *)0x0);
        pSVar26 = System_Collections_Generic_List_object___ToArray(__this_13,MethodInfo_String_ToArray);
        pSVar24 = (System_String_array *)0x0;
        if (pUStack_f8 == (UI_BasePopup_o *)0x0) goto label_04377765;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)pUStack_f8,
                   (Il2CppObject *)pSVar19,&pSVar26->obj,MethodInfo_Void_set_Item);
      }
    }
  } while( true );
label_0437773f:
  il2cpp_runtime_helper_022b2c90();
label_04377744:
  il2cpp_runtime_helper_022b2c90();
label_04377749:
  iVar17 = il2cpp_runtime_helper_022b2c90();
label_0437774e:
  if (iVar17 < 1) goto label_04377774;
  pSVar24 = (System_String_array *)unaff_R13->m_Items[0];
  if (pSVar24 != (System_String_array *)0x0) {
label_04377779:
    System_String__Trim((System_String_o *)pSVar24,(MethodInfo *)0x0);
    auVar30 = il2cpp_runtime_helper_022b2c90();
    if (auVar30._8_4_ == 1) {
      plVar27 = (long *)__cxa_begin_catch(auVar30._0_8_);
      lVar5 = *plVar27;
      __cxa_end_catch();
      __this_06.fields._index = (int)in_stack_fffffffffffffec0;
      __this_06.fields._version = (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
      __this_06.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffeb8;
      __this_06.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffec8;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_06,(MethodInfo_3251B10 *)auStack_d8);
      if (lVar5 == 0) {
label_043762ff:
        iVar17 = 0x7fffffff;
        if (5 < (int)unaff_R15) {
          iVar17 = (int)(((uint)((ulong)unaff_R15 >> 0x1f) & 1) + (int)unaff_R15) >> 1;
        }
        pSVar23 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSStack_118,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Set);
        pUVar18 = (UI_BasePopup_o *)((ulong)pUStack_100 & 0xffffffff);
        parent = (UI_BasePanel_o *)pUVar18;
        if (pSVar23 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
          System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                     auStack_80,pSVar23,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
          auStack_d8._16_8_ = pUStack_70;
          auStack_d8._0_8_ = auStack_80._0_8_;
          auStack_d8._8_8_ = auStack_80._8_8_;
          pSVar20 = (System_Collections_Generic_Dictionary_object__object__o *)
                    &(__this->fields).DoublePanelRight;
label_043763cd:
          parent = (UI_BasePanel_o *)pUVar18;
          unaff_R13 = (System_String_array *)pSVar20;
          if ((int)pUVar18 < iVar17) {
            unaff_R13 = pSStack_e8;
          }
label_043763e0:
          do {
            do {
              __this_02.fields._index = (int)in_stack_fffffffffffffec0;
              __this_02.fields._version = (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
              __this_02.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffeb8;
              __this_02.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffec8;
              bVar14 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                 (__this_02,(MethodInfo_3251B20 *)auStack_d8);
              a = auStack_d8._16_8_;
              pUStack_100 = pUVar18;
              if ((char)bVar14 == '\0') {
                __this_03.fields._index = (int)in_stack_fffffffffffffec0;
                __this_03.fields._version = (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
                __this_03.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffeb8;
                __this_03.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffec8;
                System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                          (__this_03,(MethodInfo_3251B10 *)auStack_d8);
                pUVar8 = (UI_CreateGamePopup_o *)(__this->fields).Parent;
                pSStack_118 = pSVar20;
                if (pUVar8 == (UI_CreateGamePopup_o *)0x0) goto label_04377706;
                bVar3 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
                if (((pUVar8->klass->_2).naturalAligment < bVar3) ||
                   ((pUVar8->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_CreateGamePopup)) goto label_0437772a;
                __this_14 = UI_CreateGamePopup__SyncAddonSettings(pUVar8,(MethodInfo *)TypeInfo_CreateGamePopup);
                UI_BasePanel__CreateHorizontalDivider
                          ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelRight,1.0,(MethodInfo *)0x0);
                pUVar18 = (UI_BasePopup_o *)
                          UI_ElementFactory__CreateCollapsibleSection
                                    ((__this->fields).DoublePanelRight,pUStack_110,"Addon Settings",0,
                                     (System_Action_bool__o *)0x0,(MethodInfo *)in_R9);
                parent = (UI_BasePanel_o *)__this;
                if (__this_14 ==
                    (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0)
                goto label_04377706;
                iVar16 = System_Collections_Generic_Dictionary_object__object___get_Count
                                   ((System_Collections_Generic_Dictionary_object__object__o *)__this_14,
                                    MethodInfo_Int32_get_Count);
                parent = (UI_BasePanel_o *)pUVar18;
                if (iVar16 == 0) {
                  pUVar25 = UI_ElementFactory__CreateDefaultLabel
                                      (*(UnityEngine_Transform_o **)pSVar20,pUStack_110,"No settings for selected addons.",0,3,
                                       (MethodInfo *)in_R9);
                  if (pUVar18 != (UI_BasePopup_o *)0x0) {
                    UI_CollapsibleSection__AddChild((UI_CollapsibleSection_o *)pUVar18,pUVar25,method_06);
                    return;
                  }
                  goto label_04377706;
                }
                pSStack_90 = __this_14;
                pSVar23 = System_Collections_Generic_Dictionary_object__object___get_Keys
                                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_14,
                                     MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic);
                pUStack_f8 = pUVar18;
                if (pSVar23 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
                goto label_04377706;
                System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                          ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                           auStack_80,pSVar23,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
                pUStack_48 = pUStack_70;
                pSStack_58 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *
                             )auStack_80._0_8_;
                pIStack_50 = (Il2CppType *)auStack_80._8_8_;
                goto label_04376870;
              }
              pIVar10 = (unaff_R13->obj).klass;
              unaff_R15 = (long *)System_Collections_Generic_Dictionary_object__object___get_Item
                                            (pSStack_118,(Il2CppObject *)auStack_d8._16_8_,MethodInfo_BaseSetting_get_Item);
              bVar14 = System_String__op_Equality((System_String_o *)a,"Description",(MethodInfo *)0x0);
              parent = (UI_BasePanel_o *)a;
            } while ((char)bVar14 != '\0');
            if ((UI_BasePopup_o *)a == (UI_BasePopup_o *)0x0) goto label_0437770b;
            bVar14 = System_String__EndsWith((System_String_o *)a,"Tooltip",(MethodInfo *)0x0);
            if (((char)bVar14 != '\0') && ((MethodInfo_3251160 *)unaff_R15 != (MethodInfo_3251160 *)0x0)) {
              bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
              if ((bVar3 <= (((Il2CppClass *)((MethodInfo_3251160 *)unaff_R15)->methodPointer)->_2).
                            naturalAligment) &&
                 ((((Il2CppClass *)((MethodInfo_3251160 *)unaff_R15)->methodPointer)->_2).typeHierarchy
                  [(ulong)bVar3 - 1] == TypeInfo_StringSetting)) goto label_043763e0;
            }
            bVar14 = System_String__EndsWith((System_String_o *)a,"Dropbox",(MethodInfo *)0x0);
            if (((char)bVar14 == '\0') || ((MethodInfo_3251160 *)unaff_R15 == (MethodInfo_3251160 *)0x0))
            goto label_043764db;
            bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
            if (((((Il2CppClass *)((MethodInfo_3251160 *)unaff_R15)->methodPointer)->_2).naturalAligment <
                 bVar3) ||
               ((((Il2CppClass *)((MethodInfo_3251160 *)unaff_R15)->methodPointer)->_2).typeHierarchy
                [(ulong)bVar3 - 1] != TypeInfo_StringSetting)) goto label_043764db;
          } while( true );
        }
        goto label_04377706;
      }
      il2cpp_runtime_helper_022fefe0(lVar5);
    }
    __this_07.fields._index = (int)in_stack_fffffffffffffec0;
    __this_07.fields._version = (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
    __this_07.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffeb8;
    __this_07.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffec8;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_07,(MethodInfo_3251B10 *)auStack_d8);
    _Unwind_Resume(auVar30._0_8_);
  }
label_0437775b:
  il2cpp_runtime_helper_022b2c90();
label_04377760:
  il2cpp_runtime_helper_022b2c90();
label_04377765:
  il2cpp_runtime_helper_022b2c90();
  defaultValue = unaff_R13;
  pSVar20 = pSStack_118;
  goto label_0437776a;
label_04376870:
  unaff_R15 = (long *)(auStack_d8 + 0x20);
  __this_04.fields._index = (int)in_stack_fffffffffffffec0;
  __this_04.fields._version = (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_04.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffeb8;
  __this_04.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffec8;
  bVar14 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                     (__this_04,(MethodInfo_3251B20 *)&pSStack_58);
  parent = (UI_BasePanel_o *)pUStack_48;
  if ((char)bVar14 == '\0') {
    __this_05.fields._index = (int)in_stack_fffffffffffffec0;
    __this_05.fields._version = (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
    __this_05.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffeb8;
    __this_05.fields._currentKey = (Il2CppObject *)in_stack_fffffffffffffec8;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_05,(MethodInfo_3251B10 *)&pSStack_58);
    return;
  }
  pUVar25 = UI_ElementFactory__CreateDefaultLabel
                      (*(UnityEngine_Transform_o **)pSVar20,pUStack_110,(System_String_o *)pUStack_48,1,3,
                       (MethodInfo *)in_R9);
  if (pUVar18 != (UI_BasePopup_o *)0x0) {
    UI_CollapsibleSection__AddChild((UI_CollapsibleSection_o *)pUVar18,pUVar25,method_02);
    __this_15 = (System_Collections_Generic_Dictionary_object__object__o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)pSStack_90,
                           (Il2CppObject *)parent,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
    pSStack_e8 = (System_String_array *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    __this_16 = (UI_BasePopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_16,MethodInfo_Dictionary_2_System_String_System_String);
    __this_17 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
    System_Collections_Generic_Dictionary_object__object____ctor(__this_17,MethodInfo_Dictionary_2_System_String_System_String);
    pUStack_100 = __this_16;
    if (__this_15 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04377715;
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_80,__this_15,
               MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Settin);
    _Stack_98 = _Stack_60;
    pUStack_a8 = pUStack_70;
    pIStack_a0 = pIStack_68;
    auStack_d8._32_8_ = auStack_80._0_8_;
    pIStack_b0 = (Il2CppType *)auStack_80._8_8_;
    parent = (UI_BasePanel_o *)__this_16;
label_043769c0:
    __this_08.fields._version = (int)in_stack_fffffffffffffec0;
    __this_08.fields._index = (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
    __this_08.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffeb8;
    __this_08.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffec8;
    __this_08.fields._current.fields.value = (Il2CppObject *)in_stack_fffffffffffffed0;
    __this_08.fields._32_8_ = in_stack_fffffffffffffed8;
    bVar14 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                       (__this_08,(MethodInfo_3251160 *)unaff_R15);
    pSStack_f0 = __this_17;
    if ((char)bVar14 != '\0') {
      auVar29 = il2cpp_runtime_helper_03343020(unaff_R15,MethodInfo_KeyValuePair_2_System_String_Settings_BaseSetting_get_Cu);
      plVar27 = auVar29._8_8_;
      pSVar19 = auVar29._0_8_;
      bVar14 = System_String__op_Equality(pSVar19,"Description",(MethodInfo *)0x0);
      if (((char)bVar14 != '\0') && (plVar27 != (long *)0x0)) {
        bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
        if ((bVar3 <= *(byte *)(*plVar27 + 0x130)) &&
           (*(Il2CppClass **)(*(long *)(*plVar27 + 200) + -8 + (ulong)bVar3 * 8) == TypeInfo_StringSetting)) {
          pSStack_e8 = (System_String_array *)plVar27[3];
          goto label_043769c0;
        }
      }
      if (pSVar19 == (System_String_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_043776f7;
      }
      bVar14 = System_String__EndsWith(pSVar19,"Tooltip",(MethodInfo *)0x0);
      if (((char)bVar14 == '\0') || (plVar27 == (long *)0x0)) {
label_04376aa0:
        bVar14 = System_String__EndsWith(pSVar19,"Dropbox",(MethodInfo *)0x0);
        if (((char)bVar14 != '\0') && (plVar27 != (long *)0x0)) {
          bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
          if ((bVar3 <= *(byte *)(*plVar27 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)(*plVar27 + 200) + -8 + (ulong)bVar3 * 8) == TypeInfo_StringSetting)) {
            unaff_R13 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_List_object__o *)unaff_R13,MethodInfo_List_1_System_String);
            bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
            if ((*(byte *)(*plVar27 + 0x130) < bVar3) ||
               (*(Il2CppClass **)(*(long *)(*plVar27 + 200) + -8 + (ulong)bVar3 * 8) != TypeInfo_StringSetting)) {
              il2cpp_runtime_helper_022b2fd0(plVar27);
              goto label_0437770b;
            }
            if ((System_String_o *)plVar27[3] == (System_String_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_04377710;
            }
            pSVar24 = System_String__Split((System_String_o *)plVar27[3],0x2c,0,(MethodInfo *)0x0);
            if (pSVar24 == (System_String_array *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_04377710;
            }
            uVar15 = (uint)pSVar24->max_length;
            if (unaff_R13 == (System_String_array *)0x0) {
              if (0 < (int)uVar15) {
                parent = (UI_BasePanel_o *)0x0;
                do {
                  if (uVar15 <= (uint)parent) goto label_043772b3;
                  if (pSVar24->m_Items[(long)parent] == (System_String_o *)0x0) goto label_043772a9;
                  pSVar22 = System_String__Trim(pSVar24->m_Items[(long)parent],(MethodInfo *)0x0);
                  bVar14 = System_String__op_Inequality
                                     (pSVar22,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                      (MethodInfo *)0x0);
                  if ((char)bVar14 != '\0') {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_043776f7;
                  }
                  uVar15 = (uint)pSVar24->max_length;
                  parent = (UI_BasePanel_o *)((long)&((UI_BasePopup_o *)parent)->klass + 1);
                } while ((int)parent < (int)uVar15);
              }
            }
            else if (0 < (int)uVar15) {
              parent = (UI_BasePanel_o *)0x0;
              if (uVar15 == 0) {
label_043772b3:
                il2cpp_runtime_helper_022b2ca0();
                goto label_043776f7;
              }
              while( true ) {
                if (pSVar24->m_Items[(int)parent] == (System_String_o *)0x0) goto label_043772a9;
                pSVar22 = System_String__Trim(pSVar24->m_Items[(int)parent],(MethodInfo *)0x0);
                bVar14 = System_String__op_Inequality
                                   (pSVar22,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                    (MethodInfo *)0x0);
                lVar5 = MethodInfo_Void_Add;
                if ((char)bVar14 != '\0') {
                  piVar2 = (int *)((long)&unaff_R13->max_length + 4);
                  *piVar2 = *piVar2 + 1;
                  pSVar12 = ((Settings_InGameMiscSettings_Fields *)&unaff_R13->bounds)->Settings;
                  if (pSVar12 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
                    goto label_043776f7;
                  }
                  uVar15 = *(uint *)&unaff_R13->max_length;
                  if (uVar15 < *(uint *)&(pSVar12->fields)._objectsTable) {
                    *(uint *)&unaff_R13->max_length = uVar15 + 1;
                    *(System_String_o **)(&(pSVar12->fields)._initialCapacity + (long)(int)uVar15 * 2) =
                         pSVar22;
                    il2cpp_runtime_helper_022b4080(&(pSVar12->fields)._initialCapacity + (long)(int)uVar15 * 2);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)unaff_R13,(Il2CppObject *)pSVar22,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                  }
                }
                uVar28 = (int)parent + 1;
                parent = (UI_BasePanel_o *)(ulong)uVar28;
                uVar15 = (uint)pSVar24->max_length;
                if ((int)uVar15 <= (int)uVar28) break;
                if (uVar15 <= uVar28) goto label_043772b3;
              }
            }
            pIVar13 = "None";
            lVar5 = MethodInfo_Void_Add;
            if (unaff_R13 == (System_String_array *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_04377710;
            }
            if (*(int *)&unaff_R13->max_length == 0) {
              piVar2 = (int *)((long)&unaff_R13->max_length + 4);
              *piVar2 = *piVar2 + 1;
              pSVar12 = ((Settings_InGameMiscSettings_Fields *)&unaff_R13->bounds)->Settings;
              if (pSVar12 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                il2cpp_runtime_helper_022b2c90();
                goto label_04377710;
              }
              if (*(int *)&(pSVar12->fields)._objectsTable == 0) {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)unaff_R13,pIVar13,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              else {
                *(undefined4 *)&unaff_R13->max_length = 1;
                *(Il2CppObject **)&(pSVar12->fields)._initialCapacity = pIVar13;
                il2cpp_runtime_helper_022b4080(&(pSVar12->fields)._initialCapacity);
              }
            }
            parent = (UI_BasePanel_o *)
                     System_String__Substring_3af8da0
                               (pSVar19,0,(pSVar19->fields)._stringLength + -7,(MethodInfo *)0x0);
            pSVar26 = System_Collections_Generic_List_object___ToArray
                                ((System_Collections_Generic_List_object__o *)unaff_R13,MethodInfo_String_ToArray);
            if (__this_17 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              goto label_04377710;
            }
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (__this_17,(Il2CppObject *)parent,&pSVar26->obj,MethodInfo_Void_set_Item);
          }
        }
      }
      else {
        bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
        if ((*(byte *)(*plVar27 + 0x130) < bVar3) ||
           (*(Il2CppClass **)(*(long *)(*plVar27 + 200) + -8 + (ulong)bVar3 * 8) != TypeInfo_StringSetting))
        goto label_04376aa0;
        pSVar19 = System_String__Substring_3af8da0
                            (pSVar19,0,(pSVar19->fields)._stringLength + -7,(MethodInfo *)0x0);
        bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
        if ((*(byte *)(*plVar27 + 0x130) < bVar3) ||
           (*(Il2CppClass **)(*(long *)(*plVar27 + 200) + -8 + (ulong)bVar3 * 8) != TypeInfo_StringSetting)) {
          il2cpp_runtime_helper_022b2fd0(plVar27);
          parent = (UI_BasePanel_o *)__this_16;
          goto label_0437770b;
        }
        if (__this_16 == (UI_BasePopup_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          parent = (UI_BasePanel_o *)__this_16;
          goto label_04377710;
        }
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_16,
                   (Il2CppObject *)pSVar19,(Il2CppObject *)plVar27[3],MethodInfo_Void_set_Item);
        parent = (UI_BasePanel_o *)__this_16;
      }
      goto label_043769c0;
    }
    __this_09.fields._version = (int)in_stack_fffffffffffffec0;
    __this_09.fields._index = (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
    __this_09.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffeb8;
    __this_09.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffec8;
    __this_09.fields._current.fields.value = (Il2CppObject *)in_stack_fffffffffffffed0;
    __this_09.fields._32_8_ = in_stack_fffffffffffffed8;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_09,(MethodInfo_3251280 *)unaff_R15);
    bVar14 = System_String__op_Inequality
                       ((System_String_o *)pSStack_e8,
                        (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar14 != '\0') {
      pUVar25 = UI_ElementFactory__CreateDefaultLabel
                          (*(UnityEngine_Transform_o **)pSVar20,pUStack_110,(System_String_o *)pSStack_e8,0,3,
                           (MethodInfo *)in_R9);
      UI_CollapsibleSection__AddChild((UI_CollapsibleSection_o *)pUVar18,pUVar25,method_03);
    }
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_80,__this_15,
               MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Settin);
    _Stack_98 = _Stack_60;
    pUStack_a8 = pUStack_70;
    pIStack_a0 = pIStack_68;
    auStack_d8._32_8_ = auStack_80._0_8_;
    pIStack_b0 = (Il2CppType *)auStack_80._8_8_;
label_04376f30:
    do {
      method_00 = (MethodInfo_3251160 *)(auStack_d8 + 0x20);
      __this_10.fields._version = (int)in_stack_fffffffffffffec0;
      __this_10.fields._index = (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
      __this_10.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffeb8;
      __this_10.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffec8;
      __this_10.fields._current.fields.value = (Il2CppObject *)in_stack_fffffffffffffed0;
      __this_10.fields._32_8_ = in_stack_fffffffffffffed8;
      bVar14 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(__this_10,method_00)
      ;
      if ((char)bVar14 == '\0') goto label_04377250;
      auVar29 = il2cpp_runtime_helper_03343020(method_00,MethodInfo_KeyValuePair_2_System_String_Settings_BaseSetting_get_Cu);
      unaff_R15 = auVar29._8_8_;
      pSVar19 = auVar29._0_8_;
      bVar14 = System_String__op_Equality(pSVar19,"Description",(MethodInfo *)0x0);
    } while ((char)bVar14 != '\0');
    if (pSVar19 == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      parent = (UI_BasePanel_o *)__this_16;
      goto label_043776f7;
    }
    bVar14 = System_String__EndsWith(pSVar19,"Tooltip",(MethodInfo *)0x0);
    if (((char)bVar14 != '\0') && ((MethodInfo_3251160 *)unaff_R15 != (MethodInfo_3251160 *)0x0)) {
      bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
      if ((bVar3 <= (((Il2CppClass *)((MethodInfo_3251160 *)unaff_R15)->methodPointer)->_2).naturalAligment)
         && ((((Il2CppClass *)((MethodInfo_3251160 *)unaff_R15)->methodPointer)->_2).typeHierarchy
             [(ulong)bVar3 - 1] == TypeInfo_StringSetting)) goto label_04376f30;
    }
    bVar14 = System_String__EndsWith(pSVar19,"Dropbox",(MethodInfo *)0x0);
    if (((char)bVar14 != '\0') && ((MethodInfo_3251160 *)unaff_R15 != (MethodInfo_3251160 *)0x0)) {
      bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
      if ((bVar3 <= (((Il2CppClass *)((MethodInfo_3251160 *)unaff_R15)->methodPointer)->_2).naturalAligment)
         && ((((Il2CppClass *)((MethodInfo_3251160 *)unaff_R15)->methodPointer)->_2).typeHierarchy
             [(ulong)bVar3 - 1] == TypeInfo_StringSetting)) goto label_04376f30;
    }
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar22 = Utility_Util__PascalToSentence(pSVar19,(MethodInfo *)0x0);
    if (__this_16 != (UI_BasePopup_o *)0x0) {
      value = &pSStack_38;
      bVar14 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                         ((System_Collections_Generic_Dictionary_object__object__o *)__this_16,
                          (Il2CppObject *)pSVar19,(Il2CppObject **)value,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar14 == '\0') {
        value = *(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c ***)
                 (g_data_057b9c00 + 0xb8);
      }
      if (__this_17 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        parent = (UI_BasePanel_o *)__this_16;
        goto label_043776f7;
      }
      unaff_R13 = (System_String_array *)*value;
      bVar14 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                         (__this_17,(Il2CppObject *)pSVar19,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar14 == '\0') {
        if ((MethodInfo_3251160 *)unaff_R15 == (MethodInfo_3251160 *)0x0) goto label_04376f30;
label_04377169:
        pIVar10 = (Il2CppClass *)((MethodInfo_3251160 *)unaff_R15)->methodPointer;
        bVar3 = (pIVar10->_2).naturalAligment;
        bVar4 = (TypeInfo_BoolSetting->_2).naturalAligment;
        if ((bVar3 < bVar4) || ((pIVar10->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BoolSetting)) {
          bVar4 = (TypeInfo_StringSetting->_2).naturalAligment;
          if ((((bVar3 < bVar4) || ((pIVar10->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_StringSetting)) &&
              ((bVar4 = (TypeInfo_FloatSetting->_2).naturalAligment, bVar3 < bVar4 ||
               ((pIVar10->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_FloatSetting)))) &&
             ((bVar4 = (TypeInfo_IntSetting->_2).naturalAligment, bVar3 < bVar4 ||
              ((pIVar10->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_IntSetting)))) goto label_04376f30;
          in_stack_fffffffffffffec8 = (MethodInfo *)0x0;
          in_stack_fffffffffffffed0 = 0;
          in_stack_fffffffffffffeb8 = (MethodInfo *)0x0;
          in_stack_fffffffffffffec0 = 0;
          in_R9 = (System_String_array *)0x0;
          pUVar25 = UI_ElementFactory__CreateInputSetting
                              (*(UnityEngine_Transform_o **)pSVar20,pUStack_110,
                               (Settings_BaseSetting_o *)unaff_R15,pSVar22,(System_String_o *)unaff_R13,180.0,
                               40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                               (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                               (System_Func_string__string__o *)0x0,in_stack_fffffffffffffed8);
          method_04 = extraout_RDX;
        }
        else {
          in_R9 = (System_String_array *)0x0;
          pUVar25 = UI_ElementFactory__CreateToggleSetting
                              (*(UnityEngine_Transform_o **)pSVar20,pUStack_110,
                               (Settings_BaseSetting_o *)unaff_R15,pSVar22,(System_String_o *)unaff_R13,30.0,
                               30.0,(UnityEngine_Events_UnityAction_o *)0x0,in_stack_fffffffffffffeb8);
          method_04 = extraout_RDX_01;
        }
      }
      else {
        if ((MethodInfo_3251160 *)unaff_R15 == (MethodInfo_3251160 *)0x0) goto label_04376f30;
        bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
        if (((((Il2CppClass *)((MethodInfo_3251160 *)unaff_R15)->methodPointer)->_2).naturalAligment < bVar3)
           || ((((Il2CppClass *)((MethodInfo_3251160 *)unaff_R15)->methodPointer)->_2).typeHierarchy
               [(ulong)bVar3 - 1] != TypeInfo_StringSetting)) goto label_04377169;
        parent_00 = *(UnityEngine_Transform_o **)pSVar20;
        pSVar24 = (System_String_array *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_17,(Il2CppObject *)pSVar19,MethodInfo_String_get_Item);
        in_stack_fffffffffffffeb8 = (MethodInfo *)0x0;
        in_stack_fffffffffffffec0 = 0;
        in_R9 = unaff_R13;
        pUVar25 = UI_ElementFactory__CreateDropdownSetting
                            (parent_00,pUStack_110,(Settings_BaseSetting_o *)unaff_R15,pSVar22,pSVar24,
                             (System_String_o *)unaff_R13,180.0,40.0,300.0,(System_Nullable_float__o)0x0,
                             (UnityEngine_Events_UnityAction_o *)0x0,in_stack_fffffffffffffec8);
        method_04 = extraout_RDX_00;
      }
      UI_CollapsibleSection__AddChild((UI_CollapsibleSection_o *)pUVar18,pUVar25,method_04);
      goto label_04376f30;
    }
    il2cpp_runtime_helper_022b2c90();
    parent = (UI_BasePanel_o *)__this_16;
label_043776f7:
    il2cpp_runtime_helper_022b2c90();
label_043776fc:
    il2cpp_runtime_helper_022b2ca0();
label_04377701:
    il2cpp_runtime_helper_022b2c90();
label_04377706:
    il2cpp_runtime_helper_022b2c90();
    pSVar20 = pSStack_118;
label_0437770b:
    pSStack_118 = pSVar20;
    il2cpp_runtime_helper_022b2c90();
  }
  goto label_04377710;
label_043772a9:
  il2cpp_runtime_helper_022b2c90();
  goto label_043776f7;
label_04377250:
  __this_11.fields._version = (int)in_stack_fffffffffffffec0;
  __this_11.fields._index = (int)((ulong)in_stack_fffffffffffffec0 >> 0x20);
  __this_11.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffeb8;
  __this_11.fields._current.fields.key = (Il2CppObject *)in_stack_fffffffffffffec8;
  __this_11.fields._current.fields.value = (Il2CppObject *)in_stack_fffffffffffffed0;
  __this_11.fields._32_8_ = in_stack_fffffffffffffed8;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
            (__this_11,(MethodInfo_3251280 *)method_00);
  pUVar25 = UI_BasePanel__CreateHorizontalDivider
                      ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelRight,1.0,(MethodInfo *)0x0);
  UI_CollapsibleSection__AddChild((UI_CollapsibleSection_o *)pUVar18,pUVar25,method_05);
  goto label_04376870;
label_043764db:
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  defaultValue = (System_String_array *)Utility_Util__PascalToSentence((System_String_o *)a,(MethodInfo *)0x0)
  ;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  in_R9 = (System_String_array *)0x0;
  pSStack_88 = UI_UIManager__GetLocale
                         ((System_String_o *)pSStack_90,pSStack_40,(System_String_o *)a,
                          (System_String_o *)"",(System_String_o *)defaultValue,(MethodInfo *)0x0);
  unaff_R13 = "";
  pSVar24 = (System_String_array *)0x0;
  if (pSStack_f0 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0437776a;
  bVar14 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                     (pSStack_f0,(Il2CppObject *)a,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar14 != '\0') {
    unaff_R13 = (System_String_array *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSStack_f0,(Il2CppObject *)a,MethodInfo_String_get_Item);
  }
  pSVar24 = (System_String_array *)0x0;
  if (pUStack_f8 == (UI_BasePopup_o *)0x0) goto label_0437776f;
  bVar14 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                     ((System_Collections_Generic_Dictionary_object__object__o *)pUStack_f8,(Il2CppObject *)a,
                      MethodInfo_Boolean_ContainsKey);
  if ((char)bVar14 == '\0') {
    if ((MethodInfo_3251160 *)unaff_R15 == (MethodInfo_3251160 *)0x0) goto label_043763c1;
  }
  else {
    if ((MethodInfo_3251160 *)unaff_R15 == (MethodInfo_3251160 *)0x0) goto label_043763c1;
    bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
    if ((bVar3 <= (((Il2CppClass *)((MethodInfo_3251160 *)unaff_R15)->methodPointer)->_2).naturalAligment) &&
       ((((Il2CppClass *)((MethodInfo_3251160 *)unaff_R15)->methodPointer)->_2).typeHierarchy
        [(ulong)bVar3 - 1] == TypeInfo_StringSetting)) {
      pSVar24 = (System_String_array *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)pUStack_f8,
                           (Il2CppObject *)a,MethodInfo_String_get_Item);
      in_stack_fffffffffffffeb8 = (MethodInfo *)0x0;
      in_stack_fffffffffffffec0 = 0;
      UI_ElementFactory__CreateDropdownSetting
                ((UnityEngine_Transform_o *)pIVar10,pUStack_110,(Settings_BaseSetting_o *)unaff_R15,pSStack_88
                 ,pSVar24,(System_String_o *)unaff_R13,180.0,40.0,300.0,(System_Nullable_float__o)0x0,
                 (UnityEngine_Events_UnityAction_o *)0x0,in_stack_fffffffffffffec8);
      in_R9 = unaff_R13;
      goto label_043763c1;
    }
  }
  pIVar11 = (Il2CppClass *)((MethodInfo_3251160 *)unaff_R15)->methodPointer;
  bVar3 = (pIVar11->_2).naturalAligment;
  bVar4 = (TypeInfo_BoolSetting->_2).naturalAligment;
  if ((bVar3 < bVar4) || ((pIVar11->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_BoolSetting)) {
    bVar4 = (TypeInfo_StringSetting->_2).naturalAligment;
    if ((((bVar4 <= bVar3) && ((pIVar11->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_StringSetting)) ||
        ((bVar4 = (TypeInfo_FloatSetting->_2).naturalAligment, bVar4 <= bVar3 &&
         ((pIVar11->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_FloatSetting)))) ||
       ((bVar4 = (TypeInfo_IntSetting->_2).naturalAligment, bVar4 <= bVar3 &&
        ((pIVar11->_2).typeHierarchy[(ulong)bVar4 - 1] == TypeInfo_IntSetting)))) {
      in_stack_fffffffffffffec8 = (MethodInfo *)0x0;
      in_stack_fffffffffffffed0 = 0;
      in_stack_fffffffffffffeb8 = (MethodInfo *)0x0;
      in_stack_fffffffffffffec0 = 0;
      in_R9 = (System_String_array *)0x0;
      UI_ElementFactory__CreateInputSetting
                ((UnityEngine_Transform_o *)pIVar10,pUStack_110,(Settings_BaseSetting_o *)unaff_R15,pSStack_88
                 ,(System_String_o *)unaff_R13,180.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                 (System_Func_string__string__o *)0x0,in_stack_fffffffffffffed8);
    }
  }
  else {
    in_R9 = (System_String_array *)0x0;
    UI_ElementFactory__CreateToggleSetting
              ((UnityEngine_Transform_o *)pIVar10,pUStack_110,(Settings_BaseSetting_o *)unaff_R15,pSStack_88,
               (System_String_o *)unaff_R13,30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,
               in_stack_fffffffffffffeb8);
  }
label_043763c1:
  pUVar18 = (UI_BasePopup_o *)(ulong)((int)pUVar18 + 1);
  goto label_043763cd;
label_0437776a:
  pSStack_118 = pSVar20;
  unaff_R13 = defaultValue;
  il2cpp_runtime_helper_022b2c90();
  pSVar20 = pSStack_118;
label_0437776f:
  pSStack_118 = pSVar20;
  il2cpp_runtime_helper_022b2c90();
label_04377774:
  il2cpp_runtime_helper_022b2c90();
  goto label_04377779;
label_04377710:
  il2cpp_runtime_helper_022b2c90();
  __this_16 = (UI_BasePopup_o *)parent;
label_04377715:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0(__this_16);
  il2cpp_runtime_helper_022fefe0(__this_16);
label_0437772a:
  il2cpp_runtime_helper_022b2fd0();
label_0437772f:
  il2cpp_runtime_helper_022b2fd0(unaff_R13);
label_04377737:
  pSVar24 = unaff_R13;
  il2cpp_runtime_helper_022b2fd0();
  goto label_0437773f;
}


// UI.CreateGameModePanel$$.ctor
// il2cpp: void UI_CreateGameModePanel___ctor (UI_CreateGameModePanel_o* __this, const MethodInfo* method);
// 0x43797a0

void UI_CreateGameModePanel___ctor(UI_CreateGameModePanel_o *__this,MethodInfo *method)

{
  UI_CreateGameCategoryPanel___ctor((UI_CreateGameCategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


