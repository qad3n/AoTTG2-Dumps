// Type: UI.DropdownSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/DropdownSettingElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/DropdownSettingElement.cs
// --------------------------------

// UI.DropdownSettingElement.<>c__DisplayClass18_0$$.ctor
// il2cpp: void UI_DropdownSettingElement___c__DisplayClass18_0___ctor (UI_DropdownSettingElement___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x4391130

void UI_DropdownSettingElement___c__DisplayClass18_0___ctor
               (UI_DropdownSettingElement___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.DropdownSettingElement.<>c__DisplayClass18_0$$<CreateOptionButton>b__0
// il2cpp: void UI_DropdownSettingElement___c__DisplayClass18_0___CreateOptionButton_b__0 (UI_DropdownSettingElement___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x4391140

void UI_DropdownSettingElement___c__DisplayClass18_0___CreateOptionButton_b__0
               (UI_DropdownSettingElement___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined4 uVar1;
  UI_DropdownSettingElement_o *__this_00;
  
  uVar1 = SUB84(method,0);
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_DropdownSettingElement_o *)0x0) {
    vtableDispatch = (__this_00->klass->vtable)._8_OnDropdownOptionClick.methodPtr;
    (*vtableDispatch)
              (__this_00,(__this->fields).option,(ulong)(uint)(__this->fields).index,
               (__this_00->klass->vtable)._8_OnDropdownOptionClick.method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->fields).m_CachedPtr = uVar1;
  return;
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__21$$.ctor
// il2cpp: void UI_DropdownSettingElement__WaitAndCloseOptions_d__21___ctor (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4391170

void UI_DropdownSettingElement__WaitAndCloseOptions_d__21___ctor
               (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__21$$System.IDisposable.Dispose
// il2cpp: void UI_DropdownSettingElement__WaitAndCloseOptions_d__21__System_IDisposable_Dispose (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o* __this, const MethodInfo* method);
// 0x4391190

void UI_DropdownSettingElement__WaitAndCloseOptions_d__21__System_IDisposable_Dispose
               (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o *__this,MethodInfo *method)

{
  return;
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__21$$MoveNext
// il2cpp: bool UI_DropdownSettingElement__WaitAndCloseOptions_d__21__MoveNext (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o* __this, const MethodInfo* method);
// 0x43911a0

bool_conflict
UI_DropdownSettingElement__WaitAndCloseOptions_d__21__MoveNext
          (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *__this_00;
  bool_conflict bVar2;
  UI_DropdownSettingElement_o *__this_01;
  
  if (g_data_057ae2ab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForEndOfFrame);
    g_data_057ae2ab = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_01 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_01 == (UI_DropdownSettingElement_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)(__this_01->fields).m_CancellationTokenSource;
    }
    bVar2 = 0;
    UI_DropdownSettingElement__CloseOptions(__this_01,(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)__this_00,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_00;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    bVar2 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  else {
    bVar2 = 0;
  }
  return bVar2;
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__21$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_DropdownSettingElement__WaitAndCloseOptions_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o* __this, const MethodInfo* method);
// 0x4391240

Il2CppObject *
UI_DropdownSettingElement__WaitAndCloseOptions_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__21$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_DropdownSettingElement__WaitAndCloseOptions_d__21__System_Collections_IEnumerator_Reset (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o* __this, const MethodInfo* method);
// 0x4391250

void UI_DropdownSettingElement__WaitAndCloseOptions_d__21__System_Collections_IEnumerator_Reset
               (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// UI.DropdownSettingElement.<WaitAndCloseOptions>d__21$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_DropdownSettingElement__WaitAndCloseOptions_d__21__System_Collections_IEnumerator_get_Current (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o* __this, const MethodInfo* method);
// 0x4391290

Il2CppObject *
UI_DropdownSettingElement__WaitAndCloseOptions_d__21__System_Collections_IEnumerator_get_Current
          (UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__20$$.ctor
// il2cpp: void UI_DropdownSettingElement__WaitAndEnableOptions_d__20___ctor (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x43912a0

void UI_DropdownSettingElement__WaitAndEnableOptions_d__20___ctor
               (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__20$$System.IDisposable.Dispose
// il2cpp: void UI_DropdownSettingElement__WaitAndEnableOptions_d__20__System_IDisposable_Dispose (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o* __this, const MethodInfo* method);
// 0x43912c0

void UI_DropdownSettingElement__WaitAndEnableOptions_d__20__System_IDisposable_Dispose
               (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *__this,MethodInfo *method)

{
  return;
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__20$$MoveNext
// il2cpp: bool UI_DropdownSettingElement__WaitAndEnableOptions_d__20__MoveNext (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o* __this, const MethodInfo* method);
// 0x43912d0

bool_conflict
UI_DropdownSettingElement__WaitAndEnableOptions_d__20__MoveNext
          (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_DropdownSettingElement_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Scrollbar_o *__this_02;
  Il2CppObject *pIVar2;
  UnityEngine_Transform_o *pUVar3;
  bool_conflict bVar4;
  UI_DropdownSettingElement_o *__this_03;
  UnityEngine_Vector3_Fields UVar5;
  
  __this_03 = (UI_DropdownSettingElement_o *)__this;
  if (g_data_057ae2ac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    __this_03 = (UI_DropdownSettingElement_o *)&TypeInfo_WaitForEndOfFrame;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae2ac = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    if (__this_00 != (UI_DropdownSettingElement_o *)0x0) {
      __this_02 = (__this_00->fields)._scrollBar;
      __this_03 = (UI_DropdownSettingElement_o *)0x0;
      if (__this_02 != (UnityEngine_UI_Scrollbar_o *)0x0) {
        UnityEngine_UI_Scrollbar__set_value
                  (__this_02,(__this_00->fields)._currentScrollValue,(MethodInfo *)0x0);
        return 0;
      }
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 0) {
        (__this->fields).__1__state = -1;
        pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar2,(MethodInfo *)0x0);
        (__this->fields).__2__current = pIVar2;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar2);
        (__this->fields).__1__state = 1;
        bVar4 = (bool_conflict)CONCAT71((int7)((ulong)pIVar2 >> 8),1);
      }
      else {
        bVar4 = 0;
      }
      return bVar4;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 != (UI_DropdownSettingElement_o *)0x0) {
      UI_DropdownSettingElement__SetOptionsPosition(__this_00,(MethodInfo *)0x0);
      __this_03 = (UI_DropdownSettingElement_o *)(__this_00->fields)._optionsPanel;
      if ((__this_03 != (UI_DropdownSettingElement_o *)0x0) &&
         (pUVar3 = UnityEngine_GameObject__get_transform
                             ((UnityEngine_GameObject_o *)__this_03,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetAsLastSibling(pUVar3,(MethodInfo *)0x0);
        __this_03 = __this_00;
        pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          UVar5 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
          (__this_00->fields)._lastKnownPosition.fields = UVar5;
          __this_01 = (__this_00->fields)._optionsPanel;
          __this_03 = (UI_DropdownSettingElement_o *)0x0;
          if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(__this_01,1,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined1 *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x58) = 1;
            pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForEndOfFrame);
            UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar2,(MethodInfo *)0x0);
            (__this->fields).__2__current = pIVar2;
            il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar2);
            (__this->fields).__1__state = 2;
            return (bool_conflict)CONCAT71((int7)((ulong)pIVar2 >> 8),1);
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(__this_03->fields).m_CancellationTokenSource;
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__20$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_DropdownSettingElement__WaitAndEnableOptions_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o* __this, const MethodInfo* method);
// 0x4391480

Il2CppObject *
UI_DropdownSettingElement__WaitAndEnableOptions_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__20$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_DropdownSettingElement__WaitAndEnableOptions_d__20__System_Collections_IEnumerator_Reset (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o* __this, const MethodInfo* method);
// 0x4391490

void UI_DropdownSettingElement__WaitAndEnableOptions_d__20__System_Collections_IEnumerator_Reset
               (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// UI.DropdownSettingElement.<WaitAndEnableOptions>d__20$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_DropdownSettingElement__WaitAndEnableOptions_d__20__System_Collections_IEnumerator_get_Current (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o* __this, const MethodInfo* method);
// 0x43914d0

Il2CppObject *
UI_DropdownSettingElement__WaitAndEnableOptions_d__20__System_Collections_IEnumerator_get_Current
          (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.DropdownSettingElement$$get_SupportedSettingTypes
// il2cpp: System_Collections_Generic_HashSet_SettingType__o* UI_DropdownSettingElement__get_SupportedSettingTypes (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x4390000

System_Collections_Generic_HashSet_SettingType__o *
UI_DropdownSettingElement__get_SupportedSettingTypes(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  float fVar1;
  void *pvVar2;
  System_String_o *pSVar3;
  Il2CppClass *__this_00;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_UI_ColorBlock_o value;
  bool_conflict bVar6;
  UI_DropdownSettingElement_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Events_UnityAction_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  MethodInfo_255A0F0 **__this_02;
  UnityEngine_UI_Text_o *__this_03;
  Il2CppObject *pIVar11;
  UnityEngine_UI_Selectable_o *__this_04;
  System_Collections_Generic_HashSet_SettingType__o *pSVar12;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX;
  undefined4 extraout_var;
  UnityEngine_RectTransform_o *__this_05;
  UnityEngine_Transform_o *__this_06;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX_00;
  undefined4 extraout_var_00;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX_01;
  undefined4 extraout_var_01;
  System_Collections_Generic_HashSet_SettingType__o *extraout_RAX_02;
  int32_t in_ECX;
  int32_t extraout_EDX;
  System_String_o **ppSVar13;
  MethodInfo_33DA550 *pMVar14;
  UI_DropdownSettingElement_o *pUVar15;
  UnityEngine_Events_UnityAction_o *path;
  long *__this_07;
  UnityEngine_GameObject_o *pUVar16;
  UnityEngine_Events_UnityAction_o *in_R8;
  undefined4 uVar17;
  undefined4 in_XMM1_Da;
  float fVar18;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Color_o UVar20;
  undefined8 uStackY_1d8;
  float fStackY_1c8;
  float fStackY_1c4;
  UnityEngine_Events_UnityAction_c *pUStack_a0;
  void *pvStack_98;
  intptr_t iStack_90;
  intptr_t iStack_88;
  Il2CppObject *pIStack_80;
  intptr_t iStack_78;
  intptr_t iStack_70;
  intptr_t iStack_68;
  intptr_t iStack_60;
  intptr_t iStack_58;
  intptr_t iStack_50;
  UI_DropdownSettingElement_o *pUStack_48;
  
  if (g_data_057ae29f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Settings_SettingType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_SettingType);
    g_data_057ae29f = '\x01';
  }
  __this_01 = (UI_DropdownSettingElement_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_SettingType);
  pMVar14 = MethodInfo_HashSet_1_Settings_SettingType;
  pUVar15 = __this_01;
  System_Collections_Generic_HashSet_Int32Enum____ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_01,MethodInfo_HashSet_1_Settings_SettingType);
  if (__this_01 != (UI_DropdownSettingElement_o *)0x0) {
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_01,4,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_Int32Enum___Add
              ((System_Collections_Generic_HashSet_T__o *)__this_01,2,MethodInfo_Boolean_Add);
    return (System_Collections_Generic_HashSet_SettingType__o *)__this_01;
  }
  uVar17 = il2cpp_runtime_helper_022b2c90();
  pUStack_48 = __this_01;
  if (g_data_057ae2a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateOptionButton_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"DropdownTextColor");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    il2cpp_runtime_helper_023445d0(&"Dropdown");
    il2cpp_runtime_helper_023445d0(&"Options");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Elements/DropdownOption");
    g_data_057ae2a6 = '\x01';
  }
  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
  path = pUVar7;
  UI_DropdownSettingElement___c__DisplayClass18_0___ctor
            ((UI_DropdownSettingElement___c__DisplayClass18_0_o *)pUVar7,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_Events_UnityAction_o *)0x0) {
    (pUVar7->fields).method_ptr = (intptr_t)pUVar15;
    il2cpp_runtime_helper_022b4080(&pUVar7->fields,pUVar15);
    ppSVar13 = (System_String_o **)&(pUVar7->fields).invoke_impl;
    (pUVar7->fields).invoke_impl = (intptr_t)pMVar14;
    il2cpp_runtime_helper_022b4080(ppSVar13,pMVar14);
    *(int32_t *)&(pUVar7->fields).m_target = extraout_EDX;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    path = (UnityEngine_Events_UnityAction_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar7 = (UnityEngine_Events_UnityAction_o *)
             ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       ((System_String_o *)path,"Prefabs/Elements/DropdownOption",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
    if (pUVar7 != (UnityEngine_Events_UnityAction_o *)0x0) {
      pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
      path = (UnityEngine_Events_UnityAction_o *)(pUVar15->fields)._optionsPanel;
      if (((path != (UnityEngine_Events_UnityAction_o *)0x0) &&
          (pUVar9 = (UnityEngine_Events_UnityAction_o *)
                    UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)path,(MethodInfo *)0x0),
          pUVar9 != (UnityEngine_Events_UnityAction_o *)0x0)) &&
         (pUVar10 = UnityEngine_Transform__Find
                              ((UnityEngine_Transform_o *)pUVar9,"Options",(MethodInfo *)0x0),
         path = pUVar9, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent_4e09e30(pUVar8,pUVar10,0,(MethodInfo *)0x0);
        path = pUVar7;
        pUVar9 = (UnityEngine_Events_UnityAction_o *)
                 UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
        if ((pUVar9 != (UnityEngine_Events_UnityAction_o *)0x0) &&
           (__this_02 = (MethodInfo_255A0F0 **)
                        UnityEngine_Transform__Find
                                  ((UnityEngine_Transform_o *)pUVar9,"Label",(MethodInfo *)0x0),
           path = pUVar9,
           (UnityEngine_Events_UnityAction_o *)__this_02 != (UnityEngine_Events_UnityAction_o *)0x0)) {
          pUVar9 = (UnityEngine_Events_UnityAction_o *)
                   UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
          pSVar3 = *ppSVar13;
          if (g_data_057ae295 == '\0') {
            __this_02 = &MethodInfo_Text_GetComponent_Text;
            il2cpp_runtime_helper_023445d0();
            g_data_057ae295 = '\x01';
          }
          path = (UnityEngine_Events_UnityAction_o *)__this_02;
          if ((pUVar9 != (UnityEngine_Events_UnityAction_o *)0x0) &&
             (__this_03 = (UnityEngine_UI_Text_o *)
                          UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)pUVar9,MethodInfo_Text_GetComponent_Text), path = pUVar9,
             __this_03 != (UnityEngine_UI_Text_o *)0x0)) {
            (*(__this_03->klass->vtable)._75_set_text.methodPtr)
                      (__this_03,pSVar3,(__this_03->klass->vtable)._75_set_text.method);
            UnityEngine_UI_Text__set_fontSize(__this_03,in_ECX,(MethodInfo *)0x0);
            path = pUVar7;
            pIVar11 = UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_Button_GetComponent_Button);
            if (pIVar11 != (Il2CppObject *)0x0) {
              __this_00 = pIVar11[0x10].klass;
              pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              path = pUVar9;
              UnityEngine_Events_UnityAction___ctor();
              if (__this_00 != (Il2CppClass *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener
                          ((UnityEngine_Events_UnityEvent_o *)__this_00,pUVar9,(MethodInfo *)0x0);
                path = pUVar7;
                pIVar11 = UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                if (pIVar11 != (Il2CppObject *)0x0) {
                  (*pIVar11->klass->vtable[0x24].methodPtr)
                            (uVar17,pIVar11,pIVar11->klass->vtable[0x24].method);
                  path = pUVar7;
                  pIVar11 = UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                  if (pIVar11 != (Il2CppObject *)0x0) {
                    (*pIVar11->klass->vtable[0x26].methodPtr)
                              (in_XMM1_Da,pIVar11,pIVar11->klass->vtable[0x26].method);
                    __this_04 = (UnityEngine_UI_Selectable_o *)
                                UnityEngine_GameObject__GetComponent_object_
                                          ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_Button_GetComponent_Button);
                    if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    path = (UnityEngine_Events_UnityAction_o *)&pUStack_a0;
                    UI_UIManager__GetThemeColorBlock
                              ((UnityEngine_UI_ColorBlock_o *)path,(System_String_o *)in_R8,"DefaultSetting",
                               "Dropdown","DefaultPanel",(MethodInfo *)0x0);
                    if (__this_04 != (UnityEngine_UI_Selectable_o *)0x0) {
                      value.fields.m_NormalColor.fields._8_8_ = pvStack_98;
                      value.fields.m_NormalColor.fields._0_8_ = pUStack_a0;
                      value.fields.m_HighlightedColor.fields.r = (float)(undefined4)iStack_90;
                      value.fields.m_HighlightedColor.fields.g = (float)iStack_90._4_4_;
                      value.fields.m_HighlightedColor.fields.b = (float)(undefined4)iStack_88;
                      value.fields.m_HighlightedColor.fields.a = (float)iStack_88._4_4_;
                      value.fields.m_PressedColor.fields._0_8_ = pIStack_80;
                      value.fields.m_PressedColor.fields.b = (float)(undefined4)iStack_78;
                      value.fields.m_PressedColor.fields.a = (float)iStack_78._4_4_;
                      value.fields.m_SelectedColor.fields.r = (float)(undefined4)iStack_70;
                      value.fields.m_SelectedColor.fields.g = (float)iStack_70._4_4_;
                      value.fields.m_SelectedColor.fields.b = (float)(undefined4)iStack_68;
                      value.fields.m_SelectedColor.fields.a = (float)iStack_68._4_4_;
                      value.fields.m_DisabledColor.fields.r = (float)(undefined4)iStack_60;
                      value.fields.m_DisabledColor.fields.g = (float)iStack_60._4_4_;
                      value.fields.m_DisabledColor.fields.b = (float)(undefined4)iStack_58;
                      value.fields.m_DisabledColor.fields.a = (float)iStack_58._4_4_;
                      value.fields.m_ColorMultiplier = (float)(undefined4)iStack_50;
                      value.fields.m_FadeDuration = (float)iStack_50._4_4_;
                      UnityEngine_UI_Selectable__set_colors(__this_04,value,(MethodInfo *)0x0);
                      pUVar9 = (UnityEngine_Events_UnityAction_o *)
                               UnityEngine_GameObject__get_transform
                                         ((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
                      path = pUVar7;
                      if ((pUVar9 != (UnityEngine_Events_UnityAction_o *)0x0) &&
                         (pUVar8 = UnityEngine_Transform__Find
                                             ((UnityEngine_Transform_o *)pUVar9,"Label",(MethodInfo *)0x0
                                             ), path = pUVar9, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                        pIVar11 = UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)pUVar8,MethodInfo_Text_GetComponent_Text);
                        UVar20 = UI_UIManager__GetThemeColor
                                           ((System_String_o *)in_R8,"DefaultSetting","DropdownTextColor","DefaultPanel",
                                            (MethodInfo *)0x0);
                        path = in_R8;
                        if (pIVar11 != (Il2CppObject *)0x0) {
                          pSVar12 = (System_Collections_Generic_HashSet_SettingType__o *)
                                    (*pIVar11->klass->vtable[0x17].methodPtr)
                                              (UVar20.fields.r,UVar20.fields.b,pIVar11,
                                               pIVar11->klass->vtable[0x17].method);
                          return pSVar12;
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
  __this_07 = (long *)(path->fields).extra_arg;
  if ((UnityEngine_GameObject_o *)__this_07 != (UnityEngine_GameObject_o *)0x0) {
    pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_07,(MethodInfo *)0x0);
    if (g_data_057a6932 == '\0') {
      __this_07 = &TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057a6932 = '\x01';
    }
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                (pUVar8,(UnityEngine_Vector3_o)
                        *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                 (MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2a1 = '\x01';
  }
  pUVar4 = ((UnityEngine_GameObject_o *)((long)__this_07 + 0x30))->monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return (System_Collections_Generic_HashSet_SettingType__o *)0x0;
  }
  pUVar16 = ((UnityEngine_GameObject_o *)((long)__this_07 + 0x30))->monitor;
  if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
    bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar16,(MethodInfo *)0x0);
    return (System_Collections_Generic_HashSet_SettingType__o *)CONCAT44(extraout_var,bVar6);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae2a2 = '\x01';
  }
  pUVar8 = (UnityEngine_Transform_o *)pUVar16[2].fields.m_CachedPtr;
  if ((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar10 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar8,(MethodInfo *)0x0),
     pUVar10 != (UnityEngine_Transform_o *)0x0)) {
    UVar19 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
    pvVar2 = pUVar16[4].monitor;
    fVar18 = *(float *)&pUVar16[4].fields.m_CachedPtr;
    if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar10 = pUVar16[2].monitor;
    pUVar8 = TypeInfo_UIManager;
    if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
      fVar1 = *(float *)(TypeInfo_UIManager[7].fields.m_CachedPtr + 0x38);
      __this_05 = (UnityEngine_RectTransform_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pUVar10,MethodInfo_RectTransform_GetComponent_RectTransform);
      pUVar8 = pUVar10;
      if (__this_05 != (UnityEngine_RectTransform_o *)0x0) {
        fStackY_1c8 = SUB84(pvVar2,0);
        fStackY_1c4 = (float)((ulong)pvVar2 >> 0x20);
        uStackY_1d8._0_4_ = UVar19.fields.x;
        uStackY_1d8._4_4_ = UVar19.fields.y;
        uStackY_1d8._4_4_ = uStackY_1d8._4_4_ + fStackY_1c4 * fVar1;
        uStackY_1d8 = CONCAT44(uStackY_1d8._4_4_,(float)uStackY_1d8 + fStackY_1c8 * fVar1);
        UVar5 = UnityEngine_RectTransform__get_sizeDelta(__this_05,(MethodInfo *)0x0);
        if (0.0 <= UVar5.fields.y * *(float *)(TypeInfo_UIManager[7].fields.m_CachedPtr + 0x38) * -0.5 +
                   uStackY_1d8._4_4_) {
          fVar18 = UVar19.fields.z + fVar18 * fVar1;
          pUVar8 = pUVar16[2].monitor;
        }
        else {
          pUVar8 = (UnityEngine_Transform_o *)pUVar16[2].fields.m_CachedPtr;
          if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_043908ee;
          pvVar2 = pUVar16[4].monitor;
          fVar18 = *(float *)&pUVar16[4].fields.m_CachedPtr;
          pUVar10 = UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)pUVar8,(MethodInfo *)0x0);
          if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_043908ee;
          UVar19 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
          if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fVar1 = *(float *)(TypeInfo_UIManager[7].fields.m_CachedPtr + 0x38);
          fStackY_1c8 = SUB84(pvVar2,0);
          fStackY_1c4 = (float)((ulong)pvVar2 >> 0x20);
          uStackY_1d8._0_4_ = UVar19.fields.x;
          uStackY_1d8._4_4_ = UVar19.fields.y;
          fVar18 = UVar19.fields.z + fVar18 * fVar1;
          uStackY_1d8 = CONCAT44(uStackY_1d8._4_4_ - fStackY_1c4 * fVar1,
                                 (float)uStackY_1d8 + fStackY_1c8 * fVar1);
          pUVar8 = pUVar16[2].monitor;
        }
        if (((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
            (pUVar10 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)pUVar8,(MethodInfo *)0x0),
            pUVar10 != (UnityEngine_Transform_o *)0x0)) &&
           (__this_06 = (UnityEngine_Transform_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar10,MethodInfo_RectTransform_GetComponent_RectTransform), pUVar8 = pUVar10,
           __this_06 != (UnityEngine_Transform_o *)0x0)) {
          UVar19.fields.z = fVar18;
          UVar19.fields.x = (float)(int)uStackY_1d8;
          UVar19.fields.y = (float)(int)((ulong)uStackY_1d8 >> 0x20);
          UnityEngine_Transform__set_position(__this_06,UVar19,(MethodInfo *)0x0);
          return extraout_RAX_00;
        }
      }
    }
  }
label_043908ee:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2a3 = '\x01';
  }
  pUVar4 = pUVar8[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return (System_Collections_Generic_HashSet_SettingType__o *)CONCAT44(extraout_var_00,bVar6);
  }
  pUVar16 = pUVar8[2].monitor;
  if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar16,0,(MethodInfo *)0x0);
    return extraout_RAX_01;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2a4 = '\x01';
  }
  pUVar4 = pUVar16[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pUVar4 = pUVar16[2].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar4,(MethodInfo *)0x0);
    return extraout_RAX_02;
  }
  return (System_Collections_Generic_HashSet_SettingType__o *)CONCAT44(extraout_var_01,bVar6);
}


// UI.DropdownSettingElement$$Setup
// il2cpp: void UI_DropdownSettingElement__Setup (UI_DropdownSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityEngine_Events_UnityAction_o* onDropdownOptionSelect, const MethodInfo* method);
// 0x438f1b0

void UI_DropdownSettingElement__Setup
               (UI_DropdownSettingElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,System_String_array *options,System_String_o *tooltip,float elementWidth
               ,float elementHeight,float optionsWidth,float maxScrollHeight,
               UnityEngine_Events_UnityAction_o *onDropdownOptionSelect,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  UnityEngine_GameObject_o **ppUVar2;
  UnityEngine_GameObject_o **ppUVar3;
  UnityEngine_UI_Scrollbar_o **ppUVar4;
  byte bVar5;
  int32_t value;
  uint uVar6;
  int iVar7;
  Il2CppClass *__this_00;
  System_Diagnostics_StackTrace_array *pSVar8;
  UnityEngine_Vector2_o UVar9;
  UnityEngine_UI_ColorBlock_o value_00;
  UnityEngine_UI_ColorBlock_o value_01;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_UI_Text_o *__this_01;
  Il2CppObject *pIVar12;
  UnityEngine_Events_UnityAction_o *call;
  ulong uVar13;
  UnityEngine_UI_Selectable_o *__this_02;
  UnityEngine_RectTransform_o *pUVar14;
  UnityEngine_UI_ScrollRect_o *__this_03;
  UnityEngine_UI_Scrollbar_o *pUVar15;
  UnityEngine_Transform_o *pUVar16;
  undefined8 uVar17;
  System_ArgumentException_o *__this_04;
  System_String_o *pSVar18;
  int32_t value_02;
  ulong uVar19;
  Settings_TypedSetting_T__o *__this_05;
  MethodInfo *pMVar20;
  float fVar21;
  UnityEngine_Color_o UVar22;
  float local_128;
  UnityEngine_UI_ColorBlock_o local_88;
  
  pMVar20 = (MethodInfo *)tooltip;
  if (g_data_057ae2a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Scrollbar_GetComponent_Scrollbar);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__11_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScrollRect_GetComponent_ScrollRect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"DropdownTextColor");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    il2cpp_runtime_helper_023445d0(&"DropdownBorderColor");
    il2cpp_runtime_helper_023445d0(&"DropdownScrollbarBackgroundColor");
    il2cpp_runtime_helper_023445d0(&"DropdownScrollbar");
    il2cpp_runtime_helper_023445d0(&"Dropdown/Mask");
    il2cpp_runtime_helper_023445d0(&"Dropdown");
    il2cpp_runtime_helper_023445d0(&"Image");
    il2cpp_runtime_helper_023445d0(&"Scrollbar");
    il2cpp_runtime_helper_023445d0(&"Dropdown/SelectedButton");
    il2cpp_runtime_helper_023445d0(&"Options");
    g_data_057ae2a0 = '\x01';
  }
  if (options == (System_String_array *)0x0) goto label_0438fd4d;
  if (options->max_length != 0) {
    (__this->fields)._onDropdownOptionSelect = onDropdownOptionSelect;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._onDropdownOptionSelect);
    (__this->fields)._options = options;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._options);
    pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar10 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar10 = UnityEngine_Transform__Find(pUVar10,"Dropdown/Mask",(MethodInfo *)0x0),
       pUVar10 == (UnityEngine_Transform_o *)0x0)) {
label_0438fd4d:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
      ppUVar1 = &(__this->fields)._optionsPanel;
      (__this->fields)._optionsPanel = pUVar11;
      il2cpp_runtime_helper_022b4080();
      pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((pUVar10 == (UnityEngine_Transform_o *)0x0) ||
         (pUVar10 = UnityEngine_Transform__Find(pUVar10,"Dropdown/SelectedButton",(MethodInfo *)0x0),
         pUVar10 == (UnityEngine_Transform_o *)0x0)) goto label_0438fd4d;
      pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
      ppUVar2 = &(__this->fields)._selectedButton;
      (__this->fields)._selectedButton = pUVar11;
      il2cpp_runtime_helper_022b4080();
      pUVar11 = (__this->fields)._selectedButton;
      if (((pUVar11 == (UnityEngine_GameObject_o *)0x0) ||
          (pUVar10 = UnityEngine_GameObject__get_transform(pUVar11,(MethodInfo *)0x0),
          pUVar10 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar10 = UnityEngine_Transform__Find(pUVar10,"Label",(MethodInfo *)0x0),
         pUVar10 == (UnityEngine_Transform_o *)0x0)) goto label_0438fd4d;
      pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
      ppUVar3 = &(__this->fields)._selectedButtonLabel;
      (__this->fields)._selectedButtonLabel = pUVar11;
      il2cpp_runtime_helper_022b4080(ppUVar3,pUVar11);
      if ((int)options->max_length != 0) {
        if (style != (UI_ElementStyle_o *)0x0) {
          pUVar11 = (__this->fields)._selectedButtonLabel;
          pSVar18 = options->m_Items[0];
          value = (style->fields).FontSize;
          if (g_data_057ae295 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
            g_data_057ae295 = '\x01';
          }
          if ((pUVar11 != (UnityEngine_GameObject_o *)0x0) &&
             (__this_01 = (UnityEngine_UI_Text_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Text_GetComponent_Text),
             __this_01 != (UnityEngine_UI_Text_o *)0x0)) {
            (*(__this_01->klass->vtable)._75_set_text.methodPtr)
                      (__this_01,pSVar18,(__this_01->klass->vtable)._75_set_text.method);
            UnityEngine_UI_Text__set_fontSize(__this_01,value,(MethodInfo *)0x0);
            if ((*ppUVar2 != (UnityEngine_GameObject_o *)0x0) &&
               (pIVar12 = UnityEngine_GameObject__GetComponent_object_(*ppUVar2,MethodInfo_Button_GetComponent_Button),
               pIVar12 != (Il2CppObject *)0x0)) {
              __this_00 = pIVar12[0x10].klass;
              call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              if (__this_00 != (Il2CppClass *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener
                          ((UnityEngine_Events_UnityEvent_o *)__this_00,call,(MethodInfo *)0x0);
                if ((*ppUVar2 != (UnityEngine_GameObject_o *)0x0) &&
                   (pIVar12 = UnityEngine_GameObject__GetComponent_object_(*ppUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement),
                   pIVar12 != (Il2CppObject *)0x0)) {
                  (*pIVar12->klass->vtable[0x24].methodPtr)
                            (elementWidth,pIVar12,pIVar12->klass->vtable[0x24].method);
                  if ((*ppUVar2 != (UnityEngine_GameObject_o *)0x0) &&
                     (pIVar12 = UnityEngine_GameObject__GetComponent_object_(*ppUVar2,MethodInfo_LayoutElement_GetComponent_LayoutElement),
                     pIVar12 != (Il2CppObject *)0x0)) {
                    (*pIVar12->klass->vtable[0x26].methodPtr)
                              (elementHeight,pIVar12,pIVar12->klass->vtable[0x26].method);
                    if (0 < (int)options->max_length) {
                      uVar13 = options->max_length & 0xffffffff;
                      uVar19 = 0;
                      do {
                        if (uVar13 <= uVar19) goto label_0438fd52;
                        UI_DropdownSettingElement__CreateOptionButton
                                  (__this,options->m_Items[uVar19],(int32_t)uVar19,optionsWidth,elementHeight,
                                   (style->fields).FontSize,(style->fields).ThemePanel,pMVar20);
                        uVar19 = uVar19 + 1;
                        uVar6 = (uint)options->max_length;
                        uVar13 = (ulong)uVar6;
                      } while ((long)uVar19 < (long)(int)uVar6);
                    }
                    if (*ppUVar2 != (UnityEngine_GameObject_o *)0x0) {
                      __this_02 = (UnityEngine_UI_Selectable_o *)
                                  UnityEngine_GameObject__GetComponent_object_(*ppUVar2,MethodInfo_Button_GetComponent_Button);
                      pSVar18 = (style->fields).ThemePanel;
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      UI_UIManager__GetThemeColorBlock
                                (&local_88,pSVar18,"DefaultSetting","Dropdown","DefaultPanel",(MethodInfo *)0x0);
                      if (__this_02 != (UnityEngine_UI_Selectable_o *)0x0) {
                        value_00.fields.m_NormalColor.fields.b = local_88.fields.m_NormalColor.fields.b;
                        value_00.fields.m_NormalColor.fields.a = local_88.fields.m_NormalColor.fields.a;
                        value_00.fields.m_NormalColor.fields.r = local_88.fields.m_NormalColor.fields.r;
                        value_00.fields.m_NormalColor.fields.g = local_88.fields.m_NormalColor.fields.g;
                        value_00.fields.m_HighlightedColor.fields.r =
                             local_88.fields.m_HighlightedColor.fields.r;
                        value_00.fields.m_HighlightedColor.fields.g =
                             local_88.fields.m_HighlightedColor.fields.g;
                        value_00.fields.m_HighlightedColor.fields.b =
                             local_88.fields.m_HighlightedColor.fields.b;
                        value_00.fields.m_HighlightedColor.fields.a =
                             local_88.fields.m_HighlightedColor.fields.a;
                        value_00.fields.m_PressedColor.fields.r = local_88.fields.m_PressedColor.fields.r;
                        value_00.fields.m_PressedColor.fields.g = local_88.fields.m_PressedColor.fields.g;
                        value_00.fields.m_PressedColor.fields.b = local_88.fields.m_PressedColor.fields.b;
                        value_00.fields.m_PressedColor.fields.a = local_88.fields.m_PressedColor.fields.a;
                        value_00.fields.m_SelectedColor.fields.r = local_88.fields.m_SelectedColor.fields.r;
                        value_00.fields.m_SelectedColor.fields.g = local_88.fields.m_SelectedColor.fields.g;
                        value_00.fields.m_SelectedColor.fields.b = local_88.fields.m_SelectedColor.fields.b;
                        value_00.fields.m_SelectedColor.fields.a = local_88.fields.m_SelectedColor.fields.a;
                        value_00.fields.m_DisabledColor.fields.r = local_88.fields.m_DisabledColor.fields.r;
                        value_00.fields.m_DisabledColor.fields.g = local_88.fields.m_DisabledColor.fields.g;
                        value_00.fields.m_DisabledColor.fields.b = local_88.fields.m_DisabledColor.fields.b;
                        value_00.fields.m_DisabledColor.fields.a = local_88.fields.m_DisabledColor.fields.a;
                        value_00.fields.m_ColorMultiplier = local_88.fields.m_ColorMultiplier;
                        value_00.fields.m_FadeDuration = local_88.fields.m_FadeDuration;
                        UnityEngine_UI_Selectable__set_colors(__this_02,value_00,(MethodInfo *)0x0);
                        pUVar11 = *ppUVar3;
                        if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                          pIVar12 = UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Text_GetComponent_Text);
                          UVar22 = UI_UIManager__GetThemeColor
                                             ((style->fields).ThemePanel,"DefaultSetting","DropdownTextColor",
                                              "DefaultPanel",(MethodInfo *)0x0);
                          if (pIVar12 != (Il2CppObject *)0x0) {
                            (*pIVar12->klass->vtable[0x17].methodPtr)(UVar22.fields.r,UVar22.fields.b,pIVar12)
                            ;
                            if (((*ppUVar2 != (UnityEngine_GameObject_o *)0x0) &&
                                (pUVar10 = UnityEngine_GameObject__get_transform(*ppUVar2,(MethodInfo *)0x0),
                                pUVar10 != (UnityEngine_Transform_o *)0x0)) &&
                               (pUVar10 = UnityEngine_Transform__Find(pUVar10,"Image",(MethodInfo *)0x0),
                               pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                              pIVar12 = UnityEngine_Component__GetComponent_object_
                                                  ((UnityEngine_Component_o *)pUVar10,MethodInfo_Image_GetComponent_Image);
                              UVar22 = UI_UIManager__GetThemeColor
                                                 ((style->fields).ThemePanel,"DefaultSetting","DropdownTextColor",
                                                  "DefaultPanel",(MethodInfo *)0x0);
                              if (pIVar12 != (Il2CppObject *)0x0) {
                                (*pIVar12->klass->vtable[0x17].methodPtr)
                                          (UVar22.fields.r,UVar22.fields.b,pIVar12);
                                if (((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                    (pUVar10 = UnityEngine_GameObject__get_transform
                                                         (*ppUVar1,(MethodInfo *)0x0),
                                    pUVar10 != (UnityEngine_Transform_o *)0x0)) &&
                                   (pUVar10 = UnityEngine_Transform__Find
                                                        (pUVar10,"Options",(MethodInfo *)0x0),
                                   pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                                  pIVar12 = UnityEngine_Component__GetComponent_object_
                                                      ((UnityEngine_Component_o *)pUVar10,MethodInfo_Image_GetComponent_Image);
                                  UVar22 = UI_UIManager__GetThemeColor
                                                     ((style->fields).ThemePanel,"DefaultSetting","DropdownBorderColor",
                                                      "DefaultPanel",(MethodInfo *)0x0);
                                  if (pIVar12 != (Il2CppObject *)0x0) {
                                    (*pIVar12->klass->vtable[0x17].methodPtr)(UVar22.fields.r,UVar22.fields.b)
                                    ;
                                    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
                                    if (((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                        (pUVar10 = UnityEngine_GameObject__get_transform
                                                             (*ppUVar1,(MethodInfo *)0x0),
                                        pUVar10 != (UnityEngine_Transform_o *)0x0)) &&
                                       ((pUVar10 = UnityEngine_Transform__Find
                                                             (pUVar10,"Options",(MethodInfo *)0x0),
                                        pUVar10 != (UnityEngine_Transform_o *)0x0 &&
                                        (pUVar14 = (UnityEngine_RectTransform_o *)
                                                   UnityEngine_Component__GetComponent_object_
                                                             ((UnityEngine_Component_o *)pUVar10,MethodInfo_RectTransform_GetComponent_RectTransform)
                                        , pUVar14 != (UnityEngine_RectTransform_o *)0x0)))) {
                                      UVar9 = UnityEngine_RectTransform__get_sizeDelta
                                                        (pUVar14,(MethodInfo *)0x0);
                                      local_128 = maxScrollHeight;
                                      if (maxScrollHeight < UVar9.fields.y) {
label_0438f9fe:
                                        if (((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                            (pUVar10 = UnityEngine_GameObject__get_transform
                                                                 (*ppUVar1,(MethodInfo *)0x0),
                                            pUVar10 != (UnityEngine_Transform_o *)0x0)) &&
                                           (pUVar10 = UnityEngine_Transform__Find
                                                                (pUVar10,"Scrollbar",(MethodInfo *)0x0),
                                           pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                                          pUVar15 = (UnityEngine_UI_Scrollbar_o *)
                                                    UnityEngine_Component__GetComponent_object_
                                                              ((UnityEngine_Component_o *)pUVar10,MethodInfo_Scrollbar_GetComponent_Scrollbar
                                                              );
                                          ppUVar4 = &(__this->fields)._scrollBar;
                                          (__this->fields)._scrollBar = pUVar15;
                                          il2cpp_runtime_helper_022b4080(ppUVar4,pUVar15);
                                          pUVar15 = (__this->fields)._scrollBar;
                                          pSVar18 = (style->fields).ThemePanel;
                                          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                            il2cpp_runtime_helper_02337ed0();
                                          }
                                          pMVar20 = (MethodInfo *)0x0;
                                          UI_UIManager__GetThemeColorBlock
                                                    (&local_88,pSVar18,"DefaultSetting","DropdownScrollbar","DefaultPanel",
                                                     (MethodInfo *)0x0);
                                          if (pUVar15 != (UnityEngine_UI_Scrollbar_o *)0x0) {
                                            value_01.fields.m_NormalColor.fields.b =
                                                 local_88.fields.m_NormalColor.fields.b;
                                            value_01.fields.m_NormalColor.fields.a =
                                                 local_88.fields.m_NormalColor.fields.a;
                                            value_01.fields.m_NormalColor.fields.r =
                                                 local_88.fields.m_NormalColor.fields.r;
                                            value_01.fields.m_NormalColor.fields.g =
                                                 local_88.fields.m_NormalColor.fields.g;
                                            value_01.fields.m_HighlightedColor.fields.r =
                                                 local_88.fields.m_HighlightedColor.fields.r;
                                            value_01.fields.m_HighlightedColor.fields.g =
                                                 local_88.fields.m_HighlightedColor.fields.g;
                                            value_01.fields.m_HighlightedColor.fields.b =
                                                 local_88.fields.m_HighlightedColor.fields.b;
                                            value_01.fields.m_HighlightedColor.fields.a =
                                                 local_88.fields.m_HighlightedColor.fields.a;
                                            value_01.fields.m_PressedColor.fields.r =
                                                 local_88.fields.m_PressedColor.fields.r;
                                            value_01.fields.m_PressedColor.fields.g =
                                                 local_88.fields.m_PressedColor.fields.g;
                                            value_01.fields.m_PressedColor.fields.b =
                                                 local_88.fields.m_PressedColor.fields.b;
                                            value_01.fields.m_PressedColor.fields.a =
                                                 local_88.fields.m_PressedColor.fields.a;
                                            value_01.fields.m_SelectedColor.fields.r =
                                                 local_88.fields.m_SelectedColor.fields.r;
                                            value_01.fields.m_SelectedColor.fields.g =
                                                 local_88.fields.m_SelectedColor.fields.g;
                                            value_01.fields.m_SelectedColor.fields.b =
                                                 local_88.fields.m_SelectedColor.fields.b;
                                            value_01.fields.m_SelectedColor.fields.a =
                                                 local_88.fields.m_SelectedColor.fields.a;
                                            value_01.fields.m_DisabledColor.fields.r =
                                                 local_88.fields.m_DisabledColor.fields.r;
                                            value_01.fields.m_DisabledColor.fields.g =
                                                 local_88.fields.m_DisabledColor.fields.g;
                                            value_01.fields.m_DisabledColor.fields.b =
                                                 local_88.fields.m_DisabledColor.fields.b;
                                            value_01.fields.m_DisabledColor.fields.a =
                                                 local_88.fields.m_DisabledColor.fields.a;
                                            value_01.fields.m_ColorMultiplier =
                                                 local_88.fields.m_ColorMultiplier;
                                            value_01.fields.m_FadeDuration = local_88.fields.m_FadeDuration;
                                            UnityEngine_UI_Selectable__set_colors
                                                      ((UnityEngine_UI_Selectable_o *)pUVar15,value_01,
                                                       (MethodInfo *)0x0);
                                            pUVar15 = *ppUVar4;
                                            if (pUVar15 != (UnityEngine_UI_Scrollbar_o *)0x0) {
                                              pIVar12 = UnityEngine_Component__GetComponent_object_
                                                                  ((UnityEngine_Component_o *)pUVar15,
                                                                   MethodInfo_Image_GetComponent_Image);
                                              UVar22 = UI_UIManager__GetThemeColor
                                                                 ((style->fields).ThemePanel,"DefaultSetting",
                                                                  "DropdownScrollbarBackgroundColor","DefaultPanel",(MethodInfo *)0x0)
                                              ;
                                              if (pIVar12 != (Il2CppObject *)0x0) {
                                                (*pIVar12->klass->vtable[0x17].methodPtr)
                                                          (UVar22.fields.r,UVar22.fields.b,pIVar12,
                                                           pIVar12->klass->vtable[0x17].method);
                                                if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                                   (pUVar14 = (UnityEngine_RectTransform_o *)
                                                              UnityEngine_GameObject__GetComponent_object_
                                                                        (*ppUVar1,MethodInfo_RectTransform_GetComponent_RectTransform),
                                                   pUVar14 != (UnityEngine_RectTransform_o *)0x0)) {
                                                  UVar9.fields.y = local_128;
                                                  UVar9.fields.x = optionsWidth;
                                                  UnityEngine_RectTransform__set_sizeDelta
                                                            (pUVar14,UVar9,(MethodInfo *)0x0);
                                                  pUVar10 = UnityEngine_Component__get_transform
                                                                      ((UnityEngine_Component_o *)__this,
                                                                       (MethodInfo *)0x0);
                                                  if ((pUVar10 != (UnityEngine_Transform_o *)0x0) &&
                                                     ((pUVar10 = UnityEngine_Transform__Find
                                                                           (pUVar10,"Label",
                                                                            (MethodInfo *)0x0),
                                                      pUVar10 != (UnityEngine_Transform_o *)0x0 &&
                                                      (pIVar12 = UnityEngine_Component__GetComponent_object_
                                                                           ((UnityEngine_Component_o *)pUVar10
                                                                            ,MethodInfo_LayoutElement_GetComponent_LayoutElement),
                                                      pIVar12 != (Il2CppObject *)0x0)))) {
                                                    (*pIVar12->klass->vtable[0x26].methodPtr)
                                                              (elementHeight,pIVar12);
                                                    (__this->fields)._optionsOffset.fields.x =
                                                         (optionsWidth - elementWidth) * 0.5;
                                                    (__this->fields)._optionsOffset.fields.y =
                                                         2.0 - (local_128 + elementHeight) * 0.5;
                                                    (__this->fields)._optionsOffset.fields.z = 0.0;
                                                    pUVar11 = (__this->fields)._optionsPanel;
                                                    if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                                                      pUVar10 = UnityEngine_GameObject__get_transform
                                                                          (pUVar11,(MethodInfo *)0x0);
                                                      pUVar16 = UnityEngine_Component__get_transform
                                                                          ((UnityEngine_Component_o *)__this,
                                                                           (MethodInfo *)0x0);
                                                      if ((pUVar16 != (UnityEngine_Transform_o *)0x0) &&
                                                         (pUVar16 = UnityEngine_Transform__get_root
                                                                              (pUVar16,(MethodInfo *)0x0),
                                                         pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                                                        UnityEngine_Transform__SetParent_4e09e30
                                                                  (pUVar10,pUVar16,1,(MethodInfo *)0x0);
                                                        if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                                                          UnityEngine_GameObject__SetActive
                                                                    (*ppUVar1,0,(MethodInfo *)0x0);
                                                          UI_BaseSettingElement__Setup
                                                                    ((UI_BaseSettingElement_o *)__this,setting
                                                                     ,style,title,tooltip,pMVar20);
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
                                      else if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                              (__this_03 = (UnityEngine_UI_ScrollRect_o *)
                                                           UnityEngine_GameObject__GetComponent_object_
                                                                     (*ppUVar1,MethodInfo_ScrollRect_GetComponent_ScrollRect),
                                              __this_03 != (UnityEngine_UI_ScrollRect_o *)0x0)) {
                                        UnityEngine_UI_ScrollRect__set_verticalScrollbar
                                                  (__this_03,(UnityEngine_UI_Scrollbar_o *)0x0,
                                                   (MethodInfo *)0x0);
                                        if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                           (((pUVar10 = UnityEngine_GameObject__get_transform
                                                                  (*ppUVar1,(MethodInfo *)0x0),
                                             pUVar10 != (UnityEngine_Transform_o *)0x0 &&
                                             (pUVar10 = UnityEngine_Transform__Find
                                                                  (pUVar10,"Scrollbar",(MethodInfo *)0x0),
                                             pUVar10 != (UnityEngine_Transform_o *)0x0)) &&
                                            (pUVar11 = UnityEngine_Component__get_gameObject
                                                                 ((UnityEngine_Component_o *)pUVar10,
                                                                  (MethodInfo *)0x0),
                                            pUVar11 != (UnityEngine_GameObject_o *)0x0)))) {
                                          UnityEngine_GameObject__SetActive(pUVar11,0,(MethodInfo *)0x0);
                                          local_128 = UVar9.fields.y;
                                          goto label_0438f9fe;
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
        }
        goto label_0438fd4d;
      }
    }
label_0438fd52:
    il2cpp_runtime_helper_022b2ca0();
  }
  uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_04 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar17);
  pSVar18 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Dropdown cannot have 0 options.");
  System_ArgumentException___ctor_3c12490(__this_04,pSVar18,(MethodInfo *)0x0);
  pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057ae29e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae29e = '\x01';
  }
  pUVar15 = *(UnityEngine_UI_Scrollbar_o **)&(__this_04->fields)._HResult;
  __this_05 = (Settings_TypedSetting_T__o *)0x0;
  if (pUVar15 != (UnityEngine_UI_Scrollbar_o *)0x0) {
    fVar21 = UnityEngine_UI_Scrollbar__get_value(pUVar15,(MethodInfo *)0x0);
    *(float *)&(__this_04->fields)._dynamicMethods = fVar21;
    pUVar11 = (UnityEngine_GameObject_o *)(__this_04->fields)._stackTrace;
    __this_05 = (Settings_TypedSetting_T__o *)0x0;
    if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar11,0,(MethodInfo *)0x0);
      iVar7 = *(int *)&(__this_04->fields)._innerException;
      if (iVar7 != 2) {
        if (iVar7 == 4) {
          __this_05 = (Settings_TypedSetting_T__o *)(__this_04->fields)._data;
          if (__this_05 == (Settings_TypedSetting_T__o *)0x0) goto label_0438fee6;
          bVar5 = (TypeInfo_StringSetting->_2).naturalAligment;
          if (((__this_05->klass->_2).naturalAligment < bVar5) ||
             ((__this_05->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_StringSetting)) goto label_0438feeb;
          Settings_TypedSetting_object___set_Value(__this_05,pIVar12,MethodInfo_Void_set_Value);
        }
        pSVar8 = (__this_04->fields).captured_traces;
joined_r0x0438fedf:
        if (pSVar8 != (System_Diagnostics_StackTrace_array *)0x0) {
          (*(code *)pSVar8->max_length)(pSVar8->m_Items[4],pSVar8->m_Items[1]);
          return;
        }
        return;
      }
      __this_05 = (Settings_TypedSetting_T__o *)(__this_04->fields)._data;
      if (__this_05 != (Settings_TypedSetting_T__o *)0x0) {
        bVar5 = (TypeInfo_IntSetting->_2).naturalAligment;
        if ((bVar5 <= (__this_05->klass->_2).naturalAligment) &&
           ((__this_05->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_IntSetting)) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)__this_05,value_02,MethodInfo_Void_set_Value);
          pSVar8 = (__this_04->fields).captured_traces;
          goto joined_r0x0438fedf;
        }
        goto label_0438feeb;
      }
    }
  }
label_0438fee6:
  il2cpp_runtime_helper_022b2c90();
label_0438feeb:
  il2cpp_runtime_helper_022b2fd0();
  if (__this_05[3].klass != (Settings_TypedSetting_T__c *)0x0) {
    fVar21 = UnityEngine_UI_Scrollbar__get_value
                       ((UnityEngine_UI_Scrollbar_o *)__this_05[3].klass,(MethodInfo *)0x0);
    *(float *)&__this_05[2].fields._value = fVar21;
    pUVar11 = (UnityEngine_GameObject_o *)__this_05[1].fields._value;
    if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar11,0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.DropdownSettingElement$$FixScale
// il2cpp: void UI_DropdownSettingElement__FixScale (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x43905c0

void UI_DropdownSettingElement__FixScale(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  float fVar1;
  void *pvVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Vector2_o UVar4;
  bool_conflict bVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *pUVar8;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  undefined8 uStack_68;
  float fStack_58;
  float fStack_54;
  
  pUVar8 = (__this->fields)._optionsPanel;
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    pUVar6 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
    if (g_data_057a6932 == '\0') {
      pUVar8 = (UnityEngine_GameObject_o *)&TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057a6932 = '\x01';
    }
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                (pUVar6,(UnityEngine_Vector3_o)
                        *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2a1 = '\x01';
  }
  pUVar3 = pUVar8[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  pUVar8 = pUVar8[2].monitor;
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae2a2 = '\x01';
  }
  pUVar6 = (UnityEngine_Transform_o *)pUVar8[2].fields.m_CachedPtr;
  if ((pUVar6 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0),
     pUVar7 != (UnityEngine_Transform_o *)0x0)) {
    UVar10 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
    pvVar2 = pUVar8[4].monitor;
    fVar9 = *(float *)&pUVar8[4].fields.m_CachedPtr;
    if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar7 = pUVar8[2].monitor;
    pUVar6 = TypeInfo_UIManager;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      fVar1 = *(float *)(((UnityEngine_GameObject_Fields *)&TypeInfo_UIManager[7].fields)->m_CachedPtr + 0x38);
      __this_00 = (UnityEngine_RectTransform_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform);
      pUVar6 = pUVar7;
      if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
        fStack_58 = SUB84(pvVar2,0);
        fStack_54 = (float)((ulong)pvVar2 >> 0x20);
        uStack_68._0_4_ = UVar10.fields.x;
        uStack_68._4_4_ = UVar10.fields.y;
        uStack_68._4_4_ = uStack_68._4_4_ + fStack_54 * fVar1;
        uStack_68 = CONCAT44(uStack_68._4_4_,(float)uStack_68 + fStack_58 * fVar1);
        UVar4 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
        if (0.0 <= UVar4.fields.y *
                   *(float *)(((UnityEngine_GameObject_Fields *)&TypeInfo_UIManager[7].fields)->m_CachedPtr + 0x38)
                   * -0.5 + uStack_68._4_4_) {
          fVar9 = UVar10.fields.z + fVar9 * fVar1;
          pUVar6 = pUVar8[2].monitor;
        }
        else {
          pUVar6 = (UnityEngine_Transform_o *)pUVar8[2].fields.m_CachedPtr;
          if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_043908ee;
          pvVar2 = pUVar8[4].monitor;
          fVar9 = *(float *)&pUVar8[4].fields.m_CachedPtr;
          pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0)
          ;
          if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_043908ee;
          UVar10 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
          if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fVar1 = *(float *)(((UnityEngine_GameObject_Fields *)&TypeInfo_UIManager[7].fields)->m_CachedPtr + 0x38);
          fStack_58 = SUB84(pvVar2,0);
          fStack_54 = (float)((ulong)pvVar2 >> 0x20);
          uStack_68._0_4_ = UVar10.fields.x;
          uStack_68._4_4_ = UVar10.fields.y;
          fVar9 = UVar10.fields.z + fVar9 * fVar1;
          uStack_68 = CONCAT44(uStack_68._4_4_ - fStack_54 * fVar1,(float)uStack_68 + fStack_58 * fVar1);
          pUVar6 = pUVar8[2].monitor;
        }
        if (((pUVar6 != (UnityEngine_Transform_o *)0x0) &&
            (pUVar7 = UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0),
            pUVar7 != (UnityEngine_Transform_o *)0x0)) &&
           (__this_01 = (UnityEngine_Transform_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform), pUVar6 = pUVar7,
           __this_01 != (UnityEngine_Transform_o *)0x0)) {
          UVar10.fields.z = fVar9;
          UVar10.fields.x = (float)(int)uStack_68;
          UVar10.fields.y = (float)(int)((ulong)uStack_68 >> 0x20);
          UnityEngine_Transform__set_position(__this_01,UVar10,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_043908ee:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2a3 = '\x01';
  }
  pUVar3 = pUVar6[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  pUVar8 = pUVar6[2].monitor;
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar8,0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2a4 = '\x01';
  }
  pUVar3 = pUVar8[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar3 = pUVar8[2].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.DropdownSettingElement$$IsOpen
// il2cpp: bool UI_DropdownSettingElement__IsOpen (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x4390620

bool_conflict UI_DropdownSettingElement__IsOpen(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  float fVar1;
  void *pvVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Vector2_o UVar4;
  bool_conflict bVar5;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *__this_02;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  undefined8 uStack_60;
  float fStack_50;
  float fStack_4c;
  
  if (g_data_057ae2a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2a1 = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return 0;
  }
  pUVar7 = (__this->fields)._optionsPanel;
  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
    bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar7,(MethodInfo *)0x0);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae2a2 = '\x01';
  }
  __this_02 = (UnityEngine_Transform_o *)pUVar7[2].fields.m_CachedPtr;
  if ((__this_02 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_02,(MethodInfo *)0x0),
     pUVar6 != (UnityEngine_Transform_o *)0x0)) {
    UVar9 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
    pvVar2 = pUVar7[4].monitor;
    fVar8 = *(float *)&pUVar7[4].fields.m_CachedPtr;
    if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar6 = pUVar7[2].monitor;
    __this_02 = TypeInfo_UIManager;
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      fVar1 = *(float *)(((UnityEngine_GameObject_Fields *)&TypeInfo_UIManager[7].fields)->m_CachedPtr + 0x38);
      __this_00 = (UnityEngine_RectTransform_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pUVar6,MethodInfo_RectTransform_GetComponent_RectTransform);
      __this_02 = pUVar6;
      if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
        fStack_50 = SUB84(pvVar2,0);
        fStack_4c = (float)((ulong)pvVar2 >> 0x20);
        uStack_60._0_4_ = UVar9.fields.x;
        uStack_60._4_4_ = UVar9.fields.y;
        uStack_60._4_4_ = uStack_60._4_4_ + fStack_4c * fVar1;
        uStack_60 = CONCAT44(uStack_60._4_4_,(float)uStack_60 + fStack_50 * fVar1);
        UVar4 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
        if (0.0 <= UVar4.fields.y *
                   *(float *)(((UnityEngine_GameObject_Fields *)&TypeInfo_UIManager[7].fields)->m_CachedPtr + 0x38)
                   * -0.5 + uStack_60._4_4_) {
          fVar8 = UVar9.fields.z + fVar8 * fVar1;
          __this_02 = pUVar7[2].monitor;
        }
        else {
          __this_02 = (UnityEngine_Transform_o *)pUVar7[2].fields.m_CachedPtr;
          if (__this_02 == (UnityEngine_Transform_o *)0x0) goto label_043908ee;
          pvVar2 = pUVar7[4].monitor;
          fVar8 = *(float *)&pUVar7[4].fields.m_CachedPtr;
          pUVar6 = UnityEngine_GameObject__get_transform
                             ((UnityEngine_GameObject_o *)__this_02,(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_043908ee;
          UVar9 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
          if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fVar1 = *(float *)(((UnityEngine_GameObject_Fields *)&TypeInfo_UIManager[7].fields)->m_CachedPtr + 0x38);
          fStack_50 = SUB84(pvVar2,0);
          fStack_4c = (float)((ulong)pvVar2 >> 0x20);
          uStack_60._0_4_ = UVar9.fields.x;
          uStack_60._4_4_ = UVar9.fields.y;
          fVar8 = UVar9.fields.z + fVar8 * fVar1;
          uStack_60 = CONCAT44(uStack_60._4_4_ - fStack_4c * fVar1,(float)uStack_60 + fStack_50 * fVar1);
          __this_02 = pUVar7[2].monitor;
        }
        if (((__this_02 != (UnityEngine_Transform_o *)0x0) &&
            (pUVar6 = UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)__this_02,(MethodInfo *)0x0),
            pUVar6 != (UnityEngine_Transform_o *)0x0)) &&
           (__this_01 = (UnityEngine_Transform_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar6,MethodInfo_RectTransform_GetComponent_RectTransform), __this_02 = pUVar6,
           __this_01 != (UnityEngine_Transform_o *)0x0)) {
          UVar9.fields.z = fVar8;
          UVar9.fields.x = (float)(int)uStack_60;
          UVar9.fields.y = (float)(int)((ulong)uStack_60 >> 0x20);
          UnityEngine_Transform__set_position(__this_01,UVar9,(MethodInfo *)0x0);
          return extraout_EAX;
        }
      }
    }
  }
label_043908ee:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2a3 = '\x01';
  }
  pUVar3 = __this_02[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return bVar5;
  }
  pUVar7 = __this_02[2].monitor;
  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar7,0,(MethodInfo *)0x0);
    return extraout_EAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2a4 = '\x01';
  }
  pUVar3 = pUVar7[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar3 = pUVar7[2].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
    return extraout_EAX_01;
  }
  return bVar5;
}


// UI.DropdownSettingElement$$SetOptionsPosition
// il2cpp: void UI_DropdownSettingElement__SetOptionsPosition (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x43906a0

void UI_DropdownSettingElement__SetOptionsPosition(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  UnityEngine_Object_o *pUVar6;
  UnityEngine_Vector2_o UVar7;
  bool_conflict bVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  undefined8 local_48;
  float local_38;
  float fStack_34;
  
  if (g_data_057ae2a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae2a2 = '\x01';
  }
  __this_02 = (UnityEngine_Transform_o *)(__this->fields)._selectedButton;
  if ((__this_02 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_02,(MethodInfo *)0x0),
     pUVar9 != (UnityEngine_Transform_o *)0x0)) {
    UVar11 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
    uVar2 = (__this->fields)._optionsOffset.fields.x;
    uVar4 = (__this->fields)._optionsOffset.fields.y;
    fVar10 = (__this->fields)._optionsOffset.fields.z;
    if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar9 = (UnityEngine_Transform_o *)(__this->fields)._optionsPanel;
    __this_02 = TypeInfo_UIManager;
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      fVar1 = *(float *)(((UnityEngine_GameObject_Fields *)&TypeInfo_UIManager[7].fields)->m_CachedPtr + 0x38);
      __this_00 = (UnityEngine_RectTransform_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pUVar9,MethodInfo_RectTransform_GetComponent_RectTransform);
      __this_02 = pUVar9;
      if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
        local_48._0_4_ = UVar11.fields.x;
        local_48._4_4_ = UVar11.fields.y;
        local_48._4_4_ = local_48._4_4_ + (float)uVar4 * fVar1;
        local_48 = CONCAT44(local_48._4_4_,(float)local_48 + (float)uVar2 * fVar1);
        UVar7 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
        if (0.0 <= UVar7.fields.y *
                   *(float *)(((UnityEngine_GameObject_Fields *)&TypeInfo_UIManager[7].fields)->m_CachedPtr + 0x38)
                   * -0.5 + local_48._4_4_) {
          fVar10 = UVar11.fields.z + fVar10 * fVar1;
          __this_02 = (UnityEngine_Transform_o *)(__this->fields)._optionsPanel;
        }
        else {
          __this_02 = (UnityEngine_Transform_o *)(__this->fields)._selectedButton;
          if (__this_02 == (UnityEngine_Transform_o *)0x0) goto label_043908ee;
          uVar3 = (__this->fields)._optionsOffset.fields.x;
          uVar5 = (__this->fields)._optionsOffset.fields.y;
          fVar10 = (__this->fields)._optionsOffset.fields.z;
          pUVar9 = UnityEngine_GameObject__get_transform
                             ((UnityEngine_GameObject_o *)__this_02,(MethodInfo *)0x0);
          if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_043908ee;
          UVar11 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
          if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fVar1 = *(float *)(((UnityEngine_GameObject_Fields *)&TypeInfo_UIManager[7].fields)->m_CachedPtr + 0x38);
          local_48._0_4_ = UVar11.fields.x;
          local_48._4_4_ = UVar11.fields.y;
          fVar10 = UVar11.fields.z + fVar10 * fVar1;
          local_48 = CONCAT44(local_48._4_4_ - (float)uVar5 * fVar1,(float)local_48 + (float)uVar3 * fVar1);
          __this_02 = (UnityEngine_Transform_o *)(__this->fields)._optionsPanel;
        }
        if (((__this_02 != (UnityEngine_Transform_o *)0x0) &&
            (pUVar9 = UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)__this_02,(MethodInfo *)0x0),
            pUVar9 != (UnityEngine_Transform_o *)0x0)) &&
           (__this_01 = (UnityEngine_Transform_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar9,MethodInfo_RectTransform_GetComponent_RectTransform), __this_02 = pUVar9,
           __this_01 != (UnityEngine_Transform_o *)0x0)) {
          UVar11.fields.z = fVar10;
          UVar11.fields.x = (float)(int)local_48;
          UVar11.fields.y = (float)(int)((ulong)local_48 >> 0x20);
          UnityEngine_Transform__set_position(__this_01,UVar11,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_043908ee:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2a3 = '\x01';
  }
  pUVar6 = __this_02[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  __this_03 = __this_02[2].monitor;
  if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_03,0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2a4 = '\x01';
  }
  pUVar6 = __this_03[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pUVar6 = __this_03[2].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar6,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.DropdownSettingElement$$OnDisable
// il2cpp: void UI_DropdownSettingElement__OnDisable (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x4390900

void UI_DropdownSettingElement__OnDisable(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_GameObject_o *__this_00;
  
  if (g_data_057ae2a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2a3 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  __this_00 = (__this->fields)._optionsPanel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2a4 = '\x01';
  }
  pUVar1 = __this_00[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = __this_00[2].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.DropdownSettingElement$$OnDestroy
// il2cpp: void UI_DropdownSettingElement__OnDestroy (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x4390980

void UI_DropdownSettingElement__OnDestroy(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (g_data_057ae2a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2a4 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.DropdownSettingElement$$Update
// il2cpp: void UI_DropdownSettingElement__Update (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x4390a00

void UI_DropdownSettingElement__Update(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_Scrollbar_o *pUVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  Il2CppClass *pIVar8;
  Il2CppMethodPointer vtableDispatch;
  long lVar9;
  char cVar10;
  bool_conflict bVar11;
  UnityEngine_EventSystems_EventSystem_o *pUVar12;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *__this_00;
  UI_DropdownSettingElement_o *pUVar13;
  UI_DropdownSettingElement_o *pUVar14;
  UI_DropdownSettingElement_o *__this_01;
  Il2CppObject *pIVar15;
  System_String_array *pSVar16;
  intptr_t iVar17;
  long lVar18;
  undefined8 uVar19;
  System_ArgumentException_o *pSVar20;
  System_String_o *pSVar21;
  uint uVar22;
  long unaff_RBX;
  undefined8 *puVar23;
  undefined1 *puVar24;
  UI_DropdownSettingElement_o *unaff_RBP;
  MethodInfo *pMVar25;
  UI_DropdownSettingElement_o *pUVar26;
  MethodInfo_255A0F0 **__this_02;
  MethodInfo_2A23FA0 **ppMVar27;
  UI_DropdownSettingElement_o *unaff_R14;
  System_ArgumentException_o *unaff_R15;
  float fVar28;
  float fVar29;
  float fVar30;
  UnityEngine_Vector3_o UVar31;
  undefined1 auVar32 [16];
  undefined8 uStack_40;
  UnityEngine_Object_o *pUStack_38;
  UI_DropdownSettingElement_o *pUStack_30;
  
  if (cRam00000000057ae2a5 == '\0') {
    pUStack_30 = (UI_DropdownSettingElement_o *)&g_data_04390a20;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    pUStack_30 = (UI_DropdownSettingElement_o *)&g_data_04390a2c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    cRam00000000057ae2a5 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._optionsPanel;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStack_30 = (UI_DropdownSettingElement_o *)&g_data_04390a50;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_30 = (UI_DropdownSettingElement_o *)&g_data_04390a5c;
  bVar11 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  pUVar5 = (__this->fields)._optionsPanel;
  pUVar14 = (UI_DropdownSettingElement_o *)0x0;
  pSVar20 = unaff_R15;
  if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto code_r0x04390bd3;
  pUStack_30 = (UI_DropdownSettingElement_o *)&g_data_04390a78;
  bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return;
  }
  pUStack_30 = (UI_DropdownSettingElement_o *)&g_data_04390a8c;
  bVar11 = UnityEngine_Input__GetKeyUp(0x143,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
code_r0x04390af6:
    pUStack_30 = (UI_DropdownSettingElement_o *)&g_data_04390b00;
    pUVar14 = __this;
    __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto code_r0x04390bd3;
    pUStack_30 = (UI_DropdownSettingElement_o *)&g_data_04390b13;
    UVar31 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    uVar1 = (__this->fields)._lastKnownPosition.fields.x;
    uVar2 = (__this->fields)._lastKnownPosition.fields.y;
    fVar28 = UVar31.fields.y - (float)uVar2;
    fVar29 = UVar31.fields.z - (__this->fields)._lastKnownPosition.fields.z;
    fVar30 = UVar31.fields.x - (float)uVar1;
    if (fVar30 * fVar30 + fVar28 * fVar28 + fVar29 * fVar29 < 9.9999994e-11) {
      return;
    }
  }
  else {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      pUStack_30 = (UI_DropdownSettingElement_o *)&g_data_04390aa8;
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar14 = (UI_DropdownSettingElement_o *)0x0;
    pUStack_30 = (UI_DropdownSettingElement_o *)&g_data_04390aaf;
    pUVar12 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar12 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto code_r0x04390bd3;
    pUVar6 = (__this->fields)._scrollBar;
    pUVar14 = (UI_DropdownSettingElement_o *)0x0;
    if (pUVar6 == (UnityEngine_UI_Scrollbar_o *)0x0) goto code_r0x04390bd3;
    pSVar20 = (System_ArgumentException_o *)(pUVar12->fields).m_CurrentSelected;
    pUStack_30 = (UI_DropdownSettingElement_o *)&g_data_04390ad0;
    x = (UnityEngine_Object_o *)
        UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_30 = (UI_DropdownSettingElement_o *)&g_data_04390ae5;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_30 = (UI_DropdownSettingElement_o *)&g_data_04390af2;
    bVar11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)pSVar20,x,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') goto code_r0x04390af6;
  }
  if (g_data_057ae2a8 == '\0') {
    pUStack_30 = (UI_DropdownSettingElement_o *)&g_data_04390b72;
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndCloseOptions_d__21);
    g_data_057ae2a8 = '\x01';
  }
  pUStack_30 = (UI_DropdownSettingElement_o *)&g_data_04390b88;
  pUVar13 = (UI_DropdownSettingElement_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndCloseOptions_d__21);
  pUStack_30 = (UI_DropdownSettingElement_o *)&g_data_04390b97;
  pUVar14 = pUVar13;
  UI_DropdownSettingElement__WaitAndCloseOptions_d__21___ctor
            ((UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o *)pUVar13,0,(MethodInfo *)0x0);
  x = (UnityEngine_Object_o *)0x0;
  if (pUVar13 != (UI_DropdownSettingElement_o *)0x0) {
    (pUVar13->fields)._setting = (Settings_BaseSetting_o *)__this;
    pUStack_30 = (UI_DropdownSettingElement_o *)&g_data_04390baf;
    il2cpp_runtime_helper_022b4080(&(pUVar13->fields)._setting,__this);
    puVar24 = (undefined1 *)register0x00000020;
    do {
      *(System_ArgumentException_o **)(puVar24 + -8) = unaff_R15;
      *(UI_DropdownSettingElement_o **)(puVar24 + -0x10) = unaff_R14;
      *(long *)(puVar24 + -0x18) = unaff_RBX;
      if (pUVar13 == (UI_DropdownSettingElement_o *)0x0) {
label_04efd796:
        *(undefined8 *)(puVar24 + -0x20) = 0x4efd7a2;
        uVar19 = il2cpp_runtime_helper_023445d0(&TypeInfo_NullReferenceException);
        *(undefined8 *)(puVar24 + -0x20) = 0x4efd7aa;
        pSVar20 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar19);
        *(undefined8 *)(puVar24 + -0x20) = 0x4efd7b9;
        pSVar21 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"routine is null");
        *(undefined8 *)(puVar24 + -0x20) = 0x4efd7c6;
        System_NullReferenceException___ctor_3cb94f0
                  ((System_NullReferenceException_o *)pSVar20,pSVar21,(MethodInfo *)0x0);
        pUVar13 = unaff_R14;
        __this = (UI_DropdownSettingElement_o *)unaff_R15;
      }
      else {
        if (g_data_057b4ded == '\0') {
          *(undefined8 *)(puVar24 + -0x20) = 0x4efd6a9;
          il2cpp_runtime_helper_023445d0(&MethodInfo_IntPtr_MarshalNullCheck_Object);
          g_data_057b4ded = '\x01';
        }
        lVar9 = MethodInfo_IntPtr_MarshalNullCheck_Object;
        lVar18 = *(long *)(MethodInfo_IntPtr_MarshalNullCheck_Object + 0x38);
        if (lVar18 == 0) {
          *(undefined8 *)(puVar24 + -0x20) = 0x4efd6cb;
          il2cpp_runtime_helper_02300a20(MethodInfo_IntPtr_MarshalNullCheck_Object);
          lVar18 = *(long *)(lVar9 + 0x38);
        }
        pMVar25 = *(MethodInfo **)(lVar18 + 8);
        *(undefined8 *)(puVar24 + -0x20) = 0x4efd6db;
        pSVar20 = (System_ArgumentException_o *)__this;
        iVar17 = UnityEngine_Object_MarshalledUnityObject__MarshalAssumeNotNull_object_
                           ((Il2CppObject *)__this,(MethodInfo_26701D0 *)pMVar25);
        if (iVar17 == 0) {
label_04efd791:
          *(undefined8 *)(puVar24 + -0x20) = 0x4efd796;
          UnityEngine_Object_MarshalledUnityObject__ThrowNullExceptionObjectImpl
                    ((Il2CppObject *)pSVar20,pMVar25);
          unaff_R14 = pUVar13;
          unaff_R15 = (System_ArgumentException_o *)__this;
          goto label_04efd796;
        }
        if (g_data_057b4e50 == (code *)0x0) {
          *(undefined8 *)(puVar24 + -0x20) = 0x4efd6ff;
          g_data_057b4e50 = (code *)il2cpp_runtime_helper_022b28d0(
                                             "UnityEngine.MonoBehaviour::IsObjectMonoBehaviour_Injected(System.IntPtr)"
                                             );
        }
        *(undefined8 *)(puVar24 + -0x20) = 0x4efd70e;
        cVar10 = (*g_data_057b4e50)(iVar17);
        if (cVar10 != '\0') {
          if (g_data_057b4def == '\0') {
            *(undefined8 *)(puVar24 + -0x20) = 0x4efd72b;
            il2cpp_runtime_helper_023445d0(&MethodInfo_IntPtr_MarshalNullCheck_MonoBehaviour);
            g_data_057b4def = '\x01';
          }
          lVar9 = MethodInfo_IntPtr_MarshalNullCheck_MonoBehaviour;
          lVar18 = *(long *)(MethodInfo_IntPtr_MarshalNullCheck_MonoBehaviour + 0x38);
          if (lVar18 == 0) {
            *(undefined8 *)(puVar24 + -0x20) = 0x4efd74d;
            il2cpp_runtime_helper_02300a20(MethodInfo_IntPtr_MarshalNullCheck_MonoBehaviour);
            lVar18 = *(long *)(lVar9 + 0x38);
          }
          pMVar25 = *(MethodInfo **)(lVar18 + 8);
          *(undefined8 *)(puVar24 + -0x20) = 0x4efd75d;
          pSVar20 = (System_ArgumentException_o *)__this;
          iVar17 = UnityEngine_Object_MarshalledUnityObject__MarshalAssumeNotNull_object_
                             ((Il2CppObject *)__this,(MethodInfo_26701D0 *)pMVar25);
          if (iVar17 != 0) {
            if (g_data_057b4e60 == (code *)0x0) {
              *(undefined8 *)(puVar24 + -0x20) = 0x4efd77d;
              g_data_057b4e60 = (code *)il2cpp_runtime_helper_022b28d0(
                                                 "UnityEngine.MonoBehaviour::StartCoroutineManaged2_Injected(System.IntPtr,System.Collections.IEnumerator)"
                                                 );
            }
            (*g_data_057b4e60)(iVar17,pUVar13);
            return;
          }
          goto label_04efd791;
        }
        *(undefined8 *)(puVar24 + -0x20) = 0x4efd7d4;
        uVar19 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
        *(undefined8 *)(puVar24 + -0x20) = 0x4efd7dc;
        pSVar20 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar19);
        *(undefined8 *)(puVar24 + -0x20) = 0x4efd7eb;
        pSVar21 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Coroutines can only be stopped on a MonoBehaviour");
        *(undefined8 *)(puVar24 + -0x20) = 0x4efd7f8;
        System_ArgumentException___ctor_3c12490(pSVar20,pSVar21,(MethodInfo *)0x0);
      }
      *(undefined8 *)(puVar24 + -0x20) = 0x4efd804;
      unaff_R14 = (UI_DropdownSettingElement_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Coroutine_StartCoroutine);
      *(undefined8 *)(puVar24 + -0x20) = 0x4efd80f;
      unaff_R15 = pSVar20;
      il2cpp_runtime_helper_022b2b10();
      *(UI_DropdownSettingElement_o **)(puVar24 + -0x20) = __this;
      *(UI_DropdownSettingElement_o **)(puVar24 + -0x28) = pUVar13;
      *(System_ArgumentException_o **)(puVar24 + -0x30) = pSVar20;
      if (g_data_057b4def == '\0') {
        *(undefined8 *)(puVar24 + -0x38) = 0x4efd830;
        il2cpp_runtime_helper_023445d0(&MethodInfo_IntPtr_MarshalNullCheck_MonoBehaviour);
        g_data_057b4def = '\x01';
      }
      unaff_RBX = MethodInfo_IntPtr_MarshalNullCheck_MonoBehaviour;
      lVar18 = *(long *)(MethodInfo_IntPtr_MarshalNullCheck_MonoBehaviour + 0x38);
      if (lVar18 == 0) {
        *(undefined8 *)(puVar24 + -0x38) = 0x4efd852;
        il2cpp_runtime_helper_02300a20(MethodInfo_IntPtr_MarshalNullCheck_MonoBehaviour);
        lVar18 = *(long *)(unaff_RBX + 0x38);
      }
      pUVar13 = *(UI_DropdownSettingElement_o **)(lVar18 + 8);
      *(undefined8 *)(puVar24 + -0x38) = 0x4efd862;
      __this = (UI_DropdownSettingElement_o *)unaff_R15;
      iVar17 = UnityEngine_Object_MarshalledUnityObject__MarshalAssumeNotNull_object_
                         ((Il2CppObject *)unaff_R15,(MethodInfo_26701D0 *)pUVar13);
      if (iVar17 != 0) {
        if (g_data_057b4e60 == (code *)0x0) {
          *(undefined8 *)(puVar24 + -0x38) = 0x4efd882;
          g_data_057b4e60 = (code *)il2cpp_runtime_helper_022b28d0(
                                             "UnityEngine.MonoBehaviour::StartCoroutineManaged2_Injected(System.IntPtr,System.Collections.IEnumerator)"
                                             );
        }
        (*g_data_057b4e60)(iVar17,unaff_R14);
        return;
      }
      *(undefined8 *)(puVar24 + -0x38) = 0x4efd89b;
      UnityEngine_Object_MarshalledUnityObject__ThrowNullExceptionObjectImpl
                ((Il2CppObject *)__this,(MethodInfo *)pUVar13);
      puVar24 = puVar24 + -0x30;
    } while( true );
  }
code_r0x04390bd3:
  pUStack_30 = (UI_DropdownSettingElement_o *)&g_data_04390bd8;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  pUStack_38 = x;
  pUStack_30 = __this;
  if (g_data_057ae2a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndCloseOptions_d__21);
    g_data_057ae2a8 = '\x01';
  }
  pUVar13 = (UI_DropdownSettingElement_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndCloseOptions_d__21);
  ppMVar27 = (MethodInfo_2A23FA0 **)pUVar13;
  UI_DropdownSettingElement__WaitAndCloseOptions_d__21___ctor
            ((UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o *)pUVar13,0,(MethodInfo *)0x0);
  if (pUVar13 != (UI_DropdownSettingElement_o *)0x0) {
    (pUVar13->fields)._setting = (Settings_BaseSetting_o *)pUVar14;
    il2cpp_runtime_helper_022b4080(&(pUVar13->fields)._setting,pUVar14);
    return;
  }
  uVar19 = il2cpp_runtime_helper_022b2c90();
  __this_02 = (MethodInfo_255A0F0 **)0x0;
  puVar23 = &uStack_40;
  do {
    *(UI_DropdownSettingElement_o **)((long)puVar23 + -8) = pUVar14;
    *(MethodInfo_255A0F0 ***)((long)puVar23 + -0x10) = __this_02;
    *(undefined8 *)((long)puVar23 + -0x18) = uVar19;
    pUVar5 = (((UI_DropdownSettingElement_o *)ppMVar27)->fields)._optionsPanel;
    pUVar13 = (UI_DropdownSettingElement_o *)0x0;
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      *(undefined8 *)((long)puVar23 + -0x20) = 0x4390c6b;
      bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        if (g_data_057ae2a7 == '\0') {
          *(undefined8 *)((long)puVar23 + -0x20) = 0x4390cb7;
          il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableOptions_d__20);
          g_data_057ae2a7 = '\x01';
        }
        *(undefined8 *)((long)puVar23 + -0x20) = 0x4390ccd;
        pUVar14 = (UI_DropdownSettingElement_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableOptions_d__20);
        *(undefined8 *)((long)puVar23 + -0x20) = 0x4390cdc;
        pUVar13 = pUVar14;
        UI_DropdownSettingElement__WaitAndEnableOptions_d__20___ctor
                  ((UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)pUVar14,0,(MethodInfo *)0x0);
        __this_02 = (MethodInfo_255A0F0 **)0x0;
        if (pUVar14 != (UI_DropdownSettingElement_o *)0x0) {
          (pUVar14->fields)._setting = (Settings_BaseSetting_o *)ppMVar27;
          *(undefined8 *)((long)puVar23 + -0x20) = 0x4390cf4;
          il2cpp_runtime_helper_022b4080(&(pUVar14->fields)._setting,ppMVar27);
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)ppMVar27,(System_Collections_IEnumerator_o *)pUVar14,
                     (MethodInfo *)0x0);
          return;
        }
      }
      else {
        pUVar6 = (((UI_DropdownSettingElement_o *)ppMVar27)->fields)._scrollBar;
        pUVar13 = (UI_DropdownSettingElement_o *)0x0;
        if (pUVar6 != (UnityEngine_UI_Scrollbar_o *)0x0) {
          *(undefined8 *)((long)puVar23 + -0x20) = 0x4390c83;
          fVar28 = UnityEngine_UI_Scrollbar__get_value(pUVar6,(MethodInfo *)0x0);
          (((UI_DropdownSettingElement_o *)ppMVar27)->fields)._currentScrollValue = fVar28;
          pUVar5 = (((UI_DropdownSettingElement_o *)ppMVar27)->fields)._optionsPanel;
          pUVar13 = (UI_DropdownSettingElement_o *)0x0;
          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    *(undefined8 *)((long)puVar23 + -0x20) = 0x4390d0d;
    uVar19 = il2cpp_runtime_helper_022b2c90();
    *(MethodInfo_2A23FA0 ***)((long)puVar23 + -0x20) = ppMVar27;
    *(MethodInfo_255A0F0 ***)((long)puVar23 + -0x28) = __this_02;
    *(undefined8 *)((long)puVar23 + -0x30) = uVar19;
    if (g_data_057ae2a7 == '\0') {
      *(undefined8 *)((long)puVar23 + -0x38) = 0x4390d2c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableOptions_d__20);
      g_data_057ae2a7 = '\x01';
    }
    *(undefined8 *)((long)puVar23 + -0x38) = 0x4390d42;
    __this_01 = (UI_DropdownSettingElement_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableOptions_d__20);
    pUVar14 = (UI_DropdownSettingElement_o *)0x0;
    *(undefined8 *)((long)puVar23 + -0x38) = 0x4390d51;
    pUVar26 = __this_01;
    UI_DropdownSettingElement__WaitAndEnableOptions_d__20___ctor
              ((UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)__this_01,0,(MethodInfo *)0x0);
    if (__this_01 != (UI_DropdownSettingElement_o *)0x0) {
      (__this_01->fields)._setting = (Settings_BaseSetting_o *)pUVar13;
      *(undefined8 *)((long)puVar23 + -0x38) = 0x4390d69;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields)._setting,pUVar13);
      return;
    }
    *(undefined8 *)((long)puVar23 + -0x38) = 0x4390d79;
    auVar32 = il2cpp_runtime_helper_022b2c90();
    *(UI_DropdownSettingElement_o **)((long)puVar23 + -0x38) = unaff_RBP;
    *(System_ArgumentException_o **)((long)puVar23 + -0x40) = pSVar20;
    *(UI_DropdownSettingElement_o **)((long)puVar23 + -0x48) = pUVar13;
    *(undefined8 *)((long)puVar23 + -0x50) = 0;
    *(long *)((long)puVar23 + -0x58) = auVar32._0_8_;
    pSVar20 = (System_ArgumentException_o *)(auVar32._8_8_ & 0xffffffff);
    if (g_data_057ae2a9 == '\0') {
      *(undefined8 *)((long)puVar23 + -0x60) = 0x4390dbc;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)puVar23 + -0x60) = 0x4390dc8;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)((long)puVar23 + -0x60) = 0x4390dd4;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      ppMVar27 = &MethodInfo_Void_set_Value;
      *(undefined8 *)((long)puVar23 + -0x60) = 0x4390de0;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae2a9 = '\x01';
      unaff_RBP = (UI_DropdownSettingElement_o *)(pUVar26->fields)._selectedButtonLabel;
      __this_02 = (MethodInfo_255A0F0 **)ppMVar27;
      if (g_data_057ae296 == '\0') goto label_04390df4;
label_04390da6:
      if (unaff_RBP == (UI_DropdownSettingElement_o *)0x0) goto label_04390f48;
label_04390e10:
      *(undefined8 *)((long)puVar23 + -0x60) = 0x4390e22;
      __this_02 = (MethodInfo_255A0F0 **)unaff_RBP;
      pIVar15 = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)unaff_RBP,MethodInfo_Text_GetComponent_Text);
      if (pIVar15 == (Il2CppObject *)0x0) goto label_04390f48;
      pMVar25 = pIVar15->klass->vtable[0x4b].method;
      vtableDispatch = pIVar15->klass->vtable[0x4b].methodPtr;
      *(undefined8 *)((long)puVar23 + -0x60) = 0x4390e41;
      (*vtableDispatch)(pIVar15,pUVar14,pMVar25);
      pUVar6 = (pUVar26->fields)._scrollBar;
      __this_02 = (MethodInfo_255A0F0 **)0x0;
      if (pUVar6 == (UnityEngine_UI_Scrollbar_o *)0x0) goto label_04390f48;
      *(undefined8 *)((long)puVar23 + -0x60) = 0x4390e55;
      fVar28 = UnityEngine_UI_Scrollbar__get_value(pUVar6,(MethodInfo *)0x0);
      (pUVar26->fields)._currentScrollValue = fVar28;
      pUVar5 = (pUVar26->fields)._optionsPanel;
      __this_02 = (MethodInfo_255A0F0 **)0x0;
      if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_04390f48;
      *(undefined8 *)((long)puVar23 + -0x60) = 0x4390e70;
      UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
      iVar4 = (pUVar26->fields)._settingType;
      if (iVar4 != 2) {
        if (iVar4 == 4) {
          __this_02 = (MethodInfo_255A0F0 **)(pUVar26->fields)._setting;
          if ((UI_DropdownSettingElement_o *)__this_02 == (UI_DropdownSettingElement_o *)0x0)
          goto label_04390f48;
          bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
          if (((((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)__this_02)->klass)->_2).
               naturalAligment < bVar3) ||
             ((((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)__this_02)->klass)->_2).
              typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_StringSetting)) goto label_04390f4d;
          *(undefined8 *)((long)puVar23 + -0x60) = 0x4390ece;
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)__this_02,(Il2CppObject *)pUVar14,MethodInfo_Void_set_Value);
        }
        pUVar7 = (pUVar26->fields)._onDropdownOptionSelect;
joined_r0x04390f3b:
        if (pUVar7 == (UnityEngine_Events_UnityAction_o *)0x0) {
          return;
        }
        (*(code *)(pUVar7->fields).invoke_impl)((pUVar7->fields).method_code,(pUVar7->fields).method);
        return;
      }
      __this_02 = (MethodInfo_255A0F0 **)(pUVar26->fields)._setting;
      if ((UI_DropdownSettingElement_o *)__this_02 == (UI_DropdownSettingElement_o *)0x0) goto label_04390f48;
      bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
      if ((bVar3 <= (((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)__this_02)->klass)->_2).
                    naturalAligment) &&
         ((((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)__this_02)->klass)->_2).
          typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_IntSetting)) {
        *(undefined8 *)((long)puVar23 + -0x60) = 0x4390f34;
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)__this_02,auVar32._8_4_,MethodInfo_Void_set_Value);
        pUVar7 = (pUVar26->fields)._onDropdownOptionSelect;
        goto joined_r0x04390f3b;
      }
    }
    else {
      unaff_RBP = (UI_DropdownSettingElement_o *)(pUVar26->fields)._selectedButtonLabel;
      __this_02 = (MethodInfo_255A0F0 **)pUVar26;
      if (g_data_057ae296 != '\0') goto label_04390da6;
label_04390df4:
      __this_02 = &MethodInfo_Text_GetComponent_Text;
      *(undefined8 *)((long)puVar23 + -0x60) = 0x4390e00;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae296 = '\x01';
      if (unaff_RBP != (UI_DropdownSettingElement_o *)0x0) goto label_04390e10;
label_04390f48:
      *(undefined8 *)((long)puVar23 + -0x60) = 0x4390f4d;
      il2cpp_runtime_helper_022b2c90();
    }
label_04390f4d:
    *(undefined8 *)((long)puVar23 + -0x60) = 0x4390f52;
    uVar19 = il2cpp_runtime_helper_022b2fd0();
    *(UI_DropdownSettingElement_o **)((long)puVar23 + -0x60) = pUVar14;
    *(UI_DropdownSettingElement_o **)((long)puVar23 + -0x68) = pUVar26;
    *(undefined8 *)((long)puVar23 + -0x70) = uVar19;
    ppMVar27 = (MethodInfo_2A23FA0 **)__this_02;
    if (g_data_057ae2aa == '\0') {
      *(undefined8 *)((long)puVar23 + -0x78) = 0x4390f7c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)puVar23 + -0x78) = 0x4390f88;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)((long)puVar23 + -0x78) = 0x4390f94;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      *(undefined8 *)((long)puVar23 + -0x78) = 0x4390fa0;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      ppMVar27 = &MethodInfo_Void_set_Value;
      *(undefined8 *)((long)puVar23 + -0x78) = 0x4390fac;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae2aa = '\x01';
    }
    iVar4 = (((UI_DropdownSettingElement_o *)__this_02)->fields)._settingType;
    if (iVar4 == 2) {
      pUVar14 = (UI_DropdownSettingElement_o *)(((UI_DropdownSettingElement_o *)__this_02)->fields)._setting;
      if (pUVar14 == (UI_DropdownSettingElement_o *)0x0) goto label_04391105;
      bVar3 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((((Settings_TypedSetting_T__c *)pUVar14->klass)->_2).naturalAligment < bVar3) ||
         ((((Settings_TypedSetting_T__c *)pUVar14->klass)->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_IntSetting
         )) goto label_0439110f;
      pSVar16 = (((UI_DropdownSettingElement_o *)__this_02)->fields)._options;
      if (pSVar16 == (System_String_array *)0x0) goto label_04391105;
      uVar22 = *(uint *)((long)&(pUVar14->fields).m_CachedPtr + 4);
      if ((int)pSVar16->max_length <= (int)uVar22) {
        *(undefined8 *)((long)puVar23 + -0x78) = 0x43910cd;
        ppMVar27 = (MethodInfo_2A23FA0 **)pUVar14;
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar14,0,MethodInfo_Void_set_Value);
        pSVar16 = (((UI_DropdownSettingElement_o *)__this_02)->fields)._options;
        if (pSVar16 == (System_String_array *)0x0) goto label_04391105;
        uVar22 = *(uint *)((long)&(pUVar14->fields).m_CachedPtr + 4);
      }
      if (uVar22 < (uint)pSVar16->max_length) {
        __this_02 = (MethodInfo_255A0F0 **)
                    (((UI_DropdownSettingElement_o *)__this_02)->fields)._selectedButtonLabel;
        pUVar14 = (UI_DropdownSettingElement_o *)pSVar16->m_Items[(int)uVar22];
        goto joined_r0x043910f2;
      }
    }
    else {
      if (iVar4 != 4) {
        return;
      }
      pUVar13 = (UI_DropdownSettingElement_o *)(((UI_DropdownSettingElement_o *)__this_02)->fields)._setting;
      if (pUVar13 == (UI_DropdownSettingElement_o *)0x0) {
label_04391105:
        *(undefined8 *)((long)puVar23 + -0x78) = 0x439110a;
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        bVar3 = (TypeInfo_StringSetting->_2).naturalAligment;
        if ((bVar3 <= (pUVar13->klass->_2).naturalAligment) &&
           ((pUVar13->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_StringSetting)) {
          __this_02 = (MethodInfo_255A0F0 **)
                      (((UI_DropdownSettingElement_o *)__this_02)->fields)._selectedButtonLabel;
          pUVar14 = (UI_DropdownSettingElement_o *)(pUVar13->fields).m_CancellationTokenSource;
joined_r0x043910f2:
          if (g_data_057ae296 == '\0') {
            *(undefined8 *)((long)puVar23 + -0x78) = 0x4391024;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
            g_data_057ae296 = '\x01';
          }
          if ((UI_DropdownSettingElement_o *)__this_02 != (UI_DropdownSettingElement_o *)0x0) {
            *(undefined8 *)((long)puVar23 + -0x78) = 0x4391046;
            pIVar15 = UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Text_GetComponent_Text);
            if (pIVar15 != (Il2CppObject *)0x0) {
              pIVar8 = pIVar15->klass;
              vtableDispatch = pIVar8->vtable[0x4b].methodPtr;
              (*vtableDispatch)
                        (pIVar15,pUVar14,pIVar8->vtable[0x4b].method,pIVar8,vtableDispatch);
              return;
            }
          }
          goto label_04391105;
        }
      }
      *(undefined8 *)((long)puVar23 + -0x78) = 0x439110f;
      il2cpp_runtime_helper_022b2fd0();
label_0439110f:
      *(undefined8 *)((long)puVar23 + -0x78) = 0x4391117;
      ppMVar27 = (MethodInfo_2A23FA0 **)pUVar14;
      il2cpp_runtime_helper_022b2fd0();
    }
    *(undefined8 *)((long)puVar23 + -0x78) = 0x439111c;
    uVar19 = il2cpp_runtime_helper_022b2ca0();
    puVar23 = (undefined8 *)((long)puVar23 + -0x70);
  } while( true );
}


// UI.DropdownSettingElement$$CreateOptionButton
// il2cpp: void UI_DropdownSettingElement__CreateOptionButton (UI_DropdownSettingElement_o* __this, System_String_o* option, int32_t index, float width, float height, int32_t fontSize, System_String_o* themePanel, const MethodInfo* method);
// 0x43900a0

void UI_DropdownSettingElement__CreateOptionButton
               (UI_DropdownSettingElement_o *__this,System_String_o *option,int32_t index,float width,
               float height,int32_t fontSize,System_String_o *themePanel,MethodInfo *method)

{
  float fVar1;
  void *pvVar2;
  System_String_o *pSVar3;
  Il2CppClass *__this_00;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_UI_ColorBlock_o value;
  bool_conflict bVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Events_UnityAction_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  MethodInfo_255A0F0 **__this_01;
  UnityEngine_UI_Text_o *__this_02;
  Il2CppObject *pIVar11;
  UnityEngine_UI_Selectable_o *__this_03;
  UnityEngine_RectTransform_o *__this_04;
  UnityEngine_Transform_o *__this_05;
  System_String_o **ppSVar12;
  UnityEngine_Events_UnityAction_o *path;
  long *__this_06;
  UnityEngine_GameObject_o *pUVar13;
  float fVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Color_o UVar16;
  undefined8 uStackY_1c0;
  float fStackY_1b0;
  float fStackY_1ac;
  UnityEngine_Events_UnityAction_c *local_88;
  void *pvStack_80;
  intptr_t local_78;
  intptr_t iStack_70;
  Il2CppObject *local_68;
  intptr_t iStack_60;
  intptr_t local_58;
  intptr_t iStack_50;
  intptr_t local_48;
  intptr_t iStack_40;
  intptr_t local_38;
  
  if (g_data_057ae2a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateOptionButton_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"DropdownTextColor");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    il2cpp_runtime_helper_023445d0(&"Dropdown");
    il2cpp_runtime_helper_023445d0(&"Options");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Elements/DropdownOption");
    g_data_057ae2a6 = '\x01';
  }
  pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
  path = pUVar7;
  UI_DropdownSettingElement___c__DisplayClass18_0___ctor
            ((UI_DropdownSettingElement___c__DisplayClass18_0_o *)pUVar7,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_Events_UnityAction_o *)0x0) {
    (pUVar7->fields).method_ptr = (intptr_t)__this;
    il2cpp_runtime_helper_022b4080(&pUVar7->fields,__this);
    ppSVar12 = (System_String_o **)&(pUVar7->fields).invoke_impl;
    (pUVar7->fields).invoke_impl = (intptr_t)option;
    il2cpp_runtime_helper_022b4080(ppSVar12,option);
    *(int32_t *)&(pUVar7->fields).m_target = index;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    path = (UnityEngine_Events_UnityAction_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar7 = (UnityEngine_Events_UnityAction_o *)
             ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       ((System_String_o *)path,"Prefabs/Elements/DropdownOption",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
    if (pUVar7 != (UnityEngine_Events_UnityAction_o *)0x0) {
      pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
      path = (UnityEngine_Events_UnityAction_o *)(__this->fields)._optionsPanel;
      if (((path != (UnityEngine_Events_UnityAction_o *)0x0) &&
          (pUVar9 = (UnityEngine_Events_UnityAction_o *)
                    UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)path,(MethodInfo *)0x0),
          pUVar9 != (UnityEngine_Events_UnityAction_o *)0x0)) &&
         (pUVar10 = UnityEngine_Transform__Find
                              ((UnityEngine_Transform_o *)pUVar9,"Options",(MethodInfo *)0x0),
         path = pUVar9, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent_4e09e30(pUVar8,pUVar10,0,(MethodInfo *)0x0);
        path = pUVar7;
        pUVar9 = (UnityEngine_Events_UnityAction_o *)
                 UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
        if ((pUVar9 != (UnityEngine_Events_UnityAction_o *)0x0) &&
           (__this_01 = (MethodInfo_255A0F0 **)
                        UnityEngine_Transform__Find
                                  ((UnityEngine_Transform_o *)pUVar9,"Label",(MethodInfo *)0x0),
           path = pUVar9,
           (UnityEngine_Events_UnityAction_o *)__this_01 != (UnityEngine_Events_UnityAction_o *)0x0)) {
          pUVar9 = (UnityEngine_Events_UnityAction_o *)
                   UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          pSVar3 = *ppSVar12;
          if (g_data_057ae295 == '\0') {
            __this_01 = &MethodInfo_Text_GetComponent_Text;
            il2cpp_runtime_helper_023445d0();
            g_data_057ae295 = '\x01';
          }
          path = (UnityEngine_Events_UnityAction_o *)__this_01;
          if ((pUVar9 != (UnityEngine_Events_UnityAction_o *)0x0) &&
             (__this_02 = (UnityEngine_UI_Text_o *)
                          UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)pUVar9,MethodInfo_Text_GetComponent_Text), path = pUVar9,
             __this_02 != (UnityEngine_UI_Text_o *)0x0)) {
            (*(__this_02->klass->vtable)._75_set_text.methodPtr)
                      (__this_02,pSVar3,(__this_02->klass->vtable)._75_set_text.method);
            UnityEngine_UI_Text__set_fontSize(__this_02,fontSize,(MethodInfo *)0x0);
            path = pUVar7;
            pIVar11 = UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_Button_GetComponent_Button);
            if (pIVar11 != (Il2CppObject *)0x0) {
              __this_00 = pIVar11[0x10].klass;
              pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              path = pUVar9;
              UnityEngine_Events_UnityAction___ctor();
              if (__this_00 != (Il2CppClass *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener
                          ((UnityEngine_Events_UnityEvent_o *)__this_00,pUVar9,(MethodInfo *)0x0);
                path = pUVar7;
                pIVar11 = UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                if (pIVar11 != (Il2CppObject *)0x0) {
                  (*pIVar11->klass->vtable[0x24].methodPtr)(width,pIVar11,pIVar11->klass->vtable[0x24].method)
                  ;
                  path = pUVar7;
                  pIVar11 = UnityEngine_GameObject__GetComponent_object_
                                      ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                  if (pIVar11 != (Il2CppObject *)0x0) {
                    (*pIVar11->klass->vtable[0x26].methodPtr)
                              (height,pIVar11,pIVar11->klass->vtable[0x26].method);
                    __this_03 = (UnityEngine_UI_Selectable_o *)
                                UnityEngine_GameObject__GetComponent_object_
                                          ((UnityEngine_GameObject_o *)pUVar7,MethodInfo_Button_GetComponent_Button);
                    if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    path = (UnityEngine_Events_UnityAction_o *)&local_88;
                    UI_UIManager__GetThemeColorBlock
                              ((UnityEngine_UI_ColorBlock_o *)path,themePanel,"DefaultSetting","Dropdown",
                               "DefaultPanel",(MethodInfo *)0x0);
                    if (__this_03 != (UnityEngine_UI_Selectable_o *)0x0) {
                      value.fields.m_NormalColor.fields._8_8_ = pvStack_80;
                      value.fields.m_NormalColor.fields._0_8_ = local_88;
                      value.fields.m_HighlightedColor.fields.r = (float)(undefined4)local_78;
                      value.fields.m_HighlightedColor.fields.g = (float)local_78._4_4_;
                      value.fields.m_HighlightedColor.fields.b = (float)(undefined4)iStack_70;
                      value.fields.m_HighlightedColor.fields.a = (float)iStack_70._4_4_;
                      value.fields.m_PressedColor.fields._0_8_ = local_68;
                      value.fields.m_PressedColor.fields.b = (float)(undefined4)iStack_60;
                      value.fields.m_PressedColor.fields.a = (float)iStack_60._4_4_;
                      value.fields.m_SelectedColor.fields.r = (float)(undefined4)local_58;
                      value.fields.m_SelectedColor.fields.g = (float)local_58._4_4_;
                      value.fields.m_SelectedColor.fields.b = (float)(undefined4)iStack_50;
                      value.fields.m_SelectedColor.fields.a = (float)iStack_50._4_4_;
                      value.fields.m_DisabledColor.fields.r = (float)(undefined4)local_48;
                      value.fields.m_DisabledColor.fields.g = (float)local_48._4_4_;
                      value.fields.m_DisabledColor.fields.b = (float)(undefined4)iStack_40;
                      value.fields.m_DisabledColor.fields.a = (float)iStack_40._4_4_;
                      value.fields.m_ColorMultiplier = (float)(undefined4)local_38;
                      value.fields.m_FadeDuration = (float)local_38._4_4_;
                      UnityEngine_UI_Selectable__set_colors(__this_03,value,(MethodInfo *)0x0);
                      pUVar9 = (UnityEngine_Events_UnityAction_o *)
                               UnityEngine_GameObject__get_transform
                                         ((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0);
                      path = pUVar7;
                      if ((pUVar9 != (UnityEngine_Events_UnityAction_o *)0x0) &&
                         (pUVar8 = UnityEngine_Transform__Find
                                             ((UnityEngine_Transform_o *)pUVar9,"Label",(MethodInfo *)0x0
                                             ), path = pUVar9, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
                        pIVar11 = UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)pUVar8,MethodInfo_Text_GetComponent_Text);
                        UVar16 = UI_UIManager__GetThemeColor
                                           (themePanel,"DefaultSetting","DropdownTextColor","DefaultPanel",
                                            (MethodInfo *)0x0);
                        path = (UnityEngine_Events_UnityAction_o *)themePanel;
                        if (pIVar11 != (Il2CppObject *)0x0) {
                          (*pIVar11->klass->vtable[0x17].methodPtr)
                                    (UVar16.fields.r,UVar16.fields.b,pIVar11,
                                     pIVar11->klass->vtable[0x17].method);
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
  il2cpp_runtime_helper_022b2c90();
  __this_06 = (long *)(path->fields).extra_arg;
  if ((UnityEngine_GameObject_o *)__this_06 != (UnityEngine_GameObject_o *)0x0) {
    pUVar8 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_06,(MethodInfo *)0x0);
    if (g_data_057a6932 == '\0') {
      __this_06 = &TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057a6932 = '\x01';
    }
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                (pUVar8,(UnityEngine_Vector3_o)
                        *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2a1 = '\x01';
  }
  pUVar4 = ((UnityEngine_GameObject_o *)((long)__this_06 + 0x30))->monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pUVar13 = ((UnityEngine_GameObject_o *)((long)__this_06 + 0x30))->monitor;
  if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__get_activeSelf(pUVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae2a2 = '\x01';
  }
  pUVar8 = (UnityEngine_Transform_o *)pUVar13[2].fields.m_CachedPtr;
  if ((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar10 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar8,(MethodInfo *)0x0),
     pUVar10 != (UnityEngine_Transform_o *)0x0)) {
    UVar15 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
    pvVar2 = pUVar13[4].monitor;
    fVar14 = *(float *)&pUVar13[4].fields.m_CachedPtr;
    if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar10 = pUVar13[2].monitor;
    pUVar8 = TypeInfo_UIManager;
    if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
      fVar1 = *(float *)(TypeInfo_UIManager[7].fields.m_CachedPtr + 0x38);
      __this_04 = (UnityEngine_RectTransform_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pUVar10,MethodInfo_RectTransform_GetComponent_RectTransform);
      pUVar8 = pUVar10;
      if (__this_04 != (UnityEngine_RectTransform_o *)0x0) {
        fStackY_1b0 = SUB84(pvVar2,0);
        fStackY_1ac = (float)((ulong)pvVar2 >> 0x20);
        uStackY_1c0._0_4_ = UVar15.fields.x;
        uStackY_1c0._4_4_ = UVar15.fields.y;
        uStackY_1c0._4_4_ = uStackY_1c0._4_4_ + fStackY_1ac * fVar1;
        uStackY_1c0 = CONCAT44(uStackY_1c0._4_4_,(float)uStackY_1c0 + fStackY_1b0 * fVar1);
        UVar5 = UnityEngine_RectTransform__get_sizeDelta(__this_04,(MethodInfo *)0x0);
        if (0.0 <= UVar5.fields.y * *(float *)(TypeInfo_UIManager[7].fields.m_CachedPtr + 0x38) * -0.5 +
                   uStackY_1c0._4_4_) {
          fVar14 = UVar15.fields.z + fVar14 * fVar1;
          pUVar8 = pUVar13[2].monitor;
        }
        else {
          pUVar8 = (UnityEngine_Transform_o *)pUVar13[2].fields.m_CachedPtr;
          if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_043908ee;
          pvVar2 = pUVar13[4].monitor;
          fVar14 = *(float *)&pUVar13[4].fields.m_CachedPtr;
          pUVar10 = UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)pUVar8,(MethodInfo *)0x0);
          if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_043908ee;
          UVar15 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
          if (*(int *)((long)&TypeInfo_UIManager[9].monitor + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fVar1 = *(float *)(TypeInfo_UIManager[7].fields.m_CachedPtr + 0x38);
          fStackY_1b0 = SUB84(pvVar2,0);
          fStackY_1ac = (float)((ulong)pvVar2 >> 0x20);
          uStackY_1c0._0_4_ = UVar15.fields.x;
          uStackY_1c0._4_4_ = UVar15.fields.y;
          fVar14 = UVar15.fields.z + fVar14 * fVar1;
          uStackY_1c0 = CONCAT44(uStackY_1c0._4_4_ - fStackY_1ac * fVar1,
                                 (float)uStackY_1c0 + fStackY_1b0 * fVar1);
          pUVar8 = pUVar13[2].monitor;
        }
        if (((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
            (pUVar10 = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)pUVar8,(MethodInfo *)0x0),
            pUVar10 != (UnityEngine_Transform_o *)0x0)) &&
           (__this_05 = (UnityEngine_Transform_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar10,MethodInfo_RectTransform_GetComponent_RectTransform), pUVar8 = pUVar10,
           __this_05 != (UnityEngine_Transform_o *)0x0)) {
          UVar15.fields.z = fVar14;
          UVar15.fields.x = (float)(int)uStackY_1c0;
          UVar15.fields.y = (float)(int)((ulong)uStackY_1c0 >> 0x20);
          UnityEngine_Transform__set_position(__this_05,UVar15,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_043908ee:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2a3 = '\x01';
  }
  pUVar4 = pUVar8[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pUVar13 = pUVar8[2].monitor;
  if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar13,0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae2a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae2a4 = '\x01';
  }
  pUVar4 = pUVar13[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pUVar4 = pUVar13[2].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar4,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.DropdownSettingElement$$OnDropdownSelectedButtonClick
// il2cpp: void UI_DropdownSettingElement__OnDropdownSelectedButtonClick (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x4390c50

void UI_DropdownSettingElement__OnDropdownSelectedButtonClick
               (UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_Scrollbar_o *pUVar4;
  MethodInfo *pMVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  Settings_BaseSetting_o *pSVar7;
  Il2CppClass *pIVar8;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar9;
  undefined8 in_RAX;
  UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *__this_00;
  undefined8 uVar10;
  UI_DropdownSettingElement_o *__this_01;
  Il2CppObject *pIVar11;
  System_String_array *pSVar12;
  uint uVar13;
  MethodInfo_255A0F0 **unaff_RBX;
  UI_DropdownSettingElement_o *unaff_RBP;
  UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *pUVar14;
  UI_DropdownSettingElement_o *pUVar15;
  MethodInfo_2A23FA0 **ppMVar16;
  UI_DropdownSettingElement_o *unaff_R14;
  ulong unaff_R15;
  float fVar17;
  undefined1 auVar18 [16];
  
  do {
    *(UI_DropdownSettingElement_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(MethodInfo_255A0F0 ***)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    pUVar3 = (__this->fields)._optionsPanel;
    pUVar14 = (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)0x0;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390c6b;
      bVar9 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        if (g_data_057ae2a7 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390cb7;
          il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableOptions_d__20);
          g_data_057ae2a7 = '\x01';
        }
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390ccd;
        __this_00 = (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableOptions_d__20);
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390cdc;
        pUVar14 = __this_00;
        UI_DropdownSettingElement__WaitAndEnableOptions_d__20___ctor(__this_00,0,(MethodInfo *)0x0);
        unaff_RBX = (MethodInfo_255A0F0 **)0x0;
        if (__this_00 != (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)0x0) {
          (__this_00->fields).__4__this = __this;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390cf4;
          il2cpp_runtime_helper_022b4080(&(__this_00->fields).__4__this,__this);
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                     (MethodInfo *)0x0);
          return;
        }
      }
      else {
        pUVar4 = (__this->fields)._scrollBar;
        pUVar14 = (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)0x0;
        if (pUVar4 != (UnityEngine_UI_Scrollbar_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390c83;
          fVar17 = UnityEngine_UI_Scrollbar__get_value(pUVar4,(MethodInfo *)0x0);
          (__this->fields)._currentScrollValue = fVar17;
          pUVar3 = (__this->fields)._optionsPanel;
          pUVar14 = (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)0x0;
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390d0d;
    uVar10 = il2cpp_runtime_helper_022b2c90();
    *(UI_DropdownSettingElement_o **)((long)register0x00000020 + -0x20) = __this;
    *(MethodInfo_255A0F0 ***)((long)register0x00000020 + -0x28) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x30) = uVar10;
    if (g_data_057ae2a7 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4390d2c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableOptions_d__20);
      g_data_057ae2a7 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4390d42;
    __this_01 = (UI_DropdownSettingElement_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableOptions_d__20);
    unaff_R14 = (UI_DropdownSettingElement_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4390d51;
    pUVar15 = __this_01;
    UI_DropdownSettingElement__WaitAndEnableOptions_d__20___ctor
              ((UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)__this_01,0,(MethodInfo *)0x0);
    if (__this_01 != (UI_DropdownSettingElement_o *)0x0) {
      (__this_01->fields)._setting = (Settings_BaseSetting_o *)pUVar14;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4390d69;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields)._setting,pUVar14);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4390d79;
    auVar18 = il2cpp_runtime_helper_022b2c90();
    *(UI_DropdownSettingElement_o **)((long)register0x00000020 + -0x38) = unaff_RBP;
    *(ulong *)((long)register0x00000020 + -0x40) = unaff_R15;
    *(UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o **)((long)register0x00000020 + -0x48) = pUVar14;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
    *(long *)((long)register0x00000020 + -0x58) = auVar18._0_8_;
    unaff_R15 = auVar18._8_8_ & 0xffffffff;
    if (g_data_057ae2a9 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390dbc;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390dc8;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390dd4;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      ppMVar16 = &MethodInfo_Void_set_Value;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390de0;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae2a9 = '\x01';
      unaff_RBP = (UI_DropdownSettingElement_o *)(pUVar15->fields)._selectedButtonLabel;
      unaff_RBX = (MethodInfo_255A0F0 **)ppMVar16;
      if (g_data_057ae296 != '\0') goto label_04390da6;
label_04390df4:
      unaff_RBX = &MethodInfo_Text_GetComponent_Text;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390e00;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae296 = '\x01';
      if (unaff_RBP == (UI_DropdownSettingElement_o *)0x0) goto label_04390f48;
label_04390e10:
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390e22;
      unaff_RBX = (MethodInfo_255A0F0 **)unaff_RBP;
      pIVar11 = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)unaff_RBP,MethodInfo_Text_GetComponent_Text);
      if (pIVar11 == (Il2CppObject *)0x0) goto label_04390f48;
      pMVar5 = pIVar11->klass->vtable[0x4b].method;
      vtableDispatch = pIVar11->klass->vtable[0x4b].methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390e41;
      (*vtableDispatch)(pIVar11,unaff_R14,pMVar5);
      pUVar4 = (pUVar15->fields)._scrollBar;
      unaff_RBX = (MethodInfo_255A0F0 **)0x0;
      if (pUVar4 == (UnityEngine_UI_Scrollbar_o *)0x0) goto label_04390f48;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390e55;
      fVar17 = UnityEngine_UI_Scrollbar__get_value(pUVar4,(MethodInfo *)0x0);
      (pUVar15->fields)._currentScrollValue = fVar17;
      pUVar3 = (pUVar15->fields)._optionsPanel;
      unaff_RBX = (MethodInfo_255A0F0 **)0x0;
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_04390f48;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390e70;
      UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
      iVar2 = (pUVar15->fields)._settingType;
      if (iVar2 != 2) {
        if (iVar2 == 4) {
          unaff_RBX = (MethodInfo_255A0F0 **)(pUVar15->fields)._setting;
          if ((UI_DropdownSettingElement_o *)unaff_RBX == (UI_DropdownSettingElement_o *)0x0)
          goto label_04390f48;
          bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
          if (((((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)unaff_RBX)->klass)->_2).
               naturalAligment < bVar1) ||
             ((((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)unaff_RBX)->klass)->_2).
              typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) goto label_04390f4d;
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390ece;
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)unaff_RBX,(Il2CppObject *)unaff_R14,MethodInfo_Void_set_Value);
        }
        pUVar6 = (pUVar15->fields)._onDropdownOptionSelect;
joined_r0x04390f3b:
        if (pUVar6 != (UnityEngine_Events_UnityAction_o *)0x0) {
          (*(code *)(pUVar6->fields).invoke_impl)((pUVar6->fields).method_code,(pUVar6->fields).method);
          return;
        }
        return;
      }
      unaff_RBX = (MethodInfo_255A0F0 **)(pUVar15->fields)._setting;
      if ((UI_DropdownSettingElement_o *)unaff_RBX == (UI_DropdownSettingElement_o *)0x0) goto label_04390f48;
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if ((bVar1 <= (((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)unaff_RBX)->klass)->_2).
                    naturalAligment) &&
         ((((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)unaff_RBX)->klass)->_2).
          typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_IntSetting)) {
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390f34;
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)unaff_RBX,auVar18._8_4_,MethodInfo_Void_set_Value);
        pUVar6 = (pUVar15->fields)._onDropdownOptionSelect;
        goto joined_r0x04390f3b;
      }
    }
    else {
      unaff_RBP = (UI_DropdownSettingElement_o *)(pUVar15->fields)._selectedButtonLabel;
      unaff_RBX = (MethodInfo_255A0F0 **)pUVar15;
      if (g_data_057ae296 == '\0') goto label_04390df4;
label_04390da6:
      if (unaff_RBP != (UI_DropdownSettingElement_o *)0x0) goto label_04390e10;
label_04390f48:
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390f4d;
      il2cpp_runtime_helper_022b2c90();
    }
label_04390f4d:
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390f52;
    uVar10 = il2cpp_runtime_helper_022b2fd0();
    *(UI_DropdownSettingElement_o **)((long)register0x00000020 + -0x60) = unaff_R14;
    *(UI_DropdownSettingElement_o **)((long)register0x00000020 + -0x68) = pUVar15;
    *(undefined8 *)((long)register0x00000020 + -0x70) = uVar10;
    __this = (UI_DropdownSettingElement_o *)unaff_RBX;
    if (g_data_057ae2aa == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390f7c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390f88;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390f94;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390fa0;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      ppMVar16 = &MethodInfo_Void_set_Value;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390fac;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae2aa = '\x01';
      __this = (UI_DropdownSettingElement_o *)ppMVar16;
    }
    iVar2 = (((UI_DropdownSettingElement_o *)unaff_RBX)->fields)._settingType;
    if (iVar2 == 2) {
      unaff_R14 = (UI_DropdownSettingElement_o *)(((UI_DropdownSettingElement_o *)unaff_RBX)->fields)._setting
      ;
      if (unaff_R14 == (UI_DropdownSettingElement_o *)0x0) goto label_04391105;
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((((Settings_TypedSetting_T__c *)unaff_R14->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_TypedSetting_T__c *)unaff_R14->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          TypeInfo_IntSetting)) goto label_0439110f;
      pSVar12 = (((UI_DropdownSettingElement_o *)unaff_RBX)->fields)._options;
      if (pSVar12 == (System_String_array *)0x0) goto label_04391105;
      uVar13 = *(uint *)((long)&(unaff_R14->fields).m_CachedPtr + 4);
      if ((int)pSVar12->max_length <= (int)uVar13) {
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43910cd;
        __this = unaff_R14;
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)unaff_R14,0,MethodInfo_Void_set_Value);
        pSVar12 = (((UI_DropdownSettingElement_o *)unaff_RBX)->fields)._options;
        if (pSVar12 == (System_String_array *)0x0) goto label_04391105;
        uVar13 = *(uint *)((long)&(unaff_R14->fields).m_CachedPtr + 4);
      }
      if (uVar13 < (uint)pSVar12->max_length) {
        unaff_RBX = (MethodInfo_255A0F0 **)
                    (((UI_DropdownSettingElement_o *)unaff_RBX)->fields)._selectedButtonLabel;
        unaff_R14 = (UI_DropdownSettingElement_o *)pSVar12->m_Items[(int)uVar13];
        goto joined_r0x043910f2;
      }
    }
    else {
      if (iVar2 != 4) {
        return;
      }
      pSVar7 = (((UI_DropdownSettingElement_o *)unaff_RBX)->fields)._setting;
      if (pSVar7 == (Settings_BaseSetting_o *)0x0) {
label_04391105:
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x439110a;
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
        if ((bVar1 <= (pSVar7->klass->_2).naturalAligment) &&
           ((pSVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
          unaff_RBX = (MethodInfo_255A0F0 **)
                      (((UI_DropdownSettingElement_o *)unaff_RBX)->fields)._selectedButtonLabel;
          unaff_R14 = pSVar7[1].monitor;
joined_r0x043910f2:
          if (g_data_057ae296 == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4391024;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
            g_data_057ae296 = '\x01';
          }
          if ((UI_DropdownSettingElement_o *)unaff_RBX != (UI_DropdownSettingElement_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4391046;
            pIVar11 = UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)unaff_RBX,MethodInfo_Text_GetComponent_Text);
            if (pIVar11 != (Il2CppObject *)0x0) {
              pIVar8 = pIVar11->klass;
              vtableDispatch = pIVar8->vtable[0x4b].methodPtr;
              (*vtableDispatch)
                        (pIVar11,unaff_R14,pIVar8->vtable[0x4b].method,pIVar8,vtableDispatch);
              return;
            }
          }
          goto label_04391105;
        }
      }
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x439110f;
      il2cpp_runtime_helper_022b2fd0();
label_0439110f:
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4391117;
      __this = unaff_R14;
      il2cpp_runtime_helper_022b2fd0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x439111c;
    in_RAX = il2cpp_runtime_helper_022b2ca0();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x70);
  } while( true );
}


// UI.DropdownSettingElement$$WaitAndEnableOptions
// il2cpp: System_Collections_IEnumerator_o* UI_DropdownSettingElement__WaitAndEnableOptions (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x4390d10

System_Collections_IEnumerator_o *
UI_DropdownSettingElement__WaitAndEnableOptions(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_Scrollbar_o *pUVar4;
  MethodInfo *pMVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  Settings_BaseSetting_o *pSVar7;
  Il2CppClass *pIVar8;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar9;
  System_Collections_IEnumerator_o *extraout_RAX;
  UI_DropdownSettingElement_o *pUVar10;
  UnityEngine_Coroutine_o *pUVar11;
  undefined8 in_RAX;
  UI_DropdownSettingElement_o *__this_00;
  undefined8 uVar12;
  Il2CppObject *pIVar13;
  System_Collections_IEnumerator_o *pSVar14;
  System_String_array *pSVar15;
  uint uVar16;
  MethodInfo_255A0F0 **unaff_RBX;
  UI_DropdownSettingElement_o *unaff_RBP;
  UI_DropdownSettingElement_o *pUVar17;
  MethodInfo_2A23FA0 **ppMVar18;
  MethodInfo_2A23FA0 **unaff_R14;
  ulong unaff_R15;
  float fVar19;
  undefined1 auVar20 [16];
  
  do {
    *(MethodInfo_2A23FA0 ***)((long)register0x00000020 + -8) = unaff_R14;
    *(MethodInfo_255A0F0 ***)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057ae2a7 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390d2c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableOptions_d__20);
      g_data_057ae2a7 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390d42;
    __this_00 = (UI_DropdownSettingElement_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableOptions_d__20);
    pUVar10 = (UI_DropdownSettingElement_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390d51;
    pUVar17 = __this_00;
    UI_DropdownSettingElement__WaitAndEnableOptions_d__20___ctor
              ((UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)__this_00,0,(MethodInfo *)0x0);
    if (__this_00 != (UI_DropdownSettingElement_o *)0x0) {
      (__this_00->fields)._setting = (Settings_BaseSetting_o *)__this;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390d69;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields)._setting,__this);
      return (System_Collections_IEnumerator_o *)__this_00;
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390d79;
    auVar20 = il2cpp_runtime_helper_022b2c90();
    *(UI_DropdownSettingElement_o **)((long)register0x00000020 + -0x20) = unaff_RBP;
    *(ulong *)((long)register0x00000020 + -0x28) = unaff_R15;
    *(UI_DropdownSettingElement_o **)((long)register0x00000020 + -0x30) = __this;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0;
    *(long *)((long)register0x00000020 + -0x40) = auVar20._0_8_;
    unaff_R15 = auVar20._8_8_ & 0xffffffff;
    if (g_data_057ae2a9 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4390dbc;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4390dc8;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4390dd4;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      ppMVar18 = &MethodInfo_Void_set_Value;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4390de0;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae2a9 = '\x01';
      unaff_RBP = (UI_DropdownSettingElement_o *)(pUVar17->fields)._selectedButtonLabel;
      unaff_RBX = (MethodInfo_255A0F0 **)ppMVar18;
      if (g_data_057ae296 != '\0') goto label_04390da6;
label_04390df4:
      unaff_RBX = &MethodInfo_Text_GetComponent_Text;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4390e00;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae296 = '\x01';
      if (unaff_RBP == (UI_DropdownSettingElement_o *)0x0) goto label_04390f48;
label_04390e10:
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4390e22;
      unaff_RBX = (MethodInfo_255A0F0 **)unaff_RBP;
      pIVar13 = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)unaff_RBP,MethodInfo_Text_GetComponent_Text);
      if (pIVar13 == (Il2CppObject *)0x0) goto label_04390f48;
      pMVar5 = pIVar13->klass->vtable[0x4b].method;
      vtableDispatch = pIVar13->klass->vtable[0x4b].methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4390e41;
      (*vtableDispatch)(pIVar13,pUVar10,pMVar5);
      pUVar4 = (pUVar17->fields)._scrollBar;
      unaff_RBX = (MethodInfo_255A0F0 **)0x0;
      if (pUVar4 == (UnityEngine_UI_Scrollbar_o *)0x0) goto label_04390f48;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4390e55;
      fVar19 = UnityEngine_UI_Scrollbar__get_value(pUVar4,(MethodInfo *)0x0);
      (pUVar17->fields)._currentScrollValue = fVar19;
      pUVar3 = (pUVar17->fields)._optionsPanel;
      unaff_RBX = (MethodInfo_255A0F0 **)0x0;
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_04390f48;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4390e70;
      UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
      iVar2 = (pUVar17->fields)._settingType;
      if (iVar2 != 2) {
        if (iVar2 == 4) {
          unaff_RBX = (MethodInfo_255A0F0 **)(pUVar17->fields)._setting;
          if ((UI_DropdownSettingElement_o *)unaff_RBX == (UI_DropdownSettingElement_o *)0x0)
          goto label_04390f48;
          bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
          if (((((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)unaff_RBX)->klass)->_2).
               naturalAligment < bVar1) ||
             ((((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)unaff_RBX)->klass)->_2).
              typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) goto label_04390f4d;
          *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4390ece;
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)unaff_RBX,(Il2CppObject *)pUVar10,MethodInfo_Void_set_Value);
        }
        pUVar6 = (pUVar17->fields)._onDropdownOptionSelect;
joined_r0x04390f3b:
        if (pUVar6 != (UnityEngine_Events_UnityAction_o *)0x0) {
          pSVar14 = (System_Collections_IEnumerator_o *)
                    (*(code *)(pUVar6->fields).invoke_impl)
                              ((pUVar6->fields).method_code,(pUVar6->fields).method);
          return pSVar14;
        }
        return (System_Collections_IEnumerator_o *)0x0;
      }
      unaff_RBX = (MethodInfo_255A0F0 **)(pUVar17->fields)._setting;
      if ((UI_DropdownSettingElement_o *)unaff_RBX == (UI_DropdownSettingElement_o *)0x0) goto label_04390f48;
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if ((bVar1 <= (((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)unaff_RBX)->klass)->_2).
                    naturalAligment) &&
         ((((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)unaff_RBX)->klass)->_2).
          typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_IntSetting)) {
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4390f34;
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)unaff_RBX,auVar20._8_4_,MethodInfo_Void_set_Value);
        pUVar6 = (pUVar17->fields)._onDropdownOptionSelect;
        goto joined_r0x04390f3b;
      }
    }
    else {
      unaff_RBP = (UI_DropdownSettingElement_o *)(pUVar17->fields)._selectedButtonLabel;
      unaff_RBX = (MethodInfo_255A0F0 **)pUVar17;
      if (g_data_057ae296 == '\0') goto label_04390df4;
label_04390da6:
      if (unaff_RBP != (UI_DropdownSettingElement_o *)0x0) goto label_04390e10;
label_04390f48:
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4390f4d;
      il2cpp_runtime_helper_022b2c90();
    }
label_04390f4d:
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4390f52;
    uVar12 = il2cpp_runtime_helper_022b2fd0();
    *(UI_DropdownSettingElement_o **)((long)register0x00000020 + -0x48) = pUVar10;
    *(UI_DropdownSettingElement_o **)((long)register0x00000020 + -0x50) = pUVar17;
    *(undefined8 *)((long)register0x00000020 + -0x58) = uVar12;
    unaff_R14 = (MethodInfo_2A23FA0 **)unaff_RBX;
    if (g_data_057ae2aa == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390f7c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390f88;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390f94;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390fa0;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      unaff_R14 = &MethodInfo_Void_set_Value;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390fac;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae2aa = '\x01';
    }
    uVar16 = (((UI_DropdownSettingElement_o *)unaff_RBX)->fields)._settingType;
    if (uVar16 == 2) {
      pUVar10 = (UI_DropdownSettingElement_o *)(((UI_DropdownSettingElement_o *)unaff_RBX)->fields)._setting;
      if (pUVar10 == (UI_DropdownSettingElement_o *)0x0) goto label_04391105;
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((((Settings_TypedSetting_T__c *)pUVar10->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_TypedSetting_T__c *)pUVar10->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting
         )) goto label_0439110f;
      pSVar15 = (((UI_DropdownSettingElement_o *)unaff_RBX)->fields)._options;
      if (pSVar15 == (System_String_array *)0x0) goto label_04391105;
      uVar16 = *(uint *)((long)&(pUVar10->fields).m_CachedPtr + 4);
      if ((int)pSVar15->max_length <= (int)uVar16) {
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x43910cd;
        unaff_R14 = (MethodInfo_2A23FA0 **)pUVar10;
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)pUVar10,0,MethodInfo_Void_set_Value);
        pSVar15 = (((UI_DropdownSettingElement_o *)unaff_RBX)->fields)._options;
        if (pSVar15 == (System_String_array *)0x0) goto label_04391105;
        uVar16 = *(uint *)((long)&(pUVar10->fields).m_CachedPtr + 4);
      }
      if (uVar16 < (uint)pSVar15->max_length) {
        unaff_RBX = (MethodInfo_255A0F0 **)
                    (((UI_DropdownSettingElement_o *)unaff_RBX)->fields)._selectedButtonLabel;
        pUVar10 = (UI_DropdownSettingElement_o *)pSVar15->m_Items[(int)uVar16];
        goto joined_r0x043910f2;
      }
    }
    else {
      if (uVar16 != 4) {
        return (System_Collections_IEnumerator_o *)(ulong)uVar16;
      }
      pSVar7 = (((UI_DropdownSettingElement_o *)unaff_RBX)->fields)._setting;
      if (pSVar7 == (Settings_BaseSetting_o *)0x0) {
label_04391105:
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x439110a;
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
        if ((bVar1 <= (pSVar7->klass->_2).naturalAligment) &&
           ((pSVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
          unaff_RBX = (MethodInfo_255A0F0 **)
                      (((UI_DropdownSettingElement_o *)unaff_RBX)->fields)._selectedButtonLabel;
          pUVar10 = pSVar7[1].monitor;
joined_r0x043910f2:
          if (g_data_057ae296 == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4391024;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
            g_data_057ae296 = '\x01';
          }
          if ((UI_DropdownSettingElement_o *)unaff_RBX != (UI_DropdownSettingElement_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4391046;
            pIVar13 = UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)unaff_RBX,MethodInfo_Text_GetComponent_Text);
            if (pIVar13 != (Il2CppObject *)0x0) {
              pIVar8 = pIVar13->klass;
              vtableDispatch = pIVar8->vtable[0x4b].methodPtr;
              pSVar14 = (System_Collections_IEnumerator_o *)
                        (*vtableDispatch)
                                  (pIVar13,pUVar10,pIVar8->vtable[0x4b].method,pIVar8,vtableDispatch);
              return pSVar14;
            }
          }
          goto label_04391105;
        }
      }
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x439110f;
      il2cpp_runtime_helper_022b2fd0();
label_0439110f:
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4391117;
      unaff_R14 = (MethodInfo_2A23FA0 **)pUVar10;
      il2cpp_runtime_helper_022b2fd0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x439111c;
    uVar12 = il2cpp_runtime_helper_022b2ca0();
    *(UI_DropdownSettingElement_o **)((long)register0x00000020 + -0x60) = pUVar10;
    *(MethodInfo_255A0F0 ***)((long)register0x00000020 + -0x68) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x70) = uVar12;
    pUVar3 = (((UI_DropdownSettingElement_o *)unaff_R14)->fields)._optionsPanel;
    __this = (UI_DropdownSettingElement_o *)0x0;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390c6b;
      bVar9 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        if (g_data_057ae2a7 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390cb7;
          il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableOptions_d__20);
          g_data_057ae2a7 = '\x01';
        }
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390ccd;
        pUVar10 = (UI_DropdownSettingElement_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableOptions_d__20);
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390cdc;
        __this = pUVar10;
        UI_DropdownSettingElement__WaitAndEnableOptions_d__20___ctor
                  ((UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)pUVar10,0,(MethodInfo *)0x0);
        unaff_RBX = (MethodInfo_255A0F0 **)0x0;
        if (pUVar10 != (UI_DropdownSettingElement_o *)0x0) {
          (pUVar10->fields)._setting = (Settings_BaseSetting_o *)unaff_R14;
          *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390cf4;
          il2cpp_runtime_helper_022b4080(&(pUVar10->fields)._setting,unaff_R14);
          pUVar11 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              ((UnityEngine_MonoBehaviour_o *)unaff_R14,
                               (System_Collections_IEnumerator_o *)pUVar10,(MethodInfo *)0x0);
          return (System_Collections_IEnumerator_o *)pUVar11;
        }
      }
      else {
        pUVar4 = (((UI_DropdownSettingElement_o *)unaff_R14)->fields)._scrollBar;
        __this = (UI_DropdownSettingElement_o *)0x0;
        if (pUVar4 != (UnityEngine_UI_Scrollbar_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390c83;
          fVar19 = UnityEngine_UI_Scrollbar__get_value(pUVar4,(MethodInfo *)0x0);
          (((UI_DropdownSettingElement_o *)unaff_R14)->fields)._currentScrollValue = fVar19;
          pUVar3 = (((UI_DropdownSettingElement_o *)unaff_R14)->fields)._optionsPanel;
          __this = (UI_DropdownSettingElement_o *)0x0;
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
            return extraout_RAX;
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390d0d;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x70);
  } while( true );
}


// UI.DropdownSettingElement$$WaitAndCloseOptions
// il2cpp: System_Collections_IEnumerator_o* UI_DropdownSettingElement__WaitAndCloseOptions (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x4390be0

System_Collections_IEnumerator_o *
UI_DropdownSettingElement__WaitAndCloseOptions(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_Scrollbar_o *pUVar4;
  MethodInfo *pMVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  Il2CppClass *pIVar7;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar8;
  UI_DropdownSettingElement_o *pUVar9;
  undefined8 uVar10;
  System_Collections_IEnumerator_o *extraout_RAX;
  UI_DropdownSettingElement_o *pUVar11;
  UnityEngine_Coroutine_o *pUVar12;
  UI_DropdownSettingElement_o *__this_00;
  Il2CppObject *pIVar13;
  System_Collections_IEnumerator_o *pSVar14;
  System_String_array *pSVar15;
  uint uVar16;
  undefined1 *puVar17;
  UI_DropdownSettingElement_o *unaff_RBP;
  MethodInfo_255A0F0 **__this_01;
  MethodInfo_2A23FA0 **ppMVar18;
  ulong unaff_R15;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_18 [8];
  
  if (g_data_057ae2a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndCloseOptions_d__21);
    g_data_057ae2a8 = '\x01';
  }
  pUVar9 = (UI_DropdownSettingElement_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndCloseOptions_d__21);
  ppMVar18 = (MethodInfo_2A23FA0 **)pUVar9;
  UI_DropdownSettingElement__WaitAndCloseOptions_d__21___ctor
            ((UI_DropdownSettingElement__WaitAndCloseOptions_d__21_o *)pUVar9,0,(MethodInfo *)0x0);
  if (pUVar9 != (UI_DropdownSettingElement_o *)0x0) {
    (pUVar9->fields)._setting = (Settings_BaseSetting_o *)__this;
    il2cpp_runtime_helper_022b4080(&(pUVar9->fields)._setting,__this);
    return (System_Collections_IEnumerator_o *)pUVar9;
  }
  uVar10 = il2cpp_runtime_helper_022b2c90();
  __this_01 = (MethodInfo_255A0F0 **)0x0;
  puVar17 = auStack_18;
  do {
    *(UI_DropdownSettingElement_o **)(puVar17 + -8) = __this;
    *(MethodInfo_255A0F0 ***)(puVar17 + -0x10) = __this_01;
    *(undefined8 *)(puVar17 + -0x18) = uVar10;
    pUVar3 = (((UI_DropdownSettingElement_o *)ppMVar18)->fields)._optionsPanel;
    pUVar9 = (UI_DropdownSettingElement_o *)0x0;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      *(undefined8 *)(puVar17 + -0x20) = 0x4390c6b;
      bVar8 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') {
        if (g_data_057ae2a7 == '\0') {
          *(undefined8 *)(puVar17 + -0x20) = 0x4390cb7;
          il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableOptions_d__20);
          g_data_057ae2a7 = '\x01';
        }
        *(undefined8 *)(puVar17 + -0x20) = 0x4390ccd;
        pUVar11 = (UI_DropdownSettingElement_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableOptions_d__20);
        *(undefined8 *)(puVar17 + -0x20) = 0x4390cdc;
        pUVar9 = pUVar11;
        UI_DropdownSettingElement__WaitAndEnableOptions_d__20___ctor
                  ((UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)pUVar11,0,(MethodInfo *)0x0);
        __this_01 = (MethodInfo_255A0F0 **)0x0;
        if (pUVar11 != (UI_DropdownSettingElement_o *)0x0) {
          (pUVar11->fields)._setting = (Settings_BaseSetting_o *)ppMVar18;
          *(undefined8 *)(puVar17 + -0x20) = 0x4390cf4;
          il2cpp_runtime_helper_022b4080(&(pUVar11->fields)._setting,ppMVar18);
          pUVar12 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              ((UnityEngine_MonoBehaviour_o *)ppMVar18,
                               (System_Collections_IEnumerator_o *)pUVar11,(MethodInfo *)0x0);
          return (System_Collections_IEnumerator_o *)pUVar12;
        }
      }
      else {
        pUVar4 = (((UI_DropdownSettingElement_o *)ppMVar18)->fields)._scrollBar;
        pUVar9 = (UI_DropdownSettingElement_o *)0x0;
        if (pUVar4 != (UnityEngine_UI_Scrollbar_o *)0x0) {
          *(undefined8 *)(puVar17 + -0x20) = 0x4390c83;
          fVar19 = UnityEngine_UI_Scrollbar__get_value(pUVar4,(MethodInfo *)0x0);
          (((UI_DropdownSettingElement_o *)ppMVar18)->fields)._currentScrollValue = fVar19;
          pUVar3 = (((UI_DropdownSettingElement_o *)ppMVar18)->fields)._optionsPanel;
          pUVar9 = (UI_DropdownSettingElement_o *)0x0;
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
            return extraout_RAX;
          }
        }
      }
    }
    *(undefined8 *)(puVar17 + -0x20) = 0x4390d0d;
    uVar10 = il2cpp_runtime_helper_022b2c90();
    *(MethodInfo_2A23FA0 ***)(puVar17 + -0x20) = ppMVar18;
    *(MethodInfo_255A0F0 ***)(puVar17 + -0x28) = __this_01;
    *(undefined8 *)(puVar17 + -0x30) = uVar10;
    if (g_data_057ae2a7 == '\0') {
      *(undefined8 *)(puVar17 + -0x38) = 0x4390d2c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableOptions_d__20);
      g_data_057ae2a7 = '\x01';
    }
    *(undefined8 *)(puVar17 + -0x38) = 0x4390d42;
    __this_00 = (UI_DropdownSettingElement_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableOptions_d__20);
    __this = (UI_DropdownSettingElement_o *)0x0;
    *(undefined8 *)(puVar17 + -0x38) = 0x4390d51;
    pUVar11 = __this_00;
    UI_DropdownSettingElement__WaitAndEnableOptions_d__20___ctor
              ((UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)__this_00,0,(MethodInfo *)0x0);
    if (__this_00 != (UI_DropdownSettingElement_o *)0x0) {
      (__this_00->fields)._setting = (Settings_BaseSetting_o *)pUVar9;
      *(undefined8 *)(puVar17 + -0x38) = 0x4390d69;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields)._setting,pUVar9);
      return (System_Collections_IEnumerator_o *)__this_00;
    }
    *(undefined8 *)(puVar17 + -0x38) = 0x4390d79;
    auVar20 = il2cpp_runtime_helper_022b2c90();
    *(UI_DropdownSettingElement_o **)(puVar17 + -0x38) = unaff_RBP;
    *(ulong *)(puVar17 + -0x40) = unaff_R15;
    *(UI_DropdownSettingElement_o **)(puVar17 + -0x48) = pUVar9;
    *(undefined8 *)(puVar17 + -0x50) = 0;
    *(long *)(puVar17 + -0x58) = auVar20._0_8_;
    unaff_R15 = auVar20._8_8_ & 0xffffffff;
    if (g_data_057ae2a9 == '\0') {
      *(undefined8 *)(puVar17 + -0x60) = 0x4390dbc;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)(puVar17 + -0x60) = 0x4390dc8;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)(puVar17 + -0x60) = 0x4390dd4;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      ppMVar18 = &MethodInfo_Void_set_Value;
      *(undefined8 *)(puVar17 + -0x60) = 0x4390de0;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae2a9 = '\x01';
      unaff_RBP = (UI_DropdownSettingElement_o *)(pUVar11->fields)._selectedButtonLabel;
      __this_01 = (MethodInfo_255A0F0 **)ppMVar18;
      if (g_data_057ae296 != '\0') goto label_04390da6;
label_04390df4:
      __this_01 = &MethodInfo_Text_GetComponent_Text;
      *(undefined8 *)(puVar17 + -0x60) = 0x4390e00;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae296 = '\x01';
      if (unaff_RBP == (UI_DropdownSettingElement_o *)0x0) goto label_04390f48;
label_04390e10:
      *(undefined8 *)(puVar17 + -0x60) = 0x4390e22;
      __this_01 = (MethodInfo_255A0F0 **)unaff_RBP;
      pIVar13 = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)unaff_RBP,MethodInfo_Text_GetComponent_Text);
      if (pIVar13 == (Il2CppObject *)0x0) goto label_04390f48;
      pMVar5 = pIVar13->klass->vtable[0x4b].method;
      vtableDispatch = pIVar13->klass->vtable[0x4b].methodPtr;
      *(undefined8 *)(puVar17 + -0x60) = 0x4390e41;
      (*vtableDispatch)(pIVar13,__this,pMVar5);
      pUVar4 = (pUVar11->fields)._scrollBar;
      __this_01 = (MethodInfo_255A0F0 **)0x0;
      if (pUVar4 == (UnityEngine_UI_Scrollbar_o *)0x0) goto label_04390f48;
      *(undefined8 *)(puVar17 + -0x60) = 0x4390e55;
      fVar19 = UnityEngine_UI_Scrollbar__get_value(pUVar4,(MethodInfo *)0x0);
      (pUVar11->fields)._currentScrollValue = fVar19;
      pUVar3 = (pUVar11->fields)._optionsPanel;
      __this_01 = (MethodInfo_255A0F0 **)0x0;
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_04390f48;
      *(undefined8 *)(puVar17 + -0x60) = 0x4390e70;
      UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
      iVar2 = (pUVar11->fields)._settingType;
      if (iVar2 != 2) {
        if (iVar2 == 4) {
          __this_01 = (MethodInfo_255A0F0 **)(pUVar11->fields)._setting;
          if ((UI_DropdownSettingElement_o *)__this_01 == (UI_DropdownSettingElement_o *)0x0)
          goto label_04390f48;
          bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
          if (((((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)__this_01)->klass)->_2).
               naturalAligment < bVar1) ||
             ((((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)__this_01)->klass)->_2).
              typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) goto label_04390f4d;
          *(undefined8 *)(puVar17 + -0x60) = 0x4390ece;
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)__this_01,(Il2CppObject *)__this,MethodInfo_Void_set_Value);
        }
        pUVar6 = (pUVar11->fields)._onDropdownOptionSelect;
joined_r0x04390f3b:
        if (pUVar6 != (UnityEngine_Events_UnityAction_o *)0x0) {
          pSVar14 = (System_Collections_IEnumerator_o *)
                    (*(code *)(pUVar6->fields).invoke_impl)
                              ((pUVar6->fields).method_code,(pUVar6->fields).method);
          return pSVar14;
        }
        return (System_Collections_IEnumerator_o *)0x0;
      }
      __this_01 = (MethodInfo_255A0F0 **)(pUVar11->fields)._setting;
      if ((UI_DropdownSettingElement_o *)__this_01 == (UI_DropdownSettingElement_o *)0x0) goto label_04390f48;
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if ((bVar1 <= (((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)__this_01)->klass)->_2).
                    naturalAligment) &&
         ((((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)__this_01)->klass)->_2).
          typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_IntSetting)) {
        *(undefined8 *)(puVar17 + -0x60) = 0x4390f34;
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)__this_01,auVar20._8_4_,MethodInfo_Void_set_Value);
        pUVar6 = (pUVar11->fields)._onDropdownOptionSelect;
        goto joined_r0x04390f3b;
      }
    }
    else {
      unaff_RBP = (UI_DropdownSettingElement_o *)(pUVar11->fields)._selectedButtonLabel;
      __this_01 = (MethodInfo_255A0F0 **)pUVar11;
      if (g_data_057ae296 == '\0') goto label_04390df4;
label_04390da6:
      if (unaff_RBP != (UI_DropdownSettingElement_o *)0x0) goto label_04390e10;
label_04390f48:
      *(undefined8 *)(puVar17 + -0x60) = 0x4390f4d;
      il2cpp_runtime_helper_022b2c90();
    }
label_04390f4d:
    *(undefined8 *)(puVar17 + -0x60) = 0x4390f52;
    uVar10 = il2cpp_runtime_helper_022b2fd0();
    *(UI_DropdownSettingElement_o **)(puVar17 + -0x60) = __this;
    *(UI_DropdownSettingElement_o **)(puVar17 + -0x68) = pUVar11;
    *(undefined8 *)(puVar17 + -0x70) = uVar10;
    ppMVar18 = (MethodInfo_2A23FA0 **)__this_01;
    if (g_data_057ae2aa == '\0') {
      *(undefined8 *)(puVar17 + -0x78) = 0x4390f7c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)(puVar17 + -0x78) = 0x4390f88;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)(puVar17 + -0x78) = 0x4390f94;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      *(undefined8 *)(puVar17 + -0x78) = 0x4390fa0;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      ppMVar18 = &MethodInfo_Void_set_Value;
      *(undefined8 *)(puVar17 + -0x78) = 0x4390fac;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae2aa = '\x01';
    }
    uVar16 = (((UI_DropdownSettingElement_o *)__this_01)->fields)._settingType;
    if (uVar16 == 2) {
      __this = (UI_DropdownSettingElement_o *)(((UI_DropdownSettingElement_o *)__this_01)->fields)._setting;
      if (__this == (UI_DropdownSettingElement_o *)0x0) goto label_04391105;
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((((Settings_TypedSetting_T__c *)__this->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_TypedSetting_T__c *)__this->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)
         ) goto label_0439110f;
      pSVar15 = (((UI_DropdownSettingElement_o *)__this_01)->fields)._options;
      if (pSVar15 == (System_String_array *)0x0) goto label_04391105;
      uVar16 = *(uint *)((long)&(__this->fields).m_CachedPtr + 4);
      if ((int)pSVar15->max_length <= (int)uVar16) {
        *(undefined8 *)(puVar17 + -0x78) = 0x43910cd;
        ppMVar18 = (MethodInfo_2A23FA0 **)__this;
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this,0,MethodInfo_Void_set_Value);
        pSVar15 = (((UI_DropdownSettingElement_o *)__this_01)->fields)._options;
        if (pSVar15 == (System_String_array *)0x0) goto label_04391105;
        uVar16 = *(uint *)((long)&(__this->fields).m_CachedPtr + 4);
      }
      if (uVar16 < (uint)pSVar15->max_length) {
        __this_01 = (MethodInfo_255A0F0 **)
                    (((UI_DropdownSettingElement_o *)__this_01)->fields)._selectedButtonLabel;
        __this = (UI_DropdownSettingElement_o *)pSVar15->m_Items[(int)uVar16];
        goto joined_r0x043910f2;
      }
    }
    else {
      if (uVar16 != 4) {
        return (System_Collections_IEnumerator_o *)(ulong)uVar16;
      }
      pUVar9 = (UI_DropdownSettingElement_o *)(((UI_DropdownSettingElement_o *)__this_01)->fields)._setting;
      if (pUVar9 == (UI_DropdownSettingElement_o *)0x0) {
label_04391105:
        *(undefined8 *)(puVar17 + -0x78) = 0x439110a;
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
        if ((bVar1 <= (pUVar9->klass->_2).naturalAligment) &&
           ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
          __this_01 = (MethodInfo_255A0F0 **)
                      (((UI_DropdownSettingElement_o *)__this_01)->fields)._selectedButtonLabel;
          __this = (UI_DropdownSettingElement_o *)(pUVar9->fields).m_CancellationTokenSource;
joined_r0x043910f2:
          if (g_data_057ae296 == '\0') {
            *(undefined8 *)(puVar17 + -0x78) = 0x4391024;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
            g_data_057ae296 = '\x01';
          }
          if ((UI_DropdownSettingElement_o *)__this_01 != (UI_DropdownSettingElement_o *)0x0) {
            *(undefined8 *)(puVar17 + -0x78) = 0x4391046;
            pIVar13 = UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)__this_01,MethodInfo_Text_GetComponent_Text);
            if (pIVar13 != (Il2CppObject *)0x0) {
              pIVar7 = pIVar13->klass;
              vtableDispatch = pIVar7->vtable[0x4b].methodPtr;
              pSVar14 = (System_Collections_IEnumerator_o *)
                        (*vtableDispatch)
                                  (pIVar13,__this,pIVar7->vtable[0x4b].method,pIVar7,vtableDispatch);
              return pSVar14;
            }
          }
          goto label_04391105;
        }
      }
      *(undefined8 *)(puVar17 + -0x78) = 0x439110f;
      il2cpp_runtime_helper_022b2fd0();
label_0439110f:
      *(undefined8 *)(puVar17 + -0x78) = 0x4391117;
      ppMVar18 = (MethodInfo_2A23FA0 **)__this;
      il2cpp_runtime_helper_022b2fd0();
    }
    *(undefined8 *)(puVar17 + -0x78) = 0x439111c;
    uVar10 = il2cpp_runtime_helper_022b2ca0();
    puVar17 = puVar17 + -0x70;
  } while( true );
}


// UI.DropdownSettingElement$$OnDropdownOptionClick
// il2cpp: void UI_DropdownSettingElement__OnDropdownOptionClick (UI_DropdownSettingElement_o* __this, System_String_o* option, int32_t index, const MethodInfo* method);
// 0x4390d80

void UI_DropdownSettingElement__OnDropdownOptionClick
               (UI_DropdownSettingElement_o *__this,System_String_o *option,int32_t index,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_Scrollbar_o *pUVar4;
  MethodInfo *pMVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  Settings_BaseSetting_o *pSVar7;
  Il2CppClass *pIVar8;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar9;
  UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *__this_00;
  UI_DropdownSettingElement_o *__this_01;
  undefined8 in_RAX;
  undefined8 uVar10;
  Il2CppObject *pIVar11;
  System_String_array *pSVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 unaff_RBX;
  UI_DropdownSettingElement_o *unaff_RBP;
  MethodInfo_255A0F0 **__this_02;
  MethodInfo_2A23FA0 **ppMVar15;
  UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *unaff_R14;
  ulong unaff_R15;
  float fVar16;
  undefined1 auVar17 [16];
  
  uVar14 = (ulong)(uint)index;
  do {
    *(UI_DropdownSettingElement_o **)((long)register0x00000020 + -8) = unaff_RBP;
    *(ulong *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o **)((long)register0x00000020 + -0x18) =
         unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x28) = in_RAX;
    unaff_R15 = uVar14 & 0xffffffff;
    if (g_data_057ae2a9 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x4390dbc;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x4390dc8;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x4390dd4;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      ppMVar15 = &MethodInfo_Void_set_Value;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x4390de0;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae2a9 = '\x01';
      unaff_RBP = (UI_DropdownSettingElement_o *)(__this->fields)._selectedButtonLabel;
      __this_02 = (MethodInfo_255A0F0 **)ppMVar15;
      if (g_data_057ae296 != '\0') goto label_04390da6;
label_04390df4:
      __this_02 = &MethodInfo_Text_GetComponent_Text;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x4390e00;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae296 = '\x01';
      if (unaff_RBP == (UI_DropdownSettingElement_o *)0x0) goto label_04390f48;
label_04390e10:
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x4390e22;
      __this_02 = (MethodInfo_255A0F0 **)unaff_RBP;
      pIVar11 = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)unaff_RBP,MethodInfo_Text_GetComponent_Text);
      if (pIVar11 == (Il2CppObject *)0x0) goto label_04390f48;
      pMVar5 = pIVar11->klass->vtable[0x4b].method;
      vtableDispatch = pIVar11->klass->vtable[0x4b].methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x4390e41;
      (*vtableDispatch)(pIVar11,option,pMVar5);
      pUVar4 = (__this->fields)._scrollBar;
      __this_02 = (MethodInfo_255A0F0 **)0x0;
      if (pUVar4 == (UnityEngine_UI_Scrollbar_o *)0x0) goto label_04390f48;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x4390e55;
      fVar16 = UnityEngine_UI_Scrollbar__get_value(pUVar4,(MethodInfo *)0x0);
      (__this->fields)._currentScrollValue = fVar16;
      pUVar3 = (__this->fields)._optionsPanel;
      __this_02 = (MethodInfo_255A0F0 **)0x0;
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_04390f48;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x4390e70;
      UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
      iVar2 = (__this->fields)._settingType;
      if (iVar2 != 2) {
        if (iVar2 == 4) {
          __this_02 = (MethodInfo_255A0F0 **)(__this->fields)._setting;
          if ((UI_DropdownSettingElement_o *)__this_02 == (UI_DropdownSettingElement_o *)0x0)
          goto label_04390f48;
          bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
          if (((((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)__this_02)->klass)->_2).
               naturalAligment < bVar1) ||
             ((((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)__this_02)->klass)->_2).
              typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) goto label_04390f4d;
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x4390ece;
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)__this_02,(Il2CppObject *)option,MethodInfo_Void_set_Value);
        }
        pUVar6 = (__this->fields)._onDropdownOptionSelect;
joined_r0x04390f3b:
        if (pUVar6 != (UnityEngine_Events_UnityAction_o *)0x0) {
          (*(code *)(pUVar6->fields).invoke_impl)((pUVar6->fields).method_code,(pUVar6->fields).method);
          return;
        }
        return;
      }
      __this_02 = (MethodInfo_255A0F0 **)(__this->fields)._setting;
      if ((UI_DropdownSettingElement_o *)__this_02 == (UI_DropdownSettingElement_o *)0x0) goto label_04390f48;
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if ((bVar1 <= (((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)__this_02)->klass)->_2).
                    naturalAligment) &&
         ((((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)__this_02)->klass)->_2).
          typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_IntSetting)) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x4390f34;
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)__this_02,(int32_t)uVar14,MethodInfo_Void_set_Value);
        pUVar6 = (__this->fields)._onDropdownOptionSelect;
        goto joined_r0x04390f3b;
      }
    }
    else {
      unaff_RBP = (UI_DropdownSettingElement_o *)(__this->fields)._selectedButtonLabel;
      __this_02 = (MethodInfo_255A0F0 **)__this;
      if (g_data_057ae296 == '\0') goto label_04390df4;
label_04390da6:
      if (unaff_RBP != (UI_DropdownSettingElement_o *)0x0) goto label_04390e10;
label_04390f48:
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x4390f4d;
      il2cpp_runtime_helper_022b2c90();
    }
label_04390f4d:
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x4390f52;
    uVar10 = il2cpp_runtime_helper_022b2fd0();
    *(System_String_o **)((long)register0x00000020 + -0x30) = option;
    *(UI_DropdownSettingElement_o **)((long)register0x00000020 + -0x38) = __this;
    *(undefined8 *)((long)register0x00000020 + -0x40) = uVar10;
    ppMVar15 = (MethodInfo_2A23FA0 **)__this_02;
    if (g_data_057ae2aa == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4390f7c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4390f88;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4390f94;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4390fa0;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      ppMVar15 = &MethodInfo_Void_set_Value;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4390fac;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae2aa = '\x01';
    }
    iVar2 = (((UI_DropdownSettingElement_o *)__this_02)->fields)._settingType;
    if (iVar2 == 2) {
      option = (System_String_o *)(((UI_DropdownSettingElement_o *)__this_02)->fields)._setting;
      if ((UI_DropdownSettingElement_o *)option == (UI_DropdownSettingElement_o *)0x0) goto label_04391105;
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)option)->klass)->_2).
           naturalAligment < bVar1) ||
         ((((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)option)->klass)->_2).typeHierarchy
          [(ulong)bVar1 - 1] != TypeInfo_IntSetting)) goto label_0439110f;
      pSVar12 = (((UI_DropdownSettingElement_o *)__this_02)->fields)._options;
      if (pSVar12 == (System_String_array *)0x0) goto label_04391105;
      uVar13 = *(uint *)((long)&(((UI_DropdownSettingElement_o *)option)->fields).m_CachedPtr + 4);
      if ((int)pSVar12->max_length <= (int)uVar13) {
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x43910cd;
        ppMVar15 = (MethodInfo_2A23FA0 **)option;
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)option,0,MethodInfo_Void_set_Value);
        pSVar12 = (((UI_DropdownSettingElement_o *)__this_02)->fields)._options;
        if (pSVar12 == (System_String_array *)0x0) goto label_04391105;
        uVar13 = *(uint *)((long)&(((UI_DropdownSettingElement_o *)option)->fields).m_CachedPtr + 4);
      }
      if (uVar13 < (uint)pSVar12->max_length) {
        __this_02 = (MethodInfo_255A0F0 **)
                    (((UI_DropdownSettingElement_o *)__this_02)->fields)._selectedButtonLabel;
        option = pSVar12->m_Items[(int)uVar13];
        goto joined_r0x043910f2;
      }
    }
    else {
      if (iVar2 != 4) {
        return;
      }
      pSVar7 = (((UI_DropdownSettingElement_o *)__this_02)->fields)._setting;
      if (pSVar7 == (Settings_BaseSetting_o *)0x0) {
label_04391105:
        *(undefined8 *)((long)register0x00000020 + -0x48) = 0x439110a;
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
        if ((bVar1 <= (pSVar7->klass->_2).naturalAligment) &&
           ((pSVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
          __this_02 = (MethodInfo_255A0F0 **)
                      (((UI_DropdownSettingElement_o *)__this_02)->fields)._selectedButtonLabel;
          option = pSVar7[1].monitor;
joined_r0x043910f2:
          if (g_data_057ae296 == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4391024;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
            g_data_057ae296 = '\x01';
          }
          if ((UI_DropdownSettingElement_o *)__this_02 != (UI_DropdownSettingElement_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4391046;
            pIVar11 = UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Text_GetComponent_Text);
            if (pIVar11 != (Il2CppObject *)0x0) {
              pIVar8 = pIVar11->klass;
              vtableDispatch = pIVar8->vtable[0x4b].methodPtr;
              (*vtableDispatch)
                        (pIVar11,option,pIVar8->vtable[0x4b].method,pIVar8,vtableDispatch);
              return;
            }
          }
          goto label_04391105;
        }
      }
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x439110f;
      il2cpp_runtime_helper_022b2fd0();
label_0439110f:
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x4391117;
      ppMVar15 = (MethodInfo_2A23FA0 **)option;
      il2cpp_runtime_helper_022b2fd0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x439111c;
    uVar10 = il2cpp_runtime_helper_022b2ca0();
    *(System_String_o **)((long)register0x00000020 + -0x48) = option;
    *(MethodInfo_255A0F0 ***)((long)register0x00000020 + -0x50) = __this_02;
    *(undefined8 *)((long)register0x00000020 + -0x58) = uVar10;
    pUVar3 = (((UI_DropdownSettingElement_o *)ppMVar15)->fields)._optionsPanel;
    unaff_R14 = (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)0x0;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390c6b;
      bVar9 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        if (g_data_057ae2a7 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390cb7;
          il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableOptions_d__20);
          g_data_057ae2a7 = '\x01';
        }
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390ccd;
        __this_00 = (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableOptions_d__20);
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390cdc;
        unaff_R14 = __this_00;
        UI_DropdownSettingElement__WaitAndEnableOptions_d__20___ctor(__this_00,0,(MethodInfo *)0x0);
        __this_02 = (MethodInfo_255A0F0 **)0x0;
        if (__this_00 != (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)0x0) {
          (__this_00->fields).__4__this = (UI_DropdownSettingElement_o *)ppMVar15;
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390cf4;
          il2cpp_runtime_helper_022b4080(&(__this_00->fields).__4__this,ppMVar15);
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)ppMVar15,(System_Collections_IEnumerator_o *)__this_00,
                     (MethodInfo *)0x0);
          return;
        }
      }
      else {
        pUVar4 = (((UI_DropdownSettingElement_o *)ppMVar15)->fields)._scrollBar;
        unaff_R14 = (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)0x0;
        if (pUVar4 != (UnityEngine_UI_Scrollbar_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390c83;
          fVar16 = UnityEngine_UI_Scrollbar__get_value(pUVar4,(MethodInfo *)0x0);
          (((UI_DropdownSettingElement_o *)ppMVar15)->fields)._currentScrollValue = fVar16;
          pUVar3 = (((UI_DropdownSettingElement_o *)ppMVar15)->fields)._optionsPanel;
          unaff_R14 = (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)0x0;
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390d0d;
    uVar10 = il2cpp_runtime_helper_022b2c90();
    *(MethodInfo_2A23FA0 ***)((long)register0x00000020 + -0x60) = ppMVar15;
    *(MethodInfo_255A0F0 ***)((long)register0x00000020 + -0x68) = __this_02;
    *(undefined8 *)((long)register0x00000020 + -0x70) = uVar10;
    if (g_data_057ae2a7 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390d2c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableOptions_d__20);
      g_data_057ae2a7 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390d42;
    __this_01 = (UI_DropdownSettingElement_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableOptions_d__20);
    option = (System_String_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390d51;
    __this = __this_01;
    UI_DropdownSettingElement__WaitAndEnableOptions_d__20___ctor
              ((UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)__this_01,0,(MethodInfo *)0x0);
    if (__this_01 != (UI_DropdownSettingElement_o *)0x0) {
      (__this_01->fields)._setting = (Settings_BaseSetting_o *)unaff_R14;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390d69;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields)._setting,unaff_R14);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390d79;
    auVar17 = il2cpp_runtime_helper_022b2c90();
    uVar14 = auVar17._8_8_;
    in_RAX = auVar17._0_8_;
    unaff_RBX = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x70);
  } while( true );
}


// UI.DropdownSettingElement$$CloseOptions
// il2cpp: void UI_DropdownSettingElement__CloseOptions (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x438fef0

void UI_DropdownSettingElement__CloseOptions(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Scrollbar_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  float fVar1;
  
  __this_00 = (__this->fields)._scrollBar;
  if (__this_00 != (UnityEngine_UI_Scrollbar_o *)0x0) {
    fVar1 = UnityEngine_UI_Scrollbar__get_value(__this_00,(MethodInfo *)0x0);
    (__this->fields)._currentScrollValue = fVar1;
    __this_01 = (__this->fields)._optionsPanel;
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.DropdownSettingElement$$SyncElement
// il2cpp: void UI_DropdownSettingElement__SyncElement (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x4390f60

void UI_DropdownSettingElement__SyncElement(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_Scrollbar_o *pUVar4;
  MethodInfo *pMVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  Settings_BaseSetting_o *pSVar7;
  Il2CppClass *pIVar8;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar9;
  UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *__this_00;
  UI_DropdownSettingElement_o *__this_01;
  undefined8 in_RAX;
  Il2CppObject *pIVar10;
  System_String_array *pSVar11;
  undefined8 uVar12;
  uint uVar13;
  UI_DropdownSettingElement_o *unaff_RBX;
  UI_DropdownSettingElement_o *unaff_RBP;
  UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *pUVar14;
  MethodInfo_255A0F0 **__this_02;
  MethodInfo_2A23FA0 **ppMVar15;
  UI_DropdownSettingElement_o *unaff_R14;
  ulong unaff_R15;
  float fVar16;
  undefined1 auVar17 [16];
  
  __this_02 = (MethodInfo_255A0F0 **)__this;
  do {
    *(UI_DropdownSettingElement_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(UI_DropdownSettingElement_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    ppMVar15 = (MethodInfo_2A23FA0 **)__this_02;
    if (g_data_057ae2aa == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390f7c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390f88;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390f94;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390fa0;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      ppMVar15 = &MethodInfo_Void_set_Value;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390fac;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae2aa = '\x01';
    }
    iVar2 = (((UI_DropdownSettingElement_o *)__this_02)->fields)._settingType;
    if (iVar2 == 2) {
      unaff_R14 = (UI_DropdownSettingElement_o *)(((UI_DropdownSettingElement_o *)__this_02)->fields)._setting
      ;
      if (unaff_R14 == (UI_DropdownSettingElement_o *)0x0) goto label_04391105;
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((((Settings_TypedSetting_T__c *)unaff_R14->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_TypedSetting_T__c *)unaff_R14->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          TypeInfo_IntSetting)) goto label_0439110f;
      pSVar11 = (((UI_DropdownSettingElement_o *)__this_02)->fields)._options;
      if (pSVar11 == (System_String_array *)0x0) goto label_04391105;
      uVar13 = *(uint *)((long)&(unaff_R14->fields).m_CachedPtr + 4);
      if ((int)pSVar11->max_length <= (int)uVar13) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43910cd;
        ppMVar15 = (MethodInfo_2A23FA0 **)unaff_R14;
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)unaff_R14,0,MethodInfo_Void_set_Value);
        pSVar11 = (((UI_DropdownSettingElement_o *)__this_02)->fields)._options;
        if (pSVar11 == (System_String_array *)0x0) goto label_04391105;
        uVar13 = *(uint *)((long)&(unaff_R14->fields).m_CachedPtr + 4);
      }
      if (uVar13 < (uint)pSVar11->max_length) {
        __this_02 = (MethodInfo_255A0F0 **)
                    (((UI_DropdownSettingElement_o *)__this_02)->fields)._selectedButtonLabel;
        unaff_R14 = (UI_DropdownSettingElement_o *)pSVar11->m_Items[(int)uVar13];
        goto joined_r0x043910f2;
      }
    }
    else {
      if (iVar2 != 4) {
        return;
      }
      pSVar7 = (((UI_DropdownSettingElement_o *)__this_02)->fields)._setting;
      if (pSVar7 == (Settings_BaseSetting_o *)0x0) {
label_04391105:
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x439110a;
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
        if ((bVar1 <= (pSVar7->klass->_2).naturalAligment) &&
           ((pSVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
          __this_02 = (MethodInfo_255A0F0 **)
                      (((UI_DropdownSettingElement_o *)__this_02)->fields)._selectedButtonLabel;
          unaff_R14 = pSVar7[1].monitor;
joined_r0x043910f2:
          if (g_data_057ae296 == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4391024;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
            g_data_057ae296 = '\x01';
          }
          if ((UI_DropdownSettingElement_o *)__this_02 != (UI_DropdownSettingElement_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4391046;
            pIVar10 = UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Text_GetComponent_Text);
            if (pIVar10 != (Il2CppObject *)0x0) {
              pIVar8 = pIVar10->klass;
              vtableDispatch = pIVar8->vtable[0x4b].methodPtr;
              (*vtableDispatch)
                        (pIVar10,unaff_R14,pIVar8->vtable[0x4b].method,pIVar8,vtableDispatch);
              return;
            }
          }
          goto label_04391105;
        }
      }
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x439110f;
      il2cpp_runtime_helper_022b2fd0();
label_0439110f:
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4391117;
      ppMVar15 = (MethodInfo_2A23FA0 **)unaff_R14;
      il2cpp_runtime_helper_022b2fd0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x439111c;
    uVar12 = il2cpp_runtime_helper_022b2ca0();
    *(UI_DropdownSettingElement_o **)((long)register0x00000020 + -0x20) = unaff_R14;
    *(MethodInfo_255A0F0 ***)((long)register0x00000020 + -0x28) = __this_02;
    *(undefined8 *)((long)register0x00000020 + -0x30) = uVar12;
    pUVar3 = (((UI_DropdownSettingElement_o *)ppMVar15)->fields)._optionsPanel;
    pUVar14 = (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)0x0;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4390c6b;
      bVar9 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        if (g_data_057ae2a7 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4390cb7;
          il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableOptions_d__20);
          g_data_057ae2a7 = '\x01';
        }
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4390ccd;
        __this_00 = (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableOptions_d__20);
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4390cdc;
        pUVar14 = __this_00;
        UI_DropdownSettingElement__WaitAndEnableOptions_d__20___ctor(__this_00,0,(MethodInfo *)0x0);
        __this_02 = (MethodInfo_255A0F0 **)0x0;
        if (__this_00 != (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)0x0) {
          (__this_00->fields).__4__this = (UI_DropdownSettingElement_o *)ppMVar15;
          *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4390cf4;
          il2cpp_runtime_helper_022b4080(&(__this_00->fields).__4__this,ppMVar15);
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)ppMVar15,(System_Collections_IEnumerator_o *)__this_00,
                     (MethodInfo *)0x0);
          return;
        }
      }
      else {
        pUVar4 = (((UI_DropdownSettingElement_o *)ppMVar15)->fields)._scrollBar;
        pUVar14 = (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)0x0;
        if (pUVar4 != (UnityEngine_UI_Scrollbar_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4390c83;
          fVar16 = UnityEngine_UI_Scrollbar__get_value(pUVar4,(MethodInfo *)0x0);
          (((UI_DropdownSettingElement_o *)ppMVar15)->fields)._currentScrollValue = fVar16;
          pUVar3 = (((UI_DropdownSettingElement_o *)ppMVar15)->fields)._optionsPanel;
          pUVar14 = (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)0x0;
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4390d0d;
    uVar12 = il2cpp_runtime_helper_022b2c90();
    *(MethodInfo_2A23FA0 ***)((long)register0x00000020 + -0x38) = ppMVar15;
    *(MethodInfo_255A0F0 ***)((long)register0x00000020 + -0x40) = __this_02;
    *(undefined8 *)((long)register0x00000020 + -0x48) = uVar12;
    if (g_data_057ae2a7 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x4390d2c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableOptions_d__20);
      g_data_057ae2a7 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x4390d42;
    __this_01 = (UI_DropdownSettingElement_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableOptions_d__20);
    unaff_R14 = (UI_DropdownSettingElement_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x4390d51;
    unaff_RBX = __this_01;
    UI_DropdownSettingElement__WaitAndEnableOptions_d__20___ctor
              ((UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)__this_01,0,(MethodInfo *)0x0);
    if (__this_01 != (UI_DropdownSettingElement_o *)0x0) {
      (__this_01->fields)._setting = (Settings_BaseSetting_o *)pUVar14;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x4390d69;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields)._setting,pUVar14);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x4390d79;
    auVar17 = il2cpp_runtime_helper_022b2c90();
    *(UI_DropdownSettingElement_o **)((long)register0x00000020 + -0x50) = unaff_RBP;
    *(ulong *)((long)register0x00000020 + -0x58) = unaff_R15;
    *(UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o **)((long)register0x00000020 + -0x60) = pUVar14;
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
    *(long *)((long)register0x00000020 + -0x70) = auVar17._0_8_;
    unaff_R15 = auVar17._8_8_ & 0xffffffff;
    if (g_data_057ae2a9 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390dbc;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390dc8;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390dd4;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      ppMVar15 = &MethodInfo_Void_set_Value;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390de0;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae2a9 = '\x01';
      unaff_RBP = (UI_DropdownSettingElement_o *)(unaff_RBX->fields)._selectedButtonLabel;
      __this_02 = (MethodInfo_255A0F0 **)ppMVar15;
      if (g_data_057ae296 != '\0') goto label_04390da6;
label_04390df4:
      __this_02 = &MethodInfo_Text_GetComponent_Text;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390e00;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae296 = '\x01';
      if (unaff_RBP == (UI_DropdownSettingElement_o *)0x0) goto label_04390f48;
label_04390e10:
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390e22;
      __this_02 = (MethodInfo_255A0F0 **)unaff_RBP;
      pIVar10 = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)unaff_RBP,MethodInfo_Text_GetComponent_Text);
      if (pIVar10 == (Il2CppObject *)0x0) goto label_04390f48;
      pMVar5 = pIVar10->klass->vtable[0x4b].method;
      vtableDispatch = pIVar10->klass->vtable[0x4b].methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390e41;
      (*vtableDispatch)(pIVar10,unaff_R14,pMVar5);
      pUVar4 = (unaff_RBX->fields)._scrollBar;
      __this_02 = (MethodInfo_255A0F0 **)0x0;
      if (pUVar4 == (UnityEngine_UI_Scrollbar_o *)0x0) goto label_04390f48;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390e55;
      fVar16 = UnityEngine_UI_Scrollbar__get_value(pUVar4,(MethodInfo *)0x0);
      (unaff_RBX->fields)._currentScrollValue = fVar16;
      pUVar3 = (unaff_RBX->fields)._optionsPanel;
      __this_02 = (MethodInfo_255A0F0 **)0x0;
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_04390f48;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390e70;
      UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
      iVar2 = (unaff_RBX->fields)._settingType;
      if (iVar2 == 2) {
        __this_02 = (MethodInfo_255A0F0 **)(unaff_RBX->fields)._setting;
        if ((UI_DropdownSettingElement_o *)__this_02 == (UI_DropdownSettingElement_o *)0x0) goto label_04390f48;
        bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
        if ((bVar1 <= (((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)__this_02)->klass)->_2).
                      naturalAligment) &&
           ((((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)__this_02)->klass)->_2).
            typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_IntSetting)) {
          *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390f34;
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)__this_02,auVar17._8_4_,MethodInfo_Void_set_Value);
          pUVar6 = (unaff_RBX->fields)._onDropdownOptionSelect;
          goto joined_r0x04390f3b;
        }
      }
      else {
        if (iVar2 != 4) goto label_04390ece;
        __this_02 = (MethodInfo_255A0F0 **)(unaff_RBX->fields)._setting;
        if ((UI_DropdownSettingElement_o *)__this_02 == (UI_DropdownSettingElement_o *)0x0) goto label_04390f48;
        bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
        if ((bVar1 <= (((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)__this_02)->klass)->_2).
                      naturalAligment) &&
           ((((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)__this_02)->klass)->_2).
            typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
          *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390ece;
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)__this_02,(Il2CppObject *)unaff_R14,MethodInfo_Void_set_Value);
label_04390ece:
          pUVar6 = (unaff_RBX->fields)._onDropdownOptionSelect;
joined_r0x04390f3b:
          if (pUVar6 != (UnityEngine_Events_UnityAction_o *)0x0) {
            (*(code *)(pUVar6->fields).invoke_impl)((pUVar6->fields).method_code,(pUVar6->fields).method);
            return;
          }
          return;
        }
      }
    }
    else {
      unaff_RBP = (UI_DropdownSettingElement_o *)(unaff_RBX->fields)._selectedButtonLabel;
      __this_02 = (MethodInfo_255A0F0 **)unaff_RBX;
      if (g_data_057ae296 == '\0') goto label_04390df4;
label_04390da6:
      if (unaff_RBP != (UI_DropdownSettingElement_o *)0x0) goto label_04390e10;
label_04390f48:
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390f4d;
      il2cpp_runtime_helper_022b2c90();
    }
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390f52;
    in_RAX = il2cpp_runtime_helper_022b2fd0();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x70);
  } while( true );
}


// UI.DropdownSettingElement$$.ctor
// il2cpp: void UI_DropdownSettingElement___ctor (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x438ffa0

void UI_DropdownSettingElement___ctor(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  
  (__this->fields)._currentScrollValue = 1.0;
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this->fields)._lastKnownPosition.fields.x = (float)(int)uVar2;
  (__this->fields)._lastKnownPosition.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._lastKnownPosition.fields.z = fVar1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.DropdownSettingElement$$<Setup>b__11_0
// il2cpp: void UI_DropdownSettingElement___Setup_b__11_0 (UI_DropdownSettingElement_o* __this, const MethodInfo* method);
// 0x4391120

void UI_DropdownSettingElement___Setup_b__11_0(UI_DropdownSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_UI_Scrollbar_o *pUVar4;
  MethodInfo *pMVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  Settings_BaseSetting_o *pSVar7;
  Il2CppClass *pIVar8;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar9;
  UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *__this_00;
  undefined8 uVar10;
  UI_DropdownSettingElement_o *__this_01;
  Il2CppObject *pIVar11;
  System_String_array *pSVar12;
  undefined8 in_RAX;
  uint uVar13;
  MethodInfo_255A0F0 **unaff_RBX;
  UI_DropdownSettingElement_o *unaff_RBP;
  UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *pUVar14;
  UI_DropdownSettingElement_o *pUVar15;
  MethodInfo_2A23FA0 **ppMVar16;
  UI_DropdownSettingElement_o *unaff_R14;
  ulong unaff_R15;
  float fVar17;
  undefined1 auVar18 [16];
  
  do {
    *(UI_DropdownSettingElement_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(MethodInfo_255A0F0 ***)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    pUVar3 = (__this->fields)._optionsPanel;
    pUVar14 = (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)0x0;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390c6b;
      bVar9 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if ((char)bVar9 == '\0') {
        if (g_data_057ae2a7 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390cb7;
          il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableOptions_d__20);
          g_data_057ae2a7 = '\x01';
        }
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390ccd;
        __this_00 = (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableOptions_d__20);
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390cdc;
        pUVar14 = __this_00;
        UI_DropdownSettingElement__WaitAndEnableOptions_d__20___ctor(__this_00,0,(MethodInfo *)0x0);
        unaff_RBX = (MethodInfo_255A0F0 **)0x0;
        if (__this_00 != (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)0x0) {
          (__this_00->fields).__4__this = __this;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390cf4;
          il2cpp_runtime_helper_022b4080(&(__this_00->fields).__4__this,__this);
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                     (MethodInfo *)0x0);
          return;
        }
      }
      else {
        pUVar4 = (__this->fields)._scrollBar;
        pUVar14 = (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)0x0;
        if (pUVar4 != (UnityEngine_UI_Scrollbar_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390c83;
          fVar17 = UnityEngine_UI_Scrollbar__get_value(pUVar4,(MethodInfo *)0x0);
          (__this->fields)._currentScrollValue = fVar17;
          pUVar3 = (__this->fields)._optionsPanel;
          pUVar14 = (UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)0x0;
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4390d0d;
    uVar10 = il2cpp_runtime_helper_022b2c90();
    *(UI_DropdownSettingElement_o **)((long)register0x00000020 + -0x20) = __this;
    *(MethodInfo_255A0F0 ***)((long)register0x00000020 + -0x28) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x30) = uVar10;
    if (g_data_057ae2a7 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4390d2c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndEnableOptions_d__20);
      g_data_057ae2a7 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4390d42;
    __this_01 = (UI_DropdownSettingElement_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndEnableOptions_d__20);
    unaff_R14 = (UI_DropdownSettingElement_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4390d51;
    pUVar15 = __this_01;
    UI_DropdownSettingElement__WaitAndEnableOptions_d__20___ctor
              ((UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o *)__this_01,0,(MethodInfo *)0x0);
    if (__this_01 != (UI_DropdownSettingElement_o *)0x0) {
      (__this_01->fields)._setting = (Settings_BaseSetting_o *)pUVar14;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4390d69;
      il2cpp_runtime_helper_022b4080(&(__this_01->fields)._setting,pUVar14);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x4390d79;
    auVar18 = il2cpp_runtime_helper_022b2c90();
    *(UI_DropdownSettingElement_o **)((long)register0x00000020 + -0x38) = unaff_RBP;
    *(ulong *)((long)register0x00000020 + -0x40) = unaff_R15;
    *(UI_DropdownSettingElement__WaitAndEnableOptions_d__20_o **)((long)register0x00000020 + -0x48) = pUVar14;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
    *(long *)((long)register0x00000020 + -0x58) = auVar18._0_8_;
    unaff_R15 = auVar18._8_8_ & 0xffffffff;
    if (g_data_057ae2a9 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390dbc;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390dc8;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390dd4;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      ppMVar16 = &MethodInfo_Void_set_Value;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390de0;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae2a9 = '\x01';
      unaff_RBP = (UI_DropdownSettingElement_o *)(pUVar15->fields)._selectedButtonLabel;
      unaff_RBX = (MethodInfo_255A0F0 **)ppMVar16;
      if (g_data_057ae296 != '\0') goto label_04390da6;
label_04390df4:
      unaff_RBX = &MethodInfo_Text_GetComponent_Text;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390e00;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae296 = '\x01';
      if (unaff_RBP == (UI_DropdownSettingElement_o *)0x0) goto label_04390f48;
label_04390e10:
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390e22;
      unaff_RBX = (MethodInfo_255A0F0 **)unaff_RBP;
      pIVar11 = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)unaff_RBP,MethodInfo_Text_GetComponent_Text);
      if (pIVar11 == (Il2CppObject *)0x0) goto label_04390f48;
      pMVar5 = pIVar11->klass->vtable[0x4b].method;
      vtableDispatch = pIVar11->klass->vtable[0x4b].methodPtr;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390e41;
      (*vtableDispatch)(pIVar11,unaff_R14,pMVar5);
      pUVar4 = (pUVar15->fields)._scrollBar;
      unaff_RBX = (MethodInfo_255A0F0 **)0x0;
      if (pUVar4 == (UnityEngine_UI_Scrollbar_o *)0x0) goto label_04390f48;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390e55;
      fVar17 = UnityEngine_UI_Scrollbar__get_value(pUVar4,(MethodInfo *)0x0);
      (pUVar15->fields)._currentScrollValue = fVar17;
      pUVar3 = (pUVar15->fields)._optionsPanel;
      unaff_RBX = (MethodInfo_255A0F0 **)0x0;
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_04390f48;
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390e70;
      UnityEngine_GameObject__SetActive(pUVar3,0,(MethodInfo *)0x0);
      iVar2 = (pUVar15->fields)._settingType;
      if (iVar2 != 2) {
        if (iVar2 == 4) {
          unaff_RBX = (MethodInfo_255A0F0 **)(pUVar15->fields)._setting;
          if ((UI_DropdownSettingElement_o *)unaff_RBX == (UI_DropdownSettingElement_o *)0x0)
          goto label_04390f48;
          bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
          if (((((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)unaff_RBX)->klass)->_2).
               naturalAligment < bVar1) ||
             ((((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)unaff_RBX)->klass)->_2).
              typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) goto label_04390f4d;
          *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390ece;
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)unaff_RBX,(Il2CppObject *)unaff_R14,MethodInfo_Void_set_Value);
        }
        pUVar6 = (pUVar15->fields)._onDropdownOptionSelect;
joined_r0x04390f3b:
        if (pUVar6 != (UnityEngine_Events_UnityAction_o *)0x0) {
          (*(code *)(pUVar6->fields).invoke_impl)((pUVar6->fields).method_code,(pUVar6->fields).method);
          return;
        }
        return;
      }
      unaff_RBX = (MethodInfo_255A0F0 **)(pUVar15->fields)._setting;
      if ((UI_DropdownSettingElement_o *)unaff_RBX == (UI_DropdownSettingElement_o *)0x0) goto label_04390f48;
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if ((bVar1 <= (((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)unaff_RBX)->klass)->_2).
                    naturalAligment) &&
         ((((Settings_TypedSetting_T__c *)((UI_DropdownSettingElement_o *)unaff_RBX)->klass)->_2).
          typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_IntSetting)) {
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390f34;
        Settings_TypedSetting_int___set_Value
                  ((Settings_TypedSetting_int__o *)unaff_RBX,auVar18._8_4_,MethodInfo_Void_set_Value);
        pUVar6 = (pUVar15->fields)._onDropdownOptionSelect;
        goto joined_r0x04390f3b;
      }
    }
    else {
      unaff_RBP = (UI_DropdownSettingElement_o *)(pUVar15->fields)._selectedButtonLabel;
      unaff_RBX = (MethodInfo_255A0F0 **)pUVar15;
      if (g_data_057ae296 == '\0') goto label_04390df4;
label_04390da6:
      if (unaff_RBP != (UI_DropdownSettingElement_o *)0x0) goto label_04390e10;
label_04390f48:
      *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390f4d;
      il2cpp_runtime_helper_022b2c90();
    }
label_04390f4d:
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0x4390f52;
    uVar10 = il2cpp_runtime_helper_022b2fd0();
    *(UI_DropdownSettingElement_o **)((long)register0x00000020 + -0x60) = unaff_R14;
    *(UI_DropdownSettingElement_o **)((long)register0x00000020 + -0x68) = pUVar15;
    *(undefined8 *)((long)register0x00000020 + -0x70) = uVar10;
    __this = (UI_DropdownSettingElement_o *)unaff_RBX;
    if (g_data_057ae2aa == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390f7c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390f88;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390f94;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390fa0;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      ppMVar16 = &MethodInfo_Void_set_Value;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4390fac;
      il2cpp_runtime_helper_023445d0();
      g_data_057ae2aa = '\x01';
      __this = (UI_DropdownSettingElement_o *)ppMVar16;
    }
    iVar2 = (((UI_DropdownSettingElement_o *)unaff_RBX)->fields)._settingType;
    if (iVar2 == 2) {
      unaff_R14 = (UI_DropdownSettingElement_o *)(((UI_DropdownSettingElement_o *)unaff_RBX)->fields)._setting
      ;
      if (unaff_R14 == (UI_DropdownSettingElement_o *)0x0) goto label_04391105;
      bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
      if (((((Settings_TypedSetting_T__c *)unaff_R14->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_TypedSetting_T__c *)unaff_R14->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          TypeInfo_IntSetting)) goto label_0439110f;
      pSVar12 = (((UI_DropdownSettingElement_o *)unaff_RBX)->fields)._options;
      if (pSVar12 == (System_String_array *)0x0) goto label_04391105;
      uVar13 = *(uint *)((long)&(unaff_R14->fields).m_CachedPtr + 4);
      if ((int)pSVar12->max_length <= (int)uVar13) {
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x43910cd;
        __this = unaff_R14;
        Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)unaff_R14,0,MethodInfo_Void_set_Value);
        pSVar12 = (((UI_DropdownSettingElement_o *)unaff_RBX)->fields)._options;
        if (pSVar12 == (System_String_array *)0x0) goto label_04391105;
        uVar13 = *(uint *)((long)&(unaff_R14->fields).m_CachedPtr + 4);
      }
      if (uVar13 < (uint)pSVar12->max_length) {
        unaff_RBX = (MethodInfo_255A0F0 **)
                    (((UI_DropdownSettingElement_o *)unaff_RBX)->fields)._selectedButtonLabel;
        unaff_R14 = (UI_DropdownSettingElement_o *)pSVar12->m_Items[(int)uVar13];
        goto joined_r0x043910f2;
      }
    }
    else {
      if (iVar2 != 4) {
        return;
      }
      pSVar7 = (((UI_DropdownSettingElement_o *)unaff_RBX)->fields)._setting;
      if (pSVar7 == (Settings_BaseSetting_o *)0x0) {
label_04391105:
        *(undefined8 *)((long)register0x00000020 + -0x78) = 0x439110a;
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
        if ((bVar1 <= (pSVar7->klass->_2).naturalAligment) &&
           ((pSVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
          unaff_RBX = (MethodInfo_255A0F0 **)
                      (((UI_DropdownSettingElement_o *)unaff_RBX)->fields)._selectedButtonLabel;
          unaff_R14 = pSVar7[1].monitor;
joined_r0x043910f2:
          if (g_data_057ae296 == '\0') {
            *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4391024;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
            g_data_057ae296 = '\x01';
          }
          if ((UI_DropdownSettingElement_o *)unaff_RBX != (UI_DropdownSettingElement_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4391046;
            pIVar11 = UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)unaff_RBX,MethodInfo_Text_GetComponent_Text);
            if (pIVar11 != (Il2CppObject *)0x0) {
              pIVar8 = pIVar11->klass;
              vtableDispatch = pIVar8->vtable[0x4b].methodPtr;
              (*vtableDispatch)
                        (pIVar11,unaff_R14,pIVar8->vtable[0x4b].method,pIVar8,vtableDispatch);
              return;
            }
          }
          goto label_04391105;
        }
      }
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x439110f;
      il2cpp_runtime_helper_022b2fd0();
label_0439110f:
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0x4391117;
      __this = unaff_R14;
      il2cpp_runtime_helper_022b2fd0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0x439111c;
    in_RAX = il2cpp_runtime_helper_022b2ca0();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x70);
  } while( true );
}


