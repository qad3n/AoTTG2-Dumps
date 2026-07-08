// Type: UI.CollapsibleSection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CollapsibleSection.cs
// Prior source: NEW in this update
// --------------------------------

// UI.CollapsibleSection$$get_IsExpanded
// il2cpp: bool UI_CollapsibleSection__get_IsExpanded (UI_CollapsibleSection_o* __this, const MethodInfo* method);
// 0x407b790

bool_conflict
UI_CollapsibleSection__get_IsExpanded(UI_CollapsibleSection_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._expanded);
}


// UI.CollapsibleSection$$Setup
// il2cpp: void UI_CollapsibleSection__Setup (UI_CollapsibleSection_o* __this, System_String_o* title, UI_ElementStyle_o* style, bool startExpanded, System_Action_bool__o* onExpandedChanged, const MethodInfo* method);
// 0x407b7a0

void UI_CollapsibleSection__Setup
               (UI_CollapsibleSection_o *__this,System_String_o *title,UI_ElementStyle_o *style,
               bool_conflict startExpanded,System_Action_bool__o *onExpandedChanged,
               MethodInfo *method)

{
  UnityEngine_UI_Text_o **ppUVar1;
  uint value;
  UnityEngine_Events_UnityEvent_o *__this_00;
  bool_conflict bVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_UI_Text_o *pUVar3;
  MethodInfo *method_00;
  
  if (DAT_057044d4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Toggle);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    DAT_057044d4 = '\x01';
  }
  (__this->fields)._title = title;
  il2cpp_runtime_glue(&(__this->fields)._title,title);
  *(char *)&(__this->fields)._expanded = (char)startExpanded;
  (__this->fields)._onExpandedChanged = onExpandedChanged;
  il2cpp_runtime_glue(&(__this->fields)._onExpandedChanged,onExpandedChanged);
  x = (UnityEngine_Object_o *)
      UnityEngine_Component__GetComponent<object>((UnityEngine_Component_o *)__this,MethodInfo_Button_GetComponent_Button);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (x == (UnityEngine_Object_o *)0x0) goto LAB_0407b920;
    __this_00 = (UnityEngine_Events_UnityEvent_o *)x[10].fields.m_CachedPtr;
    call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_0407b920;
    UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
  }
  pUVar3 = (UnityEngine_UI_Text_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_Text_GetComponent_Text);
  ppUVar1 = &(__this->fields)._headerText;
  (__this->fields)._headerText = pUVar3;
  il2cpp_runtime_glue(ppUVar1);
  pUVar3 = (__this->fields)._headerText;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if ((style == (UI_ElementStyle_o *)0x0) ||
       (pUVar3 = *ppUVar1, pUVar3 == (UnityEngine_UI_Text_o *)0x0)) {
LAB_0407b920:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    value = (style->fields).FontSize;
    method_00 = (MethodInfo *)(ulong)value;
    UnityEngine_UI_Text__set_fontSize(pUVar3,value,(MethodInfo *)0x0);
  }
  UI_CollapsibleSection__UpdateHeader(__this,method_00);
  return;
}


// UI.CollapsibleSection$$AddChild
// il2cpp: void UI_CollapsibleSection__AddChild (UI_CollapsibleSection_o* __this, UnityEngine_GameObject_o* child, const MethodInfo* method);
// 0x406bca0

void UI_CollapsibleSection__AddChild
               (UI_CollapsibleSection_o *__this,UnityEngine_GameObject_o *child,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  long lVar4;
  bool_conflict bVar5;
  
  if (DAT_057044d5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057044d5 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)child,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  lVar4 = MethodInfo_Void_Add;
  if ((char)bVar5 != '\0') {
    __this_00 = (__this->fields)._children;
    if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_00->fields)._items;
      if (pUVar3 != (UnityEngine_GameObject_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pUVar3->m_Items[(int)uVar2] = child;
          il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar2,child);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)child,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        if (child != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive
                    (child,(uint)(byte)(__this->fields)._expanded,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// UI.CollapsibleSection$$Toggle
// il2cpp: void UI_CollapsibleSection__Toggle (UI_CollapsibleSection_o* __this, const MethodInfo* method);
// 0x407b9f0

void UI_CollapsibleSection__Toggle(UI_CollapsibleSection_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Action_bool__o *pSVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  System_Collections_Generic_List_Enumerator_T__c *pSVar5;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *pUVar6;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  
  if (DAT_057044d6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057044d6 = '\x01';
  }
  pbVar1 = &(__this->fields)._expanded;
  *(byte *)pbVar1 = (byte)*pbVar1 ^ 1;
  UI_CollapsibleSection__UpdateHeader(__this,method);
  __this_00 = (__this->fields)._children;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    pSVar4 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
    while( true ) {
      do {
        x = local_30;
        __this_01.fields._8_8_ = pSVar5;
        __this_01.fields._list = pSVar4;
        __this_01.fields._current = (Il2CppObject *)x;
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8);
        if ((char)bVar3 == '\0') {
          __this_02.fields._8_8_ = pSVar5;
          __this_02.fields._list = pSVar4;
          __this_02.fields._current = (Il2CppObject *)x;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
          pSVar2 = (__this->fields)._onExpandedChanged;
          if (pSVar2 != (System_Action_bool__o *)0x0) {
            (*(code *)(pSVar2->fields).invoke_impl)
                      ((pSVar2->fields).method_code,(char)(__this->fields)._expanded,
                       (pSVar2->fields).method);
          }
          return;
        }
        pUVar6 = x;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        local_30 = pUVar6;
      } while ((char)bVar3 == '\0');
      if (x == (UnityEngine_Object_o *)0x0) break;
      UnityEngine_GameObject__SetActive
                ((UnityEngine_GameObject_o *)x,(uint)(byte)(__this->fields)._expanded,
                 (MethodInfo *)0x0);
      local_30 = pUVar6;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CollapsibleSection$$SetExpanded
// il2cpp: void UI_CollapsibleSection__SetExpanded (UI_CollapsibleSection_o* __this, bool expanded, const MethodInfo* method);
// 0x407bbe0

void UI_CollapsibleSection__SetExpanded
               (UI_CollapsibleSection_o *__this,bool_conflict expanded,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Action_bool__o *pSVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar2;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  System_Collections_Generic_List_T__o *pSVar3;
  System_Collections_Generic_List_Enumerator_T__c *pSVar4;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *pUVar5;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,expanded);
  if (DAT_057044d7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057044d7 = '\x01';
  }
  if ((uint)(byte)(__this->fields)._expanded != (expanded & 0xffU)) {
    *(char *)&(__this->fields)._expanded = (char)expanded;
    UI_CollapsibleSection__UpdateHeader(__this,method_00);
    __this_00 = (__this->fields)._children;
    if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    pSVar3 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    pSVar4 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
    while( true ) {
      x = local_30;
      __this_01.fields._8_8_ = pSVar4;
      __this_01.fields._list = pSVar3;
      __this_01.fields._current = (Il2CppObject *)x;
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8);
      if ((char)bVar2 == '\0') break;
      pUVar5 = x;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      local_30 = pUVar5;
      if ((char)bVar2 != '\0') {
        if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_GameObject__SetActive
                  ((UnityEngine_GameObject_o *)x,(uint)(byte)(__this->fields)._expanded,
                   (MethodInfo *)0x0);
        local_30 = pUVar5;
      }
    }
    __this_02.fields._8_8_ = pSVar4;
    __this_02.fields._list = pSVar3;
    __this_02.fields._current = (Il2CppObject *)x;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
    pSVar1 = (__this->fields)._onExpandedChanged;
    if (pSVar1 != (System_Action_bool__o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)
                ((pSVar1->fields).method_code,(char)(__this->fields)._expanded,
                 (pSVar1->fields).method);
    }
  }
  return;
}


// UI.CollapsibleSection$$UpdateHeader
// il2cpp: void UI_CollapsibleSection__UpdateHeader (UI_CollapsibleSection_o* __this, const MethodInfo* method);
// 0x407b930

void UI_CollapsibleSection__UpdateHeader(UI_CollapsibleSection_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UnityEngine_UI_Text_c *pUVar2;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar3;
  undefined8 *puVar4;
  System_String_o *pSVar5;
  
  if (DAT_057044d8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"\x25ba ");
    il2cpp_init_method_metadata(&"\x25bc ");
    DAT_057044d8 = '\x01';
  }
  pUVar1 = (__this->fields)._headerText;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar1 = (__this->fields)._headerText;
    if ((char)(__this->fields)._expanded == '\0') {
      puVar4 = &"\x25ba ";
    }
    else {
      puVar4 = &"\x25bc ";
    }
    pSVar5 = System_String__Concat
                       ((System_String_o *)*puVar4,(__this->fields)._title,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar2 = pUVar1->klass;
      vtable_dispatch = (pUVar2->vtable)._75_set_text.methodPtr;
      (*vtable_dispatch)
                (pUVar1,pSVar5,(pUVar2->vtable)._75_set_text.method,pUVar2,vtable_dispatch);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// UI.CollapsibleSection$$.ctor
// il2cpp: void UI_CollapsibleSection___ctor (UI_CollapsibleSection_o* __this, const MethodInfo* method);
// 0x407bde0

void UI_CollapsibleSection___ctor(UI_CollapsibleSection_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (DAT_057044d9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    DAT_057044d9 = '\x01';
  }
  *(undefined1 *)&(__this->fields)._expanded = 1;
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._children = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._children);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


