// Type: UI.CollapsibleSection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CollapsibleSection.cs
// Prior real C# source: none
// --------------------------------

// UI.CollapsibleSection$$get_IsExpanded
// il2cpp: bool UI_CollapsibleSection__get_IsExpanded (UI_CollapsibleSection_o* __this, const MethodInfo* method);
// 0x5ce77e0

bool UI_CollapsibleSection__get_IsExpanded(UI_CollapsibleSection_o *__this,MethodInfo *method)

{
  return (__this->fields)._expanded;
}


// UI.CollapsibleSection$$Setup
// il2cpp: void UI_CollapsibleSection__Setup (UI_CollapsibleSection_o* __this, System_String_o* title, UI_ElementStyle_o* style, bool startExpanded, System_Action_bool__o* onExpandedChanged, const MethodInfo* method);
// 0x5ce77f0

void UI_CollapsibleSection__Setup
               (UI_CollapsibleSection_o *__this,System_String_o *title,UI_ElementStyle_o *style,
               bool startExpanded,System_Action_bool__o *onExpandedChanged,MethodInfo *method)

{
  UnityEngine_UI_Text_o **targetAddress;
  uint value;
  UnityEngine_Events_UnityEvent_o *__this_00;
  bool bVar1;
  UnityEngine_UI_Button_o *x;
  UnityEngine_Events_UnityAction_o *__this_01;
  UnityEngine_UI_Text_o *pUVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547c27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CollapsibleSection_Toggle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_07547c27 = '\x01';
  }
  (__this->fields)._title = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._title);
  (__this->fields)._expanded = startExpanded;
  (__this->fields)._onExpandedChanged = onExpandedChanged;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onExpandedChanged);
  x = UnityEngine_Component__GetComponent_object_
                ((UnityEngine_Component_o *)__this,
                 (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Button);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (UnityEngine_UI_Button_o *)0x0) goto label_05ce7977;
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(x->fields).m_OnClick;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (__this_01,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_CollapsibleSection_Toggle,
               (MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_05ce7977;
    UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_01,(MethodInfo *)0x0);
  }
  pUVar2 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
  targetAddress = &(__this->fields)._headerText;
  (__this->fields)._headerText = pUVar2;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar2 = (__this->fields)._headerText;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((style == (UI_ElementStyle_o *)0x0) ||
       (pUVar2 = *targetAddress, pUVar2 == (UnityEngine_UI_Text_o *)0x0)) {
label_05ce7977:
      ThrowNullReferenceException();
    }
    value = (style->fields).FontSize;
    method_00 = (MethodInfo *)(ulong)value;
    UnityEngine_UI_Text__set_fontSize(pUVar2,value,(MethodInfo *)0x0);
  }
  UI_CollapsibleSection__UpdateHeader(__this,method_00);
  return;
}


// UI.CollapsibleSection$$AddChild
// il2cpp: void UI_CollapsibleSection__AddChild (UI_CollapsibleSection_o* __this, UnityEngine_GameObject_o* child, const MethodInfo* method);
// 0x5ce7a40

void UI_CollapsibleSection__AddChild
               (UI_CollapsibleSection_o *__this,UnityEngine_GameObject_o *child,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_07547c28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547c28 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)child,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar4 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
  if (bVar5) {
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
          Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)child,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        if (child != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(child,(__this->fields)._expanded,(MethodInfo *)0x0);
          return;
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// UI.CollapsibleSection$$Toggle
// il2cpp: void UI_CollapsibleSection__Toggle (UI_CollapsibleSection_o* __this, const MethodInfo* method);
// 0x5ce7b20
// eh: try 0x5ce7be4..0x5ce7c6b -> pad 0x5ce7c78 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ce7c90..0x5ce7c95 -> pad 0x5ce7cb4 cleanup
// eh: try 0x5ce7cb7..0x5ce7cc1 -> pad 0x5ce7cc9 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce7c70: jmp 0x5ce7c78
// asm:   0x5ce7c72: jmp 0x5ce7c78
// asm:   0x5ce7c74: jmp 0x5ce7c78
// asm:   0x5ce7c76: jmp 0x5ce7c78
// asm:   0x5ce7c78: mov rbx, rax
// asm:   0x5ce7c7b: cmp edx, 1
// asm:   0x5ce7c7e: jne 0x5ce7cb7
// asm:   0x5ce7c80: mov rdi, rbx
// asm:   0x5ce7c83: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ce7c88: mov rbx, qword ptr [rax]
// asm:   0x5ce7c8b: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5ce7c90: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ce7c95: lea rax, [rip + 0x15a60dc]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5ce7c9c: mov rsi, qword ptr [rax]
// asm:   0x5ce7c9f: mov rdi, rsp
// asm:   0x5ce7ca2: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5ce7ca7: test rbx, rbx
// asm:   0x5ce7caa: je 0x5ce7c3f
// asm:   0x5ce7cac: mov rdi, rbx
// asm:   0x5ce7caf: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ce7cb4: mov rbx, rax
// asm:   0x5ce7cb7: lea rdi, [rsp + 0x20]
// asm:   0x5ce7cbc: call 0x2fdb960  ; il2cpp_runtime_helper_02fdb960()
// asm:   0x5ce7cc1: mov rdi, rbx
// asm:   0x5ce7cc4: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ce7cc9: mov rdi, rax
// asm:   0x5ce7ccc: call 0x2ab61e0  ; __clang_call_terminate()

void UI_CollapsibleSection__Toggle(UI_CollapsibleSection_o *__this,MethodInfo *method)

{
  bool *pbVar1;
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Action_bool__o *pSVar2;
  Il2CppObject *x;
  bool bVar3;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_07547c29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547c29 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pbVar1 = &(__this->fields)._expanded;
  *pbVar1 = (bool)(*pbVar1 ^ 1);
  UI_CollapsibleSection__UpdateHeader(__this,method);
  __this_00 = (__this->fields)._children;
  if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
  local_38 = 0;
  local_30 = (undefined1 *)&local_58;
  while( true ) {
    do {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      x = local_58.fields._current;
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
        pSVar2 = (__this->fields)._onExpandedChanged;
        if (pSVar2 != (System_Action_bool__o *)0x0) {
          (*(code *)(pSVar2->fields).invoke_impl)
                    ((pSVar2->fields).method_code,(__this->fields)._expanded,(pSVar2->fields).method);
        }
        return;
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    } while (!bVar3);
    if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) break;
    UnityEngine_GameObject__SetActive
              ((UnityEngine_GameObject_o *)x,(__this->fields)._expanded,(MethodInfo *)0x0);
  }
  ThrowNullReferenceException();
}


// UI.CollapsibleSection$$SetExpanded
// il2cpp: void UI_CollapsibleSection__SetExpanded (UI_CollapsibleSection_o* __this, bool expanded, const MethodInfo* method);
// 0x5ce7ce0
// eh: try 0x5ce7db4..0x5ce7e3b -> pad 0x5ce7e48 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ce7e60..0x5ce7e65 -> pad 0x5ce7e84 cleanup
// eh: try 0x5ce7e87..0x5ce7e91 -> pad 0x5ce7e99 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce7e40: jmp 0x5ce7e48
// asm:   0x5ce7e42: jmp 0x5ce7e48
// asm:   0x5ce7e44: jmp 0x5ce7e48
// asm:   0x5ce7e46: jmp 0x5ce7e48
// asm:   0x5ce7e48: mov rbx, rax
// asm:   0x5ce7e4b: cmp edx, 1
// asm:   0x5ce7e4e: jne 0x5ce7e87
// asm:   0x5ce7e50: mov rdi, rbx
// asm:   0x5ce7e53: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ce7e58: mov rbx, qword ptr [rax]
// asm:   0x5ce7e5b: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5ce7e60: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ce7e65: lea rax, [rip + 0x15a5f0c]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5ce7e6c: mov rsi, qword ptr [rax]
// asm:   0x5ce7e6f: mov rdi, rsp
// asm:   0x5ce7e72: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5ce7e77: test rbx, rbx
// asm:   0x5ce7e7a: je 0x5ce7e0f
// asm:   0x5ce7e7c: mov rdi, rbx
// asm:   0x5ce7e7f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ce7e84: mov rbx, rax
// asm:   0x5ce7e87: lea rdi, [rsp + 0x20]
// asm:   0x5ce7e8c: call 0x2fdb990  ; il2cpp_runtime_helper_02fdb990()
// asm:   0x5ce7e91: mov rdi, rbx
// asm:   0x5ce7e94: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ce7e99: mov rdi, rax
// asm:   0x5ce7e9c: call 0x2ab61e0  ; __clang_call_terminate()

void UI_CollapsibleSection__SetExpanded(UI_CollapsibleSection_o *__this,bool expanded,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Action_bool__o *pSVar1;
  Il2CppObject *x;
  bool bVar2;
  undefined7 in_register_00000031;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000031,expanded);
  if (Il2CppMethodInitialized_07547c2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547c2a = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields)._expanded != expanded) {
    (__this->fields)._expanded = expanded;
    UI_CollapsibleSection__UpdateHeader(__this,method_00);
    __this_00 = (__this->fields)._children;
    if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_38 = 0;
    local_30 = (undefined1 *)&local_58;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      x = local_58.fields._current;
      if (!bVar2) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_GameObject__SetActive
                  ((UnityEngine_GameObject_o *)x,(__this->fields)._expanded,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose)
    ;
    pSVar1 = (__this->fields)._onExpandedChanged;
    if (pSVar1 != (System_Action_bool__o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)
                ((pSVar1->fields).method_code,(__this->fields)._expanded,(pSVar1->fields).method);
    }
  }
  return;
}


// UI.CollapsibleSection$$UpdateHeader
// il2cpp: void UI_CollapsibleSection__UpdateHeader (UI_CollapsibleSection_o* __this, const MethodInfo* method);
// 0x5ce7980

void UI_CollapsibleSection__UpdateHeader(UI_CollapsibleSection_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  bool bVar2;
  System_String_o **ppSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07547c2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x96\xba ");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x96\xbc ");
    Il2CppMethodInitialized_07547c2b = '\x01';
  }
  pUVar1 = (__this->fields)._headerText;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._headerText;
    if ((__this->fields)._expanded == false) {
      ppSVar3 = &"\xe2\x96\xba ";
    }
    else {
      ppSVar3 = &"\xe2\x96\xbc ";
    }
    pSVar4 = System_String__Concat_52f0320(*ppSVar3,(__this->fields)._title,(MethodInfo *)0x0);
    if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,pSVar4,(pUVar1->klass->vtable)._75_set_text.method);
    return;
  }
  return;
}


// UI.CollapsibleSection$$.ctor
// il2cpp: void UI_CollapsibleSection___ctor (UI_CollapsibleSection_o* __this, const MethodInfo* method);
// 0x5ce7eb0

void UI_CollapsibleSection___ctor(UI_CollapsibleSection_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_07547c2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_07547c2c = '\x01';
  }
  (__this->fields)._expanded = true;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._children = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._children);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


