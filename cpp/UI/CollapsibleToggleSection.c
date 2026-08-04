// Type: UI.CollapsibleToggleSection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CollapsibleToggleSection.cs
// Prior real C# source: none
// --------------------------------

// UI.CollapsibleToggleSection.<>c__DisplayClass9_0$$.ctor
// il2cpp: void UI_CollapsibleToggleSection___c__DisplayClass9_0___ctor (UI_CollapsibleToggleSection___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x4389b30

void UI_CollapsibleToggleSection___c__DisplayClass9_0___ctor
               (UI_CollapsibleToggleSection___c__DisplayClass9_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CollapsibleToggleSection.<>c__DisplayClass9_0$$<Setup>b__0
// il2cpp: void UI_CollapsibleToggleSection___c__DisplayClass9_0___Setup_b__0 (UI_CollapsibleToggleSection___c__DisplayClass9_0_o* __this, bool val, const MethodInfo* method);
// 0x4389fb0

void UI_CollapsibleToggleSection___c__DisplayClass9_0___Setup_b__0
               (UI_CollapsibleToggleSection___c__DisplayClass9_0_o *__this,bool_conflict val,
               MethodInfo *method)

{
  System_Action_bool__o *pSVar1;
  code *vtableDispatch;
  
  pSVar1 = (__this->fields).onToggleChanged;
  if (pSVar1 != (System_Action_bool__o *)0x0) {
    vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtableDispatch)
              ((pSVar1->fields).method_code,(char)val,(pSVar1->fields).method,vtableDispatch);
    return;
  }
  return;
}


// UI.CollapsibleToggleSection$$get_IsExpanded
// il2cpp: bool UI_CollapsibleToggleSection__get_IsExpanded (UI_CollapsibleToggleSection_o* __this, const MethodInfo* method);
// 0x4389870

bool_conflict
UI_CollapsibleToggleSection__get_IsExpanded(UI_CollapsibleToggleSection_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._expanded);
}


// UI.CollapsibleToggleSection$$get_IsEnabled
// il2cpp: bool UI_CollapsibleToggleSection__get_IsEnabled (UI_CollapsibleToggleSection_o* __this, const MethodInfo* method);
// 0x4389880

bool_conflict
UI_CollapsibleToggleSection__get_IsEnabled(UI_CollapsibleToggleSection_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Navigation_o *pUVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_Events_UnityEvent_bool__o *__this_01;
  bool_conflict bVar2;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  UnityEngine_UI_Toggle_o *pUVar3;
  undefined8 in_RCX;
  UnityEngine_UI_Toggle_o *x_00;
  undefined8 uVar4;
  UnityEngine_UI_Toggle_o *__this_02;
  UnityEngine_UI_Toggle_o *pUVar5;
  UnityEngine_UI_Selectable_o *in_R8;
  uint in_R9D;
  undefined1 unaff_R14B;
  intptr_t unaff_R15;
  
  if (g_data_057ae254 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae254 = '\x01';
  }
  __this_02 = (__this->fields)._enableToggle;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar4 = 0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return 0;
  }
  pUVar5 = (__this->fields)._enableToggle;
  if (pUVar5 != (UnityEngine_UI_Toggle_o *)0x0) {
    return (uint)(*(char *)&(pUVar5->fields).onValueChanged != '\0');
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae255 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ToggleExpand);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    g_data_057ae255 = '\x01';
  }
  pUVar3 = (UnityEngine_UI_Toggle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass9_0);
  pUVar5 = pUVar3;
  System_Object___ctor((Il2CppObject *)pUVar3,(MethodInfo *)0x0);
  if (pUVar3 == (UnityEngine_UI_Toggle_o *)0x0) goto label_04389b25;
  (pUVar3->fields).m_CachedPtr = unaff_R15;
  il2cpp_runtime_helper_022b4080(&pUVar3->fields,unaff_R15);
  *(undefined8 *)&(__this_02->fields).m_EnableCalled = uVar4;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).m_EnableCalled,uVar4);
  pUVar1 = &(__this_02->fields).m_Navigation;
  (__this_02->fields).m_Navigation.fields.m_Mode = (int)in_RCX;
  (__this_02->fields).m_Navigation.fields.m_WrapAround = (int)((ulong)in_RCX >> 0x20);
  il2cpp_runtime_helper_022b4080(pUVar1,in_RCX);
  (__this_02->fields).m_Navigation.fields.m_SelectOnUp = in_R8;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).m_Navigation.fields.m_SelectOnUp);
  *(undefined1 *)&(__this_02->fields).m_Navigation.fields.m_SelectOnDown = unaff_R14B;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar5 = x_00;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (x_00 == (UnityEngine_UI_Toggle_o *)0x0) goto label_04389b25;
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(x_00->fields).m_CanvasGroupCache;
    pUVar3 = (UnityEngine_UI_Toggle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    pUVar5 = pUVar3;
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_04389b25;
    UnityEngine_Events_UnityEvent__AddListener
              (__this_00,(UnityEngine_Events_UnityAction_o *)pUVar3,(MethodInfo *)0x0);
  }
  x = *(UnityEngine_Object_o **)&pUVar1->fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar3 = (UnityEngine_UI_Toggle_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
label_04389b12:
    UI_CollapsibleToggleSection__UpdateArrow((UI_CollapsibleToggleSection_o *)__this_02,(MethodInfo *)pUVar3);
    return extraout_EAX;
  }
  pUVar5 = *(UnityEngine_UI_Toggle_o **)&pUVar1->fields;
  if (pUVar5 != (UnityEngine_UI_Toggle_o *)0x0) {
    UnityEngine_UI_Toggle__set_isOn(pUVar5,in_R9D & 0xff,(MethodInfo *)0x0);
    if (*(long *)&pUVar1->fields != 0) {
      __this_01 = *(UnityEngine_Events_UnityEvent_bool__o **)(*(long *)&pUVar1->fields + 0x118);
      pUVar3 = (UnityEngine_UI_Toggle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_bool);
      pUVar5 = pUVar3;
      UnityEngine_Events_UnityAction_bool____ctor();
      if (__this_01 != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
        UnityEngine_Events_UnityEvent_bool___AddListener
                  (__this_01,(UnityEngine_Events_UnityAction_T0__o *)pUVar3,MethodInfo_Void_AddListener);
        goto label_04389b12;
      }
    }
  }
label_04389b25:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pUVar5,(MethodInfo *)0x0);
  return extraout_EAX_00;
}


// UI.CollapsibleToggleSection$$Setup
// il2cpp: void UI_CollapsibleToggleSection__Setup (UI_CollapsibleToggleSection_o* __this, UnityEngine_UI_Text_o* arrowButtonText, UnityEngine_UI_Button_o* arrowButton, UnityEngine_UI_Toggle_o* enableToggle, System_String_o* title, bool startEnabled, bool startExpanded, System_Action_bool__o* onToggleChanged, const MethodInfo* method);
// 0x4389900

void UI_CollapsibleToggleSection__Setup
               (UI_CollapsibleToggleSection_o *__this,UnityEngine_UI_Text_o *arrowButtonText,
               UnityEngine_UI_Button_o *arrowButton,UnityEngine_UI_Toggle_o *enableToggle,
               System_String_o *title,bool_conflict startEnabled,bool_conflict startExpanded,
               System_Action_bool__o *onToggleChanged,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o **ppUVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_UI_ToggleGroup_o *__this_01;
  bool_conflict bVar2;
  UnityEngine_UI_Toggle_o *pUVar3;
  UnityEngine_UI_Toggle_o *pUVar4;
  
  if (g_data_057ae255 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ToggleExpand);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_bool);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    g_data_057ae255 = '\x01';
  }
  pUVar3 = (UnityEngine_UI_Toggle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass9_0);
  pUVar4 = pUVar3;
  System_Object___ctor((Il2CppObject *)pUVar3,(MethodInfo *)0x0);
  if (pUVar3 == (UnityEngine_UI_Toggle_o *)0x0) goto label_04389b25;
  (pUVar3->fields).m_CachedPtr = (intptr_t)onToggleChanged;
  il2cpp_runtime_helper_022b4080(&pUVar3->fields,onToggleChanged);
  (__this->fields)._arrowText = arrowButtonText;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._arrowText,arrowButtonText);
  ppUVar1 = &(__this->fields)._enableToggle;
  (__this->fields)._enableToggle = enableToggle;
  il2cpp_runtime_helper_022b4080(ppUVar1,enableToggle);
  (__this->fields)._title = title;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._title);
  *(undefined1 *)&(__this->fields)._expanded = (undefined1)startExpanded;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar4 = (UnityEngine_UI_Toggle_o *)arrowButton;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)arrowButton,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (arrowButton == (UnityEngine_UI_Button_o *)0x0) goto label_04389b25;
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(arrowButton->fields).m_CanvasGroupCache;
    pUVar3 = (UnityEngine_UI_Toggle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    pUVar4 = pUVar3;
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_04389b25;
    UnityEngine_Events_UnityEvent__AddListener
              (__this_00,(UnityEngine_Events_UnityAction_o *)pUVar3,(MethodInfo *)0x0);
  }
  pUVar4 = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar3 = (UnityEngine_UI_Toggle_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar4 = *ppUVar1;
    if (pUVar4 != (UnityEngine_UI_Toggle_o *)0x0) {
      UnityEngine_UI_Toggle__set_isOn(pUVar4,startEnabled & 0xff,(MethodInfo *)0x0);
      if (*ppUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
        __this_01 = ((*ppUVar1)->fields).m_Group;
        pUVar3 = (UnityEngine_UI_Toggle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_bool);
        pUVar4 = pUVar3;
        UnityEngine_Events_UnityAction_bool____ctor();
        if (__this_01 != (UnityEngine_UI_ToggleGroup_o *)0x0) {
          UnityEngine_Events_UnityEvent_bool___AddListener
                    ((UnityEngine_Events_UnityEvent_bool__o *)__this_01,
                     (UnityEngine_Events_UnityAction_T0__o *)pUVar3,MethodInfo_Void_AddListener);
          goto label_04389b12;
        }
      }
    }
label_04389b25:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar4,(MethodInfo *)0x0);
    return;
  }
label_04389b12:
  UI_CollapsibleToggleSection__UpdateArrow(__this,(MethodInfo *)pUVar3);
  return;
}


// UI.CollapsibleToggleSection$$AddChild
// il2cpp: void UI_CollapsibleToggleSection__AddChild (UI_CollapsibleToggleSection_o* __this, UnityEngine_GameObject_o* child, const MethodInfo* method);
// 0x4389c00

void UI_CollapsibleToggleSection__AddChild
               (UI_CollapsibleToggleSection_o *__this,UnityEngine_GameObject_o *child,MethodInfo *method)

{
  int32_t *piVar1;
  bool_conflict *pbVar2;
  uint uVar3;
  UnityEngine_GameObject_array *pUVar4;
  System_Collections_Generic_List_GameObject__o *__this_00;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar6;
  long *plVar7;
  MethodInfo *pMVar8;
  UI_CollapsibleToggleSection_o *__this_05;
  undefined1 auVar9 [12];
  System_Collections_Generic_List_T__o *pSVar10;
  Il2CppMethodPointer pIVar11;
  UnityEngine_Object_o *pUVar12;
  UnityEngine_Object_o *x;
  
  if (g_data_057ae256 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae256 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar8 = (MethodInfo *)0x0;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)child,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  lVar5 = MethodInfo_Void_Add;
  if ((char)bVar6 == '\0') {
    __this_05 = (UI_CollapsibleToggleSection_o *)(__this->fields)._children;
    if (__this_05 != (UI_CollapsibleToggleSection_o *)0x0) {
      piVar1 = (int32_t *)((long)&(__this_05->fields).m_CancellationTokenSource + 4);
      *piVar1 = *piVar1 + 1;
      pUVar4 = (UnityEngine_GameObject_array *)(__this_05->fields).m_CachedPtr;
      if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
        uVar3 = *(uint *)&(__this_05->fields).m_CancellationTokenSource;
        pMVar8 = (MethodInfo *)child;
        if (uVar3 < (uint)pUVar4->max_length) {
          *(uint *)&(__this_05->fields).m_CancellationTokenSource = uVar3 + 1;
          __this_05 = (UI_CollapsibleToggleSection_o *)(pUVar4->m_Items + (int)uVar3);
          pUVar4->m_Items[(int)uVar3] = child;
          il2cpp_runtime_helper_022b4080();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_05,(Il2CppObject *)child,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        if (child != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(child,(uint)(byte)(__this->fields)._expanded,(MethodInfo *)0x0);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae257 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae257 = '\x01';
    }
    pSVar10 = (System_Collections_Generic_List_T__o *)0x0;
    pIVar11 = (Il2CppMethodPointer)0x0;
    pUVar12 = (UnityEngine_Object_o *)0x0;
    pbVar2 = &(__this_05->fields)._expanded;
    *(byte *)pbVar2 = (byte)*pbVar2 ^ 1;
    UI_CollapsibleToggleSection__UpdateArrow(__this_05,pMVar8);
    __this_00 = (__this_05->fields)._children;
    if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
      while( true ) {
        do {
          x = pUVar12;
          __this_01.fields._8_8_ = pIVar11;
          __this_01.fields._list = pSVar10;
          __this_01.fields._current = (Il2CppObject *)x;
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa0);
          if ((char)bVar6 == '\0') {
            __this_02.fields._8_8_ = pIVar11;
            __this_02.fields._list = pSVar10;
            __this_02.fields._current = (Il2CppObject *)x;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
            return;
          }
          pUVar12 = x;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        } while ((char)bVar6 == '\0');
        if (x == (UnityEngine_Object_o *)0x0) break;
        UnityEngine_GameObject__SetActive
                  ((UnityEngine_GameObject_o *)x,(uint)(byte)(__this_05->fields)._expanded,(MethodInfo *)0x0);
      }
      il2cpp_runtime_helper_022b2c90();
    }
    auVar9 = il2cpp_runtime_helper_022b2c90();
    if (auVar9._8_4_ == 1) {
      plVar7 = (long *)__cxa_begin_catch(auVar9._0_8_);
      lVar5 = *plVar7;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar11;
      __this_03.fields._list = pSVar10;
      __this_03.fields._current = (Il2CppObject *)pUVar12;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
      if (lVar5 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar5);
    }
    __this_04.fields._8_8_ = pIVar11;
    __this_04.fields._list = pSVar10;
    __this_04.fields._current = (Il2CppObject *)pUVar12;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
    _Unwind_Resume(auVar9._0_8_);
  }
  return;
}


// UI.CollapsibleToggleSection$$ToggleExpand
// il2cpp: void UI_CollapsibleToggleSection__ToggleExpand (UI_CollapsibleToggleSection_o* __this, const MethodInfo* method);
// 0x4389cf0

void UI_CollapsibleToggleSection__ToggleExpand(UI_CollapsibleToggleSection_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  System_Collections_Generic_List_GameObject__o *__this_00;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  long *plVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_List_T__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  UnityEngine_Object_o *pUVar8;
  UnityEngine_Object_o *x;
  
  if (g_data_057ae257 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae257 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  pUVar8 = (UnityEngine_Object_o *)0x0;
  pbVar1 = &(__this->fields)._expanded;
  *(byte *)pbVar1 = (byte)*pbVar1 ^ 1;
  UI_CollapsibleToggleSection__UpdateArrow(__this,method);
  __this_00 = (__this->fields)._children;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    while( true ) {
      do {
        x = pUVar8;
        __this_01.fields._8_8_ = pIVar7;
        __this_01.fields._list = pSVar6;
        __this_01.fields._current = (Il2CppObject *)x;
        bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8);
        if ((char)bVar3 == '\0') {
          __this_02.fields._8_8_ = pIVar7;
          __this_02.fields._list = pSVar6;
          __this_02.fields._current = (Il2CppObject *)x;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
          return;
        }
        pUVar8 = x;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while ((char)bVar3 == '\0');
      if (x == (UnityEngine_Object_o *)0x0) break;
      UnityEngine_GameObject__SetActive
                ((UnityEngine_GameObject_o *)x,(uint)(byte)(__this->fields)._expanded,(MethodInfo *)0x0);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar7;
    __this_03.fields._list = pSVar6;
    __this_03.fields._current = (Il2CppObject *)pUVar8;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar7;
  __this_04.fields._list = pSVar6;
  __this_04.fields._current = (Il2CppObject *)pUVar8;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar5._0_8_);
}


// UI.CollapsibleToggleSection$$SetEnabled
// il2cpp: void UI_CollapsibleToggleSection__SetEnabled (UI_CollapsibleToggleSection_o* __this, bool enabled, const MethodInfo* method);
// 0x4389eb0

void UI_CollapsibleToggleSection__SetEnabled
               (UI_CollapsibleToggleSection_o *__this,bool_conflict enabled,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_UI_Selectable_o *__this_00;
  UnityEngine_UI_Toggle_o *pUVar2;
  
  if (g_data_057ae258 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae258 = '\x01';
  }
  pUVar2 = (__this->fields)._enableToggle;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pUVar2 = (__this->fields)._enableToggle;
    if (pUVar2 != (UnityEngine_UI_Toggle_o *)0x0) {
      UnityEngine_UI_Toggle__set_isOn(pUVar2,enabled & 0xff,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae25a == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
      g_data_057ae25a = '\x01';
    }
    *(undefined1 *)&(pUVar2->fields).m_Navigation.fields.m_SelectOnDown = 1;
    __this_00 = (UnityEngine_UI_Selectable_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
    (pUVar2->fields).m_Navigation.fields.m_SelectOnLeft = __this_00;
    il2cpp_runtime_helper_022b4080(&(pUVar2->fields).m_Navigation.fields.m_SelectOnLeft);
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pUVar2,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.CollapsibleToggleSection$$UpdateArrow
// il2cpp: void UI_CollapsibleToggleSection__UpdateArrow (UI_CollapsibleToggleSection_o* __this, const MethodInfo* method);
// 0x4389b40

void UI_CollapsibleToggleSection__UpdateArrow(UI_CollapsibleToggleSection_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Text_o *pUVar2;
  UnityEngine_UI_Text_c *pUVar3;
  long lVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar6;
  undefined8 *puVar7;
  System_String_o *pSVar8;
  long *plVar9;
  MethodInfo *str1;
  MethodInfo *pMVar10;
  System_String_o *str0;
  System_String_Fields __this_04;
  undefined1 auVar11 [12];
  System_Collections_Generic_List_T__o *pSVar12;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_Object_o *pUVar13;
  UnityEngine_Object_o *x;
  
  if (g_data_057ae259 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"\xe2\x96\xba ");
    il2cpp_runtime_helper_023445d0(&"\xe2\x96\xbc ");
    g_data_057ae259 = '\x01';
  }
  pUVar2 = (__this->fields)._arrowText;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pUVar2 = (__this->fields)._arrowText;
  str1 = (MethodInfo *)(__this->fields)._title;
  if ((char)(__this->fields)._expanded == '\0') {
    puVar7 = &"\xe2\x96\xba ";
  }
  else {
    puVar7 = &"\xe2\x96\xbc ";
  }
  str0 = (System_String_o *)*puVar7;
  pSVar8 = System_String__Concat_3ae5ba0(str0,(System_String_o *)str1,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
    pUVar3 = pUVar2->klass;
    vtableDispatch = (pUVar3->vtable)._75_set_text.methodPtr;
    (*vtableDispatch)(pUVar2,pSVar8,(pUVar3->vtable)._75_set_text.method,pUVar3,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae256 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae256 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar10 = (MethodInfo *)0x0;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)str1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  lVar5 = MethodInfo_Void_Add;
  if ((char)bVar6 == '\0') {
    __this_04 = str0[2].fields;
    if (__this_04 != (System_String_Fields)0x0) {
      *(int *)((long)__this_04 + 0x1c) = *(int *)((long)__this_04 + 0x1c) + 1;
      lVar4 = *(long *)((long)__this_04 + 0x10);
      if (lVar4 != 0) {
        uVar1 = *(uint *)((long)__this_04 + 0x18);
        pMVar10 = str1;
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)((long)__this_04 + 0x18) = uVar1 + 1;
          __this_04 = (System_String_Fields)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
          *(MethodInfo **)(lVar4 + 0x20 + (long)(int)uVar1 * 8) = str1;
          il2cpp_runtime_helper_022b4080();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)str1,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        if (str1 != (MethodInfo *)0x0) {
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)str1,(uint)*(byte *)&str0[2].monitor,(MethodInfo *)0x0);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae257 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae257 = '\x01';
    }
    pSVar12 = (System_Collections_Generic_List_T__o *)0x0;
    vtableDispatch = (Il2CppMethodPointer)0x0;
    pUVar13 = (UnityEngine_Object_o *)0x0;
    *(byte *)((long)__this_04 + 0x38) = *(byte *)((long)__this_04 + 0x38) ^ 1;
    UI_CollapsibleToggleSection__UpdateArrow((UI_CollapsibleToggleSection_o *)__this_04,pMVar10);
    if (*(System_Collections_Generic_List_object__o **)((long)__this_04 + 0x40) !=
        (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffff88,
                 *(System_Collections_Generic_List_object__o **)((long)__this_04 + 0x40),MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
      while( true ) {
        do {
          x = pUVar13;
          __this_00.fields._8_8_ = vtableDispatch;
          __this_00.fields._list = pSVar12;
          __this_00.fields._current = (Il2CppObject *)x;
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff88);
          if ((char)bVar6 == '\0') {
            __this_01.fields._8_8_ = vtableDispatch;
            __this_01.fields._list = pSVar12;
            __this_01.fields._current = (Il2CppObject *)x;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
            return;
          }
          pUVar13 = x;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        } while ((char)bVar6 == '\0');
        if (x == (UnityEngine_Object_o *)0x0) break;
        UnityEngine_GameObject__SetActive
                  ((UnityEngine_GameObject_o *)x,(uint)*(byte *)((long)__this_04 + 0x38),(MethodInfo *)0x0);
      }
      il2cpp_runtime_helper_022b2c90();
    }
    auVar11 = il2cpp_runtime_helper_022b2c90();
    if (auVar11._8_4_ == 1) {
      plVar9 = (long *)__cxa_begin_catch(auVar11._0_8_);
      lVar5 = *plVar9;
      __cxa_end_catch();
      __this_02.fields._8_8_ = vtableDispatch;
      __this_02.fields._list = pSVar12;
      __this_02.fields._current = (Il2CppObject *)pUVar13;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
      if (lVar5 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar5);
    }
    __this_03.fields._8_8_ = vtableDispatch;
    __this_03.fields._list = pSVar12;
    __this_03.fields._current = (Il2CppObject *)pUVar13;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff88);
    _Unwind_Resume(auVar11._0_8_);
  }
  return;
}


// UI.CollapsibleToggleSection$$.ctor
// il2cpp: void UI_CollapsibleToggleSection___ctor (UI_CollapsibleToggleSection_o* __this, const MethodInfo* method);
// 0x4389f30

void UI_CollapsibleToggleSection___ctor(UI_CollapsibleToggleSection_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (g_data_057ae25a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae25a = '\x01';
  }
  *(undefined1 *)&(__this->fields)._expanded = 1;
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._children = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._children);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


