// Type: UI.MapEditorAddObjectPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorAddObjectPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorAddObjectPopup.cs
// --------------------------------

// UI.MapEditorAddObjectPopup.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_MapEditorAddObjectPopup___c__DisplayClass21_0___ctor (UI_MapEditorAddObjectPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x441a300

void UI_MapEditorAddObjectPopup___c__DisplayClass21_0___ctor
               (UI_MapEditorAddObjectPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddObjectPopup.<>c__DisplayClass21_0$$<SetupTopButtons>b__0
// il2cpp: void UI_MapEditorAddObjectPopup___c__DisplayClass21_0___SetupTopButtons_b__0 (UI_MapEditorAddObjectPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x441a700

void UI_MapEditorAddObjectPopup___c__DisplayClass21_0___SetupTopButtons_b__0
               (UI_MapEditorAddObjectPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  Il2CppObject *pIVar1;
  UI_InputSettingElement_o *pUVar2;
  MethodInfo *pMVar3;
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar5;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_01;
  System_Type_o *value;
  long *plVar6;
  undefined8 unaff_RBX;
  undefined8 *puVar7;
  undefined8 unaff_RBP;
  System_String_o *pSVar8;
  long lVar9;
  UI_MapEditorAddObjectPopup_o *pUVar10;
  UI_MapEditorAddObjectPopup_o *pUVar11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  UI_InputSettingElement_o *unaff_R15;
  undefined1 auVar12 [12];
  undefined8 uStack_10;
  undefined1 auStack_8 [8];
  
  pUVar10 = (__this->fields).__4__this;
  if (pUVar10 == (UI_MapEditorAddObjectPopup_o *)0x0) {
    uStack_10 = 0x441a71c;
    uStack_10 = il2cpp_runtime_helper_022b2c90();
    puVar7 = &uStack_10;
    pUVar11 = (UI_MapEditorAddObjectPopup_o *)(pUVar10->fields).m_CancellationTokenSource;
    if (pUVar11 == (UI_MapEditorAddObjectPopup_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      pUVar10 = (UI_MapEditorAddObjectPopup_o *)(pUVar11->fields).m_CancellationTokenSource;
      if (pUVar10 == (UI_MapEditorAddObjectPopup_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057ae633 == '\0') {
          il2cpp_runtime_helper_023445d0(&"Choose Variant");
          g_data_057ae633 = '\x01';
        }
        return;
      }
      pSVar8 = (System_String_o *)(pUVar11->fields).m_CachedPtr;
    }
    else {
      pSVar8 = (System_String_o *)(pUVar10->fields).m_CachedPtr;
      puVar7 = (undefined8 *)auStack_8;
      pUVar10 = pUVar11;
    }
  }
  else {
    pSVar8 = (__this->fields).buttonName;
    puVar7 = (undefined8 *)register0x00000020;
  }
  *(UI_InputSettingElement_o **)((long)puVar7 + -8) = unaff_R15;
  *(undefined8 *)((long)puVar7 + -0x10) = unaff_R14;
  *(undefined8 *)((long)puVar7 + -0x18) = unaff_RBX;
  if (g_data_057ae62f == '\0') {
    *(undefined8 *)((long)puVar7 + -0x20) = 0x441a350;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)puVar7 + -0x20) = 0x441a35c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae62f = '\x01';
  }
  __this_00 = (pUVar10->fields).Search;
  if (__this_00 == (Settings_StringSetting_o *)0x0) {
label_0441a403:
    lVar9 = 0;
    *(undefined8 *)((long)puVar7 + -0x20) = 0x441a408;
    il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)((long)puVar7 + -0x20) = unaff_RBP;
    *(UI_InputSettingElement_o **)((long)puVar7 + -0x28) = unaff_R15;
    *(System_String_o **)((long)puVar7 + -0x30) = pSVar8;
    *(undefined8 *)((long)puVar7 + -0x38) = unaff_R13;
    *(undefined8 *)((long)puVar7 + -0x40) = unaff_R12;
    *(UI_MapEditorAddObjectPopup_o **)((long)puVar7 + -0x48) = pUVar10;
    if (g_data_057ae630 == '\0') {
      *(undefined8 *)((long)puVar7 + -0x68) = 0x441a436;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      *(undefined8 *)((long)puVar7 + -0x68) = 0x441a442;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
      *(undefined8 *)((long)puVar7 + -0x68) = 0x441a44e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      *(undefined8 *)((long)puVar7 + -0x68) = 0x441a45a;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      *(undefined8 *)((long)puVar7 + -0x68) = 0x441a466;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
      *(undefined8 *)((long)puVar7 + -0x68) = 0x441a472;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      *(undefined8 *)((long)puVar7 + -0x68) = 0x441a47e;
      il2cpp_runtime_helper_023445d0(&TypeRef_MapEditorAddObjectPanel);
      g_data_057ae630 = '\x01';
    }
    *(undefined8 *)((long)puVar7 + -0x60) = 0;
    *(undefined8 *)((long)puVar7 + -0x58) = 0;
    *(undefined8 *)((long)puVar7 + -0x50) = 0;
    pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar9 + 0x78);
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      *(undefined8 *)((long)puVar7 + -0x68) = 0x441a4b1;
      __this_01 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar4,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
      if (__this_01 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
        *(undefined8 *)((long)puVar7 + -0x68) = 0x441a4cf;
        System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                   ((long)puVar7 + -0x60),__this_01,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
        while( true ) {
          *(undefined8 *)((long)puVar7 + -0x68) = 0x441a4ec;
          bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)
                             *(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__Fields
                               *)((long)puVar7 + -0x60),(MethodInfo_3251B20 *)((long)puVar7 + -0x60));
          handle = TypeRef_MapEditorAddObjectPanel;
          if ((char)bVar5 == '\0') {
            *(undefined8 *)((long)puVar7 + -0x68) = 0x441a553;
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)
                       *(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__Fields *
                        )((long)puVar7 + -0x60),(MethodInfo_3251B10 *)((long)puVar7 + -0x60));
            return;
          }
          pIVar1 = *(Il2CppObject **)((long)puVar7 + -0x50);
          pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar9 + 0x50);
          if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
            *(undefined8 *)((long)puVar7 + -0x68) = 0x441a51f;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)puVar7 + -0x68) = 0x441a529;
          value = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
          *(undefined8 *)((long)puVar7 + -0x68) = 0x441a53f;
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar4,pIVar1,(Il2CppObject *)value,MethodInfo_Void_Add);
        }
        *(undefined8 *)((long)puVar7 + -0x68) = 0x441a567;
        il2cpp_runtime_helper_022b2c90();
      }
    }
    *(undefined8 *)((long)puVar7 + -0x68) = 0x441a56c;
    auVar12 = il2cpp_runtime_helper_022b2c90();
    if (auVar12._8_4_ == 1) {
      *(undefined8 *)((long)puVar7 + -0x68) = 0x441a59a;
      plVar6 = (long *)__cxa_begin_catch(auVar12._0_8_);
      lVar9 = *plVar6;
      *(undefined8 *)((long)puVar7 + -0x68) = 0x441a5a2;
      __cxa_end_catch();
      *(undefined8 *)((long)puVar7 + -0x68) = 0x441a5b4;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)
                 *(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__Fields *)
                  ((long)puVar7 + -0x60),(MethodInfo_3251B10 *)((long)puVar7 + -0x60));
      if (lVar9 == 0) {
        return;
      }
      *(undefined8 *)((long)puVar7 + -0x68) = 0x441a5c1;
      il2cpp_runtime_helper_022fefe0(lVar9);
    }
    *(undefined8 *)((long)puVar7 + -0x68) = 0x441a5da;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)
               *(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__Fields *)
                ((long)puVar7 + -0x60),(MethodInfo_3251B10 *)((long)puVar7 + -0x60));
    *(undefined8 *)((long)puVar7 + -0x68) = 0x441a5e7;
    _Unwind_Resume(auVar12._0_8_);
  }
  pIVar1 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  *(undefined8 *)((long)puVar7 + -0x20) = 0x441a39a;
  Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)__this_00,pIVar1,MethodInfo_Void_set_Value);
  unaff_R15 = (pUVar10->fields)._searchInput;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)puVar7 + -0x20) = 0x441a3b9;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)puVar7 + -0x20) = 0x441a3c5;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)unaff_R15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar2 = (pUVar10->fields)._searchInput;
    if (pUVar2 == (UI_InputSettingElement_o *)0x0) goto label_0441a403;
    pMVar3 = (pUVar2->klass->vtable)._6_SyncElement.method;
    vtableDispatch = (pUVar2->klass->vtable)._6_SyncElement.methodPtr;
    *(undefined8 *)((long)puVar7 + -0x20) = 0x441a3e5;
    (*vtableDispatch)(pUVar2,pMVar3);
  }
  vtableDispatch = (pUVar10->klass->vtable)._28_SetCategoryPanel.methodPtr;
  (*vtableDispatch)
            (pUVar10,pSVar8,(pUVar10->klass->vtable)._28_SetCategoryPanel.method,vtableDispatch);
  return;
}


// UI.MapEditorAddObjectPopup.<>c__DisplayClass21_1$$.ctor
// il2cpp: void UI_MapEditorAddObjectPopup___c__DisplayClass21_1___ctor (UI_MapEditorAddObjectPopup___c__DisplayClass21_1_o* __this, const MethodInfo* method);
// 0x441a310

void UI_MapEditorAddObjectPopup___c__DisplayClass21_1___ctor
               (UI_MapEditorAddObjectPopup___c__DisplayClass21_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddObjectPopup.<>c__DisplayClass21_1$$<SetupTopButtons>b__1
// il2cpp: void UI_MapEditorAddObjectPopup___c__DisplayClass21_1___SetupTopButtons_b__1 (UI_MapEditorAddObjectPopup___c__DisplayClass21_1_o* __this, const MethodInfo* method);
// 0x441a720

void UI_MapEditorAddObjectPopup___c__DisplayClass21_1___SetupTopButtons_b__1
               (UI_MapEditorAddObjectPopup___c__DisplayClass21_1_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  Il2CppObject *pIVar1;
  UI_InputSettingElement_o *pUVar2;
  MethodInfo *pMVar3;
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar5;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_01;
  System_Type_o *value;
  long *plVar6;
  undefined8 unaff_RBX;
  undefined1 *puVar7;
  undefined8 unaff_RBP;
  System_String_o *pSVar8;
  UI_MapEditorAddObjectPopup_o *pUVar9;
  long lVar10;
  UI_MapEditorAddObjectPopup_o *pUVar11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  UI_InputSettingElement_o *unaff_R15;
  undefined1 auVar12 [12];
  undefined1 auStack_8 [8];
  
  puVar7 = auStack_8;
  pUVar11 = (__this->fields).__4__this;
  if (pUVar11 == (UI_MapEditorAddObjectPopup_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pUVar9 = (UI_MapEditorAddObjectPopup_o *)(pUVar11->fields).m_CancellationTokenSource;
    if (pUVar9 == (UI_MapEditorAddObjectPopup_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae633 == '\0') {
        il2cpp_runtime_helper_023445d0(&"Choose Variant");
        g_data_057ae633 = '\x01';
      }
      return;
    }
    pSVar8 = (System_String_o *)(pUVar11->fields).m_CachedPtr;
  }
  else {
    pSVar8 = (__this->fields).buttonName;
    puVar7 = (undefined1 *)register0x00000020;
    pUVar9 = pUVar11;
  }
  *(UI_InputSettingElement_o **)(puVar7 + -8) = unaff_R15;
  *(undefined8 *)(puVar7 + -0x10) = unaff_R14;
  *(undefined8 *)(puVar7 + -0x18) = unaff_RBX;
  if (g_data_057ae62f == '\0') {
    *(undefined8 *)(puVar7 + -0x20) = 0x441a350;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)(puVar7 + -0x20) = 0x441a35c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae62f = '\x01';
  }
  __this_00 = (pUVar9->fields).Search;
  if (__this_00 == (Settings_StringSetting_o *)0x0) {
label_0441a403:
    lVar10 = 0;
    *(undefined8 *)(puVar7 + -0x20) = 0x441a408;
    il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)(puVar7 + -0x20) = unaff_RBP;
    *(UI_InputSettingElement_o **)(puVar7 + -0x28) = unaff_R15;
    *(System_String_o **)(puVar7 + -0x30) = pSVar8;
    *(undefined8 *)(puVar7 + -0x38) = unaff_R13;
    *(undefined8 *)(puVar7 + -0x40) = unaff_R12;
    *(UI_MapEditorAddObjectPopup_o **)(puVar7 + -0x48) = pUVar9;
    if (g_data_057ae630 == '\0') {
      *(undefined8 *)(puVar7 + -0x68) = 0x441a436;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      *(undefined8 *)(puVar7 + -0x68) = 0x441a442;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
      *(undefined8 *)(puVar7 + -0x68) = 0x441a44e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      *(undefined8 *)(puVar7 + -0x68) = 0x441a45a;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      *(undefined8 *)(puVar7 + -0x68) = 0x441a466;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
      *(undefined8 *)(puVar7 + -0x68) = 0x441a472;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      *(undefined8 *)(puVar7 + -0x68) = 0x441a47e;
      il2cpp_runtime_helper_023445d0(&TypeRef_MapEditorAddObjectPanel);
      g_data_057ae630 = '\x01';
    }
    *(undefined8 *)(puVar7 + -0x60) = 0;
    *(undefined8 *)(puVar7 + -0x58) = 0;
    *(undefined8 *)(puVar7 + -0x50) = 0;
    pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar10 + 0x78);
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      *(undefined8 *)(puVar7 + -0x68) = 0x441a4b1;
      __this_01 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar4,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
      if (__this_01 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
        *(undefined8 *)(puVar7 + -0x68) = 0x441a4cf;
        System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                   (puVar7 + -0x60),__this_01,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
        while( true ) {
          *(undefined8 *)(puVar7 + -0x68) = 0x441a4ec;
          bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)
                             *(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__Fields
                               *)(puVar7 + -0x60),(MethodInfo_3251B20 *)(puVar7 + -0x60));
          handle = TypeRef_MapEditorAddObjectPanel;
          if ((char)bVar5 == '\0') {
            *(undefined8 *)(puVar7 + -0x68) = 0x441a553;
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                      ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)
                       *(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__Fields *
                        )(puVar7 + -0x60),(MethodInfo_3251B10 *)(puVar7 + -0x60));
            return;
          }
          pIVar1 = *(Il2CppObject **)(puVar7 + -0x50);
          pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar10 + 0x50);
          if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
            *(undefined8 *)(puVar7 + -0x68) = 0x441a51f;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar7 + -0x68) = 0x441a529;
          value = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
          *(undefined8 *)(puVar7 + -0x68) = 0x441a53f;
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar4,pIVar1,(Il2CppObject *)value,MethodInfo_Void_Add);
        }
        *(undefined8 *)(puVar7 + -0x68) = 0x441a567;
        il2cpp_runtime_helper_022b2c90();
      }
    }
    *(undefined8 *)(puVar7 + -0x68) = 0x441a56c;
    auVar12 = il2cpp_runtime_helper_022b2c90();
    if (auVar12._8_4_ == 1) {
      *(undefined8 *)(puVar7 + -0x68) = 0x441a59a;
      plVar6 = (long *)__cxa_begin_catch(auVar12._0_8_);
      lVar10 = *plVar6;
      *(undefined8 *)(puVar7 + -0x68) = 0x441a5a2;
      __cxa_end_catch();
      *(undefined8 *)(puVar7 + -0x68) = 0x441a5b4;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)
                 *(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__Fields *)
                  (puVar7 + -0x60),(MethodInfo_3251B10 *)(puVar7 + -0x60));
      if (lVar10 == 0) {
        return;
      }
      *(undefined8 *)(puVar7 + -0x68) = 0x441a5c1;
      il2cpp_runtime_helper_022fefe0(lVar10);
    }
    *(undefined8 *)(puVar7 + -0x68) = 0x441a5da;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)
               *(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__Fields *)
                (puVar7 + -0x60),(MethodInfo_3251B10 *)(puVar7 + -0x60));
    *(undefined8 *)(puVar7 + -0x68) = 0x441a5e7;
    _Unwind_Resume(auVar12._0_8_);
  }
  pIVar1 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  *(undefined8 *)(puVar7 + -0x20) = 0x441a39a;
  Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)__this_00,pIVar1,MethodInfo_Void_set_Value);
  unaff_R15 = (pUVar9->fields)._searchInput;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)(puVar7 + -0x20) = 0x441a3b9;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar7 + -0x20) = 0x441a3c5;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)unaff_R15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar2 = (pUVar9->fields)._searchInput;
    if (pUVar2 == (UI_InputSettingElement_o *)0x0) goto label_0441a403;
    pMVar3 = (pUVar2->klass->vtable)._6_SyncElement.method;
    vtableDispatch = (pUVar2->klass->vtable)._6_SyncElement.methodPtr;
    *(undefined8 *)(puVar7 + -0x20) = 0x441a3e5;
    (*vtableDispatch)(pUVar2,pMVar3);
  }
  vtableDispatch = (pUVar9->klass->vtable)._28_SetCategoryPanel.methodPtr;
  (*vtableDispatch)
            (pUVar9,pSVar8,(pUVar9->klass->vtable)._28_SetCategoryPanel.method,vtableDispatch);
  return;
}


// UI.MapEditorAddObjectPopup.<>c__DisplayClass21_2$$.ctor
// il2cpp: void UI_MapEditorAddObjectPopup___c__DisplayClass21_2___ctor (UI_MapEditorAddObjectPopup___c__DisplayClass21_2_o* __this, const MethodInfo* method);
// 0x441a320

void UI_MapEditorAddObjectPopup___c__DisplayClass21_2___ctor
               (UI_MapEditorAddObjectPopup___c__DisplayClass21_2_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddObjectPopup.<>c__DisplayClass21_2$$<SetupTopButtons>b__2
// il2cpp: void UI_MapEditorAddObjectPopup___c__DisplayClass21_2___SetupTopButtons_b__2 (UI_MapEditorAddObjectPopup___c__DisplayClass21_2_o* __this, const MethodInfo* method);
// 0x441a740

void UI_MapEditorAddObjectPopup___c__DisplayClass21_2___SetupTopButtons_b__2
               (UI_MapEditorAddObjectPopup___c__DisplayClass21_2_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  UI_MapEditorAddObjectPopup_o *pUVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar4;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  System_Type_o *value;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar8;
  Il2CppMethodPointer vtableDispatch;
  Il2CppObject *pIVar9;
  Il2CppObject *key;
  
  pUVar2 = (__this->fields).__4__this;
  if (pUVar2 == (UI_MapEditorAddObjectPopup_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae633 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Choose Variant");
      g_data_057ae633 = '\x01';
    }
    return;
  }
  pSVar3 = (__this->fields).buttonName;
  if (g_data_057ae62f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae62f = '\x01';
  }
  __this_00 = (pUVar2->fields).Search;
  if (__this_00 == (Settings_StringSetting_o *)0x0) {
label_0441a403:
    lVar6 = 0;
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae630 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      il2cpp_runtime_helper_023445d0(&TypeRef_MapEditorAddObjectPanel);
      g_data_057ae630 = '\x01';
    }
    pSVar8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    vtableDispatch = (Il2CppMethodPointer)0x0;
    pIVar9 = (Il2CppObject *)0x0;
    if ((*(System_Collections_Generic_Dictionary_object__object__o **)(lVar6 + 0x78) !=
         (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_06 = System_Collections_Generic_Dictionary_object__object___get_Keys
                              (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar6 + 0x78),
                               MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni),
       __this_06 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 &stack0xffffffffffffffa0,__this_06,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      key = pIVar9;
      while( true ) {
        __this_02.fields._8_8_ = vtableDispatch;
        __this_02.fields._dictionary = pSVar8;
        __this_02.fields._currentKey = key;
        bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                          (__this_02,(MethodInfo_3251B20 *)&stack0xffffffffffffffa0);
        handle = TypeRef_MapEditorAddObjectPanel;
        if ((char)bVar4 == '\0') {
          __this_03.fields._8_8_ = vtableDispatch;
          __this_03.fields._dictionary = pSVar8;
          __this_03.fields._currentKey = key;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                    (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffffa0);
          return;
        }
        __this_01 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar6 + 0x50);
        pIVar9 = key;
        if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        value = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary_object__object___Add
                  (__this_01,key,(Il2CppObject *)value,MethodInfo_Void_Add);
        key = pIVar9;
      }
      il2cpp_runtime_helper_022b2c90();
    }
    auVar7 = il2cpp_runtime_helper_022b2c90();
    if (auVar7._8_4_ == 1) {
      plVar5 = (long *)__cxa_begin_catch(auVar7._0_8_);
      lVar6 = *plVar5;
      __cxa_end_catch();
      __this_04.fields._8_8_ = vtableDispatch;
      __this_04.fields._dictionary = pSVar8;
      __this_04.fields._currentKey = pIVar9;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_04,(MethodInfo_3251B10 *)&stack0xffffffffffffffa0);
      if (lVar6 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar6);
    }
    __this_05.fields._8_8_ = vtableDispatch;
    __this_05.fields._dictionary = pSVar8;
    __this_05.fields._currentKey = pIVar9;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_05,(MethodInfo_3251B10 *)&stack0xffffffffffffffa0);
    _Unwind_Resume(auVar7._0_8_);
  }
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
             MethodInfo_Void_set_Value);
  pUVar1 = (pUVar2->fields)._searchInput;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar1 = (pUVar2->fields)._searchInput;
    if (pUVar1 == (UI_InputSettingElement_o *)0x0) goto label_0441a403;
    (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)(pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
  }
  vtableDispatch = (pUVar2->klass->vtable)._28_SetCategoryPanel.methodPtr;
  (*vtableDispatch)
            (pUVar2,pSVar3,(pUVar2->klass->vtable)._28_SetCategoryPanel.method,vtableDispatch);
  return;
}


// UI.MapEditorAddObjectPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorAddObjectPopup__get_Title (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x4419110

System_String_o *
UI_MapEditorAddObjectPopup__get_Title(UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.MapEditorAddObjectPopup$$get_Width
// il2cpp: float UI_MapEditorAddObjectPopup__get_Width (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x4419130

float UI_MapEditorAddObjectPopup__get_Width(UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  return 1155.0;
}


// UI.MapEditorAddObjectPopup$$get_Height
// il2cpp: float UI_MapEditorAddObjectPopup__get_Height (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x4419140

float UI_MapEditorAddObjectPopup__get_Height(UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  return 865.0;
}


// UI.MapEditorAddObjectPopup$$get_CategoryPanel
// il2cpp: bool UI_MapEditorAddObjectPopup__get_CategoryPanel (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x4419150

bool_conflict
UI_MapEditorAddObjectPopup__get_CategoryPanel(UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorAddObjectPopup$$get_CategoryButtons
// il2cpp: bool UI_MapEditorAddObjectPopup__get_CategoryButtons (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x4419160

bool_conflict
UI_MapEditorAddObjectPopup__get_CategoryButtons(UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorAddObjectPopup$$get_TopBarHeight
// il2cpp: float UI_MapEditorAddObjectPopup__get_TopBarHeight (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x4419170

float UI_MapEditorAddObjectPopup__get_TopBarHeight(UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  return 65.0;
}


// UI.MapEditorAddObjectPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_MapEditorAddObjectPopup__get_DefaultCategoryPanel (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x4419180

System_String_o *
UI_MapEditorAddObjectPopup__get_DefaultCategoryPanel(UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae62a == '\0') {
    il2cpp_runtime_helper_023445d0(&"General");
    g_data_057ae62a = '\x01';
  }
  return "General";
}


// UI.MapEditorAddObjectPopup$$get_TwoRows
// il2cpp: bool UI_MapEditorAddObjectPopup__get_TwoRows (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x44191b0

bool_conflict UI_MapEditorAddObjectPopup__get_TwoRows(UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.MapEditorAddObjectPopup$$Setup
// il2cpp: void UI_MapEditorAddObjectPopup__Setup (UI_MapEditorAddObjectPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x44191c0

void UI_MapEditorAddObjectPopup__Setup
               (UI_MapEditorAddObjectPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Settings_StringSetting_o *setting;
  char cVar2;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar4;
  UnityEngine_GameObject_o *__this_01;
  UI_InputSettingElement_o *pUVar5;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  
  if (g_data_057ae62b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__18_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__18_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Search");
    g_data_057ae62b = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,70.0,20.0,pSVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  setting = (__this->fields).Search;
  pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  __this_01 = UI_ElementFactory__CreateInputSetting
                        (pUVar1,__this_00,(Settings_BaseSetting_o *)setting,"Search","",200.0,
                         40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,pUVar4,
                         (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                         (MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = (UI_InputSettingElement_o *)UnityEngine_GameObject__GetComponent_object_(__this_01,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    (__this->fields)._searchInput = pUVar5;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._searchInput,pUVar5);
    pUVar5 = (__this->fields)._searchInput;
    if (pUVar5 != (UI_InputSettingElement_o *)0x0) {
      pUVar6 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
      if (pUVar6 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar6,5.0,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).BottomBar;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar3 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar3,0.0,pUVar4,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).BottomBar;
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar6 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                   UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar1,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup)
          ;
          fVar9 = (float)(*(__this->klass->vtable)._5_get_Width.methodPtr)(__this);
          if (pUVar6 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
            UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
                      (pUVar6,fVar9 + -365.0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae62c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Buildings");
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"Geometry");
    il2cpp_runtime_helper_023445d0(&"FX");
    il2cpp_runtime_helper_023445d0(&"Nature");
    il2cpp_runtime_helper_023445d0(&"Arenas");
    il2cpp_runtime_helper_023445d0(&"Interact");
    il2cpp_runtime_helper_023445d0(&"Decor");
    il2cpp_runtime_helper_023445d0(&"All");
    il2cpp_runtime_helper_023445d0(&"Terrain");
    g_data_057ae62c = '\x01';
  }
  plVar8 = TypeInfo_string;
  lVar7 = il2cpp_runtime_helper_022b2a40(TypeInfo_string,0xb);
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) != 0) {
      plVar8 = (long *)(lVar7 + 0x20);
      *(undefined8 *)(lVar7 + 0x20) = "All";
      il2cpp_runtime_helper_022b4080();
      if (1 < *(uint *)(lVar7 + 0x18)) {
        plVar8 = (long *)(lVar7 + 0x28);
        *(undefined8 *)(lVar7 + 0x28) = "General";
        il2cpp_runtime_helper_022b4080();
        if (2 < *(uint *)(lVar7 + 0x18)) {
          plVar8 = (long *)(lVar7 + 0x30);
          *(undefined8 *)(lVar7 + 0x30) = "Interact";
          il2cpp_runtime_helper_022b4080();
          if (3 < *(uint *)(lVar7 + 0x18)) {
            plVar8 = (long *)(lVar7 + 0x38);
            *(undefined8 *)(lVar7 + 0x38) = "Geometry";
            il2cpp_runtime_helper_022b4080();
            if (4 < *(uint *)(lVar7 + 0x18)) {
              plVar8 = (long *)(lVar7 + 0x40);
              *(undefined8 *)(lVar7 + 0x40) = "Buildings";
              il2cpp_runtime_helper_022b4080();
              if (5 < *(uint *)(lVar7 + 0x18)) {
                plVar8 = (long *)(lVar7 + 0x48);
                *(undefined8 *)(lVar7 + 0x48) = "Nature";
                il2cpp_runtime_helper_022b4080();
                if (6 < *(uint *)(lVar7 + 0x18)) {
                  plVar8 = (long *)(lVar7 + 0x50);
                  *(undefined8 *)(lVar7 + 0x50) = "Decor";
                  il2cpp_runtime_helper_022b4080();
                  if (7 < *(uint *)(lVar7 + 0x18)) {
                    plVar8 = (long *)(lVar7 + 0x58);
                    *(undefined8 *)(lVar7 + 0x58) = "Arenas";
                    il2cpp_runtime_helper_022b4080();
                    if (8 < *(uint *)(lVar7 + 0x18)) {
                      plVar8 = (long *)(lVar7 + 0x60);
                      *(undefined8 *)(lVar7 + 0x60) = "Terrain";
                      il2cpp_runtime_helper_022b4080();
                      if (9 < *(uint *)(lVar7 + 0x18)) {
                        plVar8 = (long *)(lVar7 + 0x68);
                        *(undefined8 *)(lVar7 + 0x68) = "FX";
                        il2cpp_runtime_helper_022b4080();
                        if (10 < *(uint *)(lVar7 + 0x18)) {
                          *(undefined8 *)(lVar7 + 0x70) = "Custom";
                          il2cpp_runtime_helper_022b4080(lVar7 + 0x70);
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
  il2cpp_runtime_helper_022b2c90();
  cVar2 = (**(code **)(*plVar8 + 0x4e8))();
  if (cVar2 == '\0') {
    return;
  }
  return;
}


// UI.MapEditorAddObjectPopup$$GetCategories
// il2cpp: System_String_array* UI_MapEditorAddObjectPopup__GetCategories (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x4419470

System_String_array *
UI_MapEditorAddObjectPopup__GetCategories(UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  char cVar1;
  System_String_array *pSVar2;
  System_String_o **ppSVar3;
  
  if (g_data_057ae62c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Buildings");
    il2cpp_runtime_helper_023445d0(&"Custom");
    il2cpp_runtime_helper_023445d0(&"Geometry");
    il2cpp_runtime_helper_023445d0(&"FX");
    il2cpp_runtime_helper_023445d0(&"Nature");
    il2cpp_runtime_helper_023445d0(&"Arenas");
    il2cpp_runtime_helper_023445d0(&"Interact");
    il2cpp_runtime_helper_023445d0(&"Decor");
    il2cpp_runtime_helper_023445d0(&"All");
    il2cpp_runtime_helper_023445d0(&"Terrain");
    g_data_057ae62c = '\x01';
  }
  ppSVar3 = TypeInfo_string;
  pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,0xb);
  if (pSVar2 != (System_String_array *)0x0) {
    if ((int)pSVar2->max_length != 0) {
      ppSVar3 = pSVar2->m_Items;
      pSVar2->m_Items[0] = "All";
      il2cpp_runtime_helper_022b4080();
      if (1 < (uint)pSVar2->max_length) {
        ppSVar3 = pSVar2->m_Items + 1;
        pSVar2->m_Items[1] = "General";
        il2cpp_runtime_helper_022b4080();
        if (2 < (uint)pSVar2->max_length) {
          ppSVar3 = pSVar2->m_Items + 2;
          pSVar2->m_Items[2] = "Interact";
          il2cpp_runtime_helper_022b4080();
          if (3 < (uint)pSVar2->max_length) {
            ppSVar3 = pSVar2->m_Items + 3;
            pSVar2->m_Items[3] = "Geometry";
            il2cpp_runtime_helper_022b4080();
            if (4 < (uint)pSVar2->max_length) {
              ppSVar3 = pSVar2->m_Items + 4;
              pSVar2->m_Items[4] = "Buildings";
              il2cpp_runtime_helper_022b4080();
              if (5 < (uint)pSVar2->max_length) {
                ppSVar3 = pSVar2->m_Items + 5;
                pSVar2->m_Items[5] = "Nature";
                il2cpp_runtime_helper_022b4080();
                if (6 < (uint)pSVar2->max_length) {
                  ppSVar3 = pSVar2->m_Items + 6;
                  pSVar2->m_Items[6] = "Decor";
                  il2cpp_runtime_helper_022b4080();
                  if (7 < (uint)pSVar2->max_length) {
                    ppSVar3 = pSVar2->m_Items + 7;
                    pSVar2->m_Items[7] = "Arenas";
                    il2cpp_runtime_helper_022b4080();
                    if (8 < (uint)pSVar2->max_length) {
                      ppSVar3 = pSVar2->m_Items + 8;
                      pSVar2->m_Items[8] = "Terrain";
                      il2cpp_runtime_helper_022b4080();
                      if (9 < (uint)pSVar2->max_length) {
                        ppSVar3 = pSVar2->m_Items + 9;
                        pSVar2->m_Items[9] = "FX";
                        il2cpp_runtime_helper_022b4080();
                        if (10 < (uint)pSVar2->max_length) {
                          pSVar2->m_Items[10] = "Custom";
                          il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 10);
                          return pSVar2;
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
  pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2c90();
  cVar1 = (*(*ppSVar3)[0x34].monitor)();
  if (cVar1 == '\0') {
    return pSVar2;
  }
  return pSVar2;
}


// UI.MapEditorAddObjectPopup$$GetPanelVerticalOffset
// il2cpp: float UI_MapEditorAddObjectPopup__GetPanelVerticalOffset (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x44196b0

float UI_MapEditorAddObjectPopup__GetPanelVerticalOffset
                (UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  char cVar1;
  
  cVar1 = (*(__this->klass->vtable)._59_get_TwoRows.methodPtr)
                    (__this,(__this->klass->vtable)._59_get_TwoRows.method);
  if (cVar1 == '\0') {
    return 0.0;
  }
  return -32.5;
}


// UI.MapEditorAddObjectPopup$$SetupTopButtons
// il2cpp: void UI_MapEditorAddObjectPopup__SetupTopButtons (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x44196e0

void UI_MapEditorAddObjectPopup__SetupTopButtons(UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  char cVar3;
  bool_conflict bVar4;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_09;
  UnityEngine_Object_o *obj;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar6;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *items;
  System_Collections_Generic_List_List_T___o *__this_10;
  System_Collections_Generic_List_object__o *pSVar7;
  Il2CppObject *pIVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Events_UnityAction_o *pUVar10;
  UnityEngine_GameObject_o *__this_11;
  Il2CppObject *pIVar11;
  long *plVar12;
  MethodInfo *method_00;
  UI_MapEditorAddObjectPopup_o *pUVar13;
  Il2CppClass *pIVar14;
  ulong uVar15;
  undefined1 auVar16 [12];
  _union_249689 _Var17;
  Il2CppMethodPointer pIVar18;
  Il2CppClass *pIVar19;
  UnityEngine_GameObject_o *pUStack_70;
  UnityEngine_GameObject_o *pUStack_60;
  _union_249689 _Stack_48;
  Il2CppMethodPointer pIStack_40;
  Il2CppClass *pIStack_38;
  
  if (g_data_057ae62d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupTopButtons_b__2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_List_1_System_String_GroupBuckets_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae62d = '\x01';
  }
  _Var17.genericMethod = (Il2CppMethodPointer)0x0;
  pIVar18 = (Il2CppMethodPointer)0x0;
  pIVar19 = (Il2CppClass *)0x0;
  themePanel = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_09 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_09,0x14,120.0,20.0,themePanel,(MethodInfo *)0x0);
  cVar3 = (*(__this->klass->vtable)._59_get_TwoRows.methodPtr)(__this);
  if (cVar3 == '\0') {
    pUVar5 = (UnityEngine_GameObject_o *)(*(__this->klass->vtable)._60_GetCategories.methodPtr)(__this);
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      if (0 < *(int *)&pUVar5[1].klass) {
        uVar15 = 0;
        do {
          pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_2);
          System_Object___ctor(pIVar8,(MethodInfo *)0x0);
          pUStack_70 = pUVar5;
          if (pIVar8 == (Il2CppObject *)0x0) goto label_04419ead;
          pIVar8[1].monitor = __this;
          il2cpp_runtime_helper_022b4080(&pIVar8[1].monitor);
          if (*(uint *)&pUVar5[1].klass <= uVar15) goto label_04419eb2;
          pIVar8[1].klass = (&pUVar5[1].monitor)[uVar15];
          il2cpp_runtime_helper_022b4080(pIVar8 + 1);
          pUVar9 = (__this->fields).TopBar;
          pIVar14 = pIVar8[1].klass;
          pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          __this_11 = UI_ElementFactory__CreateCategoryButton
                                (pUVar9,__this_09,(System_String_o *)pIVar14,pUVar10,(MethodInfo *)0x0);
          if (__this_11 == (UnityEngine_GameObject_o *)0x0) goto label_04419ead;
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
          pIVar14 = pIVar8[1].klass;
          pIVar8 = UnityEngine_GameObject__GetComponent_object_(__this_11,MethodInfo_Button_GetComponent_Button);
          if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04419ead;
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar1,(Il2CppObject *)pIVar14,pIVar8,MethodInfo_Void_Add);
          uVar15 = uVar15 + 1;
        } while ((long)uVar15 < (long)*(int *)&pUVar5[1].klass);
      }
      UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pUVar9 = (__this->fields).TopBar;
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      obj = (UnityEngine_Object_o *)
            UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar9,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__DestroyImmediate_4e01e00(obj,(MethodInfo *)0x0);
      pUVar9 = (__this->fields).TopBar;
      if (((pUVar9 != (UnityEngine_Transform_o *)0x0) &&
          (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0)
          , pUVar5 != (UnityEngine_GameObject_o *)0x0)) &&
         (pUVar6 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                   UnityEngine_GameObject__AddComponent_object_(pUVar5,MethodInfo_VerticalLayoutGroup_AddComponent_VerticalLayoutGroup),
         pUVar6 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)) {
        UnityEngine_UI_LayoutGroup__set_childAlignment
                  ((UnityEngine_UI_LayoutGroup_o *)pUVar6,4,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight(pUVar6,1,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth(pUVar6,1,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight(pUVar6,1,(MethodInfo *)0x0)
        ;
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth(pUVar6,1,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)0x0;
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar6,-30.0,(MethodInfo *)0x0);
        pUStack_60 = UI_MapEditorAddObjectPopup__CreateRow(__this,method_00);
        pUStack_70 = UI_MapEditorAddObjectPopup__CreateRow(__this,method_00);
        source = (System_Collections_Generic_IEnumerable_TSource__o *)
                 (*(__this->klass->vtable)._60_GetCategories.methodPtr)
                           (__this,(__this->klass->vtable)._60_GetCategories.method);
        items = System_Linq_Enumerable__ToList_object_(source,MethodInfo_List_1_System_String_ToList_String);
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_10 = Utility_Util__GroupBuckets_object_
                              ((System_Collections_Generic_List_T__o *)items,2,MethodInfo_List_1_List_1_System_String_GroupBuckets_String);
        if ((__this_10 != (System_Collections_Generic_List_List_T___o *)0x0) &&
           (pSVar7 = (System_Collections_Generic_List_object__o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_10,0,MethodInfo_List_1_System_String_get_Item),
           pSVar7 != (System_Collections_Generic_List_object__o *)0x0)) {
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_48,pSVar7,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
          _Var17 = _Stack_48;
          pIVar18 = pIStack_40;
          pIVar19 = pIStack_38;
          if (pUStack_60 == (UnityEngine_GameObject_o *)0x0) {
            __this_01.fields._8_8_ = pIStack_40;
            __this_01.fields._list = _Stack_48.genericMethod;
            __this_01.fields._current = (Il2CppObject *)pIStack_38;
            bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
            if ((char)bVar4 != '\0') goto label_04419ecb;
          }
          else {
            while (__this_00.fields._8_8_ = pIVar18, __this_00.fields._list = _Var17.genericMethod,
                  __this_00.fields._current = (Il2CppObject *)pIVar19,
                  bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78),
                  (char)bVar4 != '\0') {
              pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
              System_Object___ctor(pIVar8,(MethodInfo *)0x0);
              if (pIVar8 == (Il2CppObject *)0x0) goto label_04419ef1;
              pIVar8[1].monitor = __this;
              il2cpp_runtime_helper_022b4080(&pIVar8[1].monitor,__this);
              pIVar11 = pIVar8 + 1;
              pIVar8[1].klass = pIVar19;
              il2cpp_runtime_helper_022b4080(pIVar11);
              pUVar9 = UnityEngine_GameObject__get_transform(pUStack_60,(MethodInfo *)0x0);
              pIVar14 = pIVar11->klass;
              pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              pUVar5 = UI_ElementFactory__CreateCategoryButton
                                 (pUVar9,__this_09,(System_String_o *)pIVar14,pUVar10,(MethodInfo *)0x0);
              if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_04419ebc;
              pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons
              ;
              pIVar14 = pIVar11->klass;
              pIVar8 = UnityEngine_GameObject__GetComponent_object_(pUVar5,MethodInfo_Button_GetComponent_Button);
              if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04419eb7;
              System_Collections_Generic_Dictionary_object__object___Add
                        (pSVar1,(Il2CppObject *)pIVar14,pIVar8,MethodInfo_Void_Add);
            }
          }
          __this_02.fields._8_8_ = pIVar18;
          __this_02.fields._list = _Var17.genericMethod;
          __this_02.fields._current = (Il2CppObject *)pIVar19;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
          pSVar7 = (System_Collections_Generic_List_object__o *)
                   System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this_10,1,MethodInfo_List_1_System_String_get_Item);
          if (pSVar7 != (System_Collections_Generic_List_object__o *)0x0) {
            System_Collections_Generic_List_object___GetEnumerator
                      ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_48,pSVar7,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
            _Var17 = _Stack_48;
            pIVar18 = pIStack_40;
            pIVar19 = pIStack_38;
            if (pUStack_70 == (UnityEngine_GameObject_o *)0x0) {
              __this_04.fields._8_8_ = pIStack_40;
              __this_04.fields._list = _Stack_48.genericMethod;
              __this_04.fields._current = (Il2CppObject *)pIStack_38;
              bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
              _Var17 = _Stack_48;
              pIVar18 = pIStack_40;
              pIVar19 = pIStack_38;
              if ((char)bVar4 != '\0') goto label_04419ef6;
            }
            else {
              while (__this_03.fields._8_8_ = pIVar18, __this_03.fields._list = _Var17.genericMethod,
                    __this_03.fields._current = (Il2CppObject *)pIVar19,
                    bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                      (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78),
                    (char)bVar4 != '\0') {
                pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_1);
                pUVar13 = (UI_MapEditorAddObjectPopup_o *)0x0;
                System_Object___ctor(pIVar11,(MethodInfo *)0x0);
                pIVar8 = (Il2CppObject *)0x0;
                if (pIVar11 == (Il2CppObject *)0x0) goto label_04419f1c;
                pIVar11[1].monitor = __this;
                il2cpp_runtime_helper_022b4080(&pIVar11[1].monitor,__this);
                pIVar8 = pIVar11 + 1;
                pIVar11[1].klass = pIVar19;
                il2cpp_runtime_helper_022b4080(pIVar8);
                pUVar9 = UnityEngine_GameObject__get_transform(pUStack_70,(MethodInfo *)0x0);
                pIVar14 = pIVar8->klass;
                pUVar10 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                pUVar5 = UI_ElementFactory__CreateCategoryButton
                                   (pUVar9,__this_09,(System_String_o *)pIVar14,pUVar10,(MethodInfo *)0x0);
                if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_04419ec6;
                pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (__this->fields)._topButtons;
                pIVar14 = pIVar8->klass;
                pIVar8 = UnityEngine_GameObject__GetComponent_object_(pUVar5,MethodInfo_Button_GetComponent_Button);
                if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_04419ec1;
                System_Collections_Generic_Dictionary_object__object___Add
                          (pSVar1,(Il2CppObject *)pIVar14,pIVar8,MethodInfo_Void_Add);
              }
            }
            __this_05.fields._8_8_ = pIVar18;
            __this_05.fields._list = _Var17.genericMethod;
            __this_05.fields._current = (Il2CppObject *)pIVar19;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
            goto label_04419e3e;
          }
        }
      }
    }
  }
label_04419ead:
  do {
    il2cpp_runtime_helper_022b2c90();
label_04419eb2:
    il2cpp_runtime_helper_022b2ca0();
label_04419eb7:
    il2cpp_runtime_helper_022b2c90();
label_04419ebc:
    il2cpp_runtime_helper_022b2c90();
label_04419ec1:
    il2cpp_runtime_helper_022b2c90();
label_04419ec6:
    il2cpp_runtime_helper_022b2c90();
label_04419ecb:
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
    System_Object___ctor(pIVar8,(MethodInfo *)0x0);
    pUVar13 = __this;
    pIVar14 = pIVar19;
    if (pIVar8 == (Il2CppObject *)0x0) {
label_04419ef1:
      il2cpp_runtime_helper_022b2c90();
label_04419ef6:
      pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_1);
      System_Object___ctor(pIVar8,(MethodInfo *)0x0);
      pUVar13 = __this;
      pIVar14 = (Il2CppClass *)__this;
      if (pIVar8 == (Il2CppObject *)0x0) {
label_04419f1c:
        il2cpp_runtime_helper_022b2c90();
        pIVar14 = pIVar19;
        goto label_04419f21;
      }
    }
    else {
label_04419f21:
      pIVar8[1].monitor = pUVar13;
      il2cpp_runtime_helper_022b4080(&pIVar8[1].monitor);
      pIVar8[1].klass = pIVar14;
      pIVar19 = pIVar14;
      il2cpp_runtime_helper_022b4080(pIVar8 + 1);
      il2cpp_runtime_helper_022b2c90();
    }
    pIVar8[1].monitor = pIVar14;
    il2cpp_runtime_helper_022b4080(&pIVar8[1].monitor);
    pIVar8[1].klass = pIVar19;
    il2cpp_runtime_helper_022b4080(pIVar8 + 1);
    auVar16 = il2cpp_runtime_helper_022b2c90();
    if (auVar16._8_4_ != 1) {
      __this_07.fields._8_8_ = pIVar18;
      __this_07.fields._list = _Var17.genericMethod;
      __this_07.fields._current = (Il2CppObject *)pIVar19;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
label_0441a205:
      _Unwind_Resume(auVar16._0_8_);
    }
    plVar12 = (long *)__cxa_begin_catch(auVar16._0_8_);
    lVar2 = *plVar12;
    __cxa_end_catch();
    __this_06.fields._8_8_ = pIVar18;
    __this_06.fields._list = _Var17.genericMethod;
    __this_06.fields._current = (Il2CppObject *)pIVar19;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      __this_08.fields._8_8_ = pIVar18;
      __this_08.fields._list = _Var17.genericMethod;
      __this_08.fields._current = (Il2CppObject *)pIVar19;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
      goto label_0441a205;
    }
label_04419e3e:
    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
    if (((pUStack_60 != (UnityEngine_GameObject_o *)0x0) &&
        (pUVar6 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_(pUStack_60,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup),
        pUVar6 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)) &&
       ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar6,80.0,(MethodInfo *)0x0),
        pUStack_70 != (UnityEngine_GameObject_o *)0x0 &&
        (pUVar6 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                  UnityEngine_GameObject__GetComponent_object_(pUStack_70,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup),
        pUVar6 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0)))) {
      UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(pUVar6,80.0,(MethodInfo *)0x0);
      return;
    }
  } while( true );
}


// UI.MapEditorAddObjectPopup$$CreateRow
// il2cpp: UnityEngine_GameObject_o* UI_MapEditorAddObjectPopup__CreateRow (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x441a220

UnityEngine_GameObject_o *
UI_MapEditorAddObjectPopup__CreateRow(UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this_02;
  UnityEngine_GameObject_o *extraout_RAX;
  UnityEngine_GameObject_o *__this_03;
  
  if (g_data_057ae62e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    g_data_057ae62e = '\x01';
  }
  __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  __this_03 = __this_00;
  UnityEngine_GameObject___ctor_4dfc3c0(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_03 = __this_00;
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetParent(__this_01,(__this->fields).TopBar,(MethodInfo *)0x0);
      __this_03 = __this_00;
      __this_02 = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)
                  UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_HorizontalLayoutGroup_AddComponent_HorizontalLayoutGroup);
      if (__this_02 != (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) {
        UnityEngine_UI_LayoutGroup__set_childAlignment
                  ((UnityEngine_UI_LayoutGroup_o *)__this_02,4,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight(__this_02,1,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth(__this_02,1,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
                  (__this_02,0,(MethodInfo *)0x0);
        UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
                  (__this_02,0,(MethodInfo *)0x0);
        return __this_00;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
  return extraout_RAX;
}


// UI.MapEditorAddObjectPopup$$OnTopBarButtonClick
// il2cpp: void UI_MapEditorAddObjectPopup__OnTopBarButtonClick (UI_MapEditorAddObjectPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x441a330

void UI_MapEditorAddObjectPopup__OnTopBarButtonClick
               (UI_MapEditorAddObjectPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  System_Type_o *value;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  Il2CppMethodPointer vtableDispatch;
  Il2CppObject *pIVar7;
  Il2CppObject *key;
  
  if (g_data_057ae62f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae62f = '\x01';
  }
  __this_00 = (__this->fields).Search;
  if (__this_00 == (Settings_StringSetting_o *)0x0) {
label_0441a403:
    lVar4 = 0;
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae630 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      il2cpp_runtime_helper_023445d0(&TypeRef_MapEditorAddObjectPanel);
      g_data_057ae630 = '\x01';
    }
    pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    vtableDispatch = (Il2CppMethodPointer)0x0;
    pIVar7 = (Il2CppObject *)0x0;
    if ((*(System_Collections_Generic_Dictionary_object__object__o **)(lVar4 + 0x78) !=
         (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (__this_06 = System_Collections_Generic_Dictionary_object__object___get_Keys
                              (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar4 + 0x78),
                               MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni),
       __this_06 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                 &stack0xffffffffffffffa0,__this_06,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
      key = pIVar7;
      while( true ) {
        __this_02.fields._8_8_ = vtableDispatch;
        __this_02.fields._dictionary = pSVar6;
        __this_02.fields._currentKey = key;
        bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                          (__this_02,(MethodInfo_3251B20 *)&stack0xffffffffffffffa0);
        handle = TypeRef_MapEditorAddObjectPanel;
        if ((char)bVar2 == '\0') {
          __this_03.fields._8_8_ = vtableDispatch;
          __this_03.fields._dictionary = pSVar6;
          __this_03.fields._currentKey = key;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                    (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffffa0);
          return;
        }
        __this_01 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar4 + 0x50);
        pIVar7 = key;
        if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        value = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary_object__object___Add
                  (__this_01,key,(Il2CppObject *)value,MethodInfo_Void_Add);
        key = pIVar7;
      }
      il2cpp_runtime_helper_022b2c90();
    }
    auVar5 = il2cpp_runtime_helper_022b2c90();
    if (auVar5._8_4_ == 1) {
      plVar3 = (long *)__cxa_begin_catch(auVar5._0_8_);
      lVar4 = *plVar3;
      __cxa_end_catch();
      __this_04.fields._8_8_ = vtableDispatch;
      __this_04.fields._dictionary = pSVar6;
      __this_04.fields._currentKey = pIVar7;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_04,(MethodInfo_3251B10 *)&stack0xffffffffffffffa0);
      if (lVar4 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar4);
    }
    __this_05.fields._8_8_ = vtableDispatch;
    __this_05.fields._dictionary = pSVar6;
    __this_05.fields._currentKey = pIVar7;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_05,(MethodInfo_3251B10 *)&stack0xffffffffffffffa0);
    _Unwind_Resume(auVar5._0_8_);
  }
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
             MethodInfo_Void_set_Value);
  pUVar1 = (__this->fields)._searchInput;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields)._searchInput;
    if (pUVar1 == (UI_InputSettingElement_o *)0x0) goto label_0441a403;
    (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)(pUVar1,(pUVar1->klass->vtable)._6_SyncElement.method);
  }
  vtableDispatch = (__this->klass->vtable)._28_SetCategoryPanel.methodPtr;
  (*vtableDispatch)
            (__this,name,(__this->klass->vtable)._28_SetCategoryPanel.method,vtableDispatch);
  return;
}


// UI.MapEditorAddObjectPopup$$RegisterCategoryPanels
// il2cpp: void UI_MapEditorAddObjectPopup__RegisterCategoryPanels (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x441a410

void UI_MapEditorAddObjectPopup__RegisterCategoryPanels
               (UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_04;
  System_Type_o *value;
  long *plVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  Il2CppObject *pIVar8;
  Il2CppObject *key;
  
  if (g_data_057ae630 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeRef_MapEditorAddObjectPanel);
    g_data_057ae630 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  pIVar8 = (Il2CppObject *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
  if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_04 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar1,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni),
     __this_04 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffffb8,__this_04,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    key = pIVar8;
    while( true ) {
      __this_00.fields._8_8_ = pIVar7;
      __this_00.fields._dictionary = pSVar6;
      __this_00.fields._currentKey = key;
      bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                        (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffffb8);
      handle.fields.value = TypeRef_MapEditorAddObjectPanel.fields.value;
      if ((char)bVar3 == '\0') {
        __this_01.fields._8_8_ = pIVar7;
        __this_01.fields._dictionary = pSVar6;
        __this_01.fields._currentKey = key;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_01,(MethodInfo_3251B10 *)&stack0xffffffffffffffb8);
        return;
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes
      ;
      pIVar8 = key;
      if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,key,(Il2CppObject *)value,MethodInfo_Void_Add);
      key = pIVar8;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar7;
    __this_02.fields._dictionary = pSVar6;
    __this_02.fields._currentKey = pIVar8;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffffb8);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_03.fields._8_8_ = pIVar7;
  __this_03.fields._dictionary = pSVar6;
  __this_03.fields._currentKey = pIVar8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar5._0_8_);
}


// UI.MapEditorAddObjectPopup$$OnBottomBarButtonClick
// il2cpp: void UI_MapEditorAddObjectPopup__OnBottomBarButtonClick (UI_MapEditorAddObjectPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x441a600

void UI_MapEditorAddObjectPopup__OnBottomBarButtonClick
               (UI_MapEditorAddObjectPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  
  vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._22_Hide.method,method,vtableDispatch);
  return;
}


// UI.MapEditorAddObjectPopup$$.ctor
// il2cpp: void UI_MapEditorAddObjectPopup___ctor (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x441a620

void UI_MapEditorAddObjectPopup___ctor(UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  
  if (g_data_057ae631 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae631 = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Search = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Search);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddObjectPopup$$<Setup>b__18_0
// il2cpp: void UI_MapEditorAddObjectPopup___Setup_b__18_0 (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x441a6b0

void UI_MapEditorAddObjectPopup___Setup_b__18_0(UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorAddObjectPopup$$<Setup>b__18_1
// il2cpp: void UI_MapEditorAddObjectPopup___Setup_b__18_1 (UI_MapEditorAddObjectPopup_o* __this, const MethodInfo* method);
// 0x441a6c0

void UI_MapEditorAddObjectPopup___Setup_b__18_1(UI_MapEditorAddObjectPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (g_data_057ae632 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae632 = '\x01';
    in_RDX = extraout_RDX;
  }
  vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtableDispatch)(__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtableDispatch);
  return;
}


