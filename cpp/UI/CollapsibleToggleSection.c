// Type: UI.CollapsibleToggleSection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/CollapsibleToggleSection.cs
// Prior real C# source: none
// --------------------------------

// UI.CollapsibleToggleSection.<>c__DisplayClass9_0$$.ctor
// il2cpp: void UI_CollapsibleToggleSection___c__DisplayClass9_0___ctor (UI_CollapsibleToggleSection___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x5ce81f0

void UI_CollapsibleToggleSection___c__DisplayClass9_0___ctor
               (UI_CollapsibleToggleSection___c__DisplayClass9_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CollapsibleToggleSection.<>c__DisplayClass9_0$$<Setup>b__0
// il2cpp: void UI_CollapsibleToggleSection___c__DisplayClass9_0___Setup_b__0 (UI_CollapsibleToggleSection___c__DisplayClass9_0_o* __this, bool val, const MethodInfo* method);
// 0x5ce8640

void UI_CollapsibleToggleSection___c__DisplayClass9_0___Setup_b__0
               (UI_CollapsibleToggleSection___c__DisplayClass9_0_o *__this,bool val,MethodInfo *method)

{
  System_Action_bool__o *pSVar1;
  code *vtableDispatch;
  
  pSVar1 = (__this->fields).onToggleChanged;
  if (pSVar1 == (System_Action_bool__o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,val,(pSVar1->fields).method,vtableDispatch);
  return;
}


// UI.CollapsibleToggleSection$$get_IsExpanded
// il2cpp: bool UI_CollapsibleToggleSection__get_IsExpanded (UI_CollapsibleToggleSection_o* __this, const MethodInfo* method);
// 0x5ce7f30

bool UI_CollapsibleToggleSection__get_IsExpanded(UI_CollapsibleToggleSection_o *__this,MethodInfo *method)

{
  return (__this->fields)._expanded;
}


// UI.CollapsibleToggleSection$$get_IsEnabled
// il2cpp: bool UI_CollapsibleToggleSection__get_IsEnabled (UI_CollapsibleToggleSection_o* __this, const MethodInfo* method);
// 0x5ce7f40

bool UI_CollapsibleToggleSection__get_IsEnabled(UI_CollapsibleToggleSection_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o *pUVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07547c2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547c2d = '\x01';
  }
  pUVar1 = (__this->fields)._enableToggle;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = false;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._enableToggle;
    if (pUVar1 == (UnityEngine_UI_Toggle_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar3 = (pUVar1->fields).m_IsOn != false;
  }
  return bVar3;
}


// UI.CollapsibleToggleSection$$Setup
// il2cpp: void UI_CollapsibleToggleSection__Setup (UI_CollapsibleToggleSection_o* __this, UnityEngine_UI_Text_o* arrowButtonText, UnityEngine_UI_Button_o* arrowButton, UnityEngine_UI_Toggle_o* enableToggle, System_String_o* title, bool startEnabled, bool startExpanded, System_Action_bool__o* onToggleChanged, const MethodInfo* method);
// 0x5ce7fc0

void UI_CollapsibleToggleSection__Setup
               (UI_CollapsibleToggleSection_o *__this,UnityEngine_UI_Text_o *arrowButtonText,
               UnityEngine_UI_Button_o *arrowButton,UnityEngine_UI_Toggle_o *enableToggle,
               System_String_o *title,bool startEnabled,bool startExpanded,
               System_Action_bool__o *onToggleChanged,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o **targetAddress;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_UI_Toggle_o *x;
  UnityEngine_Events_UnityEvent_bool__o *__this_01;
  bool bVar1;
  UI_CollapsibleToggleSection___c__DisplayClass9_0_o *__this_02;
  UnityEngine_Events_UnityAction_o *__this_03;
  UnityEngine_Events_UnityAction_T0__o *call;
  
  if (Il2CppMethodInitialized_07547c2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CollapsibleToggleSection_ToggleExpand);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CollapsibleToggleSection_c__DisplayClass9_0_Setup_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CollapsibleToggleSection_c__DisplayClass9_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener);
    Il2CppMethodInitialized_07547c2e = '\x01';
  }
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_CollapsibleToggleSection_c__DisplayClass9_0);
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  if (__this_02 == (UI_CollapsibleToggleSection___c__DisplayClass9_0_o *)0x0) goto label_05ce81ea;
  (__this_02->fields).onToggleChanged = onToggleChanged;
  Il2CppCodeGenWriteBarrier(&(__this_02->fields).onToggleChanged);
  (__this->fields)._arrowText = arrowButtonText;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._arrowText);
  targetAddress = &(__this->fields)._enableToggle;
  (__this->fields)._enableToggle = enableToggle;
  Il2CppCodeGenWriteBarrier(targetAddress);
  (__this->fields)._title = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._title);
  (__this->fields)._expanded = startExpanded;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)arrowButton,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (arrowButton == (UnityEngine_UI_Button_o *)0x0) goto label_05ce81ea;
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(arrowButton->fields).m_OnClick;
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (__this_03,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_CollapsibleToggleSection_ToggleExpand,
               (MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_05ce81ea;
    UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_03,(MethodInfo *)0x0);
  }
  x = *targetAddress;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  call = (UnityEngine_Events_UnityAction_T0__o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*targetAddress != (UnityEngine_UI_Toggle_o *)0x0) {
      UnityEngine_UI_Toggle__set_isOn(*targetAddress,startEnabled,(MethodInfo *)0x0);
      if (*targetAddress != (UnityEngine_UI_Toggle_o *)0x0) {
        __this_01 = (UnityEngine_Events_UnityEvent_bool__o *)((*targetAddress)->fields).onValueChanged;
        call = (UnityEngine_Events_UnityAction_T0__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_bool);
        UnityEngine_Events_UnityAction_bool____ctor
                  ((UnityEngine_Events_UnityAction_bool__o *)call,(Il2CppObject *)__this_02,
                   (intptr_t)MethodInfo_UI_CollapsibleToggleSection_c__DisplayClass9_0_Setup_b__0,
                   (MethodInfo_4311710 *)0x0);
        if (__this_01 != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
          UnityEngine_Events_UnityEvent_bool___AddListener
                    (__this_01,call,
                     (MethodInfo_43179D0 *)MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener);
          goto label_05ce81d4;
        }
      }
    }
label_05ce81ea:
    ThrowNullReferenceException();
  }
label_05ce81d4:
  UI_CollapsibleToggleSection__UpdateArrow(__this,(MethodInfo *)call);
  return;
}


// UI.CollapsibleToggleSection$$AddChild
// il2cpp: void UI_CollapsibleToggleSection__AddChild (UI_CollapsibleToggleSection_o* __this, UnityEngine_GameObject_o* child, const MethodInfo* method);
// 0x5ce82c0

void UI_CollapsibleToggleSection__AddChild
               (UI_CollapsibleToggleSection_o *__this,UnityEngine_GameObject_o *child,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_07547c2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547c2f = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)child,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar4 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
  if (bVar5) {
    return;
  }
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


// UI.CollapsibleToggleSection$$ToggleExpand
// il2cpp: void UI_CollapsibleToggleSection__ToggleExpand (UI_CollapsibleToggleSection_o* __this, const MethodInfo* method);
// 0x5ce83a0
// eh: try 0x5ce8464..0x5ce84d2 -> pad 0x5ce84df (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ce84f7..0x5ce84fc -> pad 0x5ce851b cleanup
// eh: try 0x5ce851e..0x5ce8528 -> pad 0x5ce8530 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce84d7: jmp 0x5ce84df
// asm:   0x5ce84d9: jmp 0x5ce84df
// asm:   0x5ce84db: jmp 0x5ce84df
// asm:   0x5ce84dd: jmp 0x5ce84df
// asm:   0x5ce84df: mov rbx, rax
// asm:   0x5ce84e2: cmp edx, 1
// asm:   0x5ce84e5: jne 0x5ce851e
// asm:   0x5ce84e7: mov rdi, rbx
// asm:   0x5ce84ea: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ce84ef: mov rbx, qword ptr [rax]
// asm:   0x5ce84f2: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5ce84f7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ce84fc: lea rax, [rip + 0x15a5875]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5ce8503: mov rsi, qword ptr [rax]
// asm:   0x5ce8506: mov rdi, rsp
// asm:   0x5ce8509: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5ce850e: test rbx, rbx
// asm:   0x5ce8511: je 0x5ce84bf
// asm:   0x5ce8513: mov rdi, rbx
// asm:   0x5ce8516: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ce851b: mov rbx, rax
// asm:   0x5ce851e: lea rdi, [rsp + 0x20]
// asm:   0x5ce8523: call 0x2fdb9c0  ; il2cpp_runtime_helper_02fdb9c0()
// asm:   0x5ce8528: mov rdi, rbx
// asm:   0x5ce852b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ce8530: mov rdi, rax
// asm:   0x5ce8533: call 0x2ab61e0  ; __clang_call_terminate()

void UI_CollapsibleToggleSection__ToggleExpand(UI_CollapsibleToggleSection_o *__this,MethodInfo *method)

{
  bool *pbVar1;
  System_Collections_Generic_List_GameObject__o *__this_00;
  Il2CppObject *x;
  bool bVar2;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_07547c30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547c30 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pbVar1 = &(__this->fields)._expanded;
  *pbVar1 = (bool)(*pbVar1 ^ 1);
  UI_CollapsibleToggleSection__UpdateArrow(__this,method);
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
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      x = local_58.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
        return;
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    } while (!bVar2);
    if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) break;
    UnityEngine_GameObject__SetActive
              ((UnityEngine_GameObject_o *)x,(__this->fields)._expanded,(MethodInfo *)0x0);
  }
  ThrowNullReferenceException();
}


// UI.CollapsibleToggleSection$$SetEnabled
// il2cpp: void UI_CollapsibleToggleSection__SetEnabled (UI_CollapsibleToggleSection_o* __this, bool enabled, const MethodInfo* method);
// 0x5ce8540

void UI_CollapsibleToggleSection__SetEnabled
               (UI_CollapsibleToggleSection_o *__this,bool enabled,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547c31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547c31 = '\x01';
  }
  pUVar1 = (__this->fields)._enableToggle;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._enableToggle;
    if (pUVar1 == (UnityEngine_UI_Toggle_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_UI_Toggle__set_isOn(pUVar1,enabled,(MethodInfo *)0x0);
    return;
  }
  return;
}


// UI.CollapsibleToggleSection$$UpdateArrow
// il2cpp: void UI_CollapsibleToggleSection__UpdateArrow (UI_CollapsibleToggleSection_o* __this, const MethodInfo* method);
// 0x5ce8200

void UI_CollapsibleToggleSection__UpdateArrow(UI_CollapsibleToggleSection_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  bool bVar2;
  System_String_o **ppSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07547c32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x96\xba ");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x96\xbc ");
    Il2CppMethodInitialized_07547c32 = '\x01';
  }
  pUVar1 = (__this->fields)._arrowText;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._arrowText;
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


// UI.CollapsibleToggleSection$$.ctor
// il2cpp: void UI_CollapsibleToggleSection___ctor (UI_CollapsibleToggleSection_o* __this, const MethodInfo* method);
// 0x5ce85c0

void UI_CollapsibleToggleSection___ctor(UI_CollapsibleToggleSection_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_07547c33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_07547c33 = '\x01';
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


