// Type: UI.CollapsibleSection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CollapsibleSection.cs
// Prior real C# source: none
// --------------------------------

// UI.CollapsibleSection$$get_IsExpanded
// il2cpp: bool UI_CollapsibleSection__get_IsExpanded (UI_CollapsibleSection_o* __this, const MethodInfo* method);
// 0x43891a0

bool_conflict UI_CollapsibleSection__get_IsExpanded(UI_CollapsibleSection_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._expanded);
}


// UI.CollapsibleSection$$Setup
// il2cpp: void UI_CollapsibleSection__Setup (UI_CollapsibleSection_o* __this, System_String_o* title, UI_ElementStyle_o* style, bool startExpanded, System_Action_bool__o* onExpandedChanged, const MethodInfo* method);
// 0x43891b0

void UI_CollapsibleSection__Setup
               (UI_CollapsibleSection_o *__this,System_String_o *title,UI_ElementStyle_o *style,
               bool_conflict startExpanded,System_Action_bool__o *onExpandedChanged,MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  bool_conflict *pbVar2;
  uint value;
  UnityEngine_TextGenerator_o *__this_00;
  UnityEngine_Material_o *pUVar3;
  Il2CppClass *pIVar4;
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_List_GameObject__o *__this_01;
  System_Action_bool__o *pSVar5;
  long lVar6;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar7;
  UnityEngine_UI_Text_o *pUVar8;
  undefined8 *puVar9;
  System_String_o *pSVar10;
  long *plVar11;
  MethodInfo *pMVar12;
  UnityEngine_UI_Text_o *x;
  UI_CollapsibleSection_o *__this_06;
  undefined1 auVar13 [12];
  System_Collections_Generic_List_T__o *pSVar14;
  System_Collections_Generic_List_Enumerator_T__c *pSVar15;
  UnityEngine_Object_o *pUVar16;
  UnityEngine_Object_o *x_00;
  undefined1 auStack_80 [16];
  UnityEngine_Object_o *pUStack_70;
  UnityEngine_Object_o *pUStack_68;
  long *plStack_60;
  
  if (g_data_057ae24e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Toggle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    g_data_057ae24e = '\x01';
  }
  (__this->fields)._title = title;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._title,title);
  *(char *)&(__this->fields)._expanded = (char)startExpanded;
  (__this->fields)._onExpandedChanged = onExpandedChanged;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._onExpandedChanged,onExpandedChanged);
  pUVar8 = (UnityEngine_UI_Text_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Button_GetComponent_Button);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = pUVar8;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
label_043892c0:
    pUVar8 = (UnityEngine_UI_Text_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Text_GetComponent_Text);
    ppUVar1 = &(__this->fields)._headerText;
    (__this->fields)._headerText = pUVar8;
    il2cpp_runtime_helper_022b4080(ppUVar1);
    x = (__this->fields)._headerText;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar12 = (MethodInfo *)0x0;
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
label_04389323:
      UI_CollapsibleSection__UpdateHeader(__this,pMVar12);
      return;
    }
    if (style != (UI_ElementStyle_o *)0x0) {
      pUVar8 = *ppUVar1;
      x = (UnityEngine_UI_Text_o *)0x0;
      if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
        value = (style->fields).FontSize;
        pMVar12 = (MethodInfo *)(ulong)value;
        UnityEngine_UI_Text__set_fontSize(pUVar8,value,(MethodInfo *)0x0);
        goto label_04389323;
      }
    }
  }
  else if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
    __this_00 = (pUVar8->fields).m_TextCacheForLayout;
    pUVar8 = (UnityEngine_UI_Text_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    x = pUVar8;
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UnityEngine_TextGenerator_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener
                ((UnityEngine_Events_UnityEvent_o *)__this_00,(UnityEngine_Events_UnityAction_o *)pUVar8,
                 (MethodInfo *)0x0);
      goto label_043892c0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae252 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"\xe2\x96\xba ");
    il2cpp_runtime_helper_023445d0(&"\xe2\x96\xbc ");
    g_data_057ae252 = '\x01';
  }
  pUVar16 = (UnityEngine_Object_o *)(x->fields).m_Material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  pUVar3 = (x->fields).m_Material;
  pMVar12 = *(MethodInfo **)&(x->fields).m_Color.fields;
  if (*(char *)&(x->fields).m_Color.fields.b == '\0') {
    puVar9 = &"\xe2\x96\xba ";
  }
  else {
    puVar9 = &"\xe2\x96\xbc ";
  }
  __this_06 = (UI_CollapsibleSection_o *)*puVar9;
  pSVar10 = System_String__Concat_3ae5ba0
                      ((System_String_o *)__this_06,(System_String_o *)pMVar12,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Material_o *)0x0) {
    pIVar4 = (Il2CppClass *)pUVar3->klass;
    vtableDispatch = pIVar4->vtable[0x4b].methodPtr;
    (*vtableDispatch)(pUVar3,pSVar10,pIVar4->vtable[0x4b].method,pIVar4,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  plStack_60 = &TypeInfo_Object;
  pUStack_68 = pUVar16;
  if (g_data_057ae250 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae250 = '\x01';
  }
  pSVar14 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pUVar16 = (UnityEngine_Object_o *)0x0;
  pbVar2 = &(__this_06->fields)._expanded;
  *(byte *)pbVar2 = (byte)*pbVar2 ^ 1;
  UI_CollapsibleSection__UpdateHeader(__this_06,pMVar12);
  __this_01 = (__this_06->fields)._children;
  if (__this_01 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_80,
               (System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    pSVar14 = (System_Collections_Generic_List_T__o *)auStack_80._0_8_;
    pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_80._8_8_;
    while (x_00 = pUStack_70, __this_02.fields._8_8_ = pSVar15, __this_02.fields._list = pSVar14,
          __this_02.fields._current = (Il2CppObject *)x_00,
          bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff68), (char)bVar7 != '\0') {
      pUVar16 = x_00;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar7 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pUStack_70 = pUVar16;
      if ((char)bVar7 != '\0') {
        if (x_00 == (UnityEngine_Object_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0438954b;
        }
        UnityEngine_GameObject__SetActive
                  ((UnityEngine_GameObject_o *)x_00,(uint)(byte)(__this_06->fields)._expanded,
                   (MethodInfo *)0x0);
        pUStack_70 = pUVar16;
      }
    }
    __this_03.fields._8_8_ = pSVar15;
    __this_03.fields._list = pSVar14;
    __this_03.fields._current = (Il2CppObject *)x_00;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
label_0438951f:
    pSVar5 = (__this_06->fields)._onExpandedChanged;
    if (pSVar5 != (System_Action_bool__o *)0x0) {
      (*(code *)(pSVar5->fields).invoke_impl)
                ((pSVar5->fields).method_code,(char)(__this_06->fields)._expanded,(pSVar5->fields).method);
    }
    return;
  }
label_0438954b:
  auVar13 = il2cpp_runtime_helper_022b2c90();
  if (auVar13._8_4_ == 1) {
    plVar11 = (long *)__cxa_begin_catch(auVar13._0_8_);
    lVar6 = *plVar11;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pSVar15;
    __this_04.fields._list = pSVar14;
    __this_04.fields._current = (Il2CppObject *)pUVar16;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
    if (lVar6 == 0) goto label_0438951f;
    il2cpp_runtime_helper_022fefe0(lVar6);
  }
  __this_05.fields._8_8_ = pSVar15;
  __this_05.fields._list = pSVar14;
  __this_05.fields._current = (Il2CppObject *)pUVar16;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
  _Unwind_Resume(auVar13._0_8_);
}


// UI.CollapsibleSection$$AddChild
// il2cpp: void UI_CollapsibleSection__AddChild (UI_CollapsibleSection_o* __this, UnityEngine_GameObject_o* child, const MethodInfo* method);
// 0x43796b0

void UI_CollapsibleSection__AddChild
               (UI_CollapsibleSection_o *__this,UnityEngine_GameObject_o *child,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_GameObject_array *pUVar3;
  long lVar4;
  bool_conflict bVar5;
  UI_CreateGameCategoryPanel_o *__this_00;
  
  if (g_data_057ae24f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae24f = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)child,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  lVar4 = MethodInfo_Void_Add;
  if ((char)bVar5 != '\0') {
    __this_00 = (UI_CreateGameCategoryPanel_o *)(__this->fields)._children;
    if (__this_00 != (UI_CreateGameCategoryPanel_o *)0x0) {
      piVar1 = (int32_t *)((long)&(__this_00->fields).m_CancellationTokenSource + 4);
      *piVar1 = *piVar1 + 1;
      pUVar3 = (UnityEngine_GameObject_array *)(__this_00->fields).m_CachedPtr;
      if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
        uVar2 = *(uint *)&(__this_00->fields).m_CancellationTokenSource;
        if (uVar2 < (uint)pUVar3->max_length) {
          *(uint *)&(__this_00->fields).m_CancellationTokenSource = uVar2 + 1;
          __this_00 = (UI_CreateGameCategoryPanel_o *)(pUVar3->m_Items + (int)uVar2);
          pUVar3->m_Items[(int)uVar2] = child;
          il2cpp_runtime_helper_022b4080();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)child,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        if (child != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(child,(uint)(byte)(__this->fields)._expanded,(MethodInfo *)0x0);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    UI_CreateGameCategoryPanel___ctor(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.CollapsibleSection$$Toggle
// il2cpp: void UI_CollapsibleSection__Toggle (UI_CollapsibleSection_o* __this, const MethodInfo* method);
// 0x4389400

void UI_CollapsibleSection__Toggle(UI_CollapsibleSection_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Action_bool__o *pSVar2;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar4;
  long *plVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_T__o *pSVar7;
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  UnityEngine_Object_o *pUVar9;
  UnityEngine_Object_o *x;
  undefined1 auStack_40 [16];
  UnityEngine_Object_o *pUStack_30;
  
  if (g_data_057ae250 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae250 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pUVar9 = (UnityEngine_Object_o *)0x0;
  pbVar1 = &(__this->fields)._expanded;
  *(byte *)pbVar1 = (byte)*pbVar1 ^ 1;
  UI_CollapsibleSection__UpdateHeader(__this,method);
  __this_00 = (__this->fields)._children;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_40,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    pSVar7 = (System_Collections_Generic_List_T__o *)auStack_40._0_8_;
    pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_40._8_8_;
    while (x = pUStack_30, __this_01.fields._8_8_ = pSVar8, __this_01.fields._list = pSVar7,
          __this_01.fields._current = (Il2CppObject *)x,
          bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8), (char)bVar4 != '\0') {
      pUVar9 = x;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pUStack_30 = pUVar9;
      if ((char)bVar4 != '\0') {
        if (x == (UnityEngine_Object_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0438954b;
        }
        UnityEngine_GameObject__SetActive
                  ((UnityEngine_GameObject_o *)x,(uint)(byte)(__this->fields)._expanded,(MethodInfo *)0x0);
        pUStack_30 = pUVar9;
      }
    }
    __this_02.fields._8_8_ = pSVar8;
    __this_02.fields._list = pSVar7;
    __this_02.fields._current = (Il2CppObject *)x;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
label_0438951f:
    pSVar2 = (__this->fields)._onExpandedChanged;
    if (pSVar2 != (System_Action_bool__o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)
                ((pSVar2->fields).method_code,(char)(__this->fields)._expanded,(pSVar2->fields).method);
    }
    return;
  }
label_0438954b:
  auVar6 = il2cpp_runtime_helper_022b2c90();
  if (auVar6._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar3 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pSVar8;
    __this_03.fields._list = pSVar7;
    __this_03.fields._current = (Il2CppObject *)pUVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    if (lVar3 == 0) goto label_0438951f;
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_04.fields._8_8_ = pSVar8;
  __this_04.fields._list = pSVar7;
  __this_04.fields._current = (Il2CppObject *)pUVar9;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
  _Unwind_Resume(auVar6._0_8_);
}


// UI.CollapsibleSection$$SetExpanded
// il2cpp: void UI_CollapsibleSection__SetExpanded (UI_CollapsibleSection_o* __this, bool expanded, const MethodInfo* method);
// 0x43895f0

void UI_CollapsibleSection__SetExpanded
               (UI_CollapsibleSection_o *__this,bool_conflict expanded,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Action_bool__o *pSVar1;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  long *plVar4;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  undefined1 auVar5 [12];
  System_Collections_Generic_List_T__o *pSVar6;
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  UnityEngine_Object_o *pUVar8;
  UnityEngine_Object_o *x;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,expanded);
  if (g_data_057ae251 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae251 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pUVar8 = (UnityEngine_Object_o *)0x0;
  if ((uint)(byte)(__this->fields)._expanded != (expanded & 0xffU)) {
    *(char *)&(__this->fields)._expanded = (char)expanded;
    UI_CollapsibleSection__UpdateHeader(__this,method_00);
    __this_00 = (__this->fields)._children;
    if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
label_0438974b:
      auVar5 = il2cpp_runtime_helper_022b2c90();
      if (auVar5._8_4_ != 1) {
label_043897b3:
        __this_04.fields._8_8_ = pSVar7;
        __this_04.fields._list = pSVar6;
        __this_04.fields._current = (Il2CppObject *)pUVar8;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
        _Unwind_Resume(auVar5._0_8_);
      }
      plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
      lVar2 = *plVar4;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pSVar7;
      __this_03.fields._list = pSVar6;
      __this_03.fields._current = (Il2CppObject *)pUVar8;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      if (lVar2 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar2);
        goto label_043897b3;
      }
    }
    else {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
      pSVar6 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
      pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
      while (x = local_30, __this_01.fields._8_8_ = pSVar7, __this_01.fields._list = pSVar6,
            __this_01.fields._current = (Il2CppObject *)x,
            bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8), (char)bVar3 != '\0')
      {
        pUVar8 = x;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        local_30 = pUVar8;
        if ((char)bVar3 != '\0') {
          if (x == (UnityEngine_Object_o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_0438974b;
          }
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)x,(uint)(byte)(__this->fields)._expanded,(MethodInfo *)0x0);
          local_30 = pUVar8;
        }
      }
      __this_02.fields._8_8_ = pSVar7;
      __this_02.fields._list = pSVar6;
      __this_02.fields._current = (Il2CppObject *)x;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    }
    pSVar1 = (__this->fields)._onExpandedChanged;
    if (pSVar1 != (System_Action_bool__o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)
                ((pSVar1->fields).method_code,(char)(__this->fields)._expanded,(pSVar1->fields).method);
    }
  }
  return;
}


// UI.CollapsibleSection$$UpdateHeader
// il2cpp: void UI_CollapsibleSection__UpdateHeader (UI_CollapsibleSection_o* __this, const MethodInfo* method);
// 0x4389340

void UI_CollapsibleSection__UpdateHeader(UI_CollapsibleSection_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  UnityEngine_UI_Text_o *x;
  UnityEngine_UI_Text_o *pUVar2;
  UnityEngine_UI_Text_c *pUVar3;
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Action_bool__o *pSVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar6;
  undefined8 *puVar7;
  System_String_o *pSVar8;
  long *plVar9;
  MethodInfo *method_00;
  UI_CollapsibleSection_o *__this_05;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_T__o *pSVar11;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  UnityEngine_Object_o *pUVar13;
  UnityEngine_Object_o *x_00;
  undefined1 local_58 [16];
  UnityEngine_Object_o *local_48;
  UnityEngine_UI_Text_o *pUStack_40;
  
  if (g_data_057ae252 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"\xe2\x96\xba ");
    il2cpp_runtime_helper_023445d0(&"\xe2\x96\xbc ");
    g_data_057ae252 = '\x01';
  }
  x = (__this->fields)._headerText;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pUVar2 = (__this->fields)._headerText;
  method_00 = (MethodInfo *)(__this->fields)._title;
  if ((char)(__this->fields)._expanded == '\0') {
    puVar7 = &"\xe2\x96\xba ";
  }
  else {
    puVar7 = &"\xe2\x96\xbc ";
  }
  __this_05 = (UI_CollapsibleSection_o *)*puVar7;
  pSVar8 = System_String__Concat_3ae5ba0
                     ((System_String_o *)__this_05,(System_String_o *)method_00,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
    pUVar3 = pUVar2->klass;
    vtableDispatch = (pUVar3->vtable)._75_set_text.methodPtr;
    (*vtableDispatch)(pUVar2,pSVar8,(pUVar3->vtable)._75_set_text.method,pUVar3,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_40 = x;
  if (g_data_057ae250 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae250 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pUVar13 = (UnityEngine_Object_o *)0x0;
  pbVar1 = &(__this_05->fields)._expanded;
  *(byte *)pbVar1 = (byte)*pbVar1 ^ 1;
  UI_CollapsibleSection__UpdateHeader(__this_05,method_00);
  __this_00 = (__this_05->fields)._children;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    pSVar11 = (System_Collections_Generic_List_T__o *)local_58._0_8_;
    pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_58._8_8_;
    while (x_00 = local_48, __this_01.fields._8_8_ = pSVar12, __this_01.fields._list = pSVar11,
          __this_01.fields._current = (Il2CppObject *)x_00,
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff90), (char)bVar6 != '\0') {
      pUVar13 = x_00;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      local_48 = pUVar13;
      if ((char)bVar6 != '\0') {
        if (x_00 == (UnityEngine_Object_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_0438954b;
        }
        UnityEngine_GameObject__SetActive
                  ((UnityEngine_GameObject_o *)x_00,(uint)(byte)(__this_05->fields)._expanded,
                   (MethodInfo *)0x0);
        local_48 = pUVar13;
      }
    }
    __this_02.fields._8_8_ = pSVar12;
    __this_02.fields._list = pSVar11;
    __this_02.fields._current = (Il2CppObject *)x_00;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
label_0438951f:
    pSVar4 = (__this_05->fields)._onExpandedChanged;
    if (pSVar4 != (System_Action_bool__o *)0x0) {
      (*(code *)(pSVar4->fields).invoke_impl)
                ((pSVar4->fields).method_code,(char)(__this_05->fields)._expanded,(pSVar4->fields).method);
    }
    return;
  }
label_0438954b:
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar5 = *plVar9;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pSVar12;
    __this_03.fields._list = pSVar11;
    __this_03.fields._current = (Il2CppObject *)pUVar13;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
    if (lVar5 == 0) goto label_0438951f;
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_04.fields._8_8_ = pSVar12;
  __this_04.fields._list = pSVar11;
  __this_04.fields._current = (Il2CppObject *)pUVar13;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
  _Unwind_Resume(auVar10._0_8_);
}


// UI.CollapsibleSection$$.ctor
// il2cpp: void UI_CollapsibleSection___ctor (UI_CollapsibleSection_o* __this, const MethodInfo* method);
// 0x43897f0

void UI_CollapsibleSection___ctor(UI_CollapsibleSection_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (g_data_057ae253 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae253 = '\x01';
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


