// Type: UI.SettingsPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SettingsPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsPopup.cs
// --------------------------------

// UI.SettingsPopup.<>c__DisplayClass18_0$$.ctor
// il2cpp: void UI_SettingsPopup___c__DisplayClass18_0___ctor (UI_SettingsPopup___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x4447ea0

void UI_SettingsPopup___c__DisplayClass18_0___ctor
               (UI_SettingsPopup___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsPopup.<>c__DisplayClass18_0$$<SetupTopButtons>b__0
// il2cpp: void UI_SettingsPopup___c__DisplayClass18_0___SetupTopButtons_b__0 (UI_SettingsPopup___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x4448be0

void UI_SettingsPopup___c__DisplayClass18_0___SetupTopButtons_b__0
               (UI_SettingsPopup___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Type__o *pSVar1;
  UI_MessagePopup_o *__this_00;
  UI_ConfirmPopup_o *__this_01;
  long lVar2;
  Il2CppMethodPointer vtableDispatch;
  UI_BasePanel_o *__this_02;
  System_String_o *a;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  bool_conflict bVar3;
  UnityEngine_Events_UnityAction_o *onConfirm;
  long *plVar4;
  UI_SettingsPopup_o *pUVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_T__o *pSVar7;
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  Il2CppType *pIVar9;
  System_Collections_Generic_List_T__o *pSStack_38;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_30;
  Il2CppType *pIStack_28;
  
  pUVar5 = (__this->fields).__4__this;
  if (pUVar5 != (UI_SettingsPopup_o *)0x0) {
    vtableDispatch = (pUVar5->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtableDispatch)
              (pUVar5,(__this->fields).buttonName,(pUVar5->klass->vtable)._28_SetCategoryPanel.method,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02 = (UI_BasePanel_o *)(pUVar5->fields).m_CancellationTokenSource;
  if (__this_02 == (UI_BasePanel_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  a = (System_String_o *)(pUVar5->fields).m_CachedPtr;
  if (g_data_057ae6f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SaveableSettingsContainer_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__23_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Are you sure you want to reset to default?");
    il2cpp_runtime_helper_023445d0(&"Load");
    il2cpp_runtime_helper_023445d0(&"Settings loaded from file.");
    il2cpp_runtime_helper_023445d0(&"Reset default");
    il2cpp_runtime_helper_023445d0(&"Default");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae6f4 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar9 = (Il2CppType *)0x0;
  bVar3 = System_String__op_Equality(a,"Save",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(a,"Load",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      bVar3 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 2) {
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar4 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (plVar4 == (long *)0x0) goto label_0444883e;
          if (*(byte *)(*plVar4 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) goto label_04448843;
          if (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
              TypeInfo_InGameMenu) goto label_04448843;
          *(undefined1 *)(plVar4 + 0x2f) = 1;
        }
label_04448708:
        (*(__this_02->klass->vtable)._22_Hide.methodPtr)(__this_02,(__this_02->klass->vtable)._22_Hide.method)
        ;
        return;
      }
      bVar3 = System_String__op_Equality(a,"Default",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (lVar2 != 0) {
        __this_01 = *(UI_ConfirmPopup_o **)(lVar2 + 0x38);
        onConfirm = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show(__this_01,"Are you sure you want to reset to default?",onConfirm,"Reset default",(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pSVar1 = __this_02[1].fields._categoryPanelTypes;
      if (pSVar1 != (System_Collections_Generic_Dictionary_string__Type__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                   (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
        pSVar7 = pSStack_38;
        pSVar8 = pSStack_30;
        pIVar9 = pIStack_28;
        while( true ) {
          __this_04.fields._8_8_ = pSVar8;
          __this_04.fields._list = pSVar7;
          __this_04.fields._current = (Il2CppObject *)pIVar9;
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb0);
          if ((char)bVar3 == '\0') {
            __this_06.fields._8_8_ = pSVar8;
            __this_06.fields._list = pSVar7;
            __this_06.fields._current = (Il2CppObject *)pIVar9;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb0);
            goto label_04448732;
          }
          if (pIVar9 == (Il2CppType *)0x0) break;
          (*pIVar9->data->vtable[0x11].methodPtr)(pIVar9,pIVar9->data->vtable[0x11].method);
        }
label_04448839:
        il2cpp_runtime_helper_022b2c90();
      }
    }
  }
  else {
    pSVar1 = __this_02[1].fields._categoryPanelTypes;
    if (pSVar1 != (System_Collections_Generic_Dictionary_string__Type__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
      pSVar7 = pSStack_38;
      pSVar8 = pSStack_30;
      pIVar9 = pIStack_28;
      while (__this_03.fields._8_8_ = pSVar8, __this_03.fields._list = pSVar7,
            __this_03.fields._current = (Il2CppObject *)pIVar9,
            bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb0), (char)bVar3 != '\0')
      {
        if (pIVar9 == (Il2CppType *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04448839;
        }
        (*pIVar9->data->vtable[0x10].methodPtr)(pIVar9,pIVar9->data->vtable[0x10].method);
      }
      __this_05.fields._8_8_ = pSVar8;
      __this_05.fields._list = pSVar7;
      __this_05.fields._current = (Il2CppObject *)pIVar9;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb0);
      if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) != 2) goto label_04448708;
      Settings_SettingsManager__NotifySettingsChanged((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar4 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (plVar4 != (long *)0x0) {
        if (*(byte *)(*plVar4 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) goto label_04448843;
        if (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
            TypeInfo_InGameMenu) goto label_04448843;
        plVar4 = (long *)plVar4[0x22];
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x288))(plVar4,*(undefined8 *)(*plVar4 + 0x290));
          goto label_04448708;
        }
      }
    }
  }
label_0444883e:
  while( true ) {
    il2cpp_runtime_helper_022b2c90();
label_04448843:
    auVar6 = il2cpp_runtime_helper_022b2fd0();
    if (auVar6._8_4_ != 1) break;
    plVar4 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_07.fields._8_8_ = pSVar8;
    __this_07.fields._list = pSVar7;
    __this_07.fields._current = (Il2CppObject *)pIVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb0);
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      __this_09.fields._8_8_ = pSVar8;
      __this_09.fields._list = pSVar7;
      __this_09.fields._current = (Il2CppObject *)pIVar9;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb0);
      goto label_04448927;
    }
label_04448732:
    UI_BasePanel__RebuildCategoryPanel(__this_02,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if ((lVar2 != 0) &&
       (__this_00 = *(UI_MessagePopup_o **)(lVar2 + 0x30), __this_00 != (UI_MessagePopup_o *)0x0)) {
      UI_MessagePopup__Show(__this_00,"Settings loaded from file.",1,(MethodInfo *)0x0);
      return;
    }
  }
  __this_08.fields._8_8_ = pSVar8;
  __this_08.fields._list = pSVar7;
  __this_08.fields._current = (Il2CppObject *)pIVar9;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb0);
label_04448927:
  _Unwind_Resume(auVar6._0_8_);
}


// UI.SettingsPopup.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_SettingsPopup___c__DisplayClass21_0___ctor (UI_SettingsPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x4448130

void UI_SettingsPopup___c__DisplayClass21_0___ctor
               (UI_SettingsPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsPopup.<>c__DisplayClass21_0$$<SetupBottomButtons>b__0
// il2cpp: void UI_SettingsPopup___c__DisplayClass21_0___SetupBottomButtons_b__0 (UI_SettingsPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x4448c10

void UI_SettingsPopup___c__DisplayClass21_0___SetupBottomButtons_b__0
               (UI_SettingsPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_SaveableSettingsContainer__o *pSVar1;
  UI_MessagePopup_o *__this_00;
  UI_ConfirmPopup_o *__this_01;
  long lVar2;
  UI_SettingsPopup_o *__this_02;
  System_String_o *a;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  bool_conflict bVar3;
  UnityEngine_Events_UnityAction_o *onConfirm;
  long *plVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_List_T__o *pSVar6;
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppType *pIVar8;
  System_Collections_Generic_List_T__o *pSStack_30;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_28;
  Il2CppType *pIStack_20;
  
  __this_02 = (__this->fields).__4__this;
  if (__this_02 == (UI_SettingsPopup_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  a = (__this->fields).buttonName;
  if (g_data_057ae6f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SaveableSettingsContainer_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__23_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Are you sure you want to reset to default?");
    il2cpp_runtime_helper_023445d0(&"Load");
    il2cpp_runtime_helper_023445d0(&"Settings loaded from file.");
    il2cpp_runtime_helper_023445d0(&"Reset default");
    il2cpp_runtime_helper_023445d0(&"Default");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae6f4 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar8 = (Il2CppType *)0x0;
  bVar3 = System_String__op_Equality(a,"Save",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(a,"Load",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      bVar3 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 2) {
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar4 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (plVar4 == (long *)0x0) goto label_0444883e;
          if (*(byte *)(*plVar4 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) goto label_04448843;
          if (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
              TypeInfo_InGameMenu) goto label_04448843;
          *(undefined1 *)(plVar4 + 0x2f) = 1;
        }
label_04448708:
        (*(__this_02->klass->vtable)._22_Hide.methodPtr)(__this_02,(__this_02->klass->vtable)._22_Hide.method)
        ;
        return;
      }
      bVar3 = System_String__op_Equality(a,"Default",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (lVar2 != 0) {
        __this_01 = *(UI_ConfirmPopup_o **)(lVar2 + 0x38);
        onConfirm = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show(__this_01,"Are you sure you want to reset to default?",onConfirm,"Reset default",(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pSVar1 = (__this_02->fields)._saveableSettings;
      if (pSVar1 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd0,
                   (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
        pSVar6 = pSStack_30;
        pSVar7 = pSStack_28;
        pIVar8 = pIStack_20;
        while( true ) {
          __this_04.fields._8_8_ = pSVar7;
          __this_04.fields._list = pSVar6;
          __this_04.fields._current = (Il2CppObject *)pIVar8;
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8);
          if ((char)bVar3 == '\0') {
            __this_06.fields._8_8_ = pSVar7;
            __this_06.fields._list = pSVar6;
            __this_06.fields._current = (Il2CppObject *)pIVar8;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
            goto label_04448732;
          }
          if (pIVar8 == (Il2CppType *)0x0) break;
          (*pIVar8->data->vtable[0x11].methodPtr)(pIVar8,pIVar8->data->vtable[0x11].method);
        }
label_04448839:
        il2cpp_runtime_helper_022b2c90();
      }
    }
  }
  else {
    pSVar1 = (__this_02->fields)._saveableSettings;
    if (pSVar1 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd0,
                 (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
      pSVar6 = pSStack_30;
      pSVar7 = pSStack_28;
      pIVar8 = pIStack_20;
      while (__this_03.fields._8_8_ = pSVar7, __this_03.fields._list = pSVar6,
            __this_03.fields._current = (Il2CppObject *)pIVar8,
            bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8), (char)bVar3 != '\0')
      {
        if (pIVar8 == (Il2CppType *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04448839;
        }
        (*pIVar8->data->vtable[0x10].methodPtr)(pIVar8,pIVar8->data->vtable[0x10].method);
      }
      __this_05.fields._8_8_ = pSVar7;
      __this_05.fields._list = pSVar6;
      __this_05.fields._current = (Il2CppObject *)pIVar8;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
      if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) != 2) goto label_04448708;
      Settings_SettingsManager__NotifySettingsChanged((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar4 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (plVar4 != (long *)0x0) {
        if (*(byte *)(*plVar4 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) goto label_04448843;
        if (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
            TypeInfo_InGameMenu) goto label_04448843;
        plVar4 = (long *)plVar4[0x22];
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x288))(plVar4,*(undefined8 *)(*plVar4 + 0x290));
          goto label_04448708;
        }
      }
    }
  }
label_0444883e:
  while( true ) {
    il2cpp_runtime_helper_022b2c90();
label_04448843:
    auVar5 = il2cpp_runtime_helper_022b2fd0();
    if (auVar5._8_4_ != 1) break;
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_07.fields._8_8_ = pSVar7;
    __this_07.fields._list = pSVar6;
    __this_07.fields._current = (Il2CppObject *)pIVar8;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      __this_09.fields._8_8_ = pSVar7;
      __this_09.fields._list = pSVar6;
      __this_09.fields._current = (Il2CppObject *)pIVar8;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
      goto label_04448927;
    }
label_04448732:
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this_02,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if ((lVar2 != 0) &&
       (__this_00 = *(UI_MessagePopup_o **)(lVar2 + 0x30), __this_00 != (UI_MessagePopup_o *)0x0)) {
      UI_MessagePopup__Show(__this_00,"Settings loaded from file.",1,(MethodInfo *)0x0);
      return;
    }
  }
  __this_08.fields._8_8_ = pSVar7;
  __this_08.fields._list = pSVar6;
  __this_08.fields._current = (Il2CppObject *)pIVar8;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
label_04448927:
  _Unwind_Resume(auVar5._0_8_);
}


// UI.SettingsPopup$$get_Title
// il2cpp: System_String_o* UI_SettingsPopup__get_Title (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x44472a0

System_String_o * UI_SettingsPopup__get_Title(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.SettingsPopup$$get_Width
// il2cpp: float UI_SettingsPopup__get_Width (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x44472c0

float UI_SettingsPopup__get_Width(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  return 1000.0;
}


// UI.SettingsPopup$$get_Height
// il2cpp: float UI_SettingsPopup__get_Height (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x44472d0

float UI_SettingsPopup__get_Height(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  return 630.0;
}


// UI.SettingsPopup$$get_CategoryPanel
// il2cpp: bool UI_SettingsPopup__get_CategoryPanel (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x44472e0

bool_conflict UI_SettingsPopup__get_CategoryPanel(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SettingsPopup$$get_CategoryButtons
// il2cpp: bool UI_SettingsPopup__get_CategoryButtons (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x44472f0

bool_conflict UI_SettingsPopup__get_CategoryButtons(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SettingsPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_SettingsPopup__get_DefaultCategoryPanel (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x4447300

System_String_o * UI_SettingsPopup__get_DefaultCategoryPanel(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae6ee == '\0') {
    il2cpp_runtime_helper_023445d0(&"General");
    g_data_057ae6ee = '\x01';
  }
  return "General";
}


// UI.SettingsPopup$$get_UseSound
// il2cpp: bool UI_SettingsPopup__get_UseSound (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x4447330

bool_conflict UI_SettingsPopup__get_UseSound(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SettingsPopup$$Setup
// il2cpp: void UI_SettingsPopup__Setup (UI_SettingsPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4447340

void UI_SettingsPopup__Setup(UI_SettingsPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  System_Object_array *pSVar3;
  char *pcVar4;
  void *pvVar5;
  Il2CppClass *__this_00;
  int32_t *piVar6;
  undefined1 *puVar7;
  System_String_o *pSVar8;
  UI_ElementStyle_o *__this_01;
  long lVar9;
  UnityEngine_Transform_o *__this_02;
  System_String_o *item;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_Transform_o *__this_03;
  Il2CppObject *value;
  UnityEngine_Transform_c *__this_04;
  UnityEngine_Transform_o *parent_00;
  MethodInfo *in_R9;
  ulong uVar10;
  
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  UI_SettingsPopup__SetupBottomButtons(__this,(MethodInfo *)parent);
  if (g_data_057ae6f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae6f1 = '\x01';
  }
  lVar9 = MethodInfo_Void_Add;
  __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
  if (__this_04 != (UnityEngine_Transform_c *)0x0) {
    pIVar2 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
    piVar6 = (int32_t *)((long)&(__this_04->_1).namespaze + 4);
    *piVar6 = *piVar6 + 1;
    pSVar3 = ((System_Collections_Generic_List_object__Fields *)&(__this_04->_1).name)->_items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = *(uint *)&(__this_04->_1).namespaze;
      if (uVar1 < (uint)pSVar3->max_length) {
        *(uint *)&(__this_04->_1).namespaze = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = pIVar2;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar1);
        __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
        lVar9 = MethodInfo_Void_Add;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_04,pIVar2,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
        lVar9 = MethodInfo_Void_Add;
      }
      MethodInfo_Void_Add = lVar9;
      if (__this_04 != (UnityEngine_Transform_c *)0x0) {
        pIVar2 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        puVar7 = (undefined1 *)((long)&(__this_04->_1).namespaze + 4);
        *(int *)puVar7 = *(int *)puVar7 + 1;
        pcVar4 = (__this_04->_1).name;
        if (pcVar4 != (char *)0x0) {
          uVar1 = *(uint *)&(__this_04->_1).namespaze;
          if (uVar1 < *(uint *)(pcVar4 + 0x18)) {
            *(uint *)&(__this_04->_1).namespaze = uVar1 + 1;
            *(Il2CppObject **)(pcVar4 + (long)(int)uVar1 * 8 + 0x20) = pIVar2;
            il2cpp_runtime_helper_022b4080(pcVar4 + (long)(int)uVar1 * 8 + 0x20);
            __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
            lVar9 = MethodInfo_Void_Add;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_04,pIVar2,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
            lVar9 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar9;
          if (__this_04 != (UnityEngine_Transform_c *)0x0) {
            pIVar2 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
            puVar7 = (undefined1 *)((long)&(__this_04->_1).namespaze + 4);
            *(int *)puVar7 = *(int *)puVar7 + 1;
            pcVar4 = (__this_04->_1).name;
            if (pcVar4 != (char *)0x0) {
              uVar1 = *(uint *)&(__this_04->_1).namespaze;
              if (uVar1 < *(uint *)(pcVar4 + 0x18)) {
                *(uint *)&(__this_04->_1).namespaze = uVar1 + 1;
                *(Il2CppObject **)(pcVar4 + (long)(int)uVar1 * 8 + 0x20) = pIVar2;
                il2cpp_runtime_helper_022b4080(pcVar4 + (long)(int)uVar1 * 8 + 0x20);
                __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
                lVar9 = MethodInfo_Void_Add;
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_04,pIVar2,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
                lVar9 = MethodInfo_Void_Add;
              }
              MethodInfo_Void_Add = lVar9;
              if (__this_04 != (UnityEngine_Transform_c *)0x0) {
                pIVar2 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                puVar7 = (undefined1 *)((long)&(__this_04->_1).namespaze + 4);
                *(int *)puVar7 = *(int *)puVar7 + 1;
                pcVar4 = (__this_04->_1).name;
                if (pcVar4 != (char *)0x0) {
                  uVar1 = *(uint *)&(__this_04->_1).namespaze;
                  if (uVar1 < *(uint *)(pcVar4 + 0x18)) {
                    *(uint *)&(__this_04->_1).namespaze = uVar1 + 1;
                    *(Il2CppObject **)(pcVar4 + (long)(int)uVar1 * 8 + 0x20) = pIVar2;
                    il2cpp_runtime_helper_022b4080(pcVar4 + (long)(int)uVar1 * 8 + 0x20);
                    __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
                    lVar9 = MethodInfo_Void_Add;
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_04,pIVar2,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                    __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
                    lVar9 = MethodInfo_Void_Add;
                  }
                  MethodInfo_Void_Add = lVar9;
                  if (__this_04 != (UnityEngine_Transform_c *)0x0) {
                    pIVar2 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
                    puVar7 = (undefined1 *)((long)&(__this_04->_1).namespaze + 4);
                    *(int *)puVar7 = *(int *)puVar7 + 1;
                    pcVar4 = (__this_04->_1).name;
                    if (pcVar4 != (char *)0x0) {
                      uVar1 = *(uint *)&(__this_04->_1).namespaze;
                      if (uVar1 < *(uint *)(pcVar4 + 0x18)) {
                        *(uint *)&(__this_04->_1).namespaze = uVar1 + 1;
                        *(Il2CppObject **)(pcVar4 + (long)(int)uVar1 * 8 + 0x20) = pIVar2;
                        il2cpp_runtime_helper_022b4080(pcVar4 + (long)(int)uVar1 * 8 + 0x20);
                        __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
                        lVar9 = MethodInfo_Void_Add;
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)__this_04,pIVar2,
                                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70))
                        ;
                        __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
                        lVar9 = MethodInfo_Void_Add;
                      }
                      MethodInfo_Void_Add = lVar9;
                      if (__this_04 != (UnityEngine_Transform_c *)0x0) {
                        pIVar2 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
                        puVar7 = (undefined1 *)((long)&(__this_04->_1).namespaze + 4);
                        *(int *)puVar7 = *(int *)puVar7 + 1;
                        pcVar4 = (__this_04->_1).name;
                        if (pcVar4 != (char *)0x0) {
                          uVar1 = *(uint *)&(__this_04->_1).namespaze;
                          if (uVar1 < *(uint *)(pcVar4 + 0x18)) {
                            *(uint *)&(__this_04->_1).namespaze = uVar1 + 1;
                            *(Il2CppObject **)(pcVar4 + (long)(int)uVar1 * 8 + 0x20) = pIVar2;
                            il2cpp_runtime_helper_022b4080(pcVar4 + (long)(int)uVar1 * 8 + 0x20);
                            __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
                            lVar9 = MethodInfo_Void_Add;
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      ((System_Collections_Generic_List_object__o *)__this_04,pIVar2,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                            __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
                            lVar9 = MethodInfo_Void_Add;
                          }
                          MethodInfo_Void_Add = lVar9;
                          if (__this_04 != (UnityEngine_Transform_c *)0x0) {
                            pIVar2 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
                            puVar7 = (undefined1 *)((long)&(__this_04->_1).namespaze + 4);
                            *(int *)puVar7 = *(int *)puVar7 + 1;
                            pcVar4 = (__this_04->_1).name;
                            if (pcVar4 != (char *)0x0) {
                              uVar1 = *(uint *)&(__this_04->_1).namespaze;
                              if (uVar1 < *(uint *)(pcVar4 + 0x18)) {
                                *(uint *)&(__this_04->_1).namespaze = uVar1 + 1;
                                *(Il2CppObject **)(pcVar4 + (long)(int)uVar1 * 8 + 0x20) = pIVar2;
                                il2cpp_runtime_helper_022b4080(pcVar4 + (long)(int)uVar1 * 8 + 0x20);
                                __this_04 = (UnityEngine_Transform_c *)
                                            (__this->fields)._ignoreDefaultButtonSettings;
                                lVar9 = MethodInfo_Void_Add;
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          ((System_Collections_Generic_List_object__o *)__this_04,pIVar2,
                                           *(MethodInfo_362C220 **)
                                            (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                                __this_04 = (UnityEngine_Transform_c *)
                                            (__this->fields)._ignoreDefaultButtonSettings;
                                lVar9 = MethodInfo_Void_Add;
                              }
                              MethodInfo_Void_Add = lVar9;
                              if (__this_04 != (UnityEngine_Transform_c *)0x0) {
                                pIVar2 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
                                puVar7 = (undefined1 *)((long)&(__this_04->_1).namespaze + 4);
                                *(int *)puVar7 = *(int *)puVar7 + 1;
                                pcVar4 = (__this_04->_1).name;
                                if (pcVar4 != (char *)0x0) {
                                  uVar1 = *(uint *)&(__this_04->_1).namespaze;
                                  if (uVar1 < *(uint *)(pcVar4 + 0x18)) {
                                    *(uint *)&(__this_04->_1).namespaze = uVar1 + 1;
                                    *(Il2CppObject **)(pcVar4 + (long)(int)uVar1 * 8 + 0x20) = pIVar2;
                                    il2cpp_runtime_helper_022b4080(pcVar4 + (long)(int)uVar1 * 8 + 0x20);
                                    return;
                                  }
                                  System_Collections_Generic_List_object___AddWithResize
                                            ((System_Collections_Generic_List_object__o *)__this_04,pIVar2,
                                             *(MethodInfo_362C220 **)
                                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
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
  if (g_data_057ae6ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Skins");
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Top");
    il2cpp_runtime_helper_023445d0(&"Keybinds");
    il2cpp_runtime_helper_023445d0(&"Button");
    il2cpp_runtime_helper_023445d0(&"Sound");
    il2cpp_runtime_helper_023445d0(&"Ability");
    il2cpp_runtime_helper_023445d0(&"UI");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Graphics");
    g_data_057ae6ef = '\x01';
  }
  pvVar5 = (__this_04->_1).image;
  pSVar8 = (System_String_o *)
           (**(code **)((long)pvVar5 + 0x178))(__this_04,*(undefined8 *)((long)pvVar5 + 0x180));
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x1c,120.0,20.0,pSVar8,(MethodInfo *)0x0);
  parent_00 = TypeInfo_string;
  lVar9 = il2cpp_runtime_helper_022b2a40();
  if (lVar9 == 0) {
label_04447e96:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar9 + 0x18) != 0) {
    parent_00 = (UnityEngine_Transform_o *)(lVar9 + 0x20);
    *(undefined8 *)(lVar9 + 0x20) = "General";
    il2cpp_runtime_helper_022b4080();
    if (1 < *(uint *)(lVar9 + 0x18)) {
      parent_00 = (UnityEngine_Transform_o *)(lVar9 + 0x28);
      *(undefined8 *)(lVar9 + 0x28) = "Sound";
      il2cpp_runtime_helper_022b4080();
      if (2 < *(uint *)(lVar9 + 0x18)) {
        parent_00 = (UnityEngine_Transform_o *)(lVar9 + 0x30);
        *(undefined8 *)(lVar9 + 0x30) = "Graphics";
        il2cpp_runtime_helper_022b4080();
        if (3 < *(uint *)(lVar9 + 0x18)) {
          parent_00 = (UnityEngine_Transform_o *)(lVar9 + 0x38);
          *(undefined8 *)(lVar9 + 0x38) = "UI";
          il2cpp_runtime_helper_022b4080();
          if (4 < *(uint *)(lVar9 + 0x18)) {
            parent_00 = (UnityEngine_Transform_o *)(lVar9 + 0x40);
            *(undefined8 *)(lVar9 + 0x40) = "Keybinds";
            il2cpp_runtime_helper_022b4080();
            if (5 < *(uint *)(lVar9 + 0x18)) {
              parent_00 = (UnityEngine_Transform_o *)(lVar9 + 0x48);
              *(undefined8 *)(lVar9 + 0x48) = "Skins";
              il2cpp_runtime_helper_022b4080();
              if (6 < *(uint *)(lVar9 + 0x18)) {
                *(undefined8 *)(lVar9 + 0x50) = "Ability";
                il2cpp_runtime_helper_022b4080(lVar9 + 0x50);
                if (0 < *(int *)(lVar9 + 0x18)) {
                  uVar10 = 0;
                  do {
                    __this_02 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
                    parent_00 = __this_02;
                    System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
                    if (__this_02 == (UnityEngine_Transform_o *)0x0) goto label_04447e96;
                    parent_00 = __this_02 + 1;
                    __this_02[1].klass = __this_04;
                    il2cpp_runtime_helper_022b4080();
                    if (*(uint *)(lVar9 + 0x18) <= uVar10) goto label_04447e9b;
                    (__this_02->fields).m_CachedPtr = *(intptr_t *)(lVar9 + 0x20 + uVar10 * 8);
                    il2cpp_runtime_helper_022b4080(&__this_02->fields);
                    parent_00 = (__this_04->_1).interopData;
                    pSVar8 = (System_String_o *)(__this_04->_1).implementedInterfaces;
                    item = System_String__Concat_3ae5ba0
                                     ((System_String_o *)(__this_02->fields).m_CachedPtr,"Button",
                                      (MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar8 = UI_UIManager__GetLocale(pSVar8,"Top",item,"","",in_R9)
                    ;
                    onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                    UnityEngine_Events_UnityAction___ctor();
                    __this_03 = (UnityEngine_Transform_o *)
                                UI_ElementFactory__CreateCategoryButton
                                          (parent_00,__this_01,pSVar8,onClick,(MethodInfo *)0x0);
                    if (__this_03 == (UnityEngine_Transform_o *)0x0) goto label_04447e96;
                    __this_00 = (__this_04->_1).klass;
                    pIVar2 = (Il2CppObject *)(__this_02->fields).m_CachedPtr;
                    value = UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)__this_03,MethodInfo_Button_GetComponent_Button);
                    parent_00 = __this_03;
                    if (__this_00 == (Il2CppClass *)0x0) goto label_04447e96;
                    System_Collections_Generic_Dictionary_object__object___Add
                              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,pIVar2,
                               value,MethodInfo_Void_Add);
                    uVar10 = uVar10 + 1;
                  } while ((long)uVar10 < (long)*(int *)(lVar9 + 0x18));
                }
                UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this_04,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_04447e9b:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)parent_00,(MethodInfo *)0x0);
  return;
}


// UI.SettingsPopup$$SetupTopButtons
// il2cpp: void UI_SettingsPopup__SetupTopButtons (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x4447ac0

void UI_SettingsPopup__SetupTopButtons(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *key;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_01;
  long lVar2;
  UnityEngine_Transform_o *__this_02;
  System_String_o *item;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_Transform_o *__this_03;
  Il2CppObject *value;
  UnityEngine_Transform_o *parent;
  MethodInfo *in_R9;
  ulong uVar3;
  
  if (g_data_057ae6ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Skins");
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Top");
    il2cpp_runtime_helper_023445d0(&"Keybinds");
    il2cpp_runtime_helper_023445d0(&"Button");
    il2cpp_runtime_helper_023445d0(&"Sound");
    il2cpp_runtime_helper_023445d0(&"Ability");
    il2cpp_runtime_helper_023445d0(&"UI");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Graphics");
    g_data_057ae6ef = '\x01';
  }
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x1c,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent = TypeInfo_string;
  lVar2 = il2cpp_runtime_helper_022b2a40();
  if (lVar2 == 0) {
label_04447e96:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar2 + 0x18) != 0) {
    parent = (UnityEngine_Transform_o *)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x20) = "General";
    il2cpp_runtime_helper_022b4080();
    if (1 < *(uint *)(lVar2 + 0x18)) {
      parent = (UnityEngine_Transform_o *)(lVar2 + 0x28);
      *(undefined8 *)(lVar2 + 0x28) = "Sound";
      il2cpp_runtime_helper_022b4080();
      if (2 < *(uint *)(lVar2 + 0x18)) {
        parent = (UnityEngine_Transform_o *)(lVar2 + 0x30);
        *(undefined8 *)(lVar2 + 0x30) = "Graphics";
        il2cpp_runtime_helper_022b4080();
        if (3 < *(uint *)(lVar2 + 0x18)) {
          parent = (UnityEngine_Transform_o *)(lVar2 + 0x38);
          *(undefined8 *)(lVar2 + 0x38) = "UI";
          il2cpp_runtime_helper_022b4080();
          if (4 < *(uint *)(lVar2 + 0x18)) {
            parent = (UnityEngine_Transform_o *)(lVar2 + 0x40);
            *(undefined8 *)(lVar2 + 0x40) = "Keybinds";
            il2cpp_runtime_helper_022b4080();
            if (5 < *(uint *)(lVar2 + 0x18)) {
              parent = (UnityEngine_Transform_o *)(lVar2 + 0x48);
              *(undefined8 *)(lVar2 + 0x48) = "Skins";
              il2cpp_runtime_helper_022b4080();
              if (6 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x50) = "Ability";
                il2cpp_runtime_helper_022b4080(lVar2 + 0x50);
                if (0 < *(int *)(lVar2 + 0x18)) {
                  uVar3 = 0;
                  do {
                    __this_02 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
                    parent = __this_02;
                    System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
                    if (__this_02 == (UnityEngine_Transform_o *)0x0) goto label_04447e96;
                    parent = __this_02 + 1;
                    __this_02[1].klass = (UnityEngine_Transform_c *)__this;
                    il2cpp_runtime_helper_022b4080();
                    if (*(uint *)(lVar2 + 0x18) <= uVar3) goto label_04447e9b;
                    (__this_02->fields).m_CachedPtr = *(intptr_t *)(lVar2 + 0x20 + uVar3 * 8);
                    il2cpp_runtime_helper_022b4080(&__this_02->fields);
                    parent = (__this->fields).TopBar;
                    pSVar1 = (__this->fields).LocaleCategory;
                    item = System_String__Concat_3ae5ba0
                                     ((System_String_o *)(__this_02->fields).m_CachedPtr,"Button",
                                      (MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar1 = UI_UIManager__GetLocale(pSVar1,"Top",item,"","",in_R9)
                    ;
                    onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                    UnityEngine_Events_UnityAction___ctor();
                    __this_03 = (UnityEngine_Transform_o *)
                                UI_ElementFactory__CreateCategoryButton
                                          (parent,__this_01,pSVar1,onClick,(MethodInfo *)0x0);
                    if (__this_03 == (UnityEngine_Transform_o *)0x0) goto label_04447e96;
                    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                                (__this->fields)._topButtons;
                    key = (Il2CppObject *)(__this_02->fields).m_CachedPtr;
                    value = UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)__this_03,MethodInfo_Button_GetComponent_Button);
                    parent = __this_03;
                    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                    goto label_04447e96;
                    System_Collections_Generic_Dictionary_object__object___Add
                              (__this_00,key,value,MethodInfo_Void_Add);
                    uVar3 = uVar3 + 1;
                  } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x18));
                }
                UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_04447e9b:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)parent,(MethodInfo *)0x0);
  return;
}


// UI.SettingsPopup$$RegisterCategoryPanels
// il2cpp: void UI_SettingsPopup__RegisterCategoryPanels (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x4447eb0

void UI_SettingsPopup__RegisterCategoryPanels(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Type_o *pSVar2;
  System_RuntimeTypeHandle_o handle;
  
  if (cRam00000000057ae6f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeRef_SettingsAbilityPanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_SettingsGeneralPanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_SettingsGraphicsPanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_SettingsKeybindsPanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_SettingsSkinsPanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_SettingsSoundPanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_SettingsUIPanel);
    il2cpp_runtime_helper_023445d0(&"Skins");
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Keybinds");
    il2cpp_runtime_helper_023445d0(&"Sound");
    il2cpp_runtime_helper_023445d0(&"Ability");
    il2cpp_runtime_helper_023445d0(&"UI");
    il2cpp_runtime_helper_023445d0(&"Graphics");
    cRam00000000057ae6f0 = '\x01';
  }
  handle.fields.value = _DAT_0556e9a8;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,"General",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
    handle.fields.value = _DAT_0556e9e0;
    pSVar2 = System_Type__GetTypeFromHandle(_DAT_0556e9e0,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,"Sound",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes
      ;
      handle.fields.value = _DAT_0556e9b0;
      pSVar2 = System_Type__GetTypeFromHandle(_DAT_0556e9b0,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar1,"Graphics",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._categoryPanelTypes;
        handle.fields.value = _DAT_0556e9e8;
        pSVar2 = System_Type__GetTypeFromHandle(_DAT_0556e9e8,(MethodInfo *)0x0);
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar1,"UI",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._categoryPanelTypes;
          handle.fields.value = _DAT_0556e9c0;
          pSVar2 = System_Type__GetTypeFromHandle(_DAT_0556e9c0,(MethodInfo *)0x0);
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Add
                      (pSVar1,"Keybinds",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._categoryPanelTypes;
            handle.fields.value = _DAT_0556e9d8;
            pSVar2 = System_Type__GetTypeFromHandle(_DAT_0556e9d8,(MethodInfo *)0x0);
            if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___Add
                        (pSVar1,"Skins",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
              pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._categoryPanelTypes;
              handle.fields.value = _DAT_0556e9a0;
              pSVar2 = System_Type__GetTypeFromHandle(_DAT_0556e9a0,(MethodInfo *)0x0);
              if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary_object__object___TryInsert
                          (pSVar1,"Ability",(Il2CppObject *)pSVar2,'\x02',
                           (MethodInfo_3105A00 *)
                           MethodInfo_Void_Add->klass->rgctx_data->
                           _34_System_Collections_Generic_Dictionary_TKey__TValue__TryInsert);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)handle.fields.value,(MethodInfo *)0x0);
  return;
}


// UI.SettingsPopup$$SetupSettingsList
// il2cpp: void UI_SettingsPopup__SetupSettingsList (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x44476b0

void UI_SettingsPopup__SetupSettingsList(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  System_Object_array *pSVar3;
  char *pcVar4;
  void *pvVar5;
  Il2CppClass *__this_00;
  int32_t *piVar6;
  undefined1 *puVar7;
  System_String_o *pSVar8;
  UI_ElementStyle_o *__this_01;
  long lVar9;
  UnityEngine_Transform_o *__this_02;
  System_String_o *item;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_Transform_o *__this_03;
  Il2CppObject *value;
  UnityEngine_Transform_c *__this_04;
  UnityEngine_Transform_o *parent;
  MethodInfo *in_R9;
  ulong uVar10;
  
  if (g_data_057ae6f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae6f1 = '\x01';
  }
  lVar9 = MethodInfo_Void_Add;
  __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
  if (__this_04 != (UnityEngine_Transform_c *)0x0) {
    pIVar2 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
    piVar6 = (int32_t *)((long)&(__this_04->_1).namespaze + 4);
    *piVar6 = *piVar6 + 1;
    pSVar3 = ((System_Collections_Generic_List_object__Fields *)&(__this_04->_1).name)->_items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = *(uint *)&(__this_04->_1).namespaze;
      if (uVar1 < (uint)pSVar3->max_length) {
        *(uint *)&(__this_04->_1).namespaze = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = pIVar2;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar1);
        __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
        lVar9 = MethodInfo_Void_Add;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_04,pIVar2,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
        lVar9 = MethodInfo_Void_Add;
      }
      MethodInfo_Void_Add = lVar9;
      if (__this_04 != (UnityEngine_Transform_c *)0x0) {
        pIVar2 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        puVar7 = (undefined1 *)((long)&(__this_04->_1).namespaze + 4);
        *(int *)puVar7 = *(int *)puVar7 + 1;
        pcVar4 = (__this_04->_1).name;
        if (pcVar4 != (char *)0x0) {
          uVar1 = *(uint *)&(__this_04->_1).namespaze;
          if (uVar1 < *(uint *)(pcVar4 + 0x18)) {
            *(uint *)&(__this_04->_1).namespaze = uVar1 + 1;
            *(Il2CppObject **)(pcVar4 + (long)(int)uVar1 * 8 + 0x20) = pIVar2;
            il2cpp_runtime_helper_022b4080(pcVar4 + (long)(int)uVar1 * 8 + 0x20);
            __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
            lVar9 = MethodInfo_Void_Add;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_04,pIVar2,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
            lVar9 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar9;
          if (__this_04 != (UnityEngine_Transform_c *)0x0) {
            pIVar2 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
            puVar7 = (undefined1 *)((long)&(__this_04->_1).namespaze + 4);
            *(int *)puVar7 = *(int *)puVar7 + 1;
            pcVar4 = (__this_04->_1).name;
            if (pcVar4 != (char *)0x0) {
              uVar1 = *(uint *)&(__this_04->_1).namespaze;
              if (uVar1 < *(uint *)(pcVar4 + 0x18)) {
                *(uint *)&(__this_04->_1).namespaze = uVar1 + 1;
                *(Il2CppObject **)(pcVar4 + (long)(int)uVar1 * 8 + 0x20) = pIVar2;
                il2cpp_runtime_helper_022b4080(pcVar4 + (long)(int)uVar1 * 8 + 0x20);
                __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
                lVar9 = MethodInfo_Void_Add;
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_04,pIVar2,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
                lVar9 = MethodInfo_Void_Add;
              }
              MethodInfo_Void_Add = lVar9;
              if (__this_04 != (UnityEngine_Transform_c *)0x0) {
                pIVar2 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                puVar7 = (undefined1 *)((long)&(__this_04->_1).namespaze + 4);
                *(int *)puVar7 = *(int *)puVar7 + 1;
                pcVar4 = (__this_04->_1).name;
                if (pcVar4 != (char *)0x0) {
                  uVar1 = *(uint *)&(__this_04->_1).namespaze;
                  if (uVar1 < *(uint *)(pcVar4 + 0x18)) {
                    *(uint *)&(__this_04->_1).namespaze = uVar1 + 1;
                    *(Il2CppObject **)(pcVar4 + (long)(int)uVar1 * 8 + 0x20) = pIVar2;
                    il2cpp_runtime_helper_022b4080(pcVar4 + (long)(int)uVar1 * 8 + 0x20);
                    __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
                    lVar9 = MethodInfo_Void_Add;
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_04,pIVar2,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                    __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
                    lVar9 = MethodInfo_Void_Add;
                  }
                  MethodInfo_Void_Add = lVar9;
                  if (__this_04 != (UnityEngine_Transform_c *)0x0) {
                    pIVar2 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
                    puVar7 = (undefined1 *)((long)&(__this_04->_1).namespaze + 4);
                    *(int *)puVar7 = *(int *)puVar7 + 1;
                    pcVar4 = (__this_04->_1).name;
                    if (pcVar4 != (char *)0x0) {
                      uVar1 = *(uint *)&(__this_04->_1).namespaze;
                      if (uVar1 < *(uint *)(pcVar4 + 0x18)) {
                        *(uint *)&(__this_04->_1).namespaze = uVar1 + 1;
                        *(Il2CppObject **)(pcVar4 + (long)(int)uVar1 * 8 + 0x20) = pIVar2;
                        il2cpp_runtime_helper_022b4080(pcVar4 + (long)(int)uVar1 * 8 + 0x20);
                        __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
                        lVar9 = MethodInfo_Void_Add;
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)__this_04,pIVar2,
                                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70))
                        ;
                        __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
                        lVar9 = MethodInfo_Void_Add;
                      }
                      MethodInfo_Void_Add = lVar9;
                      if (__this_04 != (UnityEngine_Transform_c *)0x0) {
                        pIVar2 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
                        puVar7 = (undefined1 *)((long)&(__this_04->_1).namespaze + 4);
                        *(int *)puVar7 = *(int *)puVar7 + 1;
                        pcVar4 = (__this_04->_1).name;
                        if (pcVar4 != (char *)0x0) {
                          uVar1 = *(uint *)&(__this_04->_1).namespaze;
                          if (uVar1 < *(uint *)(pcVar4 + 0x18)) {
                            *(uint *)&(__this_04->_1).namespaze = uVar1 + 1;
                            *(Il2CppObject **)(pcVar4 + (long)(int)uVar1 * 8 + 0x20) = pIVar2;
                            il2cpp_runtime_helper_022b4080(pcVar4 + (long)(int)uVar1 * 8 + 0x20);
                            __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
                            lVar9 = MethodInfo_Void_Add;
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      ((System_Collections_Generic_List_object__o *)__this_04,pIVar2,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                            __this_04 = (UnityEngine_Transform_c *)(__this->fields)._saveableSettings;
                            lVar9 = MethodInfo_Void_Add;
                          }
                          MethodInfo_Void_Add = lVar9;
                          if (__this_04 != (UnityEngine_Transform_c *)0x0) {
                            pIVar2 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
                            puVar7 = (undefined1 *)((long)&(__this_04->_1).namespaze + 4);
                            *(int *)puVar7 = *(int *)puVar7 + 1;
                            pcVar4 = (__this_04->_1).name;
                            if (pcVar4 != (char *)0x0) {
                              uVar1 = *(uint *)&(__this_04->_1).namespaze;
                              if (uVar1 < *(uint *)(pcVar4 + 0x18)) {
                                *(uint *)&(__this_04->_1).namespaze = uVar1 + 1;
                                *(Il2CppObject **)(pcVar4 + (long)(int)uVar1 * 8 + 0x20) = pIVar2;
                                il2cpp_runtime_helper_022b4080(pcVar4 + (long)(int)uVar1 * 8 + 0x20);
                                __this_04 = (UnityEngine_Transform_c *)
                                            (__this->fields)._ignoreDefaultButtonSettings;
                                lVar9 = MethodInfo_Void_Add;
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          ((System_Collections_Generic_List_object__o *)__this_04,pIVar2,
                                           *(MethodInfo_362C220 **)
                                            (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                                __this_04 = (UnityEngine_Transform_c *)
                                            (__this->fields)._ignoreDefaultButtonSettings;
                                lVar9 = MethodInfo_Void_Add;
                              }
                              MethodInfo_Void_Add = lVar9;
                              if (__this_04 != (UnityEngine_Transform_c *)0x0) {
                                pIVar2 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
                                puVar7 = (undefined1 *)((long)&(__this_04->_1).namespaze + 4);
                                *(int *)puVar7 = *(int *)puVar7 + 1;
                                pcVar4 = (__this_04->_1).name;
                                if (pcVar4 != (char *)0x0) {
                                  uVar1 = *(uint *)&(__this_04->_1).namespaze;
                                  if (uVar1 < *(uint *)(pcVar4 + 0x18)) {
                                    *(uint *)&(__this_04->_1).namespaze = uVar1 + 1;
                                    *(Il2CppObject **)(pcVar4 + (long)(int)uVar1 * 8 + 0x20) = pIVar2;
                                    il2cpp_runtime_helper_022b4080(pcVar4 + (long)(int)uVar1 * 8 + 0x20);
                                    return;
                                  }
                                  System_Collections_Generic_List_object___AddWithResize
                                            ((System_Collections_Generic_List_object__o *)__this_04,pIVar2,
                                             *(MethodInfo_362C220 **)
                                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
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
  if (g_data_057ae6ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Skins");
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Top");
    il2cpp_runtime_helper_023445d0(&"Keybinds");
    il2cpp_runtime_helper_023445d0(&"Button");
    il2cpp_runtime_helper_023445d0(&"Sound");
    il2cpp_runtime_helper_023445d0(&"Ability");
    il2cpp_runtime_helper_023445d0(&"UI");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Graphics");
    g_data_057ae6ef = '\x01';
  }
  pvVar5 = (__this_04->_1).image;
  pSVar8 = (System_String_o *)
           (**(code **)((long)pvVar5 + 0x178))(__this_04,*(undefined8 *)((long)pvVar5 + 0x180));
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x1c,120.0,20.0,pSVar8,(MethodInfo *)0x0);
  parent = TypeInfo_string;
  lVar9 = il2cpp_runtime_helper_022b2a40();
  if (lVar9 == 0) {
label_04447e96:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar9 + 0x18) != 0) {
    parent = (UnityEngine_Transform_o *)(lVar9 + 0x20);
    *(undefined8 *)(lVar9 + 0x20) = "General";
    il2cpp_runtime_helper_022b4080();
    if (1 < *(uint *)(lVar9 + 0x18)) {
      parent = (UnityEngine_Transform_o *)(lVar9 + 0x28);
      *(undefined8 *)(lVar9 + 0x28) = "Sound";
      il2cpp_runtime_helper_022b4080();
      if (2 < *(uint *)(lVar9 + 0x18)) {
        parent = (UnityEngine_Transform_o *)(lVar9 + 0x30);
        *(undefined8 *)(lVar9 + 0x30) = "Graphics";
        il2cpp_runtime_helper_022b4080();
        if (3 < *(uint *)(lVar9 + 0x18)) {
          parent = (UnityEngine_Transform_o *)(lVar9 + 0x38);
          *(undefined8 *)(lVar9 + 0x38) = "UI";
          il2cpp_runtime_helper_022b4080();
          if (4 < *(uint *)(lVar9 + 0x18)) {
            parent = (UnityEngine_Transform_o *)(lVar9 + 0x40);
            *(undefined8 *)(lVar9 + 0x40) = "Keybinds";
            il2cpp_runtime_helper_022b4080();
            if (5 < *(uint *)(lVar9 + 0x18)) {
              parent = (UnityEngine_Transform_o *)(lVar9 + 0x48);
              *(undefined8 *)(lVar9 + 0x48) = "Skins";
              il2cpp_runtime_helper_022b4080();
              if (6 < *(uint *)(lVar9 + 0x18)) {
                *(undefined8 *)(lVar9 + 0x50) = "Ability";
                il2cpp_runtime_helper_022b4080(lVar9 + 0x50);
                if (0 < *(int *)(lVar9 + 0x18)) {
                  uVar10 = 0;
                  do {
                    __this_02 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
                    parent = __this_02;
                    System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
                    if (__this_02 == (UnityEngine_Transform_o *)0x0) goto label_04447e96;
                    parent = __this_02 + 1;
                    __this_02[1].klass = __this_04;
                    il2cpp_runtime_helper_022b4080();
                    if (*(uint *)(lVar9 + 0x18) <= uVar10) goto label_04447e9b;
                    (__this_02->fields).m_CachedPtr = *(intptr_t *)(lVar9 + 0x20 + uVar10 * 8);
                    il2cpp_runtime_helper_022b4080(&__this_02->fields);
                    parent = (__this_04->_1).interopData;
                    pSVar8 = (System_String_o *)(__this_04->_1).implementedInterfaces;
                    item = System_String__Concat_3ae5ba0
                                     ((System_String_o *)(__this_02->fields).m_CachedPtr,"Button",
                                      (MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar8 = UI_UIManager__GetLocale(pSVar8,"Top",item,"","",in_R9)
                    ;
                    onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                    UnityEngine_Events_UnityAction___ctor();
                    __this_03 = (UnityEngine_Transform_o *)
                                UI_ElementFactory__CreateCategoryButton
                                          (parent,__this_01,pSVar8,onClick,(MethodInfo *)0x0);
                    if (__this_03 == (UnityEngine_Transform_o *)0x0) goto label_04447e96;
                    __this_00 = (__this_04->_1).klass;
                    pIVar2 = (Il2CppObject *)(__this_02->fields).m_CachedPtr;
                    value = UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)__this_03,MethodInfo_Button_GetComponent_Button);
                    parent = __this_03;
                    if (__this_00 == (Il2CppClass *)0x0) goto label_04447e96;
                    System_Collections_Generic_Dictionary_object__object___Add
                              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,pIVar2,
                               value,MethodInfo_Void_Add);
                    uVar10 = uVar10 + 1;
                  } while ((long)uVar10 < (long)*(int *)(lVar9 + 0x18));
                }
                UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this_04,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_04447e9b:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)parent,(MethodInfo *)0x0);
  return;
}


// UI.SettingsPopup$$SetupBottomButtons
// il2cpp: void UI_SettingsPopup__SetupBottomButtons (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x4447360

void UI_SettingsPopup__SetupBottomButtons(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppObject *pIVar3;
  System_Object_array *pSVar4;
  char *pcVar5;
  void *pvVar6;
  Il2CppClass *__this_00;
  undefined1 *puVar7;
  int32_t fontSize;
  System_String_o *pSVar8;
  UI_ElementStyle_o *pUVar9;
  long lVar10;
  UnityEngine_Events_UnityAction_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  System_String_o *item;
  UnityEngine_Transform_o *__this_01;
  Il2CppObject *value;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_Transform_c *__this_02;
  MethodInfo *in_R9;
  ulong uVar14;
  
  if (g_data_057ae6f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Load");
    il2cpp_runtime_helper_023445d0(&"Default");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae6f2 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar8 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar9 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar9,fontSize,120.0,20.0,pSVar8,(MethodInfo *)0x0);
  pUVar13 = TypeInfo_string;
  lVar10 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
  if (lVar10 != 0) {
    if (*(int *)(lVar10 + 0x18) != 0) {
      pUVar13 = (UnityEngine_Transform_o *)(lVar10 + 0x20);
      *(undefined8 *)(lVar10 + 0x20) = "Default";
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar10 + 0x18)) {
        pUVar13 = (UnityEngine_Transform_o *)(lVar10 + 0x28);
        *(undefined8 *)(lVar10 + 0x28) = "Load";
        il2cpp_runtime_helper_022b4080();
        if (2 < *(uint *)(lVar10 + 0x18)) {
          pUVar13 = (UnityEngine_Transform_o *)(lVar10 + 0x30);
          *(undefined8 *)(lVar10 + 0x30) = "Save";
          il2cpp_runtime_helper_022b4080();
          if (3 < *(uint *)(lVar10 + 0x18)) {
            *(undefined8 *)(lVar10 + 0x38) = "Back";
            il2cpp_runtime_helper_022b4080(lVar10 + 0x38);
            if (0 < *(int *)(lVar10 + 0x18)) {
              uVar14 = 0;
              do {
                pUVar12 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
                pUVar13 = pUVar12;
                System_Object___ctor((Il2CppObject *)pUVar12,(MethodInfo *)0x0);
                if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_044476a6;
                pUVar13 = pUVar12 + 1;
                pUVar12[1].klass = (UnityEngine_Transform_c *)__this;
                il2cpp_runtime_helper_022b4080(pUVar13,__this);
                if (*(uint *)(lVar10 + 0x18) <= uVar14) goto label_044476a1;
                (pUVar12->fields).m_CachedPtr = *(intptr_t *)(lVar10 + 0x20 + uVar14 * 8);
                il2cpp_runtime_helper_022b4080(&pUVar12->fields);
                pUVar13 = (__this->fields).BottomBar;
                pSVar8 = (System_String_o *)(pUVar12->fields).m_CachedPtr;
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                if (g_data_057ae727 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
                  il2cpp_runtime_helper_023445d0(&"Common");
                  il2cpp_runtime_helper_023445d0(&"");
                  g_data_057ae727 = '\x01';
                }
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar8 = UI_UIManager__GetLocale
                                   ("Common",pSVar8,"","","",in_R9);
                pUVar11 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                UI_ElementFactory__CreateTextButton(pUVar13,pUVar9,pSVar8,0.0,pUVar11,(MethodInfo *)0x0);
                uVar14 = uVar14 + 1;
              } while ((long)uVar14 < (long)*(int *)(lVar10 + 0x18));
            }
            return;
          }
        }
      }
    }
label_044476a1:
    il2cpp_runtime_helper_022b2ca0();
  }
label_044476a6:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae6f1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae6f1 = '\x01';
  }
  lVar10 = MethodInfo_Void_Add;
  __this_02 = (UnityEngine_Transform_c *)pUVar13[7].fields.m_CachedPtr;
  if (__this_02 != (UnityEngine_Transform_c *)0x0) {
    pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
    piVar1 = (int32_t *)((long)&(__this_02->_1).namespaze + 4);
    *piVar1 = *piVar1 + 1;
    pSVar4 = ((System_Collections_Generic_List_object__Fields *)&(__this_02->_1).name)->_items;
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar2 = *(uint *)&(__this_02->_1).namespaze;
      if (uVar2 < (uint)pSVar4->max_length) {
        *(uint *)&(__this_02->_1).namespaze = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = pIVar3;
        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2);
        __this_02 = (UnityEngine_Transform_c *)pUVar13[7].fields.m_CachedPtr;
        lVar10 = MethodInfo_Void_Add;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_02,pIVar3,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        __this_02 = (UnityEngine_Transform_c *)pUVar13[7].fields.m_CachedPtr;
        lVar10 = MethodInfo_Void_Add;
      }
      MethodInfo_Void_Add = lVar10;
      if (__this_02 != (UnityEngine_Transform_c *)0x0) {
        pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        puVar7 = (undefined1 *)((long)&(__this_02->_1).namespaze + 4);
        *(int *)puVar7 = *(int *)puVar7 + 1;
        pcVar5 = (__this_02->_1).name;
        if (pcVar5 != (char *)0x0) {
          uVar2 = *(uint *)&(__this_02->_1).namespaze;
          if (uVar2 < *(uint *)(pcVar5 + 0x18)) {
            *(uint *)&(__this_02->_1).namespaze = uVar2 + 1;
            *(Il2CppObject **)(pcVar5 + (long)(int)uVar2 * 8 + 0x20) = pIVar3;
            il2cpp_runtime_helper_022b4080(pcVar5 + (long)(int)uVar2 * 8 + 0x20);
            __this_02 = (UnityEngine_Transform_c *)pUVar13[7].fields.m_CachedPtr;
            lVar10 = MethodInfo_Void_Add;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_02,pIVar3,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            __this_02 = (UnityEngine_Transform_c *)pUVar13[7].fields.m_CachedPtr;
            lVar10 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar10;
          if (__this_02 != (UnityEngine_Transform_c *)0x0) {
            pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
            puVar7 = (undefined1 *)((long)&(__this_02->_1).namespaze + 4);
            *(int *)puVar7 = *(int *)puVar7 + 1;
            pcVar5 = (__this_02->_1).name;
            if (pcVar5 != (char *)0x0) {
              uVar2 = *(uint *)&(__this_02->_1).namespaze;
              if (uVar2 < *(uint *)(pcVar5 + 0x18)) {
                *(uint *)&(__this_02->_1).namespaze = uVar2 + 1;
                *(Il2CppObject **)(pcVar5 + (long)(int)uVar2 * 8 + 0x20) = pIVar3;
                il2cpp_runtime_helper_022b4080(pcVar5 + (long)(int)uVar2 * 8 + 0x20);
                __this_02 = (UnityEngine_Transform_c *)pUVar13[7].fields.m_CachedPtr;
                lVar10 = MethodInfo_Void_Add;
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_02,pIVar3,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                __this_02 = (UnityEngine_Transform_c *)pUVar13[7].fields.m_CachedPtr;
                lVar10 = MethodInfo_Void_Add;
              }
              MethodInfo_Void_Add = lVar10;
              if (__this_02 != (UnityEngine_Transform_c *)0x0) {
                pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                puVar7 = (undefined1 *)((long)&(__this_02->_1).namespaze + 4);
                *(int *)puVar7 = *(int *)puVar7 + 1;
                pcVar5 = (__this_02->_1).name;
                if (pcVar5 != (char *)0x0) {
                  uVar2 = *(uint *)&(__this_02->_1).namespaze;
                  if (uVar2 < *(uint *)(pcVar5 + 0x18)) {
                    *(uint *)&(__this_02->_1).namespaze = uVar2 + 1;
                    *(Il2CppObject **)(pcVar5 + (long)(int)uVar2 * 8 + 0x20) = pIVar3;
                    il2cpp_runtime_helper_022b4080(pcVar5 + (long)(int)uVar2 * 8 + 0x20);
                    __this_02 = (UnityEngine_Transform_c *)pUVar13[7].fields.m_CachedPtr;
                    lVar10 = MethodInfo_Void_Add;
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_02,pIVar3,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                    __this_02 = (UnityEngine_Transform_c *)pUVar13[7].fields.m_CachedPtr;
                    lVar10 = MethodInfo_Void_Add;
                  }
                  MethodInfo_Void_Add = lVar10;
                  if (__this_02 != (UnityEngine_Transform_c *)0x0) {
                    pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
                    puVar7 = (undefined1 *)((long)&(__this_02->_1).namespaze + 4);
                    *(int *)puVar7 = *(int *)puVar7 + 1;
                    pcVar5 = (__this_02->_1).name;
                    if (pcVar5 != (char *)0x0) {
                      uVar2 = *(uint *)&(__this_02->_1).namespaze;
                      if (uVar2 < *(uint *)(pcVar5 + 0x18)) {
                        *(uint *)&(__this_02->_1).namespaze = uVar2 + 1;
                        *(Il2CppObject **)(pcVar5 + (long)(int)uVar2 * 8 + 0x20) = pIVar3;
                        il2cpp_runtime_helper_022b4080(pcVar5 + (long)(int)uVar2 * 8 + 0x20);
                        __this_02 = (UnityEngine_Transform_c *)pUVar13[7].fields.m_CachedPtr;
                        lVar10 = MethodInfo_Void_Add;
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)__this_02,pIVar3,
                                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70)
                                  );
                        __this_02 = (UnityEngine_Transform_c *)pUVar13[7].fields.m_CachedPtr;
                        lVar10 = MethodInfo_Void_Add;
                      }
                      MethodInfo_Void_Add = lVar10;
                      if (__this_02 != (UnityEngine_Transform_c *)0x0) {
                        pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
                        puVar7 = (undefined1 *)((long)&(__this_02->_1).namespaze + 4);
                        *(int *)puVar7 = *(int *)puVar7 + 1;
                        pcVar5 = (__this_02->_1).name;
                        if (pcVar5 != (char *)0x0) {
                          uVar2 = *(uint *)&(__this_02->_1).namespaze;
                          if (uVar2 < *(uint *)(pcVar5 + 0x18)) {
                            *(uint *)&(__this_02->_1).namespaze = uVar2 + 1;
                            *(Il2CppObject **)(pcVar5 + (long)(int)uVar2 * 8 + 0x20) = pIVar3;
                            il2cpp_runtime_helper_022b4080(pcVar5 + (long)(int)uVar2 * 8 + 0x20);
                            __this_02 = (UnityEngine_Transform_c *)pUVar13[7].fields.m_CachedPtr;
                            lVar10 = MethodInfo_Void_Add;
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      ((System_Collections_Generic_List_object__o *)__this_02,pIVar3,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                            __this_02 = (UnityEngine_Transform_c *)pUVar13[7].fields.m_CachedPtr;
                            lVar10 = MethodInfo_Void_Add;
                          }
                          MethodInfo_Void_Add = lVar10;
                          if (__this_02 != (UnityEngine_Transform_c *)0x0) {
                            pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
                            puVar7 = (undefined1 *)((long)&(__this_02->_1).namespaze + 4);
                            *(int *)puVar7 = *(int *)puVar7 + 1;
                            pcVar5 = (__this_02->_1).name;
                            if (pcVar5 != (char *)0x0) {
                              uVar2 = *(uint *)&(__this_02->_1).namespaze;
                              if (uVar2 < *(uint *)(pcVar5 + 0x18)) {
                                *(uint *)&(__this_02->_1).namespaze = uVar2 + 1;
                                *(Il2CppObject **)(pcVar5 + (long)(int)uVar2 * 8 + 0x20) = pIVar3;
                                il2cpp_runtime_helper_022b4080(pcVar5 + (long)(int)uVar2 * 8 + 0x20);
                                __this_02 = pUVar13[7].monitor;
                                lVar10 = MethodInfo_Void_Add;
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          ((System_Collections_Generic_List_object__o *)__this_02,pIVar3,
                                           *(MethodInfo_362C220 **)
                                            (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                                __this_02 = pUVar13[7].monitor;
                                lVar10 = MethodInfo_Void_Add;
                              }
                              MethodInfo_Void_Add = lVar10;
                              if (__this_02 != (UnityEngine_Transform_c *)0x0) {
                                pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
                                puVar7 = (undefined1 *)((long)&(__this_02->_1).namespaze + 4);
                                *(int *)puVar7 = *(int *)puVar7 + 1;
                                pcVar5 = (__this_02->_1).name;
                                if (pcVar5 != (char *)0x0) {
                                  uVar2 = *(uint *)&(__this_02->_1).namespaze;
                                  if (*(uint *)(pcVar5 + 0x18) <= uVar2) {
                                    System_Collections_Generic_List_object___AddWithResize
                                              ((System_Collections_Generic_List_object__o *)__this_02,pIVar3,
                                               *(MethodInfo_362C220 **)
                                                (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                                    return;
                                  }
                                  *(uint *)&(__this_02->_1).namespaze = uVar2 + 1;
                                  *(Il2CppObject **)(pcVar5 + (long)(int)uVar2 * 8 + 0x20) = pIVar3;
                                  il2cpp_runtime_helper_022b4080(pcVar5 + (long)(int)uVar2 * 8 + 0x20);
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
  if (g_data_057ae6ef == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Skins");
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Top");
    il2cpp_runtime_helper_023445d0(&"Keybinds");
    il2cpp_runtime_helper_023445d0(&"Button");
    il2cpp_runtime_helper_023445d0(&"Sound");
    il2cpp_runtime_helper_023445d0(&"Ability");
    il2cpp_runtime_helper_023445d0(&"UI");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Graphics");
    g_data_057ae6ef = '\x01';
  }
  pvVar6 = (__this_02->_1).image;
  pSVar8 = (System_String_o *)
           (**(code **)((long)pvVar6 + 0x178))(__this_02,*(undefined8 *)((long)pvVar6 + 0x180));
  pUVar9 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar9,0x1c,120.0,20.0,pSVar8,(MethodInfo *)0x0);
  pUVar13 = TypeInfo_string;
  lVar10 = il2cpp_runtime_helper_022b2a40();
  if (lVar10 == 0) {
label_04447e96:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar10 + 0x18) != 0) {
    pUVar13 = (UnityEngine_Transform_o *)(lVar10 + 0x20);
    *(undefined8 *)(lVar10 + 0x20) = "General";
    il2cpp_runtime_helper_022b4080();
    if (1 < *(uint *)(lVar10 + 0x18)) {
      pUVar13 = (UnityEngine_Transform_o *)(lVar10 + 0x28);
      *(undefined8 *)(lVar10 + 0x28) = "Sound";
      il2cpp_runtime_helper_022b4080();
      if (2 < *(uint *)(lVar10 + 0x18)) {
        pUVar13 = (UnityEngine_Transform_o *)(lVar10 + 0x30);
        *(undefined8 *)(lVar10 + 0x30) = "Graphics";
        il2cpp_runtime_helper_022b4080();
        if (3 < *(uint *)(lVar10 + 0x18)) {
          pUVar13 = (UnityEngine_Transform_o *)(lVar10 + 0x38);
          *(undefined8 *)(lVar10 + 0x38) = "UI";
          il2cpp_runtime_helper_022b4080();
          if (4 < *(uint *)(lVar10 + 0x18)) {
            pUVar13 = (UnityEngine_Transform_o *)(lVar10 + 0x40);
            *(undefined8 *)(lVar10 + 0x40) = "Keybinds";
            il2cpp_runtime_helper_022b4080();
            if (5 < *(uint *)(lVar10 + 0x18)) {
              pUVar13 = (UnityEngine_Transform_o *)(lVar10 + 0x48);
              *(undefined8 *)(lVar10 + 0x48) = "Skins";
              il2cpp_runtime_helper_022b4080();
              if (6 < *(uint *)(lVar10 + 0x18)) {
                *(undefined8 *)(lVar10 + 0x50) = "Ability";
                il2cpp_runtime_helper_022b4080(lVar10 + 0x50);
                if (0 < *(int *)(lVar10 + 0x18)) {
                  uVar14 = 0;
                  do {
                    pUVar12 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
                    pUVar13 = pUVar12;
                    System_Object___ctor((Il2CppObject *)pUVar12,(MethodInfo *)0x0);
                    if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_04447e96;
                    pUVar13 = pUVar12 + 1;
                    pUVar12[1].klass = __this_02;
                    il2cpp_runtime_helper_022b4080();
                    if (*(uint *)(lVar10 + 0x18) <= uVar14) goto label_04447e9b;
                    (pUVar12->fields).m_CachedPtr = *(intptr_t *)(lVar10 + 0x20 + uVar14 * 8);
                    il2cpp_runtime_helper_022b4080(&pUVar12->fields);
                    pUVar13 = (__this_02->_1).interopData;
                    pSVar8 = (System_String_o *)(__this_02->_1).implementedInterfaces;
                    item = System_String__Concat_3ae5ba0
                                     ((System_String_o *)(pUVar12->fields).m_CachedPtr,"Button",
                                      (MethodInfo *)0x0);
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar8 = UI_UIManager__GetLocale(pSVar8,"Top",item,"","",in_R9)
                    ;
                    pUVar11 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                    UnityEngine_Events_UnityAction___ctor();
                    __this_01 = (UnityEngine_Transform_o *)
                                UI_ElementFactory__CreateCategoryButton
                                          (pUVar13,pUVar9,pSVar8,pUVar11,(MethodInfo *)0x0);
                    if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_04447e96;
                    __this_00 = (__this_02->_1).klass;
                    pIVar3 = (Il2CppObject *)(pUVar12->fields).m_CachedPtr;
                    value = UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)__this_01,MethodInfo_Button_GetComponent_Button);
                    pUVar13 = __this_01;
                    if (__this_00 == (Il2CppClass *)0x0) goto label_04447e96;
                    System_Collections_Generic_Dictionary_object__object___Add
                              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,pIVar3,
                               value,MethodInfo_Void_Add);
                    uVar14 = uVar14 + 1;
                  } while ((long)uVar14 < (long)*(int *)(lVar10 + 0x18));
                }
                UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this_02,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_04447e9b:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pUVar13,(MethodInfo *)0x0);
  return;
}


// UI.SettingsPopup$$OnConfirmSetDefault
// il2cpp: void UI_SettingsPopup__OnConfirmSetDefault (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x4448140

void UI_SettingsPopup__OnConfirmSetDefault(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  System_Collections_Generic_List_BaseSettingsContainer__o *__this_01;
  UI_MessagePopup_o *__this_02;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  Il2CppType *pIVar7;
  Il2CppType *item;
  undefined1 local_40 [16];
  Il2CppType *local_30;
  
  if (g_data_057ae6f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SaveableSettingsContainer_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Settings reset to default.");
    g_data_057ae6f3 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar7 = (Il2CppType *)0x0;
  __this_00 = (__this->fields)._saveableSettings;
  if (__this_00 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
    pSVar5 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
label_04448210:
    item = local_30;
    __this_03.fields._8_8_ = pSVar6;
    __this_03.fields._list = pSVar5;
    __this_03.fields._current = (Il2CppObject *)item;
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
    if ((char)bVar2 == '\0') {
      __this_04.fields._8_8_ = pSVar6;
      __this_04.fields._list = pSVar5;
      __this_04.fields._current = (Il2CppObject *)item;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      goto label_04448288;
    }
    __this_01 = (__this->fields)._ignoreDefaultButtonSettings;
    if (__this_01 != (System_Collections_Generic_List_BaseSettingsContainer__o *)0x0) goto code_r0x04448230;
    il2cpp_runtime_helper_022b2c90();
    pIVar7 = item;
    goto label_044482ef;
  }
label_044482f4:
  do {
    auVar4 = il2cpp_runtime_helper_022b2c90();
    if (auVar4._8_4_ != 1) {
label_04448366:
      __this_06.fields._8_8_ = pSVar6;
      __this_06.fields._list = pSVar5;
      __this_06.fields._current = (Il2CppObject *)pIVar7;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      _Unwind_Resume(auVar4._0_8_);
    }
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pSVar6;
    __this_05.fields._list = pSVar5;
    __this_05.fields._current = (Il2CppObject *)pIVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    item = pIVar7;
    if (lVar1 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar1);
      goto label_04448366;
    }
label_04448288:
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
    pIVar7 = item;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pIVar7 = item;
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if ((lVar1 != 0) &&
       (__this_02 = *(UI_MessagePopup_o **)(lVar1 + 0x30), __this_02 != (UI_MessagePopup_o *)0x0)) {
      UI_MessagePopup__Show(__this_02,"Settings reset to default.",1,(MethodInfo *)0x0);
      return;
    }
  } while( true );
code_r0x04448230:
  pIVar7 = item;
  bVar2 = System_Collections_Generic_List_object___Contains
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,MethodInfo_Boolean_Contains)
  ;
  local_30 = pIVar7;
  if ((char)bVar2 == '\0') {
    if (item == (Il2CppType *)0x0) {
label_044482ef:
      il2cpp_runtime_helper_022b2c90();
      goto label_044482f4;
    }
    (*item->data->vtable[4].methodPtr)(item,item->data->vtable[4].method);
    (*item->data->vtable[0x10].methodPtr)(item,item->data->vtable[0x10].method);
    local_30 = pIVar7;
  }
  goto label_04448210;
}


// UI.SettingsPopup$$OnBottomBarButtonClick
// il2cpp: void UI_SettingsPopup__OnBottomBarButtonClick (UI_SettingsPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x44483a0

void UI_SettingsPopup__OnBottomBarButtonClick
               (UI_SettingsPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_List_SaveableSettingsContainer__o *pSVar1;
  UI_MessagePopup_o *__this_00;
  UI_ConfirmPopup_o *__this_01;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  bool_conflict bVar3;
  UnityEngine_Events_UnityAction_o *onConfirm;
  long *plVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_List_T__o *pSVar6;
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppType *pIVar8;
  System_Collections_Generic_List_T__o *pSStack_30;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_28;
  Il2CppType *pIStack_20;
  
  if (g_data_057ae6f4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SaveableSettingsContainer_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__23_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Are you sure you want to reset to default?");
    il2cpp_runtime_helper_023445d0(&"Load");
    il2cpp_runtime_helper_023445d0(&"Settings loaded from file.");
    il2cpp_runtime_helper_023445d0(&"Reset default");
    il2cpp_runtime_helper_023445d0(&"Default");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae6f4 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar8 = (Il2CppType *)0x0;
  bVar3 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(name,"Load",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      bVar3 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 2) {
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          plVar4 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (plVar4 == (long *)0x0) goto label_0444883e;
          if (*(byte *)(*plVar4 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) goto label_04448843;
          if (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
              TypeInfo_InGameMenu) goto label_04448843;
          *(undefined1 *)(plVar4 + 0x2f) = 1;
        }
label_04448708:
        (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
        return;
      }
      bVar3 = System_String__op_Equality(name,"Default",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (lVar2 != 0) {
        __this_01 = *(UI_ConfirmPopup_o **)(lVar2 + 0x38);
        onConfirm = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show(__this_01,"Are you sure you want to reset to default?",onConfirm,"Reset default",(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pSVar1 = (__this->fields)._saveableSettings;
      if (pSVar1 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd0,
                   (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
        pSVar6 = pSStack_30;
        pSVar7 = pSStack_28;
        pIVar8 = pIStack_20;
        while( true ) {
          __this_03.fields._8_8_ = pSVar7;
          __this_03.fields._list = pSVar6;
          __this_03.fields._current = (Il2CppObject *)pIVar8;
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8);
          if ((char)bVar3 == '\0') {
            __this_05.fields._8_8_ = pSVar7;
            __this_05.fields._list = pSVar6;
            __this_05.fields._current = (Il2CppObject *)pIVar8;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
            goto label_04448732;
          }
          if (pIVar8 == (Il2CppType *)0x0) break;
          (*pIVar8->data->vtable[0x11].methodPtr)(pIVar8,pIVar8->data->vtable[0x11].method);
        }
label_04448839:
        il2cpp_runtime_helper_022b2c90();
      }
    }
  }
  else {
    pSVar1 = (__this->fields)._saveableSettings;
    if (pSVar1 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd0,
                 (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
      pSVar6 = pSStack_30;
      pSVar7 = pSStack_28;
      pIVar8 = pIStack_20;
      while (__this_02.fields._8_8_ = pSVar7, __this_02.fields._list = pSVar6,
            __this_02.fields._current = (Il2CppObject *)pIVar8,
            bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8), (char)bVar3 != '\0')
      {
        if (pIVar8 == (Il2CppType *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04448839;
        }
        (*pIVar8->data->vtable[0x10].methodPtr)(pIVar8,pIVar8->data->vtable[0x10].method);
      }
      __this_04.fields._8_8_ = pSVar7;
      __this_04.fields._list = pSVar6;
      __this_04.fields._current = (Il2CppObject *)pIVar8;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
      if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) != 2) goto label_04448708;
      Settings_SettingsManager__NotifySettingsChanged((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      plVar4 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (plVar4 != (long *)0x0) {
        if (*(byte *)(*plVar4 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) goto label_04448843;
        if (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
            TypeInfo_InGameMenu) goto label_04448843;
        plVar4 = (long *)plVar4[0x22];
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x288))(plVar4,*(undefined8 *)(*plVar4 + 0x290));
          goto label_04448708;
        }
      }
    }
  }
label_0444883e:
  while( true ) {
    il2cpp_runtime_helper_022b2c90();
label_04448843:
    auVar5 = il2cpp_runtime_helper_022b2fd0();
    if (auVar5._8_4_ != 1) break;
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_06.fields._8_8_ = pSVar7;
    __this_06.fields._list = pSVar6;
    __this_06.fields._current = (Il2CppObject *)pIVar8;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      __this_08.fields._8_8_ = pSVar7;
      __this_08.fields._list = pSVar6;
      __this_08.fields._current = (Il2CppObject *)pIVar8;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
      goto label_04448927;
    }
label_04448732:
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if ((lVar2 != 0) &&
       (__this_00 = *(UI_MessagePopup_o **)(lVar2 + 0x30), __this_00 != (UI_MessagePopup_o *)0x0)) {
      UI_MessagePopup__Show(__this_00,"Settings loaded from file.",1,(MethodInfo *)0x0);
      return;
    }
  }
  __this_07.fields._8_8_ = pSVar7;
  __this_07.fields._list = pSVar6;
  __this_07.fields._current = (Il2CppObject *)pIVar8;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
label_04448927:
  _Unwind_Resume(auVar5._0_8_);
}


// UI.SettingsPopup$$Hide
// il2cpp: void UI_SettingsPopup__Hide (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x4448940

void UI_SettingsPopup__Hide(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this_05;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  
  if (g_data_057ae6f5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SaveableSettingsContainer_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
    g_data_057ae6f5 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  __this_05 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_05 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_05,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') goto label_04448a2d;
    __this_00 = (__this->fields)._saveableSettings;
    if (__this_00 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
      while (__this_01.fields._8_8_ = pIVar6, __this_01.fields._list = pSVar5,
            __this_01.fields._current = pIVar7,
            bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8), (char)bVar2 != '\0')
      {
        if (pIVar7 == (Il2CppObject *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04448a48;
        }
        (*pIVar7->klass->vtable[0xb].methodPtr)(pIVar7,pIVar7->klass->vtable[0xb].method);
      }
      __this_02.fields._8_8_ = pIVar6;
      __this_02.fields._list = pSVar5;
      __this_02.fields._current = pIVar7;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
      goto label_04448a2d;
    }
  }
label_04448a48:
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._list = pSVar5;
    __this_03.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar1 == 0) {
label_04448a2d:
      UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar6;
  __this_04.fields._list = pSVar5;
  __this_04.fields._current = pIVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar4._0_8_);
}


// UI.SettingsPopup$$.ctor
// il2cpp: void UI_SettingsPopup___ctor (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x4448ad0

void UI_SettingsPopup___ctor(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BaseSettingsContainer__o *__this_00;
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_01;
  
  if (g_data_057ae6f6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_SaveableSettingsContainer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_BaseSettingsContainer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_SaveableSettingsContainer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BaseSettingsContainer);
    il2cpp_runtime_helper_023445d0(&"SettingsPopup");
    g_data_057ae6f6 = '\x01';
  }
  (__this->fields).LocaleCategory = "SettingsPopup";
  il2cpp_runtime_helper_022b4080(&(__this->fields).LocaleCategory);
  __this_00 = (System_Collections_Generic_List_BaseSettingsContainer__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BaseSettingsContainer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Settings_BaseSettingsContainer);
  (__this->fields)._ignoreDefaultButtonSettings = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._ignoreDefaultButtonSettings,__this_00);
  __this_01 = (System_Collections_Generic_List_SaveableSettingsContainer__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_SaveableSettingsContainer)
  ;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_Settings_SaveableSettingsContainer);
  (__this->fields)._saveableSettings = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._saveableSettings);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsPopup$$<OnBottomBarButtonClick>b__23_0
// il2cpp: void UI_SettingsPopup___OnBottomBarButtonClick_b__23_0 (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x4448bd0

void UI_SettingsPopup___OnBottomBarButtonClick_b__23_0(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  System_Collections_Generic_List_BaseSettingsContainer__o *__this_01;
  UI_MessagePopup_o *__this_02;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  Il2CppType *pIVar7;
  Il2CppType *item;
  undefined1 auStack_40 [16];
  Il2CppType *pIStack_30;
  
  if (g_data_057ae6f3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SaveableSettingsContainer_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Settings reset to default.");
    g_data_057ae6f3 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar7 = (Il2CppType *)0x0;
  __this_00 = (__this->fields)._saveableSettings;
  if (__this_00 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_40,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
    pSVar5 = (System_Collections_Generic_List_T__o *)auStack_40._0_8_;
    pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_40._8_8_;
label_04448210:
    item = pIStack_30;
    __this_03.fields._8_8_ = pSVar6;
    __this_03.fields._list = pSVar5;
    __this_03.fields._current = (Il2CppObject *)item;
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
    if ((char)bVar2 == '\0') {
      __this_04.fields._8_8_ = pSVar6;
      __this_04.fields._list = pSVar5;
      __this_04.fields._current = (Il2CppObject *)item;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      goto label_04448288;
    }
    __this_01 = (__this->fields)._ignoreDefaultButtonSettings;
    if (__this_01 != (System_Collections_Generic_List_BaseSettingsContainer__o *)0x0) goto code_r0x04448230;
    il2cpp_runtime_helper_022b2c90();
    pIVar7 = item;
    goto label_044482ef;
  }
label_044482f4:
  do {
    auVar4 = il2cpp_runtime_helper_022b2c90();
    if (auVar4._8_4_ != 1) {
label_04448366:
      __this_06.fields._8_8_ = pSVar6;
      __this_06.fields._list = pSVar5;
      __this_06.fields._current = (Il2CppObject *)pIVar7;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      _Unwind_Resume(auVar4._0_8_);
    }
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pSVar6;
    __this_05.fields._list = pSVar5;
    __this_05.fields._current = (Il2CppObject *)pIVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    item = pIVar7;
    if (lVar1 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar1);
      goto label_04448366;
    }
label_04448288:
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
    pIVar7 = item;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pIVar7 = item;
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if ((lVar1 != 0) &&
       (__this_02 = *(UI_MessagePopup_o **)(lVar1 + 0x30), __this_02 != (UI_MessagePopup_o *)0x0)) {
      UI_MessagePopup__Show(__this_02,"Settings reset to default.",1,(MethodInfo *)0x0);
      return;
    }
  } while( true );
code_r0x04448230:
  pIVar7 = item;
  bVar2 = System_Collections_Generic_List_object___Contains
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,MethodInfo_Boolean_Contains)
  ;
  pIStack_30 = pIVar7;
  if ((char)bVar2 == '\0') {
    if (item == (Il2CppType *)0x0) {
label_044482ef:
      il2cpp_runtime_helper_022b2c90();
      goto label_044482f4;
    }
    (*item->data->vtable[4].methodPtr)(item,item->data->vtable[4].method);
    (*item->data->vtable[0x10].methodPtr)(item,item->data->vtable[0x10].method);
    pIStack_30 = pIVar7;
  }
  goto label_04448210;
}


