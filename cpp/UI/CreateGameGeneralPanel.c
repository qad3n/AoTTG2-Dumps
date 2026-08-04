// Type: UI.CreateGameGeneralPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CreateGameGeneralPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CreateGamePopup/CreateGameGeneralPanel.cs
// --------------------------------

// UI.CreateGameGeneralPanel.<>c__DisplayClass3_0$$.ctor
// il2cpp: void UI_CreateGameGeneralPanel___c__DisplayClass3_0___ctor (UI_CreateGameGeneralPanel___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x4373b20

void UI_CreateGameGeneralPanel___c__DisplayClass3_0___ctor
               (UI_CreateGameGeneralPanel___c__DisplayClass3_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameGeneralPanel.<>c__DisplayClass3_0$$<Setup>b__0
// il2cpp: void UI_CreateGameGeneralPanel___c__DisplayClass3_0___Setup_b__0 (UI_CreateGameGeneralPanel___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x4373f00

void UI_CreateGameGeneralPanel___c__DisplayClass3_0___Setup_b__0
               (UI_CreateGameGeneralPanel___c__DisplayClass3_0_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Threading_CancellationTokenSource_o *pSVar2;
  UI_BasePanel_o *pUVar3;
  long lVar4;
  System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *pSVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  UI_CreateGamePopup_o *__this_00;
  UI_CreateGamePopup_o *pUVar6;
  
  pUVar6 = (UI_CreateGamePopup_o *)(__this->fields).parent;
  if (pUVar6 != (UI_CreateGamePopup_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)pUVar6,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = pUVar6;
  if (g_data_057ae205 == '\0') {
    __this_00 = (UI_CreateGamePopup_o *)&TypeInfo_CreateGamePopup;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae205 = '\x01';
  }
  pSVar2 = (pUVar6->fields).m_CancellationTokenSource;
  if ((pSVar2 == (System_Threading_CancellationTokenSource_o *)0x0) ||
     (__this_00 = *(UI_CreateGamePopup_o **)&pSVar2[1].fields._state, __this_00 == (UI_CreateGamePopup_o *)0x0
     )) {
label_04373f94:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
    method = (MethodInfo *)TypeInfo_CreateGamePopup;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CreateGamePopup)) {
      method = (MethodInfo *)0x0;
      UI_CreateGamePopup__SyncAddonSettings(__this_00,(MethodInfo *)0x0);
      pUVar3 = (UI_BasePanel_o *)(pUVar6->fields).m_CachedPtr;
      __this_00 = (UI_CreateGamePopup_o *)0x0;
      if (pUVar3 != (UI_BasePanel_o *)0x0) {
        UI_BasePanel__RebuildCategoryPanel(pUVar3,(MethodInfo *)0x0);
        return;
      }
      goto label_04373f94;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  method_00 = extraout_RDX;
  pUVar6 = __this_00;
  if (g_data_057ae206 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGameGeneralPanel);
    pUVar6 = (UI_CreateGamePopup_o *)&TypeInfo_CreateGamePopup;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae206 = '\x01';
    method_00 = extraout_RDX_00;
  }
  pSVar2 = (__this_00->fields).m_CancellationTokenSource;
  if (((pSVar2 != (System_Threading_CancellationTokenSource_o *)0x0) &&
      (lVar4 = *(long *)&(pSVar2->fields)._state, lVar4 != 0)) &&
     (lVar4 = *(long *)(lVar4 + 0x38), lVar4 != 0)) {
    pUVar6 = *(UI_CreateGamePopup_o **)(lVar4 + 0x48);
    method = (MethodInfo *)(__this_00->fields).m_CachedPtr;
    if (*(int *)(TypeInfo_CreateGameGeneralPanel + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      method_00 = extraout_RDX_01;
    }
    UI_CreateGameGeneralPanel__RemoveAddon
              ((Settings_ListSetting_StringSetting__o *)pUVar6,(System_String_o *)method,method_00);
    pSVar2 = (__this_00->fields).m_CancellationTokenSource;
    if (((pSVar2 != (System_Threading_CancellationTokenSource_o *)0x0) &&
        (pSVar5 = (pSVar2->fields)._registeredCallbacksLists,
        pSVar5 != (System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *)0x0)) &&
       (pUVar6 = (UI_CreateGamePopup_o *)pSVar5->m_Items[8], pUVar6 != (UI_CreateGamePopup_o *)0x0)) {
      bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
      method = (MethodInfo *)TypeInfo_CreateGamePopup;
      if (((pUVar6->klass->_2).naturalAligment < bVar1) ||
         ((pUVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CreateGamePopup)) goto label_04374091;
      method = (MethodInfo *)0x0;
      UI_CreateGamePopup__SyncAddonSettings(pUVar6,(MethodInfo *)0x0);
      pSVar2 = (__this_00->fields).m_CancellationTokenSource;
      if ((pSVar2 != (System_Threading_CancellationTokenSource_o *)0x0) &&
         (pUVar3 = (UI_BasePanel_o *)(pSVar2->fields)._kernelEvent, pUVar6 = (UI_CreateGamePopup_o *)0x0,
         pUVar3 != (UI_BasePanel_o *)0x0)) {
        UI_BasePanel__RebuildCategoryPanel(pUVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04374091:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae207 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae207 = '\x01';
  }
  if ((Il2CppClass *)method != (Il2CppClass *)0x0) {
    System_String__op_Equality
              ((System_String_o *)(((Il2CppClass *)method)->_1).namespaze,
               (System_String_o *)(pUVar6->fields).m_CachedPtr,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.CreateGameGeneralPanel.<>c__DisplayClass3_0$$<Setup>b__1
// il2cpp: void UI_CreateGameGeneralPanel___c__DisplayClass3_0___Setup_b__1 (UI_CreateGameGeneralPanel___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x4373f20

void UI_CreateGameGeneralPanel___c__DisplayClass3_0___Setup_b__1
               (UI_CreateGameGeneralPanel___c__DisplayClass3_0_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_CreateGameGeneralPanel_o *pUVar2;
  UI_BasePanel_o *pUVar3;
  System_Threading_CancellationTokenSource_o *pSVar4;
  long lVar5;
  System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *pSVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  UI_CreateGamePopup_o *__this_00;
  UI_CreateGamePopup_o *__this_01;
  
  __this_00 = (UI_CreateGamePopup_o *)__this;
  if (g_data_057ae205 == '\0') {
    __this_00 = (UI_CreateGamePopup_o *)&TypeInfo_CreateGamePopup;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae205 = '\x01';
  }
  pUVar2 = (__this->fields).__4__this;
  if ((pUVar2 == (UI_CreateGameGeneralPanel_o *)0x0) ||
     (__this_00 = (UI_CreateGamePopup_o *)(pUVar2->fields).Parent, __this_00 == (UI_CreateGamePopup_o *)0x0))
  {
label_04373f94:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
    method = (MethodInfo *)TypeInfo_CreateGamePopup;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CreateGamePopup)) {
      method = (MethodInfo *)0x0;
      UI_CreateGamePopup__SyncAddonSettings(__this_00,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).parent;
      __this_00 = (UI_CreateGamePopup_o *)0x0;
      if (pUVar3 != (UI_BasePanel_o *)0x0) {
        UI_BasePanel__RebuildCategoryPanel(pUVar3,(MethodInfo *)0x0);
        return;
      }
      goto label_04373f94;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  method_00 = extraout_RDX;
  __this_01 = __this_00;
  if (g_data_057ae206 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGameGeneralPanel);
    __this_01 = (UI_CreateGamePopup_o *)&TypeInfo_CreateGamePopup;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae206 = '\x01';
    method_00 = extraout_RDX_00;
  }
  pSVar4 = (__this_00->fields).m_CancellationTokenSource;
  if (((pSVar4 != (System_Threading_CancellationTokenSource_o *)0x0) &&
      (lVar5 = *(long *)&(pSVar4->fields)._state, lVar5 != 0)) &&
     (lVar5 = *(long *)(lVar5 + 0x38), lVar5 != 0)) {
    __this_01 = *(UI_CreateGamePopup_o **)(lVar5 + 0x48);
    method = (MethodInfo *)(__this_00->fields).m_CachedPtr;
    if (*(int *)(TypeInfo_CreateGameGeneralPanel + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      method_00 = extraout_RDX_01;
    }
    UI_CreateGameGeneralPanel__RemoveAddon
              ((Settings_ListSetting_StringSetting__o *)__this_01,(System_String_o *)method,method_00);
    pSVar4 = (__this_00->fields).m_CancellationTokenSource;
    if (((pSVar4 != (System_Threading_CancellationTokenSource_o *)0x0) &&
        (pSVar6 = (pSVar4->fields)._registeredCallbacksLists,
        pSVar6 != (System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *)0x0)) &&
       (__this_01 = (UI_CreateGamePopup_o *)pSVar6->m_Items[8], __this_01 != (UI_CreateGamePopup_o *)0x0)) {
      bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
      method = (MethodInfo *)TypeInfo_CreateGamePopup;
      if (((__this_01->klass->_2).naturalAligment < bVar1) ||
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CreateGamePopup)) goto label_04374091;
      method = (MethodInfo *)0x0;
      UI_CreateGamePopup__SyncAddonSettings(__this_01,(MethodInfo *)0x0);
      pSVar4 = (__this_00->fields).m_CancellationTokenSource;
      if ((pSVar4 != (System_Threading_CancellationTokenSource_o *)0x0) &&
         (pUVar3 = (UI_BasePanel_o *)(pSVar4->fields)._kernelEvent, __this_01 = (UI_CreateGamePopup_o *)0x0,
         pUVar3 != (UI_BasePanel_o *)0x0)) {
        UI_BasePanel__RebuildCategoryPanel(pUVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04374091:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae207 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae207 = '\x01';
  }
  if ((Il2CppClass *)method != (Il2CppClass *)0x0) {
    System_String__op_Equality
              ((System_String_o *)(((Il2CppClass *)method)->_1).namespaze,
               (System_String_o *)(__this_01->fields).m_CachedPtr,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.CreateGameGeneralPanel.<>c__DisplayClass3_1$$.ctor
// il2cpp: void UI_CreateGameGeneralPanel___c__DisplayClass3_1___ctor (UI_CreateGameGeneralPanel___c__DisplayClass3_1_o* __this, const MethodInfo* method);
// 0x4373d50

void UI_CreateGameGeneralPanel___c__DisplayClass3_1___ctor
               (UI_CreateGameGeneralPanel___c__DisplayClass3_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameGeneralPanel.<>c__DisplayClass3_1$$<Setup>b__2
// il2cpp: void UI_CreateGameGeneralPanel___c__DisplayClass3_1___Setup_b__2 (UI_CreateGameGeneralPanel___c__DisplayClass3_1_o* __this, const MethodInfo* method);
// 0x4373fa0

void UI_CreateGameGeneralPanel___c__DisplayClass3_1___Setup_b__2
               (UI_CreateGameGeneralPanel___c__DisplayClass3_1_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_CreateGameGeneralPanel___c__DisplayClass3_0_o *pUVar2;
  Settings_InGameSet_o *pSVar3;
  Settings_InGameGeneralSettings_o *pSVar4;
  UI_CreateGameGeneralPanel_o *pUVar5;
  UI_BasePanel_o *__this_00;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  UI_CreateGamePopup_o *__this_01;
  
  __this_01 = (UI_CreateGamePopup_o *)__this;
  if (g_data_057ae206 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGameGeneralPanel);
    __this_01 = (UI_CreateGamePopup_o *)&TypeInfo_CreateGamePopup;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae206 = '\x01';
    in_RDX = extraout_RDX;
  }
  pUVar2 = (__this->fields).CS___8__locals1;
  if (((pUVar2 != (UI_CreateGameGeneralPanel___c__DisplayClass3_0_o *)0x0) &&
      (pSVar3 = (pUVar2->fields).settings, pSVar3 != (Settings_InGameSet_o *)0x0)) &&
     (pSVar4 = (pSVar3->fields).General, pSVar4 != (Settings_InGameGeneralSettings_o *)0x0)) {
    __this_01 = (UI_CreateGamePopup_o *)(pSVar4->fields).Addons;
    method = (MethodInfo *)(__this->fields).addonName;
    if (*(int *)(TypeInfo_CreateGameGeneralPanel + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_RDX = extraout_RDX_00;
    }
    UI_CreateGameGeneralPanel__RemoveAddon
              ((Settings_ListSetting_StringSetting__o *)__this_01,(System_String_o *)method,in_RDX);
    pUVar2 = (__this->fields).CS___8__locals1;
    if (((pUVar2 != (UI_CreateGameGeneralPanel___c__DisplayClass3_0_o *)0x0) &&
        (pUVar5 = (pUVar2->fields).__4__this, pUVar5 != (UI_CreateGameGeneralPanel_o *)0x0)) &&
       (__this_01 = (UI_CreateGamePopup_o *)(pUVar5->fields).Parent, __this_01 != (UI_CreateGamePopup_o *)0x0)
       ) {
      bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
      method = (MethodInfo *)TypeInfo_CreateGamePopup;
      if (((__this_01->klass->_2).naturalAligment < bVar1) ||
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CreateGamePopup)) goto label_04374091;
      method = (MethodInfo *)0x0;
      UI_CreateGamePopup__SyncAddonSettings(__this_01,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).CS___8__locals1;
      if ((pUVar2 != (UI_CreateGameGeneralPanel___c__DisplayClass3_0_o *)0x0) &&
         (__this_00 = (pUVar2->fields).parent, __this_01 = (UI_CreateGamePopup_o *)0x0,
         __this_00 != (UI_BasePanel_o *)0x0)) {
        UI_BasePanel__RebuildCategoryPanel(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04374091:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae207 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae207 = '\x01';
  }
  if ((Il2CppClass *)method != (Il2CppClass *)0x0) {
    System_String__op_Equality
              ((System_String_o *)(((Il2CppClass *)method)->_1).namespaze,
               (System_String_o *)(__this_01->fields).m_CachedPtr,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.CreateGameGeneralPanel.<>c__DisplayClass4_0$$.ctor
// il2cpp: void UI_CreateGameGeneralPanel___c__DisplayClass4_0___ctor (UI_CreateGameGeneralPanel___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x4373e50

void UI_CreateGameGeneralPanel___c__DisplayClass4_0___ctor
               (UI_CreateGameGeneralPanel___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameGeneralPanel.<>c__DisplayClass4_0$$<RemoveAddon>b__0
// il2cpp: bool UI_CreateGameGeneralPanel___c__DisplayClass4_0___RemoveAddon_b__0 (UI_CreateGameGeneralPanel___c__DisplayClass4_0_o* __this, Settings_StringSetting_o* x, const MethodInfo* method);
// 0x43740a0

bool_conflict
UI_CreateGameGeneralPanel___c__DisplayClass4_0___RemoveAddon_b__0
          (UI_CreateGameGeneralPanel___c__DisplayClass4_0_o *__this,Settings_StringSetting_o *x,
          MethodInfo *method)

{
  bool_conflict bVar1;
  undefined4 uVar2;
  
  if (g_data_057ae207 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae207 = '\x01';
  }
  if (x != (Settings_StringSetting_o *)0x0) {
    bVar1 = System_String__op_Equality((x->fields)._value,(__this->fields).addonName,(MethodInfo *)0x0);
    return bVar1;
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


// UI.CreateGameGeneralPanel$$get_ScrollBar
// il2cpp: bool UI_CreateGameGeneralPanel__get_ScrollBar (UI_CreateGameGeneralPanel_o* __this, const MethodInfo* method);
// 0x4372210

bool_conflict UI_CreateGameGeneralPanel__get_ScrollBar(UI_CreateGameGeneralPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.CreateGameGeneralPanel$$Setup
// il2cpp: void UI_CreateGameGeneralPanel__Setup (UI_CreateGameGeneralPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4372220

void UI_CreateGameGeneralPanel__Setup
               (UI_CreateGameGeneralPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Il2CppClass *pIVar3;
  Settings_TypedSetting_T__o *pSVar4;
  System_String_o *pSVar5;
  UI_CreateGamePopup_o *__this_00;
  System_Collections_Generic_List_Enumerator_T__c *__this_01;
  Settings_ListSetting_StringSetting__o *addons;
  Settings_BaseSetting_o *pSVar6;
  Settings_SetSettingsContainer_T__o *__this_02;
  void *pvVar7;
  System_Collections_Generic_List_object__o *__this_03;
  undefined8 uVar8;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  UnityEngine_UI_ColorBlock_o value;
  System_String_o *subCategory;
  InvokerMethod pIVar9;
  bool_conflict bVar10;
  uint uVar11;
  Il2CppObject *__this_08;
  System_String_o **__this_09;
  UI_ElementStyle_o *__this_10;
  System_String_array *pSVar12;
  System_String_o *pSVar13;
  System_String_array *source;
  System_Collections_Generic_Dictionary_object__object__o *__this_11;
  UnityEngine_Events_UnityAction_o *pUVar14;
  System_String_o *pSVar15;
  Il2CppObject *__this_12;
  UnityEngine_GameObject_o *pUVar16;
  Il2CppObject *pIVar17;
  UnityEngine_Transform_o *pUVar18;
  UnityEngine_GameObject_o *pUVar19;
  UnityEngine_UI_Text_o *__this_13;
  UnityEngine_Object_o *pUVar20;
  UnityEngine_UI_Selectable_o *__this_14;
  UI_BasePanel_o *pUVar21;
  undefined8 *puVar22;
  long *plVar23;
  MethodInfo *method_00;
  System_String_array *pSVar24;
  undefined1 auVar25 [12];
  undefined8 in_stack_fffffffffffffe88;
  undefined8 in_stack_fffffffffffffe90;
  Il2CppObject *in_stack_fffffffffffffe98;
  MethodInfo_321A1D0 MStack_d8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (g_data_057ae201 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorBlock);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGameGeneralPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGamePopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_BaseSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StringSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectMask2D_AddComponent_RectMask2D);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScript);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetSetNames);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Weather");
    il2cpp_runtime_helper_023445d0(&"RoomName");
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&": ");
    il2cpp_runtime_helper_023445d0(&"DifficultyOptions");
    il2cpp_runtime_helper_023445d0(&"Difficulty");
    il2cpp_runtime_helper_023445d0(&"MaxPlayers");
    il2cpp_runtime_helper_023445d0(&"GameMode");
    il2cpp_runtime_helper_023445d0(&"Password");
    il2cpp_runtime_helper_023445d0(&"Addons");
    il2cpp_runtime_helper_023445d0(&"CreateGamePopup");
    il2cpp_runtime_helper_023445d0(&"Icons/Navigation/TrashIcon");
    il2cpp_runtime_helper_023445d0(&"MapName");
    il2cpp_runtime_helper_023445d0(&"No addons selected.");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"MapCategory");
    g_data_057ae201 = '\x01';
  }
  MStack_d8.methodPointer = (Il2CppMethodPointer)0x0;
  MStack_d8.virtualMethodPointer = (Il2CppMethodPointer)0x0;
  MStack_d8.invoker_method = (InvokerMethod)0x0;
  __this_08 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  System_Object___ctor(__this_08,(MethodInfo *)0x0);
  __this_09 = (System_String_o **)parent;
  if (__this_08 == (Il2CppObject *)0x0) goto label_04373a18;
  MStack_d8.parameters = (Il2CppType **)(__this_08 + 1);
  __this_08[1].klass = (Il2CppClass *)parent;
  il2cpp_runtime_helper_022b4080(MStack_d8.parameters,parent);
  __this_08[1].monitor = __this;
  il2cpp_runtime_helper_022b4080(&__this_08[1].monitor,__this);
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,(UI_BasePanel_o *)__this_08[1].klass,(MethodInfo *)0x0);
  pSVar24 = (System_String_array *)(__this_08 + 2);
  __this_08[2].klass = *(Il2CppClass **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  il2cpp_runtime_helper_022b4080(pSVar24);
  subCategory = "General";
  pSVar15 = "CreateGamePopup";
  __this_09 = (System_String_o **)
              (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_10 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_10,0x18,200.0,20.0,(System_String_o *)__this_09,(MethodInfo *)0x0);
  if (((__this_08[2].klass == (Il2CppClass *)0x0) ||
      (lVar2 = *(long *)&((__this_08[2].klass)->_1).this_arg.bits, lVar2 == 0)) ||
     (lVar2 = *(long *)(lVar2 + 0x20), lVar2 == 0)) goto label_04373a18;
  pSVar13 = *(System_String_o **)(lVar2 + 0x18);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_09 = (System_String_o **)Map_BuiltinLevels__GetMapNames(pSVar13,(MethodInfo *)0x0);
  pIVar3 = (pSVar24->obj).klass;
  if (((pIVar3 == (Il2CppClass *)0x0) || (lVar2 = *(long *)&(pIVar3->_1).this_arg.bits, lVar2 == 0)) ||
     (lVar2 = *(long *)(lVar2 + 0x28), lVar2 == 0)) goto label_04373a18;
  bVar10 = System_Linq_Enumerable__Contains_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)__this_09,
                      *(Il2CppObject **)(lVar2 + 0x18),MethodInfo_Boolean_Contains_String);
  if ((char)bVar10 == '\0') {
    if ((((System_String_array *)__this_09 == (System_String_array *)0x0) ||
        (pIVar3 = (pSVar24->obj).klass, pIVar3 == (Il2CppClass *)0x0)) ||
       (lVar2 = *(long *)&(pIVar3->_1).this_arg.bits, lVar2 == 0)) goto label_04373a18;
    pSVar4 = *(Settings_TypedSetting_T__o **)(lVar2 + 0x28);
    if (((System_String_array *)__this_09)->max_length == 0) {
      if (pSVar4 == (Settings_TypedSetting_T__o *)0x0) goto label_04373a18;
      __this_09 = &"";
    }
    else {
      if ((int)((System_String_array *)__this_09)->max_length == 0) goto label_043738ed;
      if (pSVar4 == (Settings_TypedSetting_T__o *)0x0) goto label_04373a18;
      __this_09 = ((System_String_array *)__this_09)->m_Items;
    }
    Settings_TypedSetting_object___set_Value
              (pSVar4,(Il2CppObject *)(((System_String_array *)__this_09)->obj).klass,MethodInfo_Void_set_Value);
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if ((((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x38), lVar2 == 0)) || (*(long *)(lVar2 + 0x20) == 0)) ||
     (*(long *)(lVar2 + 0x28) == 0)) goto label_04373a18;
  pSVar13 = *(System_String_o **)(*(long *)(lVar2 + 0x20) + 0x18);
  pSVar5 = *(System_String_o **)(*(long *)(lVar2 + 0x28) + 0x18);
  pSVar12 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScript);
  Map_MapScript___ctor((Map_MapScript_o *)pSVar12,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = Map_BuiltinLevels__LoadMap(pSVar13,pSVar5,(MethodInfo *)0x0);
  if (pSVar12 != (System_String_array *)0x0) {
    pIVar3 = (pSVar12->obj).klass;
    (*(((UI_CreateGameSelectAddonPopup_VTable *)pIVar3->vtable)->_5_get_Width).methodPtr)
              (pSVar12,pSVar13,(((UI_CreateGameSelectAddonPopup_VTable *)pIVar3->vtable)->_5_get_Width).method
              );
    __this_09 = (System_String_o **)pSVar12;
    if (pSVar12->m_Items[4] == (System_String_o *)0x0) goto label_04373a18;
    pSVar13 = System_String__Trim(pSVar12->m_Items[4],(MethodInfo *)0x0);
    uVar11 = System_String__op_Inequality
                       (pSVar13,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    pIVar3 = (pSVar24->obj).klass;
    if (((pIVar3 == (Il2CppClass *)0x0) || (lVar2 = *(long *)&(pIVar3->_1).this_arg.bits, lVar2 == 0)) ||
       ((*(long *)(lVar2 + 0x20) == 0 || (*(long *)(lVar2 + 0x28) == 0)))) goto label_04373a18;
    pSVar13 = *(System_String_o **)(*(long *)(lVar2 + 0x20) + 0x18);
    __this_09 = *(System_String_o ***)(*(long *)(lVar2 + 0x28) + 0x18);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    source = Map_BuiltinLevels__GetGameModes
                       (pSVar13,(System_String_o *)__this_09,uVar11 & 0xff,(MethodInfo *)0x0);
    pIVar3 = (pSVar24->obj).klass;
    if (((pIVar3 == (Il2CppClass *)0x0) || (lVar2 = *(long *)&(pIVar3->_1).this_arg.bits, lVar2 == 0)) ||
       (lVar2 = *(long *)(lVar2 + 0x30), lVar2 == 0)) goto label_04373a18;
    bVar10 = System_Linq_Enumerable__Contains_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        *(Il2CppObject **)(lVar2 + 0x18),MethodInfo_Boolean_Contains_String);
    if ((char)bVar10 == '\0') {
      pIVar3 = (pSVar24->obj).klass;
      if (((pIVar3 == (Il2CppClass *)0x0) || (lVar2 = *(long *)&(pIVar3->_1).this_arg.bits, lVar2 == 0)) ||
         (source == (System_String_array *)0x0)) goto label_04373a18;
      if ((int)source->max_length == 0) goto label_043738ed;
      pSVar4 = *(Settings_TypedSetting_T__o **)(lVar2 + 0x30);
      if (pSVar4 == (Settings_TypedSetting_T__o *)0x0) goto label_04373a18;
      Settings_TypedSetting_object___set_Value(pSVar4,(Il2CppObject *)source->m_Items[0],MethodInfo_Void_set_Value);
    }
    pIVar3 = (pSVar24->obj).klass;
    if (((pIVar3 == (Il2CppClass *)0x0) || (lVar2 = *(long *)&(pIVar3->_1).this_arg.bits, lVar2 == 0)) ||
       ((*(long *)(lVar2 + 0x30) == 0 || (*(long *)(lVar2 + 0x38) == 0)))) goto label_04373a18;
    bVar10 = System_String__op_Inequality
                       (*(System_String_o **)(*(long *)(lVar2 + 0x30) + 0x18),
                        *(System_String_o **)(*(long *)(lVar2 + 0x38) + 0x18),(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      pIVar3 = (pSVar24->obj).klass;
      if (((pIVar3 == (Il2CppClass *)0x0) || (lVar2 = *(long *)&(pIVar3->_1).this_arg.bits, lVar2 == 0)) ||
         (lVar2 = *(long *)(lVar2 + 0x30), lVar2 == 0)) goto label_04373a18;
      __this_09 = *(System_String_o ***)(lVar2 + 0x18);
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar10 = System_String__op_Equality
                         ((System_String_o *)__this_09,
                          *(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x28),(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') goto label_0437294a;
    }
    else {
label_0437294a:
      method_00 = TypeInfo_CreateGameGeneralPanel;
      if (*(int *)((long)&TypeInfo_CreateGameGeneralPanel[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UI_CreateGameGeneralPanel__SetDefaultMisc(method_00);
      pIVar3 = (pSVar24->obj).klass;
      if ((((pIVar3 == (Il2CppClass *)0x0) || (lVar2 = *(long *)&(pIVar3->_1).this_arg.bits, lVar2 == 0)) ||
          (*(long *)(lVar2 + 0x20) == 0)) ||
         ((*(long *)(lVar2 + 0x28) == 0 || (*(long *)(lVar2 + 0x30) == 0)))) goto label_04373a18;
      __this_09 = *(System_String_o ***)(*(long *)(lVar2 + 0x20) + 0x18);
      pSVar13 = *(System_String_o **)(*(long *)(lVar2 + 0x28) + 0x18);
      pSVar5 = *(System_String_o **)(*(long *)(lVar2 + 0x30) + 0x18);
      pIVar3 = (pIVar3->_1).parent;
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_BuiltinLevels__LoadMiscSettings
                ((System_String_o *)__this_09,pSVar13,pSVar5,(Settings_InGameMiscSettings_o *)pIVar3,
                 (MethodInfo *)0x0);
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
      if (lVar2 == 0) goto label_04373a18;
      __this_09 = *(System_String_o ***)(lVar2 + 0x40);
      __this_11 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_BaseSetting);
      System_Collections_Generic_Dictionary_object__object____ctor(__this_11,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
      if ((System_String_array *)__this_09 == (System_String_array *)0x0) goto label_04373a18;
      ((System_String_array *)__this_09)->m_Items[0] = (System_String_o *)__this_11;
      __this_09 = ((System_String_array *)__this_09)->m_Items;
      il2cpp_runtime_helper_022b4080(__this_09,__this_11);
    }
    pIVar3 = (pSVar24->obj).klass;
    if (((pIVar3 == (Il2CppClass *)0x0) || (lVar2 = *(long *)&(pIVar3->_1).this_arg.bits, lVar2 == 0)) ||
       ((*(long *)(lVar2 + 0x30) == 0 ||
        (*(Settings_TypedSetting_T__o **)(lVar2 + 0x38) == (Settings_TypedSetting_T__o *)0x0))))
    goto label_04373a18;
    Settings_TypedSetting_object___set_Value
              (*(Settings_TypedSetting_T__o **)(lVar2 + 0x38),
               *(Il2CppObject **)(*(long *)(lVar2 + 0x30) + 0x18),MethodInfo_Void_set_Value);
    __this_00 = (UI_CreateGamePopup_o *)(__this->fields).Parent;
    if (__this_00 == (UI_CreateGamePopup_o *)0x0) goto label_04373a18;
    bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CreateGamePopup)) {
label_043738db:
      pUVar21 = (UI_BasePanel_o *)il2cpp_runtime_helper_022b2fd0();
    }
    else {
      UI_CreateGamePopup__SyncModeSettings(__this_00,(Map_MapScript_o *)pSVar12,(MethodInfo *)0x0);
      uVar11 = *(uint *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8);
      __this_09 = (System_String_o **)(ulong)uVar11;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        plVar23 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (uVar11 != 2) goto label_04372b83;
label_04372b1a:
        if (plVar23 == (long *)0x0) goto label_04373a18;
        if ((*(byte *)(*plVar23 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
           (*(long *)(*(long *)(*plVar23 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
            TypeInfo_InGameMenu)) goto label_043738db;
        plVar23 = plVar23 + 0x27;
        pUVar21 = (__this->fields).Parent;
      }
      else {
        plVar23 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if (uVar11 == 2) goto label_04372b1a;
label_04372b83:
        if (plVar23 == (long *)0x0) goto label_04373a18;
        if ((*(byte *)(*plVar23 + 0x130) < *(byte *)(TypeInfo_MainMenu + 0x130)) ||
           (*(long *)(*(long *)(*plVar23 + 200) + -8 + (ulong)*(byte *)(TypeInfo_MainMenu + 0x130) * 8) !=
            TypeInfo_MainMenu)) goto label_043738db;
        plVar23 = plVar23 + 0x14;
        pUVar21 = (__this->fields).Parent;
      }
      if (pUVar21 == (UI_BasePanel_o *)0x0) goto label_04373a18;
      bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
      if ((bVar1 <= (pUVar21->klass->_2).naturalAligment) &&
         ((pUVar21->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CreateGamePopup)) {
        pIVar3 = (pSVar24->obj).klass;
        if ((pIVar3 == (Il2CppClass *)0x0) || (lVar2 = *(long *)&(pIVar3->_1).this_arg.bits, lVar2 == 0)) {
label_04373a18:
          il2cpp_runtime_helper_022b2c90();
          puVar22 = (undefined8 *)__cxa_allocate_exception(8);
          *puVar22 = (((System_String_array *)__this_09)->obj).klass;
          __cxa_throw(puVar22,&PTR_PTR_05215060,0);
        }
        MStack_d8.name = (char *)*plVar23;
        __this_01 = (System_Collections_Generic_List_Enumerator_T__c *)pUVar21[2].fields.m_CachedPtr;
        __this_09 = *(System_String_o ***)(lVar2 + 0x30);
        pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_01 == (System_Collections_Generic_List_Enumerator_T__c *)0x0) goto label_04373a18;
        MStack_d8.klass = __this_01;
        UI_CreateGameSelectModePopup__SetupSelector
                  ((UI_CreateGameSelectModePopup_o *)__this_01,(Settings_StringSetting_o *)__this_09,pUVar14,
                   (MethodInfo *)0x0);
        pUVar21 = (__this->fields).Parent;
        if (pUVar21 == (UI_BasePanel_o *)0x0) goto label_04373a18;
        bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
        if ((bVar1 <= (pUVar21->klass->_2).naturalAligment) &&
           ((pUVar21->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CreateGamePopup)) {
          pIVar3 = (pSVar24->obj).klass;
          if ((pIVar3 == (Il2CppClass *)0x0) || (lVar2 = *(long *)&(pIVar3->_1).this_arg.bits, lVar2 == 0))
          goto label_04373a18;
          __this_09 = (System_String_o **)pUVar21[2].fields.m_CancellationTokenSource;
          addons = *(Settings_ListSetting_StringSetting__o **)(lVar2 + 0x48);
          pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          if ((System_String_array *)__this_09 == (System_String_array *)0x0) goto label_04373a18;
          UI_CreateGameSelectAddonPopup__SetupSelector
                    ((UI_CreateGameSelectAddonPopup_o *)__this_09,addons,pUVar14,(MethodInfo *)0x0);
          pIVar3 = (pSVar24->obj).klass;
          if ((pIVar3 == (Il2CppClass *)0x0) ||
             (lVar2 = *(long *)&(pIVar3->_1).this_arg.bits, MStack_d8.return_type = (Il2CppType *)__this_09,
             lVar2 == 0)) goto label_04373a18;
          pUVar18 = (__this->fields).DoublePanelLeft;
          pSVar6 = *(Settings_BaseSetting_o **)(lVar2 + 0x28);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar13 = UI_UIManager__GetLocale
                              (pSVar15,subCategory,"MapName","","",(MethodInfo *)0x0);
          UI_ElementFactory__CreateButtonPopupSetting
                    (pUVar18,__this_10,pSVar6,pSVar13,(UI_BasePopup_o *)MStack_d8.name,"",180.0,0.0,
                     (MethodInfo *)0x0);
          pUVar18 = (__this->fields).DoublePanelLeft;
          pSVar13 = UI_UIManager__GetLocale
                              (pSVar15,subCategory,"MapCategory","","",(MethodInfo *)0x0);
          pIVar3 = (pSVar24->obj).klass;
          __this_09 = (System_String_o **)pSVar24;
          if (((pIVar3 == (Il2CppClass *)0x0) || (lVar2 = *(long *)&(pIVar3->_1).this_arg.bits, lVar2 == 0))
             || (lVar2 = *(long *)(lVar2 + 0x20), lVar2 == 0)) goto label_04373a18;
          pSVar13 = System_String__Concat_3af7150
                              (pSVar13,": ",*(System_String_o **)(lVar2 + 0x18),(MethodInfo *)0x0);
          UI_ElementFactory__CreateDefaultLabel(pUVar18,__this_10,pSVar13,0,3,(MethodInfo *)0x0);
          if (pSVar12->m_Items[0] == (System_String_o *)0x0) goto label_04373a18;
          UI_ElementFactory__CreateDefaultLabel
                    ((__this->fields).DoublePanelLeft,__this_10,
                     (System_String_o *)pSVar12->m_Items[0][1].klass,0,3,(MethodInfo *)0x0);
          pIVar3 = (pSVar24->obj).klass;
          if ((pIVar3 == (Il2CppClass *)0x0) || (lVar2 = *(long *)&(pIVar3->_1).this_arg.bits, lVar2 == 0))
          goto label_04373a18;
          pUVar18 = (__this->fields).DoublePanelRight;
          pSVar6 = *(Settings_BaseSetting_o **)(lVar2 + 0x30);
          pSVar13 = UI_UIManager__GetLocale
                              (pSVar15,subCategory,"GameMode","","",(MethodInfo *)0x0);
          UI_ElementFactory__CreateButtonPopupSetting
                    (pUVar18,__this_10,pSVar6,pSVar13,(UI_BasePopup_o *)MStack_d8.klass,"",180.0,0.0
                     ,(MethodInfo *)0x0);
          pIVar3 = (pSVar24->obj).klass;
          __this_09 = &"";
          if (pIVar3 == (Il2CppClass *)0x0) goto label_04373a18;
          pUVar18 = (__this->fields).DoublePanelRight;
          pSVar6 = (pIVar3->_1).generic_class;
          pSVar13 = UI_UIManager__GetLocale
                              (pSVar15,subCategory,"Weather","","",(MethodInfo *)0x0);
          lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x48);
          __this_09 = &"";
          if ((lVar2 == 0) ||
             (__this_02 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
             __this_09 = (System_String_o **)pSVar24, __this_02 == (Settings_SetSettingsContainer_T__o *)0x0))
          goto label_04373a18;
          pSVar12 = Settings_SetSettingsContainer_object___GetSetNames(__this_02,MethodInfo_String_GetSetNames);
          in_stack_fffffffffffffe90 = 0;
          in_stack_fffffffffffffe98 = (Il2CppObject *)0x0;
          UI_ElementFactory__CreateDropdownSetting
                    (pUVar18,__this_10,pSVar6,pSVar13,pSVar12,"",180.0,40.0,300.0,
                     (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
          pIVar3 = (pSVar24->obj).klass;
          if ((pIVar3 == (Il2CppClass *)0x0) || (lVar2 = *(long *)&(pIVar3->_1).this_arg.bits, lVar2 == 0))
          goto label_04373a18;
          pUVar18 = (__this->fields).DoublePanelRight;
          pSVar6 = *(Settings_BaseSetting_o **)(lVar2 + 0x40);
          __this_09 = (System_String_o **)
                      UI_UIManager__GetLocale
                                (pSVar15,subCategory,"Difficulty","","",(MethodInfo *)0x0)
          ;
          pSVar12 = UI_UIManager__GetLocaleArray
                              (pSVar15,subCategory,"DifficultyOptions","",(MethodInfo *)0x0);
          in_stack_fffffffffffffe88 = 0;
          UI_ElementFactory__CreateToggleGroupSetting
                    (pUVar18,__this_10,pSVar6,(System_String_o *)__this_09,pSVar12,"",30.0,30.0,
                     (MethodInfo *)0x0);
          pIVar3 = *(Il2CppClass **)MStack_d8.parameters;
          if (pIVar3 == (Il2CppClass *)0x0) goto label_04373a18;
          pvVar7 = (pIVar3->_1).image;
          bVar1 = (TypeInfo_CreateGamePopup->_2).naturalAligment;
          if ((bVar1 <= *(byte *)((long)pvVar7 + 0x130)) &&
             (*(Il2CppClass **)(*(long *)((long)pvVar7 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_CreateGamePopup)) {
            if ((*(char *)&(pIVar3->_1).interfaceOffsets != '\0') &&
               (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 1)) {
              pIVar3 = (pSVar24->obj).klass;
              if ((pIVar3 == (Il2CppClass *)0x0) || (lVar2 = *(long *)&(pIVar3->_1).this_arg.bits, lVar2 == 0)
                 ) goto label_04373a18;
              pUVar18 = (__this->fields).DoublePanelRight;
              pSVar6 = *(Settings_BaseSetting_o **)(lVar2 + 0x50);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar13 = UI_UIManager__GetLocale
                                  (pSVar15,subCategory,"RoomName","","",
                                   (MethodInfo *)0x0);
              UI_ElementFactory__CreateInputSetting
                        (pUVar18,__this_10,pSVar6,pSVar13,"",200.0,40.0,0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                         (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                         (MethodInfo *)0x0);
              pIVar3 = (pSVar24->obj).klass;
              __this_09 = &"";
              if ((pIVar3 == (Il2CppClass *)0x0) || (lVar2 = *(long *)&(pIVar3->_1).this_arg.bits, lVar2 == 0)
                 ) goto label_04373a18;
              __this_09 = (System_String_o **)(__this->fields).DoublePanelRight;
              pSVar6 = *(Settings_BaseSetting_o **)(lVar2 + 0x60);
              pSVar15 = UI_UIManager__GetLocale
                                  (pSVar15,subCategory,"MaxPlayers","","",
                                   (MethodInfo *)0x0);
              UI_ElementFactory__CreateInputSetting
                        ((UnityEngine_Transform_o *)__this_09,__this_10,pSVar6,pSVar15,"",200.0,40.0
                         ,0,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                         (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                         (MethodInfo *)0x0);
              pIVar3 = (pSVar24->obj).klass;
              if ((pIVar3 == (Il2CppClass *)0x0) || (lVar2 = *(long *)&(pIVar3->_1).this_arg.bits, lVar2 == 0)
                 ) goto label_04373a18;
              pUVar18 = (__this->fields).DoublePanelRight;
              pSVar6 = *(Settings_BaseSetting_o **)(lVar2 + 0x58);
              pSVar15 = UI_UIManager__GetLocaleCommon("Password",(MethodInfo *)0x0);
              in_stack_fffffffffffffe98 = (Il2CppObject *)0x0;
              in_stack_fffffffffffffe90 = 0;
              UI_ElementFactory__CreateInputSetting
                        (pUVar18,__this_10,pSVar6,pSVar15,"",200.0,40.0,0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                         (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                         (MethodInfo *)0x0);
            }
            UI_BasePanel__CreateHorizontalDivider
                      ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelLeft,1.0,(MethodInfo *)0x0);
            __this_09 = (System_String_o **)(__this->fields).DoublePanelLeft;
            if (*(int *)((long)&TypeInfo_CreateGameGeneralPanel[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            in_stack_fffffffffffffe88 = 0;
            UI_ElementFactory__CreateButtonPopupSetting
                      ((UnityEngine_Transform_o *)__this_09,__this_10,
                       *(Settings_BaseSetting_o **)TypeInfo_CreateGameGeneralPanel[2].virtualMethodPointer,"Addons",
                       (UI_BasePopup_o *)MStack_d8.return_type,"",180.0,0.0,(MethodInfo *)0x0);
            pIVar3 = (pSVar24->obj).klass;
            if ((((pIVar3 != (Il2CppClass *)0x0) && (lVar2 = *(long *)&(pIVar3->_1).this_arg.bits, lVar2 != 0)
                 ) && (lVar2 = *(long *)(lVar2 + 0x48), lVar2 != 0)) &&
               (__this_03 = *(System_Collections_Generic_List_object__o **)(lVar2 + 0x18),
               __this_03 != (System_Collections_Generic_List_object__o *)0x0)) {
              if ((__this_03->fields)._size == 0) {
                UI_ElementFactory__CreateDefaultLabel
                          ((__this->fields).DoublePanelLeft,__this_10,"No addons selected.",0,3,(MethodInfo *)0x0);
                return;
              }
              System_Collections_Generic_List_object___GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,__this_03,MethodInfo_List_1_T_Enumerator_Settings_StringSetting_GetEnumerator)
              ;
              MStack_d8.invoker_method = (InvokerMethod)pIStack_38;
              MStack_d8.methodPointer = (Il2CppMethodPointer)auStack_48._0_8_;
              MStack_d8.virtualMethodPointer = (Il2CppMethodPointer)auStack_48._8_8_;
              do {
                do {
                  __this_04.fields._index = (int)in_stack_fffffffffffffe90;
                  __this_04.fields._version = (int)((ulong)in_stack_fffffffffffffe90 >> 0x20);
                  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe88;
                  __this_04.fields._current = in_stack_fffffffffffffe98;
                  bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext(__this_04,&MStack_d8);
                  pIVar9 = MStack_d8.invoker_method;
                  if ((char)bVar10 == '\0') {
                    __this_05.fields._index = (int)in_stack_fffffffffffffe90;
                    __this_05.fields._version = (int)((ulong)in_stack_fffffffffffffe90 >> 0x20);
                    __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe88
                    ;
                    __this_05.fields._current = in_stack_fffffffffffffe98;
                    System_Collections_Generic_List_Enumerator_object___Dispose
                              (__this_05,(MethodInfo_321A1C0 *)&MStack_d8);
                    return;
                  }
                  __this_12 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_1);
                  System_Object___ctor(__this_12,(MethodInfo *)0x0);
                  if (__this_12 == (Il2CppObject *)0x0) {
                    il2cpp_runtime_helper_022b2c90();
label_04373840:
                    il2cpp_runtime_helper_022b2c90();
label_0437384a:
                    il2cpp_runtime_helper_022b2c90();
label_04373859:
                    il2cpp_runtime_helper_022b2c90();
label_04373868:
                    il2cpp_runtime_helper_022b2c90();
label_04373877:
                    il2cpp_runtime_helper_022b2c90();
label_04373886:
                    il2cpp_runtime_helper_022b2c90();
label_04373895:
                    il2cpp_runtime_helper_022b2c90();
label_043738a4:
                    il2cpp_runtime_helper_022b2c90();
label_043738b3:
                    il2cpp_runtime_helper_022b2c90();
                    goto label_043738c2;
                  }
                  __this_12[1].monitor = __this_08;
                  il2cpp_runtime_helper_022b4080(&__this_12[1].monitor);
                  if ((Il2CppObject *)pIVar9 == (Il2CppObject *)0x0) goto label_04373840;
                  __this_12[1].klass = ((Il2CppObject *)((long)pIVar9 + 0x10))->monitor;
                  il2cpp_runtime_helper_022b4080(__this_12 + 1);
                  pUVar16 = UI_ElementFactory__CreateHorizontalGroup
                                      ((__this->fields).DoublePanelLeft,10.0,3,(MethodInfo *)0x0);
                  if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_0437384a;
                  pIVar17 = UnityEngine_GameObject__GetComponent_object_(pUVar16,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                  if (pIVar17 == (Il2CppObject *)0x0) goto label_04373859;
                  (*pIVar17->klass->vtable[0x24].methodPtr)
                            (0x435c0000,pIVar17,pIVar17->klass->vtable[0x24].method);
                  (*pIVar17->klass->vtable[0x20].methodPtr)(0x435c0000,pIVar17);
                  pUVar18 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
                  pUVar19 = UI_ElementFactory__CreateHorizontalGroup(pUVar18,0.0,3,(MethodInfo *)0x0);
                  if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_04373868;
                  pIVar17 = UnityEngine_GameObject__GetComponent_object_(pUVar19,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                  if (pIVar17 == (Il2CppObject *)0x0) goto label_04373877;
                  (*pIVar17->klass->vtable[0x24].methodPtr)
                            (0x43160000,pIVar17,pIVar17->klass->vtable[0x24].method);
                  (*pIVar17->klass->vtable[0x20].methodPtr)
                            (0x43160000,pIVar17,pIVar17->klass->vtable[0x20].method);
                  (*pIVar17->klass->vtable[0x28].methodPtr)(0,pIVar17,pIVar17->klass->vtable[0x28].method);
                  UnityEngine_GameObject__AddComponent_object_(pUVar19,MethodInfo_RectMask2D_AddComponent_RectMask2D);
                  pUVar18 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0);
                  pUVar19 = UI_ElementFactory__CreateDefaultLabel
                                      (pUVar18,__this_10,(System_String_o *)__this_12[1].klass,0,3,
                                       (MethodInfo *)0x0);
                  if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_04373886;
                  __this_13 = (UnityEngine_UI_Text_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar19,MethodInfo_Text_GetComponent_Text);
                  if (__this_13 == (UnityEngine_UI_Text_o *)0x0) goto label_04373895;
                  UnityEngine_UI_Text__set_horizontalOverflow(__this_13,1,(MethodInfo *)0x0);
                  UnityEngine_UI_Text__set_verticalOverflow(__this_13,0,(MethodInfo *)0x0);
                  pUVar20 = (UnityEngine_Object_o *)
                            UnityEngine_GameObject__GetComponent_object_(pUVar19,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar10 = UnityEngine_Object__op_Inequality
                                     (pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if ((char)bVar10 != '\0') {
                    if (pUVar20 != (UnityEngine_Object_o *)0x0) {
                      (*(code *)pUVar20->klass[2]._2.typeHierarchy)(0,pUVar20);
                      goto label_0437362f;
                    }
                    goto label_043738cc;
                  }
label_0437362f:
                  pUVar18 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
                  pUVar14 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                  UnityEngine_Events_UnityAction___ctor();
                  pUVar16 = UI_ElementFactory__CreateIconButton
                                      (pUVar18,__this_10,"Icons/Navigation/TrashIcon",28.0,28.0,pUVar14,(MethodInfo *)0x0);
                  if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_043738a4;
                  __this_14 = (UnityEngine_UI_Selectable_o *)
                              UnityEngine_GameObject__GetComponent_object_(pUVar16,MethodInfo_Button_GetComponent_Button);
                  if (__this_14 == (UnityEngine_UI_Selectable_o *)0x0) goto label_043738b3;
                  uVar8._0_4_ = (__this_14->fields).m_Colors.fields.m_ColorMultiplier;
                  uVar8._4_4_ = (__this_14->fields).m_Colors.fields.m_FadeDuration;
                  if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  MStack_d8.rgctx_data = (Il2CppRGCTXData *)0x3e4ccccd3f800000;
                  MStack_d8.field8_0x40.genericMethod = (void *)0x3f8000003e4ccccd;
                  MStack_d8.token = 0x3f800000;
                  MStack_d8.flags = 0x999a;
                  MStack_d8.iflags = 0x3e99;
                  MStack_d8.slot = 0x999a;
                  MStack_d8.parameters_count = 0x99;
                  MStack_d8.bitflags = '>';
                  MStack_d8._84_4_ = 0x3f800000;
                  uStack_80 = 0x3dcccccd3f59999a;
                  uStack_78 = 0x3f8000003dcccccd;
                  uStack_70 = 0x3e99999a3f800000;
                  uStack_68 = 0x3f8000003e99999a;
                  uStack_60 = 0x3dcccccd3f000000;
                  uStack_58 = 0x3f4ccccd3dcccccd;
                  in_stack_fffffffffffffe98 = (Il2CppObject *)0x3e99999a3f800000;
                  in_stack_fffffffffffffe88 = 0x3e4ccccd3f800000;
                  in_stack_fffffffffffffe90 = 0x3f8000003e4ccccd;
                  value.fields.m_NormalColor.fields.b = 0.2;
                  value.fields.m_NormalColor.fields.a = 1.0;
                  value.fields.m_NormalColor.fields.r = 1.0;
                  value.fields.m_NormalColor.fields.g = 0.2;
                  value.fields.m_HighlightedColor.fields.r = 1.0;
                  value.fields.m_HighlightedColor.fields.g = 0.3;
                  value.fields.m_HighlightedColor.fields.b = 0.3;
                  value.fields.m_HighlightedColor.fields.a = 1.0;
                  value.fields.m_PressedColor.fields.r = 0.85;
                  value.fields.m_PressedColor.fields.g = 0.1;
                  value.fields.m_PressedColor.fields.b = 0.1;
                  value.fields.m_PressedColor.fields.a = 1.0;
                  value.fields.m_SelectedColor.fields.r = 1.0;
                  value.fields.m_SelectedColor.fields.g = 0.3;
                  value.fields.m_SelectedColor.fields.b = 0.3;
                  value.fields.m_SelectedColor.fields.a = 1.0;
                  value.fields.m_DisabledColor.fields.r = 0.5;
                  value.fields.m_DisabledColor.fields.g = 0.1;
                  value.fields.m_DisabledColor.fields.b = 0.1;
                  value.fields.m_DisabledColor.fields.a = 0.8;
                  value.fields.m_ColorMultiplier = (float)(undefined4)uVar8;
                  value.fields.m_FadeDuration = (float)uVar8._4_4_;
                  uStack_50 = uVar8;
                  UnityEngine_UI_Selectable__set_colors(__this_14,value,(MethodInfo *)0x0);
                  pUVar20 = (UnityEngine_Object_o *)
                            UnityEngine_GameObject__GetComponent_object_(pUVar16,MethodInfo_RawImage_GetComponent_RawImage);
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  bVar10 = UnityEngine_Object__op_Inequality
                                     (pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                } while ((char)bVar10 == '\0');
                if (pUVar20 == (UnityEngine_Object_o *)0x0) {
label_043738c2:
                  il2cpp_runtime_helper_022b2c90();
label_043738cc:
                  il2cpp_runtime_helper_022b2c90();
                  goto label_043738db;
                }
                (**(code **)&pUVar20->klass[1]._2.naturalAligment)
                          (0x3f800000,0x3f800000,pUVar20,pUVar20->klass[1].vtable._0_Equals.methodPtr);
              } while( true );
            }
            goto label_04373a18;
          }
        }
        goto label_043738db;
      }
    }
    il2cpp_runtime_helper_022b2fd0(pUVar21);
  }
  il2cpp_runtime_helper_022b2c90();
label_043738ed:
  auVar25 = il2cpp_runtime_helper_022b2ca0();
  if (auVar25._8_4_ == 1) {
    plVar23 = (long *)__cxa_begin_catch(auVar25._0_8_);
    lVar2 = *plVar23;
    __cxa_end_catch();
    __this_06.fields._index = (int)in_stack_fffffffffffffe90;
    __this_06.fields._version = (int)((ulong)in_stack_fffffffffffffe90 >> 0x20);
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe88;
    __this_06.fields._current = in_stack_fffffffffffffe98;
    System_Collections_Generic_List_Enumerator_object___Dispose(__this_06,(MethodInfo_321A1C0 *)&MStack_d8);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_07.fields._index = (int)in_stack_fffffffffffffe90;
  __this_07.fields._version = (int)((ulong)in_stack_fffffffffffffe90 >> 0x20);
  __this_07.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe88;
  __this_07.fields._current = in_stack_fffffffffffffe98;
  System_Collections_Generic_List_Enumerator_object___Dispose(__this_07,(MethodInfo_321A1C0 *)&MStack_d8);
  _Unwind_Resume(auVar25._0_8_);
}


// UI.CreateGameGeneralPanel$$RemoveAddon
// il2cpp: void UI_CreateGameGeneralPanel__RemoveAddon (Settings_ListSetting_StringSetting__o* addons, System_String_o* addonName, const MethodInfo* method);
// 0x4373d60

void UI_CreateGameGeneralPanel__RemoveAddon
               (Settings_ListSetting_StringSetting__o *addons,System_String_o *addonName,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  System_Predicate_T__o *pSVar1;
  System_Predicate_T__o *__this_00;
  
  if (g_data_057ae202 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_RemoveAll);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Predicate_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RemoveAddon_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass4_0);
    g_data_057ae202 = '\x01';
  }
  pSVar1 = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass4_0);
  __this_00 = pSVar1;
  System_Object___ctor((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  if (pSVar1 != (System_Predicate_T__o *)0x0) {
    __this_00 = (System_Predicate_T__o *)&pSVar1->fields;
    (pSVar1->fields).method_ptr = (intptr_t)addonName;
    il2cpp_runtime_helper_022b4080();
    if (addons != (Settings_ListSetting_StringSetting__o *)0x0) {
      __this = (System_Collections_Generic_List_object__o *)(addons->fields)._value;
      pSVar1 = (System_Predicate_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Predicate_StringSetting);
      __this_00 = pSVar1;
      System_Predicate_object____ctor();
      if (__this != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List_object___RemoveAll(__this,pSVar1,MethodInfo_Int32_RemoveAll);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameGeneralPanel$$SetDefaultMisc
// il2cpp: void UI_CreateGameGeneralPanel__SetDefaultMisc (const MethodInfo* method);
// 0x4373b30

void UI_CreateGameGeneralPanel__SetDefaultMisc(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ae203 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    method = (MethodInfo *)&MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae203 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x58);
  if (((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x58), lVar1 != 0)) &&
     (method = (MethodInfo *)0x0,
     *(Settings_TypedSetting_bool__o **)(lVar1 + 0x28) != (Settings_TypedSetting_bool__o *)0x0)) {
    Settings_TypedSetting_bool___set_Value(*(Settings_TypedSetting_bool__o **)(lVar1 + 0x28),0,MethodInfo_Void_set_Value);
    method = (MethodInfo *)0x0;
    if (*(Settings_TypedSetting_float__o **)(lVar1 + 0x30) != (Settings_TypedSetting_float__o *)0x0) {
      Settings_TypedSetting_float___set_Value
                (*(Settings_TypedSetting_float__o **)(lVar1 + 0x30),5.0,MethodInfo_Void_set_Value);
      method = (MethodInfo *)0x0;
      if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x48) != (Settings_TypedSetting_bool__o *)0x0) {
        Settings_TypedSetting_bool___set_Value
                  (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x48),0,MethodInfo_Void_set_Value);
        method = (MethodInfo *)0x0;
        if (*(Settings_TypedSetting_int__o **)(lVar1 + 0x20) != (Settings_TypedSetting_int__o *)0x0) {
          Settings_TypedSetting_int___set_Value
                    (*(Settings_TypedSetting_int__o **)(lVar1 + 0x20),0,MethodInfo_Void_set_Value);
          method = (MethodInfo *)0x0;
          if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x58) != (Settings_TypedSetting_bool__o *)0x0) {
            Settings_TypedSetting_bool___set_Value
                      (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x58),1,MethodInfo_Void_set_Value);
            method = (MethodInfo *)0x0;
            if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x60) != (Settings_TypedSetting_bool__o *)0x0) {
              Settings_TypedSetting_bool___set_Value
                        (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x60),1,MethodInfo_Void_set_Value);
              method = (MethodInfo *)0x0;
              if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x68) != (Settings_TypedSetting_bool__o *)0x0) {
                Settings_TypedSetting_bool___set_Value
                          (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x68),1,MethodInfo_Void_set_Value);
                method = (MethodInfo *)0x0;
                if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x70) != (Settings_TypedSetting_bool__o *)0x0)
                {
                  Settings_TypedSetting_bool___set_Value
                            (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x70),1,MethodInfo_Void_set_Value);
                  method = (MethodInfo *)0x0;
                  if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x78) !=
                      (Settings_TypedSetting_bool__o *)0x0) {
                    Settings_TypedSetting_bool___set_Value
                              (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x78),1,MethodInfo_Void_set_Value);
                    method = (MethodInfo *)0x0;
                    if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x80) !=
                        (Settings_TypedSetting_bool__o *)0x0) {
                      Settings_TypedSetting_bool___set_Value
                                (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x80),1,MethodInfo_Void_set_Value);
                      method = (MethodInfo *)0x0;
                      if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x88) !=
                          (Settings_TypedSetting_bool__o *)0x0) {
                        Settings_TypedSetting_bool___set_Value
                                  (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x88),0,MethodInfo_Void_set_Value);
                        method = (MethodInfo *)0x0;
                        if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x90) !=
                            (Settings_TypedSetting_bool__o *)0x0) {
                          Settings_TypedSetting_bool___set_Value
                                    (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x90),0,MethodInfo_Void_set_Value);
                          method = (MethodInfo *)0x0;
                          if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x98) !=
                              (Settings_TypedSetting_bool__o *)0x0) {
                            Settings_TypedSetting_bool___set_Value
                                      (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x98),0,MethodInfo_Void_set_Value);
                            method = (MethodInfo *)0x0;
                            if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x50) !=
                                (Settings_TypedSetting_bool__o *)0x0) {
                              Settings_TypedSetting_bool___set_Value
                                        (*(Settings_TypedSetting_bool__o **)(lVar1 + 0x50),0,MethodInfo_Void_set_Value);
                              method = (MethodInfo *)0x0;
                              if (*(Settings_TypedSetting_bool__o **)(lVar1 + 200) !=
                                  (Settings_TypedSetting_bool__o *)0x0) {
                                Settings_TypedSetting_bool___set_Value
                                          (*(Settings_TypedSetting_bool__o **)(lVar1 + 200),0,MethodInfo_Void_set_Value);
                                method = (MethodInfo *)0x0;
                                if (*(Settings_TypedSetting_bool__o **)(lVar1 + 0xc0) !=
                                    (Settings_TypedSetting_bool__o *)0x0) {
                                  Settings_TypedSetting_bool___set_Value
                                            (*(Settings_TypedSetting_bool__o **)(lVar1 + 0xc0),0,MethodInfo_Void_set_Value)
                                  ;
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
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)method,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameGeneralPanel$$.ctor
// il2cpp: void UI_CreateGameGeneralPanel___ctor (UI_CreateGameGeneralPanel_o* __this, const MethodInfo* method);
// 0x4373e60

void UI_CreateGameGeneralPanel___ctor(UI_CreateGameGeneralPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CreateGameGeneralPanel$$.cctor
// il2cpp: void UI_CreateGameGeneralPanel___cctor (const MethodInfo* method);
// 0x4373e70

void UI_CreateGameGeneralPanel___cctor(MethodInfo *method)

{
  Settings_StringSetting_o *__this;
  
  if (g_data_057ae204 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CreateGameGeneralPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&"Add Addon");
    g_data_057ae204 = '\x01';
  }
  __this = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this,"Add Addon",0x7fffffff,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_CreateGameGeneralPanel + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CreateGameGeneralPanel + 0xb8),__this);
  return;
}


