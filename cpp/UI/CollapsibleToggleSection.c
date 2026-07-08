// Type: UI.CollapsibleToggleSection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CollapsibleToggleSection.cs
// Prior source: NEW in this update
// --------------------------------

// UI.CollapsibleToggleSection.<>c__DisplayClass9_0$$.ctor
// il2cpp: void UI_CollapsibleToggleSection___c__DisplayClass9_0___ctor (UI_CollapsibleToggleSection___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x407c120

void UI_CollapsibleToggleSection_<>c__DisplayClass9_0___ctor
               (UI_CollapsibleToggleSection___c__DisplayClass9_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CollapsibleToggleSection.<>c__DisplayClass9_0$$<Setup>b__0
// il2cpp: void UI_CollapsibleToggleSection___c__DisplayClass9_0___Setup_b__0 (UI_CollapsibleToggleSection___c__DisplayClass9_0_o* __this, bool val, const MethodInfo* method);
// 0x407c5a0

void UI_CollapsibleToggleSection_<>c__DisplayClass9_0__<Setup>b__0
               (UI_CollapsibleToggleSection___c__DisplayClass9_0_o *__this,bool_conflict val,
               MethodInfo *method)

{
  System_Action_bool__o *pSVar1;
  code *vtable_dispatch;
  
  pSVar1 = (__this->fields).onToggleChanged;
  if (pSVar1 != (System_Action_bool__o *)0x0) {
    vtable_dispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtable_dispatch)
              ((pSVar1->fields).method_code,(char)val,(pSVar1->fields).method,vtable_dispatch)
    ;
    return;
  }
  return;
}


// UI.CollapsibleToggleSection$$get_IsExpanded
// il2cpp: bool UI_CollapsibleToggleSection__get_IsExpanded (UI_CollapsibleToggleSection_o* __this, const MethodInfo* method);
// 0x407be60

bool_conflict
UI_CollapsibleToggleSection__get_IsExpanded
          (UI_CollapsibleToggleSection_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._expanded);
}


// UI.CollapsibleToggleSection$$get_IsEnabled
// il2cpp: bool UI_CollapsibleToggleSection__get_IsEnabled (UI_CollapsibleToggleSection_o* __this, const MethodInfo* method);
// 0x407be70

bool_conflict
UI_CollapsibleToggleSection__get_IsEnabled(UI_CollapsibleToggleSection_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o *pUVar1;
  bool_conflict bVar2;
  uint uVar3;
  
  if (DAT_057044da == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057044da = '\x01';
  }
  pUVar1 = (__this->fields)._enableToggle;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar3 = 0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields)._enableToggle;
    if (pUVar1 == (UnityEngine_UI_Toggle_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar3 = (uint)(*(char *)&(pUVar1->fields).onValueChanged != '\0');
  }
  return uVar3;
}


// UI.CollapsibleToggleSection$$Setup
// il2cpp: void UI_CollapsibleToggleSection__Setup (UI_CollapsibleToggleSection_o* __this, UnityEngine_UI_Text_o* arrowButtonText, UnityEngine_UI_Button_o* arrowButton, UnityEngine_UI_Toggle_o* enableToggle, System_String_o* title, bool startEnabled, bool startExpanded, System_Action_bool__o* onToggleChanged, const MethodInfo* method);
// 0x407bef0

void UI_CollapsibleToggleSection__Setup
               (UI_CollapsibleToggleSection_o *__this,UnityEngine_UI_Text_o *arrowButtonText,
               UnityEngine_UI_Button_o *arrowButton,UnityEngine_UI_Toggle_o *enableToggle,
               System_String_o *title,bool_conflict startEnabled,bool_conflict startExpanded,
               System_Action_bool__o *onToggleChanged,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o **ppUVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_UI_Toggle_o *x;
  UnityEngine_UI_ToggleGroup_o *__this_01;
  bool_conflict bVar2;
  Il2CppObject *__this_02;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_Events_UnityAction_T0__o *call_00;
  
  if (DAT_057044db == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_ToggleExpand);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass9_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_bool);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddListener);
    DAT_057044db = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass9_0);
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_02 == (Il2CppObject *)0x0) goto LAB_0407c115;
  __this_02[1].klass = (Il2CppClass *)onToggleChanged;
  il2cpp_runtime_glue(__this_02 + 1,onToggleChanged);
  (__this->fields)._arrowText = arrowButtonText;
  il2cpp_runtime_glue(&(__this->fields)._arrowText,arrowButtonText);
  ppUVar1 = &(__this->fields)._enableToggle;
  (__this->fields)._enableToggle = enableToggle;
  il2cpp_runtime_glue(ppUVar1,enableToggle);
  (__this->fields)._title = title;
  il2cpp_runtime_glue(&(__this->fields)._title);
  *(undefined1 *)&(__this->fields)._expanded = (undefined1)startExpanded;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)arrowButton,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (arrowButton == (UnityEngine_UI_Button_o *)0x0) goto LAB_0407c115;
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(arrowButton->fields).m_CanvasGroupCache;
    call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) goto LAB_0407c115;
    UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
  }
  x = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  call_00 = (UnityEngine_Events_UnityAction_T0__o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*ppUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
      UnityEngine_UI_Toggle__set_isOn(*ppUVar1,startEnabled & 0xff,(MethodInfo *)0x0);
      if (*ppUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
        __this_01 = ((*ppUVar1)->fields).m_Group;
        call_00 = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_bool);
        UnityEngine_Events_UnityAction<bool>___ctor();
        if (__this_01 != (UnityEngine_UI_ToggleGroup_o *)0x0) {
          UnityEngine_Events_UnityEvent<bool>__AddListener
                    ((UnityEngine_Events_UnityEvent_bool__o *)__this_01,call_00,MethodInfo_Void_AddListener);
          goto LAB_0407c102;
        }
      }
    }
LAB_0407c115:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0407c102:
  UI_CollapsibleToggleSection__UpdateArrow(__this,(MethodInfo *)call_00);
  return;
}


// UI.CollapsibleToggleSection$$AddChild
// il2cpp: void UI_CollapsibleToggleSection__AddChild (UI_CollapsibleToggleSection_o* __this, UnityEngine_GameObject_o* child, const MethodInfo* method);
// 0x407c1f0

void UI_CollapsibleToggleSection__AddChild
               (UI_CollapsibleToggleSection_o *__this,UnityEngine_GameObject_o *child,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  long lVar4;
  bool_conflict bVar5;
  
  if (DAT_057044dc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057044dc = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)child,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  lVar4 = MethodInfo_Void_Add;
  if ((char)bVar5 == '\0') {
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


// UI.CollapsibleToggleSection$$ToggleExpand
// il2cpp: void UI_CollapsibleToggleSection__ToggleExpand (UI_CollapsibleToggleSection_o* __this, const MethodInfo* method);
// 0x407c2e0

void UI_CollapsibleToggleSection__ToggleExpand
               (UI_CollapsibleToggleSection_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar2;
  System_Collections_Generic_List_T__o *pSVar3;
  Il2CppMethodPointer pIVar4;
  UnityEngine_Object_o *pUVar5;
  UnityEngine_Object_o *x;
  
  if (DAT_057044dd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057044dd = '\x01';
  }
  pSVar3 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  pUVar5 = (UnityEngine_Object_o *)0x0;
  pbVar1 = &(__this->fields)._expanded;
  *(byte *)pbVar1 = (byte)*pbVar1 ^ 1;
  UI_CollapsibleToggleSection__UpdateArrow(__this,method);
  __this_00 = (__this->fields)._children;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    while( true ) {
      do {
        x = pUVar5;
        __this_01.fields._8_8_ = pIVar4;
        __this_01.fields._list = pSVar3;
        __this_01.fields._current = (Il2CppObject *)x;
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
        if ((char)bVar2 == '\0') {
          __this_02.fields._8_8_ = pIVar4;
          __this_02.fields._list = pSVar3;
          __this_02.fields._current = (Il2CppObject *)x;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
          return;
        }
        pUVar5 = x;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while ((char)bVar2 == '\0');
      if (x == (UnityEngine_Object_o *)0x0) break;
      UnityEngine_GameObject__SetActive
                ((UnityEngine_GameObject_o *)x,(uint)(byte)(__this->fields)._expanded,
                 (MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CollapsibleToggleSection$$SetEnabled
// il2cpp: void UI_CollapsibleToggleSection__SetEnabled (UI_CollapsibleToggleSection_o* __this, bool enabled, const MethodInfo* method);
// 0x407c4a0

void UI_CollapsibleToggleSection__SetEnabled
               (UI_CollapsibleToggleSection_o *__this,bool_conflict enabled,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_057044de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057044de = '\x01';
  }
  pUVar1 = (__this->fields)._enableToggle;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pUVar1 = (__this->fields)._enableToggle;
    if (pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
      UnityEngine_UI_Toggle__set_isOn(pUVar1,enabled & 0xff,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// UI.CollapsibleToggleSection$$UpdateArrow
// il2cpp: void UI_CollapsibleToggleSection__UpdateArrow (UI_CollapsibleToggleSection_o* __this, const MethodInfo* method);
// 0x407c130

void UI_CollapsibleToggleSection__UpdateArrow
               (UI_CollapsibleToggleSection_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  UnityEngine_UI_Text_c *pUVar2;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar3;
  undefined8 *puVar4;
  System_String_o *pSVar5;
  
  if (DAT_057044df == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"\x25ba ");
    il2cpp_init_method_metadata(&"\x25bc ");
    DAT_057044df = '\x01';
  }
  pUVar1 = (__this->fields)._arrowText;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar1 = (__this->fields)._arrowText;
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


// UI.CollapsibleToggleSection$$.ctor
// il2cpp: void UI_CollapsibleToggleSection___ctor (UI_CollapsibleToggleSection_o* __this, const MethodInfo* method);
// 0x407c520

void UI_CollapsibleToggleSection___ctor(UI_CollapsibleToggleSection_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (DAT_057044e0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    DAT_057044e0 = '\x01';
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


