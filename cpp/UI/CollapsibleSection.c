// Type: UI.CollapsibleSection
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CollapsibleSection.cs
// Prior real C# source: none
// --------------------------------

// UI.CollapsibleSection$$get_IsExpanded
// il2cpp: bool UI_CollapsibleSection__get_IsExpanded (UI_CollapsibleSection_o* __this, const MethodInfo* method);
// 0x180acdd00

bool
UI_CollapsibleSection__get_IsExpanded(UI_CollapsibleSection_o* __this, MethodInfo* method)

{
  return (__this->fields)._expanded;
}


// UI.CollapsibleSection$$Setup
// il2cpp: void UI_CollapsibleSection__Setup (UI_CollapsibleSection_o* __this, System_String_o* title, UI_ElementStyle_o* style, bool startExpanded, System_Action_bool__o* onExpandedChanged, const MethodInfo* method);
// 0x182202820

void UI_CollapsibleSection__Setup
               (UI_CollapsibleSection_o *__this,System_String_o *title,UI_ElementStyle_o *style,
               bool startExpanded,System_Action_bool__o *onExpandedChanged,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  bool bVar1;
  UnityEngine_UI_Button_o *x;
  UnityEngine_Events_UnityAction_o *__this_01;
  UnityEngine_UI_Text_o *pUVar2;
  
  if (Il2CppMethodInitialized_1843470bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CollapsibleSection_Toggle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_1843470bb = '\x01';
  }
  (__this->fields)._title = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._title,title);
  (__this->fields)._onExpandedChanged = onExpandedChanged;
  (__this->fields)._expanded = startExpanded;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onExpandedChanged,onExpandedChanged);
  x = UnityEngine_Component__GetComponent_object_
                ((UnityEngine_Component_o *)__this,
                 (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Button);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (UnityEngine_UI_Button_o *)0x0) goto label_18220299f;
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(x->fields).m_OnClick;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_CollapsibleSection_Toggle,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_18220299f;
    UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_01,(MethodInfo *)0x0);
  }
  pUVar2 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
  (__this->fields)._headerText = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._headerText,pUVar2);
  pUVar2 = (__this->fields)._headerText;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((style == (UI_ElementStyle_o *)0x0) ||
       (pUVar2 = (__this->fields)._headerText, pUVar2 == (UnityEngine_UI_Text_o *)0x0)) {
label_18220299f:
      ThrowNullReferenceException();
    }
    UnityEngine_UI_Text__set_fontSize(pUVar2,(style->fields).FontSize,(MethodInfo *)0x0);
  }
  UI_CollapsibleSection__UpdateHeader(__this,(MethodInfo *)0x0);
  return;
}


// UI.CollapsibleSection$$AddChild
// il2cpp: void UI_CollapsibleSection__AddChild (UI_CollapsibleSection_o* __this, UnityEngine_GameObject_o* child, const MethodInfo* method);
// 0x1822025e0

void UI_CollapsibleSection__AddChild
               (UI_CollapsibleSection_o *__this,UnityEngine_GameObject_o *child,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843470bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843470bc = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)child,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pSVar1 = (__this->fields)._children;
  if ((pSVar1 != (System_Collections_Generic_List_GameObject__o *)0x0) &&
     (il2cpp_runtime_helper_180012890(pSVar1,child), child != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(child,(__this->fields)._expanded,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.CollapsibleSection$$Toggle
// il2cpp: void UI_CollapsibleSection__Toggle (UI_CollapsibleSection_o* __this, const MethodInfo* method);
// 0x1822029b0
// eh: try 0x182202a80..0x182202b3e -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182202a7c: nop dword ptr [rax]
// asm:   0x182202ae7: mov rdx, qword ptr [rip + 0x1e7d9fa]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x182202aee: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182202af3: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182202af8: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182202afd: test rcx, rcx
// asm:   0x182202b00: jne 0x182202b3e
// asm:   0x182202b02: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x182202b3e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_CollapsibleSection__Toggle(UI_CollapsibleSection_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Action_bool__o *pSVar1;
  Il2CppObject *x;
  bool bVar2;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_1843470bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843470bd = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  (__this->fields)._expanded = (__this->fields)._expanded == false;
  UI_CollapsibleSection__UpdateHeader(__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._children;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = (Il2CppObject *)local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      do {
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_28,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
        x = local_28.fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                     MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
          pSVar1 = (__this->fields)._onExpandedChanged;
          if (pSVar1 != (System_Action_bool__o *)0x0) {
            (*(code *)(pSVar1->fields).invoke_impl)
                      ((pSVar1->fields).method_code,(__this->fields)._expanded,(pSVar1->fields).method);
          }
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
  ThrowNullReferenceException();
}


// UI.CollapsibleSection$$SetExpanded
// il2cpp: void UI_CollapsibleSection__SetExpanded (UI_CollapsibleSection_o* __this, bool expanded, const MethodInfo* method);
// 0x182202680
// eh: try 0x182202752..0x182202810 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822027b9: mov rdx, qword ptr [rip + 0x1e7dd28]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x1822027c0: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822027c5: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822027ca: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822027cf: test rcx, rcx
// asm:   0x1822027d2: jne 0x182202810
// asm:   0x1822027d4: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x182202810: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_CollapsibleSection__SetExpanded(UI_CollapsibleSection_o *__this,bool expanded,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Action_bool__o *pSVar1;
  Il2CppObject *x;
  bool bVar2;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_1843470be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843470be = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields)._expanded != expanded) {
    (__this->fields)._expanded = expanded;
    UI_CollapsibleSection__UpdateHeader(__this,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._children;
    if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = (Il2CppObject *)local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      x = local_28.fields._current;
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
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
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
// 0x182202b50

void UI_CollapsibleSection__UpdateHeader(UI_CollapsibleSection_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_1843470bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x96\xba ");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x96\xbc ");
    Il2CppMethodInitialized_1843470bf = '\x01';
  }
  pUVar1 = (__this->fields)._headerText;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar3 = "\xe2\x96\xba ";
    if ((__this->fields)._expanded != false) {
      pSVar3 = "\xe2\x96\xbc ";
    }
    pUVar1 = (__this->fields)._headerText;
    pSVar3 = System_String__Concat_1969e50(pSVar3,(__this->fields)._title,(MethodInfo *)0x0);
    if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,pSVar3,(pUVar1->klass->vtable)._75_set_text.method);
  }
  return;
}


// UI.CollapsibleSection$$.ctor
// il2cpp: void UI_CollapsibleSection___ctor (UI_CollapsibleSection_o* __this, const MethodInfo* method);
// 0x182202c10

void UI_CollapsibleSection___ctor(UI_CollapsibleSection_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_1843470c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_1843470c0 = '\x01';
  }
  (__this->fields)._expanded = true;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._children = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._children,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


