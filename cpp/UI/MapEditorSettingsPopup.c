// Type: UI.MapEditorSettingsPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorSettingsPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorSettingsPopup.cs
// --------------------------------

// UI.MapEditorSettingsPopup.<>c__DisplayClass15_0$$.ctor
// il2cpp: void UI_MapEditorSettingsPopup___c__DisplayClass15_0___ctor (UI_MapEditorSettingsPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x4439230

void UI_MapEditorSettingsPopup___c__DisplayClass15_0___ctor
               (UI_MapEditorSettingsPopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorSettingsPopup.<>c__DisplayClass15_0$$<SetupTopButtons>b__0
// il2cpp: void UI_MapEditorSettingsPopup___c__DisplayClass15_0___SetupTopButtons_b__0 (UI_MapEditorSettingsPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x4439ad0

void UI_MapEditorSettingsPopup___c__DisplayClass15_0___SetupTopButtons_b__0
               (UI_MapEditorSettingsPopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  System_Threading_CancellationCallbackInfo_o *__this_00;
  UI_ConfirmPopup_o *__this_01;
  System_Threading_CancellationTokenSource_c *pSVar1;
  undefined8 uVar2;
  long lVar3;
  System_Threading_CancellationTokenSource_o *pSVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar5;
  UnityEngine_Events_UnityAction_o *onConfirm;
  long *plVar6;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  System_Func_TSource__TResult__o *selector;
  System_String_o *pSVar7;
  UI_MapEditorSettingsPopup_o *pUVar8;
  undefined1 auVar9 [12];
  System_Collections_Generic_List_T__o *pSVar10;
  Il2CppMethodPointer vtableDispatch;
  Il2CppObject *pIVar11;
  
  pUVar8 = (__this->fields).__4__this;
  if (pUVar8 != (UI_MapEditorSettingsPopup_o *)0x0) {
    vtableDispatch = (pUVar8->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtableDispatch)
              (pUVar8,(__this->fields).buttonName,(pUVar8->klass->vtable)._28_SetCategoryPanel.method,
               vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar4 = (pUVar8->fields).m_CancellationTokenSource;
  if (pSVar4 == (System_Threading_CancellationTokenSource_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae6af == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapTextures);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapScriptBasicMaterial_get_Item);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Map);
      il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_MapScriptBasicMateria);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_MapScriptBasicMaterial_string);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetItems_b__0_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"All");
      g_data_057ae6af = '\x01';
    }
    pSVar7 = "All";
    bVar5 = System_String__op_Equality((System_String_o *)method,"All",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)(TypeInfo_BuiltinMapTextures + 0xb8);
    }
    else {
      lVar3 = *(long *)(TypeInfo_BuiltinMapTextures + 0xb8);
    }
    if ((char)bVar5 == '\0') {
      if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar3 + 0x10) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04439d02;
      pIVar11 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar3 + 0x10),
                           (Il2CppObject *)method,MethodInfo_List_1_Map_MapScriptBasicMaterial_get_Item);
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (selector == (System_Func_TSource__TResult__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_MapScriptBasicMaterial_string);
        System_Func_object__object____ctor();
        lVar3 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_TSource__TResult__o **)(lVar3 + 8) = selector;
        il2cpp_runtime_helper_022b4080(lVar3 + 8,selector);
      }
      source = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)
               System_Linq_Enumerable__Select_object__object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar11,selector,MethodInfo_IEnumerable_1_System_String_Select_MapScriptBasicMateria);
    }
    else {
      if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar3 + 0x20) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_04439d02:
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae6b0 == '\0') {
          il2cpp_runtime_helper_023445d0(&"TexturePreview");
          g_data_057ae6b0 = '\x01';
        }
        System_String__Concat_3ae5ba0(pSVar7,"TexturePreview",(MethodInfo *)0x0);
        return;
      }
      source = System_Collections_Generic_Dictionary_object__object___get_Keys
                         (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar3 + 0x20),
                          MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Map);
    }
    System_Linq_Enumerable__ToList_object_
              ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String_ToList_String);
    return;
  }
  pSVar7 = (System_String_o *)(pUVar8->fields).m_CachedPtr;
  if (g_data_057ae6ac == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SaveableSettingsContainer_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__19_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Are you sure you want to reset to default?");
    il2cpp_runtime_helper_023445d0(&"Reset default");
    il2cpp_runtime_helper_023445d0(&"Default");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae6ac = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_T__o *)0x0;
  vtableDispatch = (Il2CppMethodPointer)0x0;
  pIVar11 = (Il2CppObject *)0x0;
  bVar5 = System_String__op_Equality(pSVar7,"Save",(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    bVar5 = System_String__op_Equality(pSVar7,"Back",(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') goto label_044397d2;
    bVar5 = System_String__op_Equality(pSVar7,"Default",(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (lVar3 != 0) {
      __this_01 = *(UI_ConfirmPopup_o **)(lVar3 + 0x38);
      onConfirm = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
        UI_ConfirmPopup__Show(__this_01,"Are you sure you want to reset to default?",onConfirm,"Reset default",(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    __this_00 = pSVar4[2].fields._executingCallback;
    if (__this_00 != (System_Threading_CancellationCallbackInfo_o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc0,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
      while (__this_02.fields._8_8_ = vtableDispatch, __this_02.fields._list = pSVar10,
            __this_02.fields._current = pIVar11,
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc0), (char)bVar5 != '\0')
      {
        if (pIVar11 == (Il2CppObject *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_044397f4;
        }
        (*pIVar11->klass->vtable[0x10].methodPtr)(pIVar11,pIVar11->klass->vtable[0x10].method);
      }
      __this_03.fields._8_8_ = vtableDispatch;
      __this_03.fields._list = pSVar10;
      __this_03.fields._current = pIVar11;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc0);
      goto label_044397d2;
    }
  }
label_044397f4:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar3 = *plVar6;
    __cxa_end_catch();
    __this_04.fields._8_8_ = vtableDispatch;
    __this_04.fields._list = pSVar10;
    __this_04.fields._current = pIVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc0);
    if (lVar3 == 0) {
label_044397d2:
      pSVar1 = pSVar4->klass;
      uVar2._0_4_ = pSVar1[1]._2.static_fields_size;
      uVar2._4_4_ = pSVar1[1]._2.thread_static_fields_size;
      (**(code **)&pSVar1[1]._2.element_size)(pSVar4,uVar2);
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_05.fields._8_8_ = vtableDispatch;
  __this_05.fields._list = pSVar10;
  __this_05.fields._current = pIVar11;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc0);
  _Unwind_Resume(auVar9._0_8_);
}


// UI.MapEditorSettingsPopup.<>c__DisplayClass17_0$$.ctor
// il2cpp: void UI_MapEditorSettingsPopup___c__DisplayClass17_0___ctor (UI_MapEditorSettingsPopup___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x4439330

void UI_MapEditorSettingsPopup___c__DisplayClass17_0___ctor
               (UI_MapEditorSettingsPopup___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorSettingsPopup.<>c__DisplayClass17_0$$<SetupBottomButtons>b__0
// il2cpp: void UI_MapEditorSettingsPopup___c__DisplayClass17_0___SetupBottomButtons_b__0 (UI_MapEditorSettingsPopup___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x4439b00

void UI_MapEditorSettingsPopup___c__DisplayClass17_0___SetupBottomButtons_b__0
               (UI_MapEditorSettingsPopup___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  UI_ConfirmPopup_o *__this_01;
  long lVar1;
  UI_MapEditorSettingsPopup_o *pUVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar3;
  UnityEngine_Events_UnityAction_o *onConfirm;
  long *plVar4;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  System_Func_TSource__TResult__o *selector;
  System_String_o *pSVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_T__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  Il2CppObject *pIVar9;
  
  pUVar2 = (__this->fields).__4__this;
  if (pUVar2 == (UI_MapEditorSettingsPopup_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae6af == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinMapTextures);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapScriptBasicMaterial_get_Item);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Map);
      il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_MapScriptBasicMateria);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_MapScriptBasicMaterial_string);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_GetItems_b__0_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"All");
      g_data_057ae6af = '\x01';
    }
    pSVar5 = "All";
    bVar3 = System_String__op_Equality((System_String_o *)method,"All",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_BuiltinMapTextures + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar1 = *(long *)(TypeInfo_BuiltinMapTextures + 0xb8);
    }
    else {
      lVar1 = *(long *)(TypeInfo_BuiltinMapTextures + 0xb8);
    }
    if ((char)bVar3 == '\0') {
      if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x10) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04439d02;
      pIVar9 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x10),
                          (Il2CppObject *)method,MethodInfo_List_1_Map_MapScriptBasicMaterial_get_Item);
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (selector == (System_Func_TSource__TResult__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_MapScriptBasicMaterial_string);
        System_Func_object__object____ctor();
        lVar1 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_TSource__TResult__o **)(lVar1 + 8) = selector;
        il2cpp_runtime_helper_022b4080(lVar1 + 8,selector);
      }
      source = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)
               System_Linq_Enumerable__Select_object__object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pIVar9,selector,MethodInfo_IEnumerable_1_System_String_Select_MapScriptBasicMateria);
    }
    else {
      if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x20) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_04439d02:
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae6b0 == '\0') {
          il2cpp_runtime_helper_023445d0(&"TexturePreview");
          g_data_057ae6b0 = '\x01';
        }
        System_String__Concat_3ae5ba0(pSVar5,"TexturePreview",(MethodInfo *)0x0);
        return;
      }
      source = System_Collections_Generic_Dictionary_object__object___get_Keys
                         (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x20),
                          MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Map);
    }
    System_Linq_Enumerable__ToList_object_
              ((System_Collections_Generic_IEnumerable_TSource__o *)source,MethodInfo_List_1_System_String_ToList_String);
    return;
  }
  pSVar5 = (__this->fields).buttonName;
  if (g_data_057ae6ac == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SaveableSettingsContainer_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__19_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Are you sure you want to reset to default?");
    il2cpp_runtime_helper_023445d0(&"Reset default");
    il2cpp_runtime_helper_023445d0(&"Default");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae6ac = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  pIVar9 = (Il2CppObject *)0x0;
  bVar3 = System_String__op_Equality(pSVar5,"Save",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(pSVar5,"Back",(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') goto label_044397d2;
    bVar3 = System_String__op_Equality(pSVar5,"Default",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (lVar1 != 0) {
      __this_01 = *(UI_ConfirmPopup_o **)(lVar1 + 0x38);
      onConfirm = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
        UI_ConfirmPopup__Show(__this_01,"Are you sure you want to reset to default?",onConfirm,"Reset default",(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    __this_00 = (pUVar2->fields)._saveableSettings;
    if (__this_00 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
      while (__this_02.fields._8_8_ = pIVar8, __this_02.fields._list = pSVar7,
            __this_02.fields._current = pIVar9,
            bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8), (char)bVar3 != '\0')
      {
        if (pIVar9 == (Il2CppObject *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_044397f4;
        }
        (*pIVar9->klass->vtable[0x10].methodPtr)(pIVar9,pIVar9->klass->vtable[0x10].method);
      }
      __this_03.fields._8_8_ = pIVar8;
      __this_03.fields._list = pSVar7;
      __this_03.fields._current = pIVar9;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
      goto label_044397d2;
    }
  }
label_044397f4:
  auVar6 = il2cpp_runtime_helper_022b2c90();
  if (auVar6._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar1 = *plVar4;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar8;
    __this_04.fields._list = pSVar7;
    __this_04.fields._current = pIVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar1 == 0) {
label_044397d2:
      (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_05.fields._8_8_ = pIVar8;
  __this_05.fields._list = pSVar7;
  __this_05.fields._current = pIVar9;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar6._0_8_);
}


// UI.MapEditorSettingsPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorSettingsPopup__get_Title (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x4438ab0

System_String_o * UI_MapEditorSettingsPopup__get_Title(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.MapEditorSettingsPopup$$get_Width
// il2cpp: float UI_MapEditorSettingsPopup__get_Width (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x4438ad0

float UI_MapEditorSettingsPopup__get_Width(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  return 1010.0;
}


// UI.MapEditorSettingsPopup$$get_Height
// il2cpp: float UI_MapEditorSettingsPopup__get_Height (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x4438ae0

float UI_MapEditorSettingsPopup__get_Height(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  return 630.0;
}


// UI.MapEditorSettingsPopup$$get_CategoryPanel
// il2cpp: bool UI_MapEditorSettingsPopup__get_CategoryPanel (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x4438af0

bool_conflict
UI_MapEditorSettingsPopup__get_CategoryPanel(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorSettingsPopup$$get_CategoryButtons
// il2cpp: bool UI_MapEditorSettingsPopup__get_CategoryButtons (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x4438b00

bool_conflict
UI_MapEditorSettingsPopup__get_CategoryButtons(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorSettingsPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_MapEditorSettingsPopup__get_DefaultCategoryPanel (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x4438b10

System_String_o *
UI_MapEditorSettingsPopup__get_DefaultCategoryPanel(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae6a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"General");
    g_data_057ae6a6 = '\x01';
  }
  return "General";
}


// UI.MapEditorSettingsPopup$$Setup
// il2cpp: void UI_MapEditorSettingsPopup__Setup (UI_MapEditorSettingsPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4438b40

void UI_MapEditorSettingsPopup__Setup
               (UI_MapEditorSettingsPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppObject *pIVar3;
  System_Object_array *pSVar4;
  UnityEngine_Transform_o *parent_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  int32_t fontSize;
  System_String_o *pSVar5;
  UI_ElementStyle_o *pUVar6;
  long lVar7;
  UnityEngine_Events_UnityAction_o *pUVar8;
  UI_HeadedPanel_o *pUVar9;
  UI_HeadedPanel_o *__this_01;
  System_String_o *item;
  UI_HeadedPanel_o *__this_02;
  Il2CppObject *value;
  System_Threading_CancellationTokenSource_o *__this_03;
  UI_HeadedPanel_o *__this_04;
  ulong uVar10;
  
  if (g_data_057ae6a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae6a7 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  UI_MapEditorSettingsPopup__SetupBottomButtons(__this,(MethodInfo *)parent);
  lVar7 = MethodInfo_Void_Add;
  __this_03 = (System_Threading_CancellationTokenSource_o *)(__this->fields)._saveableSettings;
  if (__this_03 != (System_Threading_CancellationTokenSource_o *)0x0) {
    pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
    piVar1 = (int32_t *)((long)&(__this_03->fields)._registeredCallbacksLists + 4);
    *piVar1 = *piVar1 + 1;
    pSVar4 = (System_Object_array *)(__this_03->fields)._kernelEvent;
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar2 = *(uint *)&(__this_03->fields)._registeredCallbacksLists;
      if (uVar2 < (uint)pSVar4->max_length) {
        *(uint *)&(__this_03->fields)._registeredCallbacksLists = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = pIVar3;
        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2);
        __this_03 = (System_Threading_CancellationTokenSource_o *)(__this->fields)._saveableSettings;
        lVar7 = MethodInfo_Void_Add;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_03,pIVar3,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        __this_03 = (System_Threading_CancellationTokenSource_o *)(__this->fields)._saveableSettings;
        lVar7 = MethodInfo_Void_Add;
      }
      MethodInfo_Void_Add = lVar7;
      if (__this_03 != (System_Threading_CancellationTokenSource_o *)0x0) {
        pIVar3 = *(Il2CppObject **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
        piVar1 = (int32_t *)((long)&(__this_03->fields)._registeredCallbacksLists + 4);
        *piVar1 = *piVar1 + 1;
        pSVar4 = (System_Object_array *)(__this_03->fields)._kernelEvent;
        if (pSVar4 != (System_Object_array *)0x0) {
          uVar2 = *(uint *)&(__this_03->fields)._registeredCallbacksLists;
          if (uVar2 < (uint)pSVar4->max_length) {
            *(uint *)&(__this_03->fields)._registeredCallbacksLists = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = pIVar3;
            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2);
            return;
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_03,pIVar3,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae6aa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Default");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae6aa = '\x01';
  }
  fontSize = (*((System_Collections_Generic_List_object__c *)__this_03->klass)[1]._1.generic_class)
                       (__this_03,
                        ((System_Collections_Generic_List_object__c *)__this_03->klass)[1]._1.
                        typeMetadataHandle);
  pSVar5 = (System_String_o *)
           (*(((System_Collections_Generic_List_object__c *)__this_03->klass)->vtable)._4_unknown.methodPtr)
                     (__this_03,
                      (((System_Collections_Generic_List_object__c *)__this_03->klass)->vtable)._4_unknown.
                      method);
  pUVar6 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar6,fontSize,120.0,20.0,pSVar5,(MethodInfo *)0x0);
  __this_04 = TypeInfo_string;
  lVar7 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (lVar7 == 0) {
label_04438f0a:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar7 + 0x18) != 0) {
    __this_04 = (UI_HeadedPanel_o *)(lVar7 + 0x20);
    *(undefined8 *)(lVar7 + 0x20) = "Default";
    il2cpp_runtime_helper_022b4080();
    if (1 < *(uint *)(lVar7 + 0x18)) {
      __this_04 = (UI_HeadedPanel_o *)(lVar7 + 0x28);
      *(undefined8 *)(lVar7 + 0x28) = "Save";
      il2cpp_runtime_helper_022b4080();
      if (2 < *(uint *)(lVar7 + 0x18)) {
        *(undefined8 *)(lVar7 + 0x30) = "Back";
        il2cpp_runtime_helper_022b4080(lVar7 + 0x30);
        if (0 < *(int *)(lVar7 + 0x18)) {
          uVar10 = 0;
          do {
            pUVar9 = (UI_HeadedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
            __this_04 = pUVar9;
            System_Object___ctor((Il2CppObject *)pUVar9,(MethodInfo *)0x0);
            if (pUVar9 == (UI_HeadedPanel_o *)0x0) goto label_04438f0a;
            __this_04 = (UI_HeadedPanel_o *)&(pUVar9->fields).m_CancellationTokenSource;
            (pUVar9->fields).m_CancellationTokenSource = __this_03;
            il2cpp_runtime_helper_022b4080(__this_04,__this_03);
            if (*(uint *)(lVar7 + 0x18) <= uVar10) goto label_04438f0f;
            (pUVar9->fields).m_CachedPtr = *(intptr_t *)(lVar7 + 0x20 + uVar10 * 8);
            il2cpp_runtime_helper_022b4080(&pUVar9->fields);
            parent_00 = *(UnityEngine_Transform_o **)&__this_03[1].fields._disposed;
            pSVar5 = (System_String_o *)(pUVar9->fields).m_CachedPtr;
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar5 = UI_UIManager__GetLocaleCommon(pSVar5,(MethodInfo *)0x0);
            pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            UI_ElementFactory__CreateTextButton(parent_00,pUVar6,pSVar5,0.0,pUVar8,(MethodInfo *)0x0);
            uVar10 = uVar10 + 1;
          } while ((long)uVar10 < (long)*(int *)(lVar7 + 0x18));
        }
        return;
      }
    }
  }
label_04438f0f:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae6a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Top");
    il2cpp_runtime_helper_023445d0(&"Keybinds");
    il2cpp_runtime_helper_023445d0(&"Button");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae6a8 = '\x01';
  }
  pSVar5 = (System_String_o *)
           (*(__this_04->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this_04,(__this_04->klass->vtable)._4_get_ThemePanel.method);
  pUVar6 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar6,0x1c,120.0,20.0,pSVar5,(MethodInfo *)0x0);
  pUVar9 = TypeInfo_string;
  lVar7 = il2cpp_runtime_helper_022b2a40();
  if (lVar7 == 0) {
label_04439219:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar7 + 0x18) != 0) {
    pUVar9 = (UI_HeadedPanel_o *)(lVar7 + 0x20);
    *(undefined8 *)(lVar7 + 0x20) = "General";
    il2cpp_runtime_helper_022b4080();
    if (1 < *(uint *)(lVar7 + 0x18)) {
      *(undefined8 *)(lVar7 + 0x28) = "Keybinds";
      il2cpp_runtime_helper_022b4080(lVar7 + 0x28);
      if (0 < *(int *)(lVar7 + 0x18)) {
        uVar10 = 0;
        do {
          __this_01 = (UI_HeadedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass15_0);
          pUVar9 = __this_01;
          System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
          if (__this_01 == (UI_HeadedPanel_o *)0x0) goto label_04439219;
          pUVar9 = (UI_HeadedPanel_o *)&(__this_01->fields).m_CancellationTokenSource;
          (__this_01->fields).m_CancellationTokenSource =
               (System_Threading_CancellationTokenSource_o *)__this_04;
          il2cpp_runtime_helper_022b4080();
          if (*(uint *)(lVar7 + 0x18) <= uVar10) goto label_0443921e;
          (__this_01->fields).m_CachedPtr = *(intptr_t *)(lVar7 + 0x20 + uVar10 * 8);
          il2cpp_runtime_helper_022b4080(&__this_01->fields);
          pUVar9 = (UI_HeadedPanel_o *)(__this_04->fields).TopBar;
          pSVar5 = (System_String_o *)__this_04[1].fields.DoublePanelLeft;
          item = System_String__Concat_3ae5ba0
                           ((System_String_o *)(__this_01->fields).m_CachedPtr,"Button",(MethodInfo *)0x0)
          ;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar5 = UI_UIManager__GetLocale
                             (pSVar5,"Top",item,"","",(MethodInfo *)0x0);
          pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          __this_02 = (UI_HeadedPanel_o *)
                      UI_ElementFactory__CreateCategoryButton
                                ((UnityEngine_Transform_o *)pUVar9,pUVar6,pSVar5,pUVar8,(MethodInfo *)0x0);
          if (__this_02 == (UI_HeadedPanel_o *)0x0) goto label_04439219;
          __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (__this_04->fields)._topButtons;
          pIVar3 = (Il2CppObject *)(__this_01->fields).m_CachedPtr;
          value = UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Button_GetComponent_Button);
          pUVar9 = __this_02;
          if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04439219;
          System_Collections_Generic_Dictionary_object__object___Add(__this_00,pIVar3,value,MethodInfo_Void_Add);
          uVar10 = uVar10 + 1;
        } while ((long)uVar10 < (long)*(int *)(lVar7 + 0x18));
      }
      UI_HeadedPanel__SetupTopButtons(__this_04,(MethodInfo *)0x0);
      return;
    }
  }
label_0443921e:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pUVar9,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorSettingsPopup$$SetupTopButtons
// il2cpp: void UI_MapEditorSettingsPopup__SetupTopButtons (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x4438f20

void UI_MapEditorSettingsPopup__SetupTopButtons(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

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
  ulong uVar3;
  
  if (g_data_057ae6a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Top");
    il2cpp_runtime_helper_023445d0(&"Keybinds");
    il2cpp_runtime_helper_023445d0(&"Button");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae6a8 = '\x01';
  }
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x1c,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent = TypeInfo_string;
  lVar2 = il2cpp_runtime_helper_022b2a40();
  if (lVar2 == 0) {
label_04439219:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar2 + 0x18) != 0) {
    parent = (UnityEngine_Transform_o *)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x20) = "General";
    il2cpp_runtime_helper_022b4080();
    if (1 < *(uint *)(lVar2 + 0x18)) {
      *(undefined8 *)(lVar2 + 0x28) = "Keybinds";
      il2cpp_runtime_helper_022b4080(lVar2 + 0x28);
      if (0 < *(int *)(lVar2 + 0x18)) {
        uVar3 = 0;
        do {
          __this_02 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass15_0);
          parent = __this_02;
          System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
          if (__this_02 == (UnityEngine_Transform_o *)0x0) goto label_04439219;
          parent = __this_02 + 1;
          __this_02[1].klass = (UnityEngine_Transform_c *)__this;
          il2cpp_runtime_helper_022b4080();
          if (*(uint *)(lVar2 + 0x18) <= uVar3) goto label_0443921e;
          (__this_02->fields).m_CachedPtr = *(intptr_t *)(lVar2 + 0x20 + uVar3 * 8);
          il2cpp_runtime_helper_022b4080(&__this_02->fields);
          parent = (__this->fields).TopBar;
          pSVar1 = (__this->fields).LocaleCategory;
          item = System_String__Concat_3ae5ba0
                           ((System_String_o *)(__this_02->fields).m_CachedPtr,"Button",(MethodInfo *)0x0)
          ;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar1 = UI_UIManager__GetLocale
                             (pSVar1,"Top",item,"","",(MethodInfo *)0x0);
          onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          __this_03 = (UnityEngine_Transform_o *)
                      UI_ElementFactory__CreateCategoryButton
                                (parent,__this_01,pSVar1,onClick,(MethodInfo *)0x0);
          if (__this_03 == (UnityEngine_Transform_o *)0x0) goto label_04439219;
          __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
          key = (Il2CppObject *)(__this_02->fields).m_CachedPtr;
          value = UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)__this_03,MethodInfo_Button_GetComponent_Button);
          parent = __this_03;
          if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04439219;
          System_Collections_Generic_Dictionary_object__object___Add(__this_00,key,value,MethodInfo_Void_Add);
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x18));
      }
      UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
label_0443921e:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)parent,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorSettingsPopup$$RegisterCategoryPanels
// il2cpp: void UI_MapEditorSettingsPopup__RegisterCategoryPanels (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x4439240

void UI_MapEditorSettingsPopup__RegisterCategoryPanels(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Type_o *pSVar2;
  System_RuntimeTypeHandle_o handle;
  
  if (g_data_057ae6a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeRef_MapEditorSettingsGeneralPanel);
    il2cpp_runtime_helper_023445d0(&TypeRef_MapEditorSettingsKeybindsPanel);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Keybinds");
    g_data_057ae6a9 = '\x01';
  }
  handle.fields.value = TypeRef_MapEditorSettingsGeneralPanel.fields.value;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,"General",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
    handle.fields.value = TypeRef_MapEditorSettingsKeybindsPanel.fields.value;
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_MapEditorSettingsKeybindsPanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,"Keybinds",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)handle.fields.value,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorSettingsPopup$$SetupBottomButtons
// il2cpp: void UI_MapEditorSettingsPopup__SetupBottomButtons (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x4438c80

void UI_MapEditorSettingsPopup__SetupBottomButtons(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *key;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *pUVar2;
  long lVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  UI_HeadedPanel_o *pUVar5;
  UI_HeadedPanel_o *__this_01;
  System_String_o *item;
  UI_HeadedPanel_o *__this_02;
  Il2CppObject *value;
  UI_HeadedPanel_o *__this_03;
  ulong uVar6;
  
  if (g_data_057ae6aa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Default");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae6aa = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar2 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar2,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  __this_03 = TypeInfo_string;
  lVar3 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (lVar3 == 0) {
label_04438f0a:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar3 + 0x18) != 0) {
    __this_03 = (UI_HeadedPanel_o *)(lVar3 + 0x20);
    *(undefined8 *)(lVar3 + 0x20) = "Default";
    il2cpp_runtime_helper_022b4080();
    if (1 < *(uint *)(lVar3 + 0x18)) {
      __this_03 = (UI_HeadedPanel_o *)(lVar3 + 0x28);
      *(undefined8 *)(lVar3 + 0x28) = "Save";
      il2cpp_runtime_helper_022b4080();
      if (2 < *(uint *)(lVar3 + 0x18)) {
        *(undefined8 *)(lVar3 + 0x30) = "Back";
        il2cpp_runtime_helper_022b4080(lVar3 + 0x30);
        if (0 < *(int *)(lVar3 + 0x18)) {
          uVar6 = 0;
          do {
            pUVar5 = (UI_HeadedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
            __this_03 = pUVar5;
            System_Object___ctor((Il2CppObject *)pUVar5,(MethodInfo *)0x0);
            if (pUVar5 == (UI_HeadedPanel_o *)0x0) goto label_04438f0a;
            __this_03 = (UI_HeadedPanel_o *)&(pUVar5->fields).m_CancellationTokenSource;
            (pUVar5->fields).m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)__this;
            il2cpp_runtime_helper_022b4080(__this_03,__this);
            if (*(uint *)(lVar3 + 0x18) <= uVar6) goto label_04438f0f;
            (pUVar5->fields).m_CachedPtr = *(intptr_t *)(lVar3 + 0x20 + uVar6 * 8);
            il2cpp_runtime_helper_022b4080(&pUVar5->fields);
            parent = (__this->fields).BottomBar;
            pSVar1 = (System_String_o *)(pUVar5->fields).m_CachedPtr;
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar1 = UI_UIManager__GetLocaleCommon(pSVar1,(MethodInfo *)0x0);
            pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            UI_ElementFactory__CreateTextButton(parent,pUVar2,pSVar1,0.0,pUVar4,(MethodInfo *)0x0);
            uVar6 = uVar6 + 1;
          } while ((long)uVar6 < (long)*(int *)(lVar3 + 0x18));
        }
        return;
      }
    }
  }
label_04438f0f:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae6a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Top");
    il2cpp_runtime_helper_023445d0(&"Keybinds");
    il2cpp_runtime_helper_023445d0(&"Button");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae6a8 = '\x01';
  }
  pSVar1 = (System_String_o *)
           (*(__this_03->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this_03,(__this_03->klass->vtable)._4_get_ThemePanel.method);
  pUVar2 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar2,0x1c,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pUVar5 = TypeInfo_string;
  lVar3 = il2cpp_runtime_helper_022b2a40();
  if (lVar3 == 0) {
label_04439219:
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar3 + 0x18) != 0) {
    pUVar5 = (UI_HeadedPanel_o *)(lVar3 + 0x20);
    *(undefined8 *)(lVar3 + 0x20) = "General";
    il2cpp_runtime_helper_022b4080();
    if (1 < *(uint *)(lVar3 + 0x18)) {
      *(undefined8 *)(lVar3 + 0x28) = "Keybinds";
      il2cpp_runtime_helper_022b4080(lVar3 + 0x28);
      if (0 < *(int *)(lVar3 + 0x18)) {
        uVar6 = 0;
        do {
          __this_01 = (UI_HeadedPanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass15_0);
          pUVar5 = __this_01;
          System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
          if (__this_01 == (UI_HeadedPanel_o *)0x0) goto label_04439219;
          pUVar5 = (UI_HeadedPanel_o *)&(__this_01->fields).m_CancellationTokenSource;
          (__this_01->fields).m_CancellationTokenSource =
               (System_Threading_CancellationTokenSource_o *)__this_03;
          il2cpp_runtime_helper_022b4080();
          if (*(uint *)(lVar3 + 0x18) <= uVar6) goto label_0443921e;
          (__this_01->fields).m_CachedPtr = *(intptr_t *)(lVar3 + 0x20 + uVar6 * 8);
          il2cpp_runtime_helper_022b4080(&__this_01->fields);
          pUVar5 = (UI_HeadedPanel_o *)(__this_03->fields).TopBar;
          pSVar1 = (System_String_o *)__this_03[1].fields.DoublePanelLeft;
          item = System_String__Concat_3ae5ba0
                           ((System_String_o *)(__this_01->fields).m_CachedPtr,"Button",(MethodInfo *)0x0)
          ;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar1 = UI_UIManager__GetLocale
                             (pSVar1,"Top",item,"","",(MethodInfo *)0x0);
          pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          __this_02 = (UI_HeadedPanel_o *)
                      UI_ElementFactory__CreateCategoryButton
                                ((UnityEngine_Transform_o *)pUVar5,pUVar2,pSVar1,pUVar4,(MethodInfo *)0x0);
          if (__this_02 == (UI_HeadedPanel_o *)0x0) goto label_04439219;
          __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (__this_03->fields)._topButtons;
          key = (Il2CppObject *)(__this_01->fields).m_CachedPtr;
          value = UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Button_GetComponent_Button);
          pUVar5 = __this_02;
          if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04439219;
          System_Collections_Generic_Dictionary_object__object___Add(__this_00,key,value,MethodInfo_Void_Add);
          uVar6 = uVar6 + 1;
        } while ((long)uVar6 < (long)*(int *)(lVar3 + 0x18));
      }
      UI_HeadedPanel__SetupTopButtons(__this_03,(MethodInfo *)0x0);
      return;
    }
  }
label_0443921e:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pUVar5,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorSettingsPopup$$OnConfirmSetDefault
// il2cpp: void UI_MapEditorSettingsPopup__OnConfirmSetDefault (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x4439340

void UI_MapEditorSettingsPopup__OnConfirmSetDefault(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  Il2CppClass *pIVar2;
  void *pvVar3;
  UI_MessagePopup_o *__this_01;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar5;
  long *plVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_T__o *pSVar8;
  System_Collections_Generic_List_Enumerator_T__c *pSVar9;
  Il2CppType *pIVar10;
  Il2CppType *pIVar11;
  undefined1 local_40 [16];
  Il2CppType *local_30;
  
  if (g_data_057ae6ab == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SaveableSettingsContainer_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InputSettings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Settings reset to default.");
    g_data_057ae6ab = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar10 = (Il2CppType *)0x0;
  __this_00 = (__this->fields)._saveableSettings;
  if (__this_00 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
    pSVar8 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
    pIVar10 = local_30;
    while( true ) {
      __this_02.fields._8_8_ = pSVar9;
      __this_02.fields._list = pSVar8;
      __this_02.fields._current = (Il2CppObject *)pIVar10;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
      if ((char)bVar5 == '\0') {
        __this_03.fields._8_8_ = pSVar9;
        __this_03.fields._list = pSVar8;
        __this_03.fields._current = (Il2CppObject *)pIVar10;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
        goto label_044394a6;
      }
      if (pIVar10 == (Il2CppType *)0x0) break;
      pIVar2 = pIVar10->data;
      bVar1 = (TypeInfo_InputSettings->_2).naturalAligment;
      pIVar11 = pIVar10;
      if (((pIVar2->_2).naturalAligment < bVar1) ||
         ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InputSettings)) {
        (*pIVar2->vtable[4].methodPtr)(pIVar10,pIVar2->vtable[4].method);
      }
      else {
        pIVar2 = pIVar10[5].data;
        if (pIVar2 == (Il2CppClass *)0x0) goto label_0443950d;
        pvVar3 = (pIVar2->_1).image;
        (**(code **)((long)pvVar3 + 0x178))(pIVar2,*(undefined8 *)((long)pvVar3 + 0x180));
      }
      (*pIVar10->data->vtable[0x10].methodPtr)(pIVar10,pIVar10->data->vtable[0x10].method);
      pIVar10 = pIVar11;
    }
    il2cpp_runtime_helper_022b2c90();
label_0443950d:
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar7 = il2cpp_runtime_helper_022b2c90();
    if (auVar7._8_4_ != 1) {
label_04439584:
      __this_05.fields._8_8_ = pSVar9;
      __this_05.fields._list = pSVar8;
      __this_05.fields._current = (Il2CppObject *)pIVar10;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      _Unwind_Resume(auVar7._0_8_);
    }
    plVar6 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar4 = *plVar6;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pSVar9;
    __this_04.fields._list = pSVar8;
    __this_04.fields._current = (Il2CppObject *)pIVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    if (lVar4 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar4);
      goto label_04439584;
    }
label_044394a6:
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if ((lVar4 != 0) &&
       (__this_01 = *(UI_MessagePopup_o **)(lVar4 + 0x30), __this_01 != (UI_MessagePopup_o *)0x0)) {
      UI_MessagePopup__Show(__this_01,"Settings reset to default.",1,(MethodInfo *)0x0);
      return;
    }
  } while( true );
}


// UI.MapEditorSettingsPopup$$OnBottomBarButtonClick
// il2cpp: void UI_MapEditorSettingsPopup__OnBottomBarButtonClick (UI_MapEditorSettingsPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x44395c0

void UI_MapEditorSettingsPopup__OnBottomBarButtonClick
               (UI_MapEditorSettingsPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  UI_ConfirmPopup_o *__this_01;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar2;
  UnityEngine_Events_UnityAction_o *onConfirm;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  
  if (g_data_057ae6ac == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SaveableSettingsContainer_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnBottomBarButtonClick_b__19_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Are you sure you want to reset to default?");
    il2cpp_runtime_helper_023445d0(&"Reset default");
    il2cpp_runtime_helper_023445d0(&"Default");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae6ac = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  bVar2 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') goto label_044397d2;
    bVar2 = System_String__op_Equality(name,"Default",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (lVar1 != 0) {
      __this_01 = *(UI_ConfirmPopup_o **)(lVar1 + 0x38);
      onConfirm = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
        UI_ConfirmPopup__Show(__this_01,"Are you sure you want to reset to default?",onConfirm,"Reset default",(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    __this_00 = (__this->fields)._saveableSettings;
    if (__this_00 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
      while (__this_02.fields._8_8_ = pIVar6, __this_02.fields._list = pSVar5,
            __this_02.fields._current = pIVar7,
            bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8), (char)bVar2 != '\0')
      {
        if (pIVar7 == (Il2CppObject *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_044397f4;
        }
        (*pIVar7->klass->vtable[0x10].methodPtr)(pIVar7,pIVar7->klass->vtable[0x10].method);
      }
      __this_03.fields._8_8_ = pIVar6;
      __this_03.fields._list = pSVar5;
      __this_03.fields._current = pIVar7;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
      goto label_044397d2;
    }
  }
label_044397f4:
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar6;
    __this_04.fields._list = pSVar5;
    __this_04.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar1 == 0) {
label_044397d2:
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_05.fields._8_8_ = pIVar6;
  __this_05.fields._list = pSVar5;
  __this_05.fields._current = pIVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar4._0_8_);
}


// UI.MapEditorSettingsPopup$$Hide
// il2cpp: void UI_MapEditorSettingsPopup__Hide (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x4439880

void UI_MapEditorSettingsPopup__Hide(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

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
  
  if (g_data_057ae6ad == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SaveableSettingsContainer_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
    g_data_057ae6ad = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  __this_05 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_05 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(__this_05,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') goto label_0443996d;
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
          goto label_04439988;
        }
        (*pIVar7->klass->vtable[0xb].methodPtr)(pIVar7,pIVar7->klass->vtable[0xb].method);
      }
      __this_02.fields._8_8_ = pIVar6;
      __this_02.fields._list = pSVar5;
      __this_02.fields._current = pIVar7;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
      goto label_0443996d;
    }
  }
label_04439988:
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
label_0443996d:
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


// UI.MapEditorSettingsPopup$$.ctor
// il2cpp: void UI_MapEditorSettingsPopup___ctor (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x4439a10

void UI_MapEditorSettingsPopup___ctor(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  
  if (g_data_057ae6ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_SaveableSettingsContainer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_SaveableSettingsContainer);
    il2cpp_runtime_helper_023445d0(&"MapEditorSettings");
    g_data_057ae6ae = '\x01';
  }
  (__this->fields).LocaleCategory = "MapEditorSettings";
  il2cpp_runtime_helper_022b4080(&(__this->fields).LocaleCategory);
  __this_00 = (System_Collections_Generic_List_SaveableSettingsContainer__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_SaveableSettingsContainer)
  ;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Settings_SaveableSettingsContainer);
  (__this->fields)._saveableSettings = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._saveableSettings);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorSettingsPopup$$<OnBottomBarButtonClick>b__19_0
// il2cpp: void UI_MapEditorSettingsPopup___OnBottomBarButtonClick_b__19_0 (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x4439ac0

void UI_MapEditorSettingsPopup___OnBottomBarButtonClick_b__19_0
               (UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  Il2CppClass *pIVar2;
  void *pvVar3;
  UI_MessagePopup_o *__this_01;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar5;
  long *plVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_T__o *pSVar8;
  System_Collections_Generic_List_Enumerator_T__c *pSVar9;
  Il2CppType *pIVar10;
  Il2CppType *pIVar11;
  undefined1 auStack_40 [16];
  Il2CppType *pIStack_30;
  
  if (g_data_057ae6ab == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SaveableSettingsContainer_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InputSettings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Settings reset to default.");
    g_data_057ae6ab = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar10 = (Il2CppType *)0x0;
  __this_00 = (__this->fields)._saveableSettings;
  if (__this_00 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_40,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Settings_SaveableSettingsContainer_G);
    pSVar8 = (System_Collections_Generic_List_T__o *)auStack_40._0_8_;
    pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_40._8_8_;
    pIVar10 = pIStack_30;
    while( true ) {
      __this_02.fields._8_8_ = pSVar9;
      __this_02.fields._list = pSVar8;
      __this_02.fields._current = (Il2CppObject *)pIVar10;
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
      if ((char)bVar5 == '\0') {
        __this_03.fields._8_8_ = pSVar9;
        __this_03.fields._list = pSVar8;
        __this_03.fields._current = (Il2CppObject *)pIVar10;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
        goto label_044394a6;
      }
      if (pIVar10 == (Il2CppType *)0x0) break;
      pIVar2 = pIVar10->data;
      bVar1 = (TypeInfo_InputSettings->_2).naturalAligment;
      pIVar11 = pIVar10;
      if (((pIVar2->_2).naturalAligment < bVar1) ||
         ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InputSettings)) {
        (*pIVar2->vtable[4].methodPtr)(pIVar10,pIVar2->vtable[4].method);
      }
      else {
        pIVar2 = pIVar10[5].data;
        if (pIVar2 == (Il2CppClass *)0x0) goto label_0443950d;
        pvVar3 = (pIVar2->_1).image;
        (**(code **)((long)pvVar3 + 0x178))(pIVar2,*(undefined8 *)((long)pvVar3 + 0x180));
      }
      (*pIVar10->data->vtable[0x10].methodPtr)(pIVar10,pIVar10->data->vtable[0x10].method);
      pIVar10 = pIVar11;
    }
    il2cpp_runtime_helper_022b2c90();
label_0443950d:
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar7 = il2cpp_runtime_helper_022b2c90();
    if (auVar7._8_4_ != 1) {
label_04439584:
      __this_05.fields._8_8_ = pSVar9;
      __this_05.fields._list = pSVar8;
      __this_05.fields._current = (Il2CppObject *)pIVar10;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      _Unwind_Resume(auVar7._0_8_);
    }
    plVar6 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar4 = *plVar6;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pSVar9;
    __this_04.fields._list = pSVar8;
    __this_04.fields._current = (Il2CppObject *)pIVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    if (lVar4 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar4);
      goto label_04439584;
    }
label_044394a6:
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if ((lVar4 != 0) &&
       (__this_01 = *(UI_MessagePopup_o **)(lVar4 + 0x30), __this_01 != (UI_MessagePopup_o *)0x0)) {
      UI_MessagePopup__Show(__this_01,"Settings reset to default.",1,(MethodInfo *)0x0);
      return;
    }
  } while( true );
}


