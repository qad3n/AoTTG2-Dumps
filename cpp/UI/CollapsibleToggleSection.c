// Type: UI.CollapsibleToggleSection
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CollapsibleToggleSection.cs
// Prior real C# source: none
// --------------------------------

// UI.CollapsibleToggleSection.<>c__DisplayClass9_0$$.ctor
// il2cpp: void UI_CollapsibleToggleSection___c__DisplayClass9_0___ctor (UI_CollapsibleToggleSection___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_CollapsibleToggleSection___c__DisplayClass9_0___ctor(UI_CollapsibleToggleSection___c__DisplayClass9_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CollapsibleToggleSection.<>c__DisplayClass9_0$$<Setup>b__0
// il2cpp: void UI_CollapsibleToggleSection___c__DisplayClass9_0___Setup_b__0 (UI_CollapsibleToggleSection___c__DisplayClass9_0_o* __this, bool val, const MethodInfo* method);
// 0x18221b0d0

void
UI_CollapsibleToggleSection___c__DisplayClass9_0___Setup_b__0(UI_CollapsibleToggleSection___c__DisplayClass9_0_o* __this, bool val, MethodInfo* method)

{
  System_Func_bool__GameObject__o *pSVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pSVar1 = (__this->fields).onToggleChanged;
  if (pSVar1 != (System_Func_bool__GameObject__o *)0x0) {
    pUVar2 = (UnityEngine_GameObject_o *)
             (*(code *)(pSVar1->fields).invoke_impl)
                       ((pSVar1->fields).method_code,persistent,(pSVar1->fields).method);
    return pUVar2;
  }
  return (UnityEngine_GameObject_o *)0x0;
}


// UI.CollapsibleToggleSection$$get_IsExpanded
// il2cpp: bool UI_CollapsibleToggleSection__get_IsExpanded (UI_CollapsibleToggleSection_o* __this, const MethodInfo* method);
// 0x180f1d190

bool
UI_CollapsibleToggleSection__get_IsExpanded(UI_CollapsibleToggleSection_o* __this, MethodInfo* method)

{
  return (__this->fields)._expanded;
}


// UI.CollapsibleToggleSection$$get_IsEnabled
// il2cpp: bool UI_CollapsibleToggleSection__get_IsEnabled (UI_CollapsibleToggleSection_o* __this, const MethodInfo* method);
// 0x182203290

bool UI_CollapsibleToggleSection__get_IsEnabled(UI_CollapsibleToggleSection_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843470c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843470c1 = '\x01';
  }
  pUVar1 = (__this->fields)._enableToggle;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  pUVar1 = (__this->fields)._enableToggle;
  if (pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
    return (pUVar1->fields).m_IsOn;
  }
  ThrowNullReferenceException();
}


// UI.CollapsibleToggleSection$$Setup
// il2cpp: void UI_CollapsibleToggleSection__Setup (UI_CollapsibleToggleSection_o* __this, UnityEngine_UI_Text_o* arrowButtonText, UnityEngine_UI_Button_o* arrowButton, UnityEngine_UI_Toggle_o* enableToggle, System_String_o* title, bool startEnabled, bool startExpanded, System_Action_bool__o* onToggleChanged, const MethodInfo* method);
// 0x182202dc0

void UI_CollapsibleToggleSection__Setup
               (UI_CollapsibleToggleSection_o *__this,UnityEngine_UI_Text_o *arrowButtonText,
               UnityEngine_UI_Button_o *arrowButton,UnityEngine_UI_Toggle_o *enableToggle,
               System_String_o *title,bool startEnabled,bool startExpanded,
               System_Action_bool__o *onToggleChanged,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_UI_Toggle_o *pUVar1;
  UnityEngine_Events_UnityEvent_Vector2__o *__this_01;
  bool bVar2;
  UI_CollapsibleToggleSection___c__DisplayClass9_0_o *object;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *__this_03;
  
  if (Il2CppMethodInitialized_1843470c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_CollapsibleToggleSection_ToggleExpand);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_CollapsibleToggleSection_c__DisplayClass9_0_Setup_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CollapsibleToggleSection_c__DisplayClass9_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener);
    Il2CppMethodInitialized_1843470c2 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_CollapsibleToggleSection_c__DisplayClass9_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (UI_CollapsibleToggleSection___c__DisplayClass9_0_o *)0x0) goto label_182202fbf;
  (object->fields).onToggleChanged = onToggleChanged;
  Il2CppCodeGenWriteBarrier(&(object->fields).onToggleChanged,onToggleChanged);
  (__this->fields)._arrowText = arrowButtonText;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._arrowText,arrowButtonText);
  (__this->fields)._enableToggle = enableToggle;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._enableToggle,enableToggle);
  (__this->fields)._title = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._title,title);
  (__this->fields)._expanded = startExpanded;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)arrowButton,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (arrowButton == (UnityEngine_UI_Button_o *)0x0) goto label_182202fbf;
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(arrowButton->fields).m_OnClick;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_CollapsibleToggleSection_ToggleExpand,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_182202fbf;
    UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_02,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields)._enableToggle;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._enableToggle;
    if (pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
      UnityEngine_UI_Toggle__set_isOn(pUVar1,startEnabled,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._enableToggle;
      if (pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
        __this_01 = (UnityEngine_Events_UnityEvent_Vector2__o *)(pUVar1->fields).onValueChanged;
        __this_03 = (UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction_bool);
        UnityEngine_Events_UnityAction_bool____ctor
                  (__this_03,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_CollapsibleToggleSection_c__DisplayClass9_0_Setup_b__0,
                   (MethodInfo *)0x0);
        if (__this_01 != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
          UnityEngine_Events_UnityEvent_Vector2___AddListener
                    (__this_01,(UnityEngine_Events_UnityAction_T0__o *)__this_03,
                     (MethodInfo_EBBB50 *)MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener);
          goto label_182202fab;
        }
      }
    }
label_182202fbf:
    ThrowNullReferenceException();
  }
label_182202fab:
  UI_CollapsibleToggleSection__UpdateArrow(__this,(MethodInfo *)0x0);
  return;
}


// UI.CollapsibleToggleSection$$AddChild
// il2cpp: void UI_CollapsibleToggleSection__AddChild (UI_CollapsibleToggleSection_o* __this, UnityEngine_GameObject_o* child, const MethodInfo* method);
// 0x182202c90

void UI_CollapsibleToggleSection__AddChild
               (UI_CollapsibleToggleSection_o *__this,UnityEngine_GameObject_o *child,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843470c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843470c3 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)child,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
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


// UI.CollapsibleToggleSection$$ToggleExpand
// il2cpp: void UI_CollapsibleToggleSection__ToggleExpand (UI_CollapsibleToggleSection_o* __this, const MethodInfo* method);
// 0x182202fd0
// eh: try 0x1822030a0..0x182203138 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182203107: mov rdx, qword ptr [rip + 0x1e7d3da]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x18220310e: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182203113: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182203118: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18220311d: test rcx, rcx
// asm:   0x182203120: jne 0x182203138
// asm:   0x182203138: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void UI_CollapsibleToggleSection__ToggleExpand(UI_CollapsibleToggleSection_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  Il2CppObject *x;
  bool bVar1;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_1843470c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843470c4 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  (__this->fields)._expanded = (__this->fields)._expanded == false;
  UI_CollapsibleToggleSection__UpdateArrow(__this,(MethodInfo *)0x0);
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
        bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_28,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
        x = local_28.fields._current;
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                     MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
          return;
        }
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while (!bVar1);
      if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) break;
      UnityEngine_GameObject__SetActive
                ((UnityEngine_GameObject_o *)x,(__this->fields)._expanded,(MethodInfo *)0x0);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// UI.CollapsibleToggleSection$$SetEnabled
// il2cpp: void UI_CollapsibleToggleSection__SetEnabled (UI_CollapsibleToggleSection_o* __this, bool enabled, const MethodInfo* method);
// 0x182202d30

void UI_CollapsibleToggleSection__SetEnabled
               (UI_CollapsibleToggleSection_o *__this,bool enabled,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843470c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843470c5 = '\x01';
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
  }
  return;
}


// UI.CollapsibleToggleSection$$UpdateArrow
// il2cpp: void UI_CollapsibleToggleSection__UpdateArrow (UI_CollapsibleToggleSection_o* __this, const MethodInfo* method);
// 0x182203150

void UI_CollapsibleToggleSection__UpdateArrow(UI_CollapsibleToggleSection_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_1843470c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x96\xba ");
    il2cpp_codegen_initialize_runtime_metadata(&"\xe2\x96\xbc ");
    Il2CppMethodInitialized_1843470c6 = '\x01';
  }
  pUVar1 = (__this->fields)._arrowText;
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
    pUVar1 = (__this->fields)._arrowText;
    pSVar3 = System_String__Concat_1969e50(pSVar3,(__this->fields)._title,(MethodInfo *)0x0);
    if (pUVar1 == (UnityEngine_UI_Text_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,pSVar3,(pUVar1->klass->vtable)._75_set_text.method);
  }
  return;
}


// UI.CollapsibleToggleSection$$.ctor
// il2cpp: void UI_CollapsibleToggleSection___ctor (UI_CollapsibleToggleSection_o* __this, const MethodInfo* method);
// 0x182203210

void UI_CollapsibleToggleSection___ctor(UI_CollapsibleToggleSection_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_1843470c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_1843470c7 = '\x01';
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


