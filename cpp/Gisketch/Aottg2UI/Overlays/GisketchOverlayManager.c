// Type: Gisketch.Aottg2UI.Overlays.GisketchOverlayManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Overlays/GisketchOverlayManager.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$get_ContentRoot
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__get_ContentRoot (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, const MethodInfo* method);
// 0x180c8eec0

UnityEngine_GameObject_o*
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__get_ContentRoot(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, MethodInfo* method)

{
  return (__this->fields)._ContentRoot_k__BackingField;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$set_ContentRoot
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__set_ContentRoot (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, UnityEngine_GameObject_o* value, const MethodInfo* method);
// 0x1818be8a0

void
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__set_ContentRoot(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, UnityEngine_GameObject_o* value, MethodInfo* method)

{
  (__this->fields)._ContentRoot_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._ContentRoot_k__BackingField,value);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$get_PreviousSelected
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__get_PreviousSelected (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, const MethodInfo* method);
// 0x180c7fb50

UnityEngine_GameObject_o*
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__get_PreviousSelected(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, MethodInfo* method)

{
  return (__this->fields)._Current_k__BackingField;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$set_PreviousSelected
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__set_PreviousSelected (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, UnityEngine_GameObject_o* value, const MethodInfo* method);
// 0x180f1db10

void
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__set_PreviousSelected(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, UnityEngine_GameObject_o* value, MethodInfo* method)

{
  (__this->fields)._Current_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Current_k__BackingField,value);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance___ctor (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, int32_t kind, System_String_o* id, UnityEngine_GameObject_o* host, Gisketch_Aottg2UI_Building_GisketchView_o* inner, bool guardUnsavedChanges, const MethodInfo* method);
// 0x1818be770

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this,int32_t kind,
               System_String_o *id,UnityEngine_GameObject_o *host,
               Gisketch_Aottg2UI_Building_GisketchView_o *inner,bool guardUnsavedChanges,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchMotionTarget__o *__this_00;
  UnityEngine_GameObject_o *value;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  UnityEngine_RectTransform_o *value_00;
  
  if (Il2CppMethodInitialized_184341fec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchView);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_AddRange);
    Il2CppMethodInitialized_184341fec = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Kind = kind;
  (__this->fields).Id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Id,id);
  (__this->fields).Host = host;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Host,host);
  (__this->fields).GuardUnsavedChanges = guardUnsavedChanges;
  pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchView);
  Gisketch_Aottg2UI_Building_GisketchView___ctor(pGVar1,(MethodInfo *)0x0);
  (__this->fields).View = pGVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).View,pGVar1);
  pGVar1 = (__this->fields).View;
  if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    UnityEngine_Bindings_NativeTypeAttribute__set_IntermediateScriptingStructName
              ((UnityEngine_Accessibility_AccessibilityNodeData_o *)pGVar1,(System_String_o *)host,
               (MethodInfo *)0x0);
    pGVar1 = (__this->fields).View;
    if (((pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) &&
        (inner != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) &&
       (__this_00 = (pGVar1->fields)._MotionTargets_k__BackingField,
       __this_00 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0)) {
      System_Collections_Generic_List_GisketchMotionTarget___AddRange
                (__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)(inner->fields)._MotionTargets_k__BackingField
                 ,(MethodInfo_186DD60 *)
                  MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_AddRange);
      value = (inner->fields)._Root_k__BackingField;
      (__this->fields)._ContentRoot_k__BackingField = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ContentRoot_k__BackingField,value);
      if (host != (UnityEngine_GameObject_o *)0x0) {
        value_00 = UnityEngine_GameObject__GetComponent_object_
                             (host,(MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        (__this->fields).HostRect = value_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).HostRect,value_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$ReplaceContent
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__ReplaceContent (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, Gisketch_Aottg2UI_Building_GisketchView_o* inner, const MethodInfo* method);
// 0x1818be6a0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__ReplaceContent
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this,
               Gisketch_Aottg2UI_Building_GisketchView_o *inner,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar2;
  System_Collections_Generic_List_GisketchMotionTarget__o *pSVar3;
  UnityEngine_GameObject_o *value;
  
  if (Il2CppMethodInitialized_184341fed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_AddRange);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_Clear);
    Il2CppMethodInitialized_184341fed = '\x01';
  }
  pGVar2 = (__this->fields).View;
  if ((pGVar2 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) &&
     (pSVar3 = (pGVar2->fields)._MotionTargets_k__BackingField,
     pSVar3 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0)) {
    length = (pSVar3->fields)._size;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar3->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (inner == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      (__this->fields)._ContentRoot_k__BackingField = (UnityEngine_GameObject_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ContentRoot_k__BackingField,(void *)0x0);
      return;
    }
    pGVar2 = (__this->fields).View;
    if ((pGVar2 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) &&
       (pSVar3 = (pGVar2->fields)._MotionTargets_k__BackingField,
       pSVar3 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0)) {
      System_Collections_Generic_List_GisketchMotionTarget___AddRange
                (pSVar3,(System_Collections_Generic_IEnumerable_T__o *)
                        (inner->fields)._MotionTargets_k__BackingField,
                 (MethodInfo_186DD60 *)
                 MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_AddRange);
      value = (inner->fields)._Root_k__BackingField;
      (__this->fields)._ContentRoot_k__BackingField = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ContentRoot_k__BackingField,value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$SetPreviousSelected
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__SetPreviousSelected (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, UnityEngine_GameObject_o* previousSelected, const MethodInfo* method);
// 0x180f1db10

void
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__SetPreviousSelected(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, UnityEngine_GameObject_o* previousSelected, MethodInfo* method)

{
  (__this->fields)._Current_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Current_k__BackingField,value);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.<>c__DisplayClass54_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass54_0___ctor (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass54_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass54_0___ctor(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass54_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.<>c__DisplayClass54_0$$<CloseInstance>b__0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass54_0___CloseInstance_b__0 (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass54_0_o* __this, const MethodInfo* method);
// 0x1818bfe00

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass54_0___CloseInstance_b__0
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass54_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  
  instance = (__this->fields).instance;
  if ((__this->fields).cache != false) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__HideCachedInstance(instance,(MethodInfo *)0x0);
    return;
  }
  if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DestroyObject
              ((instance->fields).Host,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$BuildOverlayInstance
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__BuildOverlayInstance (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* overlay, UnityEngine_GameObject_o* anchor, int32_t kind, bool forceBelow, bool matchAnchorWidth, float popoverGap, const MethodInfo* method);
// 0x1818a4d60
// eh: try 0x1818a4f24..0x1818a54ca -> pad 0x183328840 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a4ebe: mov r8, qword ptr [rip + 0x2800783]  ; "null"
// asm:   0x1818a5437: xor edx, edx
// asm:   0x1818a5439: lea rcx, [rsp + 0x90]
// asm:   0x1818a5441: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x1818a5446: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1818a544b: test rcx, rcx
// asm:   0x1818a544e: jne 0x1818a54ca
// asm:   0x1818a5450: mov rbx, qword ptr [rsp + 0xe8]
// asm:   0x1818a54ca: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183328840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183328845: push rbp
// asm:   0x183328846: sub rsp, 0x40
// asm:   0x18332884a: mov rbp, rdx
// asm:   0x18332884d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x183328851: mov rcx, qword ptr [rax]
// asm:   0x183328854: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183328858: movabs rax, 0
// asm:   0x183328862: add rsp, 0x40
// asm:   0x183328866: pop rbp
// asm:   0x183328867: ret 

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__BuildOverlayInstance
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
          Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay,UnityEngine_GameObject_o *anchor,
          int32_t kind,bool forceBelow,bool matchAnchorWidth,float popoverGap,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar1;
  System_Collections_Generic_List_GisketchMotionTarget__o *__this_00;
  Il2CppType *handle;
  bool bVar2;
  System_String_o *str0;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar4;
  System_String_o *pSVar5;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_RectTransform_o *pUVar8;
  Gilzoide_FlexUi_FlexLayout_o *__this_01;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar9;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar10;
  Gisketch_Aottg2UI_Actions_GisketchFormState_o *__this_02;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this_03;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar11;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_90;
  System_Enum_o local_68;
  int32_t local_58;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_48;
  
  if (Il2CppMethodInitialized_184341fc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFormState);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFormState);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayKind);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"Overlay.BuildOverlayInstance");
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_184341fc0 = '\x01';
  }
  local_48.fields._area = (System_String_o *)0x0;
  local_48.fields._detail = (System_String_o *)0x0;
  local_48.fields._startMs._0_4_ = 0;
  local_48.fields._startMs._4_2_ = 0;
  local_48.fields._startMs._6_2_ = 0;
  local_48.fields._enabled = false;
  local_48.fields._hotLoop = false;
  local_48.fields._26_6_ = 0;
  local_68.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayKind;
  local_68.monitor = &g_data_ffffffffffffffff;
  local_58 = kind;
  str0 = System_Enum__ToString(&local_68,(MethodInfo *)0x0);
  pSVar5 = "Overlay.BuildOverlayInstance";
  pSVar3 = "null";
  if (overlay != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    pSVar3 = (overlay->fields).id;
  }
  pSVar3 = System_String__Concat_1969b70(str0," ",pSVar3,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar4 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time(&local_90,pSVar5,pSVar3,(MethodInfo *)0x0);
  local_48.fields._area = (pGVar4->fields)._area;
  local_48.fields._detail = (pGVar4->fields)._detail;
  local_48.fields._startMs = (pGVar4->fields)._startMs;
  local_48.fields._enabled = (pGVar4->fields)._enabled;
  local_48.fields._hotLoop = (pGVar4->fields)._hotLoop;
  local_48.fields._26_6_ = *(undefined6 *)&(pGVar4->fields).field_0x1a;
  local_90.fields._area = (System_String_o *)0x0;
  local_90.fields._detail = (System_String_o *)&local_48;
  if (Il2CppMethodInitialized_184341fd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG ");
    il2cpp_codegen_initialize_runtime_metadata(&"Popover");
    il2cpp_codegen_initialize_runtime_metadata(&"Dialog");
    Il2CppMethodInitialized_184341fd7 = '\x01';
  }
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar5 = "Popover";
  if ((overlay->fields).modal != false) {
    pSVar5 = "Dialog";
  }
  bVar2 = System_String__IsNullOrEmpty((overlay->fields).id,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar5 = System_String__Concat_1969e50("AoTTG ",pSVar5,(MethodInfo *)0x0);
  }
  else {
    pSVar5 = System_String__Concat_1969590
                       ("AoTTG ",pSVar5," ",(overlay->fields).id,
                        (MethodInfo *)0x0);
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((obj != (System_Type_o *)0x0) &&
     (pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
     pIVar6 == (Il2CppObject *)0x0)) {
    pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
  }
  if ((int)components->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  components->m_Items[0] = obj;
  Il2CppCodeGenWriteBarrier(components->m_Items,obj);
  pSVar3 = (System_String_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1abe0
            ((UnityEngine_GameObject_o *)pSVar3,pSVar5,components,(MethodInfo *)0x0);
  if (pSVar3 == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pSVar3,(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__SetParent_2f5a7e0(pUVar7,(__this->fields)._layer,false,(MethodInfo *)0x0);
  UnityEngine_GameObject__AddComponent_object_
            ((UnityEngine_GameObject_o *)pSVar3,
             (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                     ((UnityEngine_GameObject_o *)pSVar3,
                      (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(pUVar8,(MethodInfo *)0x0);
  __this_01 = UnityEngine_GameObject__AddComponent_object_
                        ((UnityEngine_GameObject_o *)pSVar3,
                         (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_FlexLayout);
  bVar2 = (overlay->fields).modal;
  if (Il2CppMethodInitialized_184341fd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_184341fd6 = '\x01';
  }
  if (__this_01 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gilzoide_FlexUi_FlexLayout__set_FlexDirection(__this_01,0,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__set_FlexWrap(__this_01,0,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__set_JustifyContent(__this_01,(uint)(bVar2 != false),(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__set_AlignItems(__this_01,(bVar2 != false) + 1,(MethodInfo *)0x0);
  if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
  }
  GVar9 = Gilzoide_FlexUi_Yoga_YGValue__Percent(100.0,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__set_Width(__this_01,GVar9,(MethodInfo *)0x0);
  GVar9 = Gilzoide_FlexUi_Yoga_YGValue__Percent(100.0,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__set_Height(__this_01,GVar9,(MethodInfo *)0x0);
  if ((overlay->fields).modal == false) {
    if ((overlay->fields).dismissOnBackdrop != false) {
      pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pSVar3,(MethodInfo *)0x0);
      local_68.klass = (System_Enum_c *)0x0;
      local_68.monitor = (undefined1 *)0x0;
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AddBackdrop
                (__this,pUVar7,true,(UnityEngine_Color_o *)&local_68,(MethodInfo *)0x0);
    }
  }
  else {
    pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pSVar3,(MethodInfo *)0x0);
    local_68.klass = (System_Enum_c *)0x0;
    local_68.monitor = (undefined1 *)0x3f1eb85200000000;
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AddBackdrop
              (__this,pUVar7,(overlay->fields).dismissOnBackdrop,(UnityEngine_Color_o *)&local_68,
               (MethodInfo *)0x0);
  }
  pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pSVar3,(MethodInfo *)0x0);
  context = (__this->fields)._context;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  pGVar10 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildOverlay
                      (overlay,pUVar7,context,(MethodInfo *)0x0);
  if (pGVar10 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayout
            (overlay,(pGVar10->fields)._Root_k__BackingField,pUVar8,anchor,forceBelow,matchAnchorWidth,
             popoverGap,(MethodInfo *)0x0);
  if (((overlay->fields).guardUnsavedChanges != false) ||
     (bVar2 = Gisketch_Aottg2UI_Data_GisketchOverlayDefinition__UsesCachedResetLifecycle
                        (overlay,(MethodInfo *)0x0), bVar2)) {
    x = (UnityEngine_Object_o *)(pGVar10->fields)._Root_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (pGVar10->fields)._Root_k__BackingField;
      if (pUVar1 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_02 = UnityEngine_GameObject__GetComponent_object_
                            (pUVar1,(MethodInfo_6F5650 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFormState);
      if (__this_02 == (Gisketch_Aottg2UI_Actions_GisketchFormState_o *)0x0) {
        pUVar1 = (pGVar10->fields)._Root_k__BackingField;
        if (pUVar1 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_02 = UnityEngine_GameObject__AddComponent_object_
                              (pUVar1,(MethodInfo_6F4D60 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFormState);
        if (__this_02 == (Gisketch_Aottg2UI_Actions_GisketchFormState_o *)0x0) {
          ThrowNullReferenceException();
        }
      }
      Gisketch_Aottg2UI_Actions_GisketchFormState__CaptureBaseline(__this_02,(MethodInfo *)0x0);
    }
  }
  pSVar5 = (overlay->fields).id;
  bVar2 = (overlay->fields).guardUnsavedChanges;
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance);
  if (Il2CppMethodInitialized_184341fec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchView);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_AddRange);
    Il2CppMethodInitialized_184341fec = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_03,(MethodInfo *)0x0);
  (__this_03->fields).Kind = kind;
  (__this_03->fields).Id = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this_03->fields).Id,pSVar5);
  (__this_03->fields).Host = (UnityEngine_GameObject_o *)pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this_03->fields).Host,pSVar3);
  (__this_03->fields).GuardUnsavedChanges = bVar2;
  pGVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchView);
  Gisketch_Aottg2UI_Building_GisketchView___ctor(pGVar11,(MethodInfo *)0x0);
  (__this_03->fields).View = pGVar11;
  Il2CppCodeGenWriteBarrier(&(__this_03->fields).View,pGVar11);
  pGVar11 = (__this_03->fields).View;
  if (pGVar11 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Bindings_NativeTypeAttribute__set_IntermediateScriptingStructName
            ((UnityEngine_Accessibility_AccessibilityNodeData_o *)pGVar11,pSVar3,(MethodInfo *)0x0);
  pGVar11 = (__this_03->fields).View;
  if (pGVar11 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_00 = (pGVar11->fields)._MotionTargets_k__BackingField;
  if (__this_00 == (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_GisketchMotionTarget___AddRange
            (__this_00,
             (System_Collections_Generic_IEnumerable_T__o *)(pGVar10->fields)._MotionTargets_k__BackingField,
             (MethodInfo_186DD60 *)MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_AddRange);
  pUVar1 = (pGVar10->fields)._Root_k__BackingField;
  (__this_03->fields)._ContentRoot_k__BackingField = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this_03->fields)._ContentRoot_k__BackingField,pUVar1);
  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                     ((UnityEngine_GameObject_o *)pSVar3,
                      (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  (__this_03->fields).HostRect = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this_03->fields).HostRect,pUVar8);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_48,(MethodInfo *)0x0);
  return __this_03;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$OpenInstance
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OpenInstance (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, UnityEngine_GameObject_o* anchor, bool focusOnOpen, bool forceBelow, bool matchAnchorWidth, float popoverGap, bool animate, const MethodInfo* method);
// 0x1818a73b0
// eh: try 0x1818a748a..0x1818a7630 -> pad 0x183328840 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a7439: mov rsi, qword ptr [rip + 0x27fe208]  ; "null"
// asm:   0x1818a74ff: mov rax, rsi
// asm:   0x1818a75d1: nop 
// asm:   0x1818a75ee: xor edx, edx
// asm:   0x1818a75f0: lea rcx, [rsp + 0x68]
// asm:   0x1818a75f5: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x1818a75fa: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1818a75ff: test rcx, rcx
// asm:   0x1818a7602: jne 0x1818a7630
// asm:   0x1818a7630: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183328840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183328845: push rbp
// asm:   0x183328846: sub rsp, 0x40
// asm:   0x18332884a: mov rbp, rdx
// asm:   0x18332884d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x183328851: mov rcx, qword ptr [rax]
// asm:   0x183328854: mov qword ptr [rbp + 0x48], rcx
// asm:   0x183328858: movabs rax, 0
// asm:   0x183328862: add rsp, 0x40
// asm:   0x183328866: pop rbp
// asm:   0x183328867: ret 

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OpenInstance
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               UnityEngine_GameObject_o *anchor,bool focusOnOpen,bool forceBelow,bool matchAnchorWidth,
               float popoverGap,bool animate,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_01;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_array *pGVar3;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  MethodInfo *pMVar4;
  System_String_o *area;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar5;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_GameObject_o *value;
  System_String_o *detail;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_80;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_60;
  
  if (Il2CppMethodInitialized_184341fc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&"Overlay.OpenInstance");
    Il2CppMethodInitialized_184341fc1 = '\x01';
  }
  area = "Overlay.OpenInstance";
  local_60.fields._area = (System_String_o *)0x0;
  local_60.fields._detail = (System_String_o *)0x0;
  local_60.fields._startMs._0_4_ = 0;
  local_60.fields._startMs._4_2_ = 0;
  local_60.fields._startMs._6_2_ = 0;
  local_60.fields._enabled = false;
  local_60.fields._hotLoop = false;
  local_60.fields._26_6_ = 0;
  detail = "null";
  if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    detail = (instance->fields).Id;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar5 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time(&local_80,area,detail,(MethodInfo *)0x0);
  local_60.fields._area = (pGVar5->fields)._area;
  local_60.fields._detail = (pGVar5->fields)._detail;
  local_60.fields._startMs = (pGVar5->fields)._startMs;
  local_60.fields._enabled = (pGVar5->fields)._enabled;
  local_60.fields._hotLoop = (pGVar5->fields)._hotLoop;
  local_60.fields._26_6_ = *(undefined6 *)&(pGVar5->fields).field_0x1a;
  value = (UnityEngine_GameObject_o *)0x0;
  local_80.fields._area = (System_String_o *)0x0;
  local_80.fields._detail = (System_String_o *)&local_60;
  if (instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_60,(MethodInfo *)0x0);
  }
  else {
    __this_00 = (instance->fields).Host;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_02 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Transform__SetAsLastSibling(__this_02,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayoutForShow
              (__this,instance,anchor,forceBelow,matchAnchorWidth,popoverGap,(MethodInfo *)0x0);
    if (focusOnOpen) {
      value = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected((MethodInfo *)0x0);
    }
    (instance->fields)._PreviousSelected_k__BackingField = value;
    Il2CppCodeGenWriteBarrier(&(instance->fields)._PreviousSelected_k__BackingField,value);
    pMVar4 = MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_Add;
    __this_01 = (__this->fields)._stack;
    if (__this_01 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
      ThrowNullReferenceException();
    }
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar3 = (__this_01->fields)._items;
    if (pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_array *)0x0) {
      ThrowNullReferenceException();
    }
    uVar2 = (__this_01->fields)._size;
    if (uVar2 < (uint)pGVar3->max_length) {
      (__this_01->fields)._size = uVar2 + 1;
      if ((uint)pGVar3->max_length <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      pGVar3->m_Items[(int)uVar2] = instance;
      Il2CppCodeGenWriteBarrier(pGVar3->m_Items + (int)uVar2,instance);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)instance,
                 (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
    }
    if ((instance->fields).Kind == 1) {
      (__this->fields)._activePopover = instance;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._activePopover,instance);
    }
    if (animate) {
      view = (instance->fields).View;
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      }
      Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewEnter(view,(MethodInfo *)0x0);
    }
    if (focusOnOpen) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(instance,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_60,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PrepareLayoutForShow
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayoutForShow (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, UnityEngine_GameObject_o* anchor, bool forceBelow, bool matchAnchorWidth, float popoverGap, const MethodInfo* method);
// 0x1818a7d70
// eh: try 0x1818a7e39..0x1818a7f4b -> pad 0x183315a20 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a7de8: mov rdi, qword ptr [rip + 0x27fd859]  ; "null"
// asm:   0x1818a7f20: xor edx, edx
// asm:   0x1818a7f22: lea rcx, [rsp + 0x58]
// asm:   0x1818a7f27: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x1818a7f2c: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1818a7f31: test rcx, rcx
// asm:   0x1818a7f34: jne 0x1818a7f4b
// asm:   0x1818a7f4b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayoutForShow
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               UnityEngine_GameObject_o *anchor,bool forceBelow,bool matchAnchorWidth,float popoverGap,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  System_String_o *area;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar2;
  System_String_o *detail;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_70;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_50;
  
  if (Il2CppMethodInitialized_184341fc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&"Overlay.PrepareLayoutForShow");
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_184341fc2 = '\x01';
  }
  area = "Overlay.PrepareLayoutForShow";
  local_50.fields._area = (System_String_o *)0x0;
  local_50.fields._detail = (System_String_o *)0x0;
  local_50.fields._startMs._0_4_ = 0;
  local_50.fields._startMs._4_2_ = 0;
  local_50.fields._startMs._6_2_ = 0;
  local_50.fields._enabled = false;
  local_50.fields._hotLoop = false;
  local_50.fields._26_6_ = 0;
  detail = "null";
  if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    detail = (instance->fields).Id;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar2 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time(&local_70,area,detail,(MethodInfo *)0x0);
  local_50.fields._area = (pGVar2->fields)._area;
  local_50.fields._detail = (pGVar2->fields)._detail;
  local_50.fields._startMs = (pGVar2->fields)._startMs;
  local_50.fields._enabled = (pGVar2->fields)._enabled;
  local_50.fields._hotLoop = (pGVar2->fields)._hotLoop;
  local_50.fields._26_6_ = *(undefined6 *)&(pGVar2->fields).field_0x1a;
  local_70.fields._area = (System_String_o *)0x0;
  local_70.fields._detail = (System_String_o *)&local_50;
  if (instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((instance->fields).Kind == 1) {
    if (matchAnchorWidth) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__MatchPopoverWidth
                ((instance->fields)._ContentRoot_k__BackingField,(instance->fields).HostRect,anchor,
                 (MethodInfo *)0x0);
    }
    pUVar1 = (instance->fields).Host;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(pUVar1,2,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover
              ((instance->fields)._ContentRoot_k__BackingField,(instance->fields).HostRect,anchor,forceBelow,
               popoverGap,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0
              ((instance->fields).Host,1,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_50,(MethodInfo *)0x0);
  }
  else {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ApplyDialogMaxHeight
              ((instance->fields).HostRect,(instance->fields)._ContentRoot_k__BackingField,(MethodInfo *)0x0);
    pUVar1 = (instance->fields).Host;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(pUVar1,1,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_50,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PrepareLayout
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayout (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* overlay, UnityEngine_GameObject_o* root, UnityEngine_RectTransform_o* hostRect, UnityEngine_GameObject_o* anchor, bool forceBelow, bool matchAnchorWidth, float popoverGap, const MethodInfo* method);
// 0x1818a7f60
// eh: try 0x1818a802e..0x1818a8151 -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a7fdc: mov r14, qword ptr [rip + 0x27fd665]  ; "null"
// asm:   0x1818a811e: xor edx, edx
// asm:   0x1818a8120: lea rcx, [rsp + 0x58]
// asm:   0x1818a8125: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x1818a812a: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1818a812f: test rcx, rcx
// asm:   0x1818a8132: jne 0x1818a8151
// asm:   0x1818a8151: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayout
               (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay,UnityEngine_GameObject_o *root,
               UnityEngine_RectTransform_o *hostRect,UnityEngine_GameObject_o *anchor,bool forceBelow,
               bool matchAnchorWidth,float popoverGap,MethodInfo *method)

{
  System_String_o *area;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool bVar3;
  System_String_o *detail;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_80;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_60;
  
  if (Il2CppMethodInitialized_184341fc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&"Overlay.PrepareLayout");
    Il2CppMethodInitialized_184341fc3 = '\x01';
  }
  area = "Overlay.PrepareLayout";
  local_60.fields._area = (System_String_o *)0x0;
  local_60.fields._detail = (System_String_o *)0x0;
  local_60.fields._startMs._0_4_ = 0;
  local_60.fields._startMs._4_2_ = 0;
  local_60.fields._startMs._6_2_ = 0;
  local_60.fields._enabled = false;
  local_60.fields._hotLoop = false;
  local_60.fields._26_6_ = 0;
  detail = "null";
  if (overlay != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    detail = (overlay->fields).id;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar1 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time(&local_80,area,detail,(MethodInfo *)0x0);
  local_60.fields._area = (pGVar1->fields)._area;
  local_60.fields._detail = (pGVar1->fields)._detail;
  local_60.fields._startMs = (pGVar1->fields)._startMs;
  local_60.fields._enabled = (pGVar1->fields)._enabled;
  local_60.fields._hotLoop = (pGVar1->fields)._hotLoop;
  local_60.fields._26_6_ = *(undefined6 *)&(pGVar1->fields).field_0x1a;
  local_80.fields._area = (System_String_o *)0x0;
  local_80.fields._detail = (System_String_o *)&local_60;
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((overlay->fields).modal != false) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ApplyDialogMaxHeight(hostRect,root,(MethodInfo *)0x0);
  }
  bVar3 = false;
  if ((overlay->fields).modal == false) {
    bVar3 = matchAnchorWidth;
  }
  if (bVar3 != false) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__MatchPopoverWidth
              (root,hostRect,anchor,(MethodInfo *)0x0);
  }
  if (hostRect == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hostRect,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(pUVar2,2,(MethodInfo *)0x0);
  if ((overlay->fields).modal == false) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover
              (root,hostRect,anchor,forceBelow,popoverGap,(MethodInfo *)0x0);
  }
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hostRect,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(pUVar2,1,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_60,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowDynamicPopover
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* root, UnityEngine_GameObject_o* anchor, bool focusOnOpen, bool matchAnchorWidth, float gap, bool animate, int32_t lifecycle, const MethodInfo* method);
// 0x1818a8f50

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *root,UnityEngine_GameObject_o *anchor,
          bool focusOnOpen,bool matchAnchorWidth,float gap,bool animate,int32_t lifecycle,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar1;
  
  if (Il2CppMethodInitialized_184341fc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition);
    Il2CppMethodInitialized_184341fc4 = '\x01';
  }
  if (root != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if ((__this->fields)._activePopover !=
        (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
                (__this,(__this->fields)._activePopover,false,false,(MethodInfo *)0x0);
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition);
    Gisketch_Aottg2UI_Data_GisketchOverlayDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this_00->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,id);
    (__this_00->fields).modal = false;
    (__this_00->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).root,root);
    (__this_00->fields).lifecycle = lifecycle;
    pGVar1 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay
                       (__this,__this_00,anchor,1,focusOnOpen,false,matchAnchorWidth,gap,animate,
                        (MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
      return (pGVar1->fields)._ContentRoot_k__BackingField;
    }
  }
  return (UnityEngine_GameObject_o *)0x0;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowDynamicDialog
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicDialog (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* root, bool focusOnOpen, bool dismissOnBackdrop, bool animate, int32_t lifecycle, const MethodInfo* method);
// 0x1818a8e20

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicDialog
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *root,bool focusOnOpen,bool dismissOnBackdrop,
          bool animate,int32_t lifecycle,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184341fc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition);
    Il2CppMethodInitialized_184341fc5 = '\x01';
  }
  if (root != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog(__this,id,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
                (__this,pGVar1,false,false,(MethodInfo *)0x0);
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition);
    Gisketch_Aottg2UI_Data_GisketchOverlayDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this_00->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,id);
    (__this_00->fields).dismissOnBackdrop = dismissOnBackdrop;
    (__this_00->fields).modal = true;
    (__this_00->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).root,root);
    (__this_00->fields).lifecycle = lifecycle;
    pGVar1 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay
                       (__this,__this_00,(UnityEngine_GameObject_o *)0x0,0,focusOnOpen,false,false,0.0,animate
                        ,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
      return (pGVar1->fields)._ContentRoot_k__BackingField;
    }
  }
  return (UnityEngine_GameObject_o *)0x0;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ClosePopover
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ClosePopover (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, bool animate, const MethodInfo* method);
// 0x1818a5dd0

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ClosePopover
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,bool animate,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar1;
  bool bVar2;
  
  if ((__this->fields)._activePopover ==
      (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    return false;
  }
  bVar2 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (!bVar2) {
    pGVar1 = (__this->fields)._activePopover;
    if (pGVar1 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = System_String__op_Inequality((pGVar1->fields).Id,id,(MethodInfo *)0x0);
    if (bVar2) {
      return false;
    }
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
            (__this,(__this->fields)._activePopover,false,animate,(MethodInfo *)0x0);
  return true;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$RefreshDialogContent
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__RefreshDialogContent (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, bool focusOnRefresh, const MethodInfo* method);
// 0x1818a8160

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__RefreshDialogContent
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
               bool focusOnRefresh,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  UnityEngine_GameObject_o *pUVar2;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar3;
  System_Collections_Generic_List_GisketchMotionTarget__o *pSVar4;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay;
  UnityEngine_Transform_o *parent;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar5;
  
  if (Il2CppMethodInitialized_184341fc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_184341fc6 = '\x01';
  }
  instance = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog(__this,id,(MethodInfo *)0x0);
  if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    overlay = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ResolveDialog(__this,id,(MethodInfo *)0x0);
    if (overlay != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DestroyObject
                ((instance->fields)._ContentRoot_k__BackingField,(MethodInfo *)0x0);
      pUVar2 = (instance->fields).Host;
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        parent = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
        context = (__this->fields)._context;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        pGVar5 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildOverlay
                           (overlay,parent,context,(MethodInfo *)0x0);
        if (pGVar5 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayout
                    (overlay,(pGVar5->fields)._Root_k__BackingField,(instance->fields).HostRect,
                     (UnityEngine_GameObject_o *)0x0,false,false,0.0,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_184341fed == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_AddRange);
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_Clear);
            Il2CppMethodInitialized_184341fed = '\x01';
          }
          pGVar3 = (instance->fields).View;
          if ((pGVar3 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) &&
             (pSVar4 = (pGVar3->fields)._MotionTargets_k__BackingField,
             pSVar4 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0)) {
            length = (pSVar4->fields)._size;
            piVar1 = &(pSVar4->fields)._version;
            *piVar1 = *piVar1 + 1;
            (pSVar4->fields)._size = 0;
            if (0 < length) {
              System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
            }
            pGVar3 = (instance->fields).View;
            if ((pGVar3 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) &&
               (pSVar4 = (pGVar3->fields)._MotionTargets_k__BackingField,
               pSVar4 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0)) {
              System_Collections_Generic_List_GisketchMotionTarget___AddRange
                        (pSVar4,(System_Collections_Generic_IEnumerable_T__o *)
                                (pGVar5->fields)._MotionTargets_k__BackingField,
                         (MethodInfo_186DD60 *)
                         MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_AddRange);
              pUVar2 = (pGVar5->fields)._Root_k__BackingField;
              (instance->fields)._ContentRoot_k__BackingField = pUVar2;
              Il2CppCodeGenWriteBarrier(&(instance->fields)._ContentRoot_k__BackingField,pUVar2);
              Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0
                        ((instance->fields).Host,1,(MethodInfo *)0x0);
              if (focusOnRefresh) {
                Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus
                          (instance,(MethodInfo *)0x0);
              }
              return true;
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CycleFocus
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CycleFocus (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, bool backwards, const MethodInfo* method);
// 0x1818a62a0

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CycleFocus
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,bool backwards,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  bool bVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_184341fdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
    Il2CppMethodInitialized_184341fdc = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    if (0 < (__this_00->fields)._size) {
      pIVar2 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (__this_00->fields)._size + -1,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                         );
      if (pIVar2 != (Il2CppObject *)0x0) {
        bVar1 = Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle
                          (pIVar2[3].monitor,backwards,(MethodInfo *)0x0);
        return bVar1;
      }
    }
    return false;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$SelectInitialFocus
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, const MethodInfo* method);
// 0x1818a85b0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               MethodInfo *method)

{
  bool bVar1;
  char cVar2;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar3;
  TMPro_TMP_InputField_o *__this;
  UnityEngine_Object_o *pUVar4;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *selectable;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184341fc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fc7 = '\x01';
  }
  if ((instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) &&
     ((instance->fields).Kind == 0)) {
    pUVar4 = (UnityEngine_Object_o *)(instance->fields)._ContentRoot_k__BackingField;
    if (Il2CppMethodInitialized_184341fc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_TMP_InputField);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184341fc8 = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (pUVar4 == (UnityEngine_Object_o *)0x0) goto label_1818a886d;
      pUVar3 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                         ((UnityEngine_GameObject_o *)pUVar4,false,
                          (MethodInfo_6F5750 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_TMP_InputField);
      if (pUVar3 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0) goto label_1818a886d;
      for (uVar5 = 0; (int)uVar5 < (int)pUVar3->max_length; uVar5 = uVar5 + 1) {
        if ((uint)pUVar3->max_length <= uVar5) goto label_1818a8873;
        __this = (TMPro_TMP_InputField_o *)(&pUVar3->m_Items[0].klass)[(int)uVar5];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          if (__this == (TMPro_TMP_InputField_o *)0x0) goto label_1818a886d;
          cVar2 = (*(code *)((Il2CppClass_1 *)&__this->klass)->image[1]._1.declaringType)(__this);
          if (cVar2 != '\0') {
            cVar2 = (*(code *)((Il2CppClass_1 *)&__this->klass)->image[1].vtable._0_Equals.method)(__this);
            if (cVar2 != '\0') goto label_1818a86f2;
          }
        }
      }
    }
  }
  __this = (TMPro_TMP_InputField_o *)0x0;
label_1818a86f2:
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected
              ((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
    if (__this == (TMPro_TMP_InputField_o *)0x0) goto label_1818a886d;
    (*(__this->klass->vtable)._38_Select.methodPtr)(__this,(__this->klass->vtable)._38_Select.method);
    TMPro_TMP_InputField__ActivateInputField(__this,(MethodInfo *)0x0);
  }
  else {
    if (instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
      pUVar4 = (UnityEngine_Object_o *)0x0;
    }
    else {
      pUVar4 = (UnityEngine_Object_o *)(instance->fields)._ContentRoot_k__BackingField;
    }
    if (Il2CppMethodInitialized_184341fe6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Selectable);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184341fe6 = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (pUVar4 == (UnityEngine_Object_o *)0x0) {
label_1818a886d:
        ThrowNullReferenceException();
      }
      pUVar3 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                         ((UnityEngine_GameObject_o *)pUVar4,false,
                          (MethodInfo_6F5750 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Selectable);
      if (pUVar3 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0) goto label_1818a886d;
      for (uVar5 = 0; (int)uVar5 < (int)pUVar3->max_length; uVar5 = uVar5 + 1) {
        if ((uint)pUVar3->max_length <= uVar5) {
label_1818a8873:
          ThrowIndexOutOfRangeException();
        }
        selectable = (&pUVar3->m_Items[0].klass)[(int)uVar5];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)selectable,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          if (selectable == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0) goto label_1818a886d;
          cVar2 = (*(code *)(selectable->_1).image[1]._1.declaringType)(selectable);
          if (cVar2 != '\0') {
            cVar2 = (*(code *)(selectable->_1).image[1].vtable._0_Equals.method)(selectable);
            if (cVar2 != '\0') goto label_1818a8820;
          }
        }
      }
    }
    selectable = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0;
label_1818a8820:
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected
              ((UnityEngine_UI_Selectable_o *)selectable,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FirstInput
// il2cpp: TMPro_TMP_InputField_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstInput (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818a6680
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a670f: nop 

TMPro_TMP_InputField_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstInput
          (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  TMPro_TMP_InputField_o *x;
  bool bVar1;
  char cVar2;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184341fc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fc8 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (TMPro_TMP_InputField_o *)0x0;
  }
  if ((root != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar3 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                         (root,false,
                          (MethodInfo_6F5750 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_TMP_InputField),
     pUVar3 != (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0)) {
    uVar4 = 0;
    do {
      if ((int)pUVar3->max_length <= (int)uVar4) {
        return (TMPro_TMP_InputField_o *)0x0;
      }
      if ((uint)pUVar3->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      x = (TMPro_TMP_InputField_o *)(&pUVar3->m_Items[0].klass)[(int)uVar4];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (x == (TMPro_TMP_InputField_o *)0x0) break;
        cVar2 = (*(code *)((Il2CppClass_1 *)&x->klass)->image[1]._1.declaringType)(x);
        if ((cVar2 != '\0') &&
           (cVar2 = (*(code *)((Il2CppClass_1 *)&x->klass)->image[1].vtable._0_Equals.method)(x),
           cVar2 != '\0')) {
          return x;
        }
      }
      uVar4 = uVar4 + 1;
    } while( true );
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ApplyDialogMaxHeight
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ApplyDialogMaxHeight (UnityEngine_RectTransform_o* host, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818a4b40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a4ca6: movaps xmm7, xmm6

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ApplyDialogMaxHeight
               (UnityEngine_RectTransform_o *host,UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Gilzoide_FlexUi_FlexLayout_o *__this;
  UnityEngine_Rect_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  Gilzoide_FlexUi_Yoga_YGValue_o value;
  UnityEngine_RectTransform_o *__this_00;
  float value_00;
  float fVar5;
  float local_res10;
  UnityEngine_Rect_o local_48 [4];
  
  if (Il2CppMethodInitialized_184341fc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_184341fc9 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (root == (UnityEngine_GameObject_o *)0x0) goto label_1818a4d50;
    __this = UnityEngine_GameObject__GetComponent_object_
                       (root,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
  }
  else {
    __this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (host != (UnityEngine_RectTransform_o *)0x0) {
    pUVar3 = UnityEngine_RectTransform__get_rect(local_48,host,(MethodInfo *)0x0);
    fVar5 = (pUVar3->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (fVar5 <= 0.0) {
      pUVar4 = (UnityEngine_RectTransform_o *)
               UnityEngine_Transform__GetParent((UnityEngine_Transform_o *)host,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
        __this_00 = (UnityEngine_RectTransform_o *)0x0;
        if (pUVar4->klass == TypeInfo_UnityEngine_RectTransform) {
          __this_00 = pUVar4;
        }
        if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
          pUVar3 = UnityEngine_RectTransform__get_rect(local_48,__this_00,(MethodInfo *)0x0);
          fVar5 = (pUVar3->fields).m_Height;
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
        }
      }
      if (fVar5 <= 0.0) {
        iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
        fVar5 = (float)iVar2;
      }
    }
    if (__this != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      value_00 = 0.0;
      if (0.0 <= fVar5 - 64.0) {
        value_00 = fVar5 - 64.0;
      }
      if ((((__this->fields)._maxHeight.fields.Unit == 1) &&
          (local_res10 = (__this->fields)._maxHeight.fields.Value, 0.0 < local_res10)) &&
         (local_res10 <= value_00)) {
        value_00 = local_res10;
      }
      if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
      }
      value = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(value_00,(MethodInfo *)0x0);
      Gilzoide_FlexUi_FlexLayout__set_MaxHeight(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
label_1818a4d50:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PositionPopover
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover (UnityEngine_GameObject_o* root, UnityEngine_RectTransform_o* host, UnityEngine_GameObject_o* anchor, bool forceBelow, float gap, const MethodInfo* method);
// 0x1818a77f0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a7b83: movaps xmm8, xmm10
// asm:   0x1818a7c09: movaps xmm7, xmm6

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover
               (UnityEngine_GameObject_o *root,UnityEngine_RectTransform_o *host,
               UnityEngine_GameObject_o *anchor,bool forceBelow,float gap,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  UnityEngine_Vector2_o value;
  bool bVar8;
  Gilzoide_FlexUi_FlexLayout_o *__this;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Rect_o *pUVar9;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar10;
  UnityEngine_Vector3_o *pUVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Rect_Fields local_d8;
  UnityEngine_Rect_Fields local_c8 [11];
  
  if (Il2CppMethodInitialized_184341fca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_184341fca = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    if (root == (UnityEngine_GameObject_o *)0x0) goto label_1818a7d5b;
    __this = UnityEngine_GameObject__GetComponent_object_
                       (root,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
  }
  else {
    __this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    if (root == (UnityEngine_GameObject_o *)0x0) goto label_1818a7d5b;
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (root,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  }
  else {
    __this_00 = (UnityEngine_RectTransform_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar8) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar8) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar8 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)host,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar8) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar8 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)anchor,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar8) {
          if (host != (UnityEngine_RectTransform_o *)0x0) {
            pUVar9 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_Rect_o *)local_c8,host,(MethodInfo *)0x0);
            fVar1 = (pUVar9->fields).m_Height;
            fVar2 = (pUVar9->fields).m_XMin;
            fVar3 = (pUVar9->fields).m_YMin;
            fVar15 = (pUVar9->fields).m_Width;
            pUVar9 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AnchorRect
                               ((UnityEngine_Rect_o *)&local_d8,host,anchor,(MethodInfo *)0x0);
            fVar4 = (pUVar9->fields).m_XMin;
            fVar5 = (pUVar9->fields).m_YMin;
            fVar6 = (pUVar9->fields).m_Height;
            local_c8[0] = (UnityEngine_Rect_Fields)ZEXT416((uint)(pUVar9->fields).m_Width);
            if (Il2CppMethodInitialized_184341fce == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
              Il2CppMethodInitialized_184341fce = '\x01';
            }
            if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
              pUVar9 = UnityEngine_RectTransform__get_rect
                                 ((UnityEngine_Rect_o *)&local_d8,__this_00,(MethodInfo *)0x0);
              fVar14 = (pUVar9->fields).m_Width;
              fVar17 = (pUVar9->fields).m_Height;
              if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
              }
              fVar16 = 1.0;
              if (1.0 <= fVar17) {
                fVar16 = fVar17;
              }
              fVar17 = 1.0;
              if (1.0 <= fVar14) {
                fVar17 = fVar14;
              }
              if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
              }
              if ((forceBelow) || (fVar16 + gap <= fVar5 - fVar3)) {
                bVar8 = false;
              }
              else {
                bVar8 = fVar5 - fVar3 < (fVar3 + fVar1) - (fVar5 + fVar6);
              }
              if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
              }
              fVar14 = (fVar15 + fVar2) - fVar17;
              fVar15 = fVar2;
              if (((fVar2 <= fVar14) &&
                  (fVar13 = (local_c8[0].m_XMin * 0.5 + fVar4) - fVar17 * 0.5, fVar2 <= fVar13)) &&
                 (fVar15 = fVar14, fVar13 <= fVar14)) {
                fVar15 = fVar13;
              }
              if (bVar8) {
                if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                }
                fVar14 = fVar5 + fVar6 + gap + fVar16;
              }
              else {
                if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                }
                fVar14 = fVar5 - gap;
              }
              if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
              }
              fVar12 = fVar3 + fVar1;
              fVar13 = fVar16 + fVar3;
              if (((fVar13 <= fVar12) && (fVar13 <= fVar14)) && (fVar13 = fVar14, fVar12 < fVar14)) {
                fVar13 = fVar12;
              }
              if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
              }
              GVar10 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar15 - fVar2,(MethodInfo *)0x0);
              if (__this != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                Gilzoide_FlexUi_FlexLayout__set_MarginLeft(__this,GVar10,(MethodInfo *)0x0);
                GVar10 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit((fVar3 + fVar1) - fVar13,(MethodInfo *)0x0)
                ;
                Gilzoide_FlexUi_FlexLayout__set_MarginTop(__this,GVar10,(MethodInfo *)0x0);
                pUVar11 = UnityEngine_Transform__get_position
                                    ((UnityEngine_Vector3_o *)&local_d8,(UnityEngine_Transform_o *)__this_00,
                                     (MethodInfo *)0x0);
                fVar1 = (pUVar11->fields).z;
                uVar7._0_4_ = (pUVar11->fields).x;
                uVar7._4_4_ = (pUVar11->fields).y;
                value.fields.y = ((fVar6 * 0.5 + fVar5) - (fVar13 - fVar16)) / fVar16;
                value.fields.x = ((local_c8[0].m_XMin * 0.5 + fVar4) - fVar15) / fVar17;
                UnityEngine_RectTransform__set_pivot(__this_00,value,(MethodInfo *)0x0);
                local_d8._0_8_ = uVar7;
                local_d8.m_Width = fVar1;
                UnityEngine_Transform__set_position
                          ((UnityEngine_Transform_o *)__this_00,(UnityEngine_Vector3_o *)&local_d8,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
label_1818a7d5b:
          ThrowNullReferenceException();
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$AnchorRect
// il2cpp: UnityEngine_Rect_o Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AnchorRect (UnityEngine_RectTransform_o* host, UnityEngine_GameObject_o* anchor, const MethodInfo* method);
// 0x1818a4770
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a4afb: mov rax, qword ptr [rip + 0x27ed2a6]  ; TypeInfo_UnityEngine_Vector2
// asm:   0x1818a4b02: movss dword ptr [rsi], xmm6
// asm:   0x1818a4b06: movss dword ptr [rsi + 4], xmm7
// asm:   0x1818a4b0b: mov rcx, qword ptr [rax + 0xb8]
// asm:   0x1818a4b12: mov eax, dword ptr [rcx]
// asm:   0x1818a4b14: mov dword ptr [rsi + 8], eax
// asm:   0x1818a4b17: mov eax, dword ptr [rcx + 4]
// asm:   0x1818a4b1a: mov dword ptr [rsi + 0xc], eax
// asm:   0x1818a4b1d: mov rax, rsi
// asm:   0x1818a4b20: jmp 0x1818a4a41

UnityEngine_Rect_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AnchorRect
          (UnityEngine_Rect_o *__return_storage_ptr__,UnityEngine_RectTransform_o *host,
          UnityEngine_GameObject_o *anchor,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  UnityEngine_Vector2_StaticFields *pUVar4;
  UnityEngine_Vector2_c *pUVar5;
  bool bVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_Vector3_array *fourCornersArray;
  UnityEngine_Vector2_o UVar8;
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector3_o *pUVar9;
  UnityEngine_Vector2_Fields UVar10;
  uint uVar11;
  UnityEngine_RectTransform_o *__this_00;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  UnityEngine_Vector2_Fields local_res8;
  UnityEngine_Vector3_Fields local_78 [8];
  
  if (Il2CppMethodInitialized_184341fcb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_184341fcb = '\x01';
  }
  if (anchor != (UnityEngine_GameObject_o *)0x0) {
    pUVar7 = (UnityEngine_RectTransform_o *)UnityEngine_GameObject__get_transform(anchor,(MethodInfo *)0x0);
    __this_00 = (UnityEngine_RectTransform_o *)0x0;
    if ((pUVar7 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar7->klass == TypeInfo_UnityEngine_RectTransform)) {
      __this_00 = pUVar7;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      __this = UnityEngine_GameObject__get_transform(anchor,(MethodInfo *)0x0);
      if (__this != (UnityEngine_Transform_o *)0x0) {
        pUVar9 = UnityEngine_Transform__get_position
                           ((UnityEngine_Vector3_o *)local_78,__this,(MethodInfo *)0x0);
        local_78[0].x = (pUVar9->fields).x;
        local_78[0].y = (pUVar9->fields).y;
        local_78[0].z = (pUVar9->fields).z;
        if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
        }
        UVar8 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                          ((UnityEngine_Camera_o *)0x0,(UnityEngine_Vector3_o *)local_78,(MethodInfo *)0x0);
        UVar10 = (UnityEngine_Vector2_Fields)
                 Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__LocalPoint(host,UVar8,(MethodInfo *)0x0);
        local_res8.y = UVar10.y;
        fVar13 = local_res8.y;
        if (Il2CppMethodInitialized_18433e3c9 == '\0') {
          local_res8 = UVar10;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_18433e3c9 = '\x01';
        }
        pUVar5 = TypeInfo_UnityEngine_Vector2;
        (__return_storage_ptr__->fields).m_XMin = UVar10.x;
        (__return_storage_ptr__->fields).m_YMin = fVar13;
        pUVar4 = pUVar5->static_fields;
        (__return_storage_ptr__->fields).m_Width = (pUVar4->zeroVector).fields.x;
        (__return_storage_ptr__->fields).m_Height = (pUVar4->zeroVector).fields.y;
        return __return_storage_ptr__;
      }
    }
    else {
      fourCornersArray = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,4);
      if ((__this_00 != (UnityEngine_RectTransform_o *)0x0) &&
         (UnityEngine_RectTransform__GetWorldCorners(__this_00,fourCornersArray,(MethodInfo *)0x0),
         fourCornersArray != (UnityEngine_Vector3_array *)0x0)) {
        if ((int)fourCornersArray->max_length != 0) {
          uVar1._0_4_ = fourCornersArray->m_Items[0].fields.x;
          uVar1._4_4_ = fourCornersArray->m_Items[0].fields.y;
          fVar13 = fourCornersArray->m_Items[0].fields.z;
          if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
          }
          local_78[0]._0_8_ = uVar1;
          local_78[0].z = fVar13;
          UVar8 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                            ((UnityEngine_Camera_o *)0x0,(UnityEngine_Vector3_o *)local_78,(MethodInfo *)0x0);
          local_res8 = (UnityEngine_Vector2_Fields)
                       Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__LocalPoint
                                 (host,UVar8,(MethodInfo *)0x0);
          uVar11 = 1;
          auVar16._8_8_ = 0;
          auVar16._0_4_ = local_res8.x;
          auVar16._4_4_ = local_res8.y;
          fVar13 = local_res8.x;
          fVar14 = local_res8.y;
          fVar12 = local_res8.y;
          while( true ) {
            fVar15 = auVar16._0_4_;
            if ((int)fourCornersArray->max_length <= (int)uVar11) {
              if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
              }
              (__return_storage_ptr__->fields).m_XMin = fVar15;
              (__return_storage_ptr__->fields).m_YMin = fVar14;
              (__return_storage_ptr__->fields).m_Width = fVar13 - fVar15;
              (__return_storage_ptr__->fields).m_Height = fVar12 - fVar14;
              return __return_storage_ptr__;
            }
            if ((uint)fourCornersArray->max_length <= uVar11) break;
            uVar2._0_4_ = fourCornersArray->m_Items[(int)uVar11].fields.x;
            uVar2._4_4_ = fourCornersArray->m_Items[(int)uVar11].fields.y;
            fVar3 = fourCornersArray->m_Items[(int)uVar11].fields.z;
            if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
            }
            local_78[0]._0_8_ = uVar2;
            local_78[0].z = fVar3;
            UVar8 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                              ((UnityEngine_Camera_o *)0x0,(UnityEngine_Vector3_o *)local_78,(MethodInfo *)0x0
                              );
            if (Il2CppMethodInitialized_184341fcd == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
              Il2CppMethodInitialized_184341fcd = '\x01';
            }
            local_res8.x = 0.0;
            local_res8.y = 0.0;
            if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
            }
            UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                      (host,UVar8,(UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&local_res8,
                       (MethodInfo *)0x0);
            if (local_res8.x <= fVar15) {
              auVar16 = ZEXT416((uint)local_res8.x);
            }
            if (local_res8.y <= fVar14) {
              fVar14 = local_res8.y;
            }
            if (fVar13 <= local_res8.x) {
              fVar13 = local_res8.x;
            }
            if (fVar12 <= local_res8.y) {
              fVar12 = local_res8.y;
            }
            uVar11 = uVar11 + 1;
          }
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$MatchPopoverWidth
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__MatchPopoverWidth (UnityEngine_GameObject_o* root, UnityEngine_RectTransform_o* host, UnityEngine_GameObject_o* anchor, const MethodInfo* method);
// 0x1818a7200

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__MatchPopoverWidth
               (UnityEngine_GameObject_o *root,UnityEngine_RectTransform_o *host,
               UnityEngine_GameObject_o *anchor,MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  Gilzoide_FlexUi_FlexLayout_o *__this;
  UnityEngine_Rect_o *pUVar3;
  Gilzoide_FlexUi_Yoga_YGValue_o value;
  float value_00;
  UnityEngine_Rect_o local_38 [3];
  
  if (Il2CppMethodInitialized_184341fcc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_184341fcc = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (root == (UnityEngine_GameObject_o *)0x0) goto label_1818a73a6;
    __this = UnityEngine_GameObject__GetComponent_object_
                       (root,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
  }
  else {
    __this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)host,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)anchor,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        pUVar3 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AnchorRect
                           (local_38,host,anchor,(MethodInfo *)0x0);
        fVar1 = (pUVar3->fields).m_Width;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        value_00 = 1.0;
        if (1.0 <= fVar1) {
          value_00 = fVar1;
        }
        if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
        }
        value = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(value_00,(MethodInfo *)0x0);
        if (__this == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
label_1818a73a6:
          ThrowNullReferenceException();
        }
        Gilzoide_FlexUi_FlexLayout__set_Width(__this,value,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$LocalPoint
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__LocalPoint (UnityEngine_RectTransform_o* host, UnityEngine_Vector2_o screenPoint, const MethodInfo* method);
// 0x1818a7180

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__LocalPoint
          (UnityEngine_RectTransform_o *host,UnityEngine_Vector2_o screenPoint,MethodInfo *method)

{
  UnityEngine_Vector2_Fields local_res8 [4];
  
  if (Il2CppMethodInitialized_184341fcd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    Il2CppMethodInitialized_184341fcd = '\x01';
  }
  local_res8[0].x = 0.0;
  local_res8[0].y = 0.0;
  if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
  }
  UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
            (host,screenPoint,(UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)local_res8,
             (MethodInfo *)0x0);
  return (UnityEngine_Vector2_o)local_res8[0];
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PopoverSize
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PopoverSize (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x1818a7750

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PopoverSize
          (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Rect_o *pUVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Rect_o local_38 [3];
  
  if (Il2CppMethodInitialized_184341fce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184341fce = '\x01';
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    pUVar3 = UnityEngine_RectTransform__get_rect(local_38,rect,(MethodInfo *)0x0);
    fVar1 = (pUVar3->fields).m_Width;
    fVar5 = (pUVar3->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    fVar4 = 1.0;
    if (1.0 <= fVar5) {
      fVar4 = fVar5;
    }
    fVar5 = 1.0;
    if (1.0 <= fVar1) {
      fVar5 = fVar1;
    }
    UVar2.y = fVar4;
    UVar2.x = fVar5;
    return (UnityEngine_Vector2_o)UVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PivotFor
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PivotFor (UnityEngine_Vector2_o anchor, float left, float top, UnityEngine_Vector2_o size, const MethodInfo* method);
// 0x1818a7700

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PivotFor
          (UnityEngine_Vector2_o anchor,float left,float top,UnityEngine_Vector2_o size,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  undefined4 uStack_14;
  undefined4 uStack_c;
  
  uStack_c = anchor.fields.y;
  UVar1.x = (anchor.fields.x - left) / size.fields.x;
  uStack_14 = size.fields.y;
  UVar1.y = (uStack_c - (top - uStack_14)) / uStack_14;
  return (UnityEngine_Vector2_o)UVar1;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$SetPivot
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetPivot (UnityEngine_RectTransform_o* rect, UnityEngine_Vector2_o pivot, const MethodInfo* method);
// 0x1818a8990

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetPivot
               (UnityEngine_RectTransform_o *rect,UnityEngine_Vector2_o pivot,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  UnityEngine_Vector3_o *pUVar3;
  UnityEngine_Vector3_Fields local_38 [4];
  
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    pUVar3 = UnityEngine_Transform__get_position
                       ((UnityEngine_Vector3_o *)local_38,(UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar3->fields).x;
    uVar1._4_4_ = (pUVar3->fields).y;
    fVar2 = (pUVar3->fields).z;
    UnityEngine_RectTransform__set_pivot(rect,pivot,(MethodInfo *)0x0);
    local_38[0]._0_8_ = uVar1;
    local_38[0].z = fVar2;
    UnityEngine_Transform__set_position
              ((UnityEngine_Transform_o *)rect,(UnityEngine_Vector3_o *)local_38,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Clamp
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Clamp (float value, float min, float max, const MethodInfo* method);
// 0x1818a5550
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a5564: movaps xmm2, xmm1

float Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Clamp
                (float value,float min,float max,MethodInfo *method)

{
  if (max < min) {
    return min;
  }
  if ((min <= value) && (min = max, value <= max)) {
    return value;
  }
  return min;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___ctor (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, UnityEngine_Transform_o* layer, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x1818a9720

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,UnityEngine_Transform_o *layer,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  System_Collections_Generic_Dictionary_string__GisketchOverlayManager_OverlayInstance__o *__this_01;
  
  if (Il2CppMethodInitialized_184341fcf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341fcf = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)
             MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_ctor);
  (__this->fields)._stack = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stack,__this_00);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_184341f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f37 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance
                        );
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_1453150 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_ctor
            );
  (__this->fields)._cached = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cached,__this_01);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._layer = layer;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._layer,layer);
  (__this->fields)._context = context;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._context,context);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$get_HasOpenOverlays
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__get_HasOpenOverlays (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x1818a9870

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__get_HasOpenOverlays
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *pSVar1;
  
  if (Il2CppMethodInitialized_184341fd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    Il2CppMethodInitialized_184341fd0 = '\x01';
  }
  pSVar1 = (__this->fields)._stack;
  if (pSVar1 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    if (0 < (pSVar1->fields)._size) {
      return true;
    }
    return (__this->fields)._activePopover !=
           (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowDialog
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, bool focusOnOpen, const MethodInfo* method);
// 0x1818a8bd0
// eh: try 0x1818a8ca2..0x1818a8ddb -> pad 0x183331790 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a8dda: nop 
// asm:   0x1818a8de9: xor edx, edx
// asm:   0x1818a8deb: lea rcx, [rsp + 0x78]
// asm:   0x1818a8df0: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x1818a8df5: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x1818a8dfa: test rcx, rcx
// asm:   0x1818a8dfd: jne 0x1818a8e0c
// asm:   0x1818a8e0c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183331790: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331795: push rbp
// asm:   0x183331796: sub rsp, 0x50
// asm:   0x18333179a: mov rbp, rdx
// asm:   0x18333179d: mov rax, qword ptr [rbp + 0x50]
// asm:   0x1833317a1: mov rcx, qword ptr [rax]
// asm:   0x1833317a4: mov qword ptr [rbp + 0x58], rcx
// asm:   0x1833317a8: movabs rax, 0
// asm:   0x1833317b2: add rsp, 0x50
// asm:   0x1833317b6: pop rbp
// asm:   0x1833317b7: ret 

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
               bool focusOnOpen,MethodInfo *method)

{
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_70;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_50;
  
  if (Il2CppMethodInitialized_184341fd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&"Overlay.ShowDialog");
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch dialog not found: ");
    il2cpp_codegen_initialize_runtime_metadata(&"missing ");
    il2cpp_codegen_initialize_runtime_metadata(&"focus existing ");
    Il2CppMethodInitialized_184341fd1 = '\x01';
  }
  local_50.fields._area = (System_String_o *)0x0;
  local_50.fields._detail = (System_String_o *)0x0;
  local_50.fields._startMs._0_4_ = 0;
  local_50.fields._startMs._4_2_ = 0;
  local_50.fields._startMs._6_2_ = 0;
  local_50.fields._enabled = false;
  local_50.fields._hotLoop = false;
  local_50.fields._26_6_ = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar1 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                     (&local_70,"Overlay.ShowDialog",id,(MethodInfo *)0x0);
  local_50.fields._area = (pGVar1->fields)._area;
  local_50.fields._detail = (pGVar1->fields)._detail;
  local_50.fields._startMs = (pGVar1->fields)._startMs;
  local_50.fields._enabled = (pGVar1->fields)._enabled;
  local_50.fields._hotLoop = (pGVar1->fields)._hotLoop;
  local_50.fields._26_6_ = *(undefined6 *)&(pGVar1->fields).field_0x1a;
  local_70.fields._area = (System_String_o *)0x0;
  local_70.fields._detail = (System_String_o *)&local_50;
  instance = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog(__this,id,(MethodInfo *)0x0);
  if (instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    overlay = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ResolveDialog(__this,id,(MethodInfo *)0x0);
    if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
      pSVar2 = System_String__Concat_1969e50("missing ",id,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
      }
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Overlay.ShowDialog",pSVar2,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat_1969e50("Gisketch dialog not found: ",id,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_50,(MethodInfo *)0x0);
    }
    else {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay
                (__this,overlay,(UnityEngine_GameObject_o *)0x0,0,focusOnOpen,false,false,24.0,true,
                 (MethodInfo *)0x0);
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_50,(MethodInfo *)0x0);
    }
  }
  else {
    pSVar2 = System_String__Concat_1969e50("focus existing ",id,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Overlay.ShowDialog",pSVar2,(MethodInfo *)0x0);
    if (focusOnOpen) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(instance,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_50,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowPopover
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowPopover (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, UnityEngine_GameObject_o* anchor, bool focusOnOpen, float gap, const MethodInfo* method);
// 0x1818a9290

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowPopover
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
          UnityEngine_GameObject_o *anchor,bool focusOnOpen,float gap,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_00;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar3;
  UnityEngine_GameObject_o *pUVar4;
  
  if (Il2CppMethodInitialized_184341fd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_184341fd2 = '\x01';
  }
  pGVar1 = (__this->fields)._context;
  if ((pGVar1 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
     (__this_00 = (pGVar1->fields).Manifest,
     __this_00 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) goto label_1818a9437;
  overlay = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindPopover(__this_00,id,(MethodInfo *)0x0);
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
label_1818a9381:
    pUVar4 = (UnityEngine_GameObject_o *)0x0;
  }
  else {
    if ((__this->fields)._activePopover ==
        (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
label_1818a9338:
      pGVar3 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay
                         (__this,overlay,anchor,1,focusOnOpen,false,false,gap,true,(MethodInfo *)0x0);
      if (pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)
      goto label_1818a9381;
    }
    else {
      bVar2 = System_String__op_Equality((((__this->fields)._activePopover)->fields).Id,id,(MethodInfo *)0x0);
      pGVar3 = (__this->fields)._activePopover;
      if (!bVar2) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
                  (__this,pGVar3,false,false,(MethodInfo *)0x0);
        goto label_1818a9338;
      }
      if (pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
label_1818a9437:
        ThrowNullReferenceException();
      }
      pUVar4 = (pGVar3->fields).Host;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(pUVar4,2,(MethodInfo *)0x0);
      pGVar3 = (__this->fields)._activePopover;
      if (pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)
      goto label_1818a9437;
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover
                ((pGVar3->fields)._ContentRoot_k__BackingField,(pGVar3->fields).HostRect,anchor,false,gap,
                 (MethodInfo *)0x0);
      pGVar3 = (__this->fields)._activePopover;
      if (pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)
      goto label_1818a9437;
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0
                ((pGVar3->fields).Host,1,(MethodInfo *)0x0);
      if (focusOnOpen) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus
                  ((__this->fields)._activePopover,(MethodInfo *)0x0);
      }
      pGVar3 = (__this->fields)._activePopover;
      if (pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)
      goto label_1818a9437;
    }
    pUVar4 = (pGVar3->fields)._ContentRoot_k__BackingField;
  }
  return pUVar4;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CloseTop
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, bool restoreFocus, const MethodInfo* method);
// 0x1818a5f00

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,bool restoreFocus,
               MethodInfo *method)

{
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  bool bVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  
  if (Il2CppMethodInitialized_184341fdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
    Il2CppMethodInitialized_184341fdc = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    if (0 < (__this_00->fields)._size) {
      instance = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
                 System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,
                            (__this_00->fields)._size + -1,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                           );
      if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
        if (Il2CppMethodInitialized_184341fdd == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"gisketch-unsaved-changes");
          Il2CppMethodInitialized_184341fdd = '\x01';
        }
        if (((instance->fields).Kind == 0) && ((instance->fields).GuardUnsavedChanges != false)) {
          bVar1 = System_String__op_Inequality((instance->fields).Id,"gisketch-unsaved-changes",(MethodInfo *)0x0);
          if (bVar1) {
            bVar1 = Gisketch_Aottg2UI_Actions_GisketchFormState__IsDirty
                              ((instance->fields)._ContentRoot_k__BackingField,(MethodInfo *)0x0);
            if (bVar1) {
              bVar1 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowUnsavedChanges
                                (__this,instance,(MethodInfo *)0x0);
              return bVar1;
            }
          }
        }
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
                  (__this,instance,restoreFocus,true,(MethodInfo *)0x0);
        return true;
      }
    }
    return false;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CloseTopForced
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTopForced (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, bool restoreFocus, const MethodInfo* method);
// 0x1818a5e60

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTopForced
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,bool restoreFocus,
               MethodInfo *method)

{
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  
  if (Il2CppMethodInitialized_184341fdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
    Il2CppMethodInitialized_184341fdc = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    if (0 < (__this_00->fields)._size) {
      instance = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
                 System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,
                            (__this_00->fields)._size + -1,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                           );
      if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
                  (__this,instance,restoreFocus,true,(MethodInfo *)0x0);
        return true;
      }
    }
    return false;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CloseDialog
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, bool restoreFocus, const MethodInfo* method);
// 0x1818a5940

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
               bool restoreFocus,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  
  instance = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog(__this,id,(MethodInfo *)0x0);
  if (instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    return false;
  }
  if (Il2CppMethodInitialized_184341fdd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"gisketch-unsaved-changes");
    Il2CppMethodInitialized_184341fdd = '\x01';
  }
  if (((instance->fields).Kind == 0) && ((instance->fields).GuardUnsavedChanges != false)) {
    bVar1 = System_String__op_Inequality((instance->fields).Id,"gisketch-unsaved-changes",(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = Gisketch_Aottg2UI_Actions_GisketchFormState__IsDirty
                        ((instance->fields)._ContentRoot_k__BackingField,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowUnsavedChanges
                          (__this,instance,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
            (__this,instance,restoreFocus,true,(MethodInfo *)0x0);
  return true;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CloseDialogForced
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialogForced (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, bool restoreFocus, const MethodInfo* method);
// 0x1818a58e0

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialogForced
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
               bool restoreFocus,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  
  instance = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog(__this,id,(MethodInfo *)0x0);
  if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
              (__this,instance,restoreFocus,true,(MethodInfo *)0x0);
    return true;
  }
  return false;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$DiscardPendingUnsavedChanges
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DiscardPendingUnsavedChanges (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x1818a63f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a6559: mov rsi, qword ptr [rsp + 0x48]

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DiscardPendingUnsavedChanges
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  UnityEngine_Object_o *x;
  System_String_o *overlayId;
  UnityEngine_GameObject_o *source;
  bool bVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar2;
  
  if (Il2CppMethodInitialized_184341fd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"gisketch-unsaved-changes");
    Il2CppMethodInitialized_184341fd3 = '\x01';
  }
  if (Il2CppMethodInitialized_184341fdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
    Il2CppMethodInitialized_184341fdc = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((0 < (__this_00->fields)._size) &&
      (pGVar2 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
                System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           (__this_00->fields)._size + -1,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                          ),
      pGVar2 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)) &&
     (bVar1 = System_String__op_Equality((pGVar2->fields).Id,"gisketch-unsaved-changes",(MethodInfo *)0x0), bVar1))
  {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
              (__this,pGVar2,false,true,(MethodInfo *)0x0);
  }
  pGVar2 = (__this->fields)._pendingUnsavedClose;
  (__this->fields)._pendingUnsavedClose =
       (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingUnsavedClose,(void *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    x = (UnityEngine_Object_o *)(pGVar2->fields).Host;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      overlayId = (pGVar2->fields).Id;
      source = (pGVar2->fields)._ContentRoot_k__BackingField;
      if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions);
      }
      Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions__Invoke(overlayId,source,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
                (__this,pGVar2,true,true,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Clear
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Clear (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x1818a56d0
// eh: try 0x1818a57bf..0x1818a57d5 -> pad 0x18022fdd0 cleanup
// eh: try 0x1818a5820..0x1818a58d1 -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a5773: xor esi, esi
// asm:   0x1818a57bf: jmp 0x1818a5775
// asm:   0x1818a581c: nop dword ptr [rax]
// asm:   0x1818a5861: mov rdx, qword ptr [rip + 0x281aef8]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_GisketchOverlayManager_O
// asm:   0x1818a5868: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1818a586d: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1818a5872: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1818a5877: test rcx, rcx
// asm:   0x1818a587a: jne 0x1818a58d1
// asm:   0x1818a587c: xor esi, esi
// asm:   0x1818a587e: mov rdi, qword ptr [rsp + 0x80]
// asm:   0x1818a58d1: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Clear
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *pSVar1;
  System_Collections_Generic_Dictionary_string__GisketchOverlayManager_OverlayInstance__o *pSVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  Il2CppObject *local_18;
  
  if (Il2CppMethodInitialized_184341fd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_Clear
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_get_Values
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_GisketchOverlayManager_O
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_GisketchOverlayManager_O_40c0840
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_GisketchOverlayManager_O_40c0920
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_GisketchOverlayManager_OverlayInsta
              );
    Il2CppMethodInitialized_184341fd4 = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (Il2CppObject *)0x0;
  pSVar1 = (__this->fields)._stack;
  do {
    if (pSVar1 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
label_1818a58c5:
      ThrowNullReferenceException();
    }
    if ((pSVar1->fields)._size < 1) {
      pSVar2 = (__this->fields)._cached;
      if ((pSVar2 != (System_Collections_Generic_Dictionary_string__GisketchOverlayManager_OverlayInstance__o
                      *)0x0) &&
         (__this_00 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                                 (MethodInfo_13C65A0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_get_Values
                                ),
         __this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
        System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_40,__this_00,
                   (MethodInfo_F1E4D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_GisketchOverlayManager_OverlayInsta
                  );
        local_28 = (undefined1  [8])local_40._0_8_;
        pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
        local_18 = local_30;
        local_40._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
        while (bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                                 ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                   *)local_28,
                                  (MethodInfo_155CFB0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_GisketchOverlayManager_O_40c0840
                                 ), bVar3) {
          if (local_18 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DestroyObject
                    ((UnityEngine_GameObject_o *)local_18[2].klass,(MethodInfo *)0x0);
        }
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
                   MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_GisketchOverlayManager_O
                  );
        pSVar2 = (__this->fields)._cached;
        if (pSVar2 != (System_Collections_Generic_Dictionary_string__GisketchOverlayManager_OverlayInstance__o
                       *)0x0) {
          System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                     (MethodInfo_13BF1C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_Clear
                    );
          (__this->fields)._pendingUnsavedClose =
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingUnsavedClose,(void *)0x0);
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected
                    ((UnityEngine_UI_Selectable_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_1818a58c5;
    }
    pSVar1 = (__this->fields)._stack;
    if (pSVar1 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0)
    goto label_1818a58c5;
    instance = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
               System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)(__this->fields)._stack,
                          (pSVar1->fields)._size + -1,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                         );
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
              (__this,instance,false,false,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._stack;
  } while( true );
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FocusTopFromNavigation
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FocusTopFromNavigation (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x1818a6a70

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FocusTopFromNavigation
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_01;
  bool bVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  UnityEngine_Object_o *x_00;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Transform_o *parent;
  
  if (Il2CppMethodInitialized_184341fdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
    Il2CppMethodInitialized_184341fdc = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0)
  goto label_1818a6bab;
  if ((0 < (__this_00->fields)._size) &&
     (instance = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
                 System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,
                            (__this_00->fields)._size + -1,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                           ),
     instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)) {
    if (Il2CppMethodInitialized_184341fe5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184341fe5 = '\x01';
    }
    x_00 = (UnityEngine_Object_o *)
           Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected((MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      x = (UnityEngine_Object_o *)(instance->fields)._ContentRoot_k__BackingField;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (x_00 == (UnityEngine_Object_o *)0x0) {
label_1818a6bab:
          ThrowNullReferenceException();
        }
        __this_02 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x_00,(MethodInfo *)0x0);
        __this_01 = (instance->fields)._ContentRoot_k__BackingField;
        if ((__this_01 == (UnityEngine_GameObject_o *)0x0) ||
           (parent = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0),
           __this_02 == (UnityEngine_Transform_o *)0x0)) goto label_1818a6bab;
        bVar1 = UnityEngine_Transform__IsChildOf(__this_02,parent,(MethodInfo *)0x0);
        if (bVar1) {
          return;
        }
      }
    }
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(instance,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowOverlay
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* overlay, UnityEngine_GameObject_o* anchor, int32_t kind, bool focusOnOpen, bool forceBelow, bool matchAnchorWidth, float popoverGap, bool animate, const MethodInfo* method);
// 0x1818a9080
// eh: try 0x1818a91b7..0x1818a9239 -> pad 0x183331790 catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a9154: mov r8, qword ptr [rip + 0x27fc4ed]  ; "null"
// asm:   0x1818a9247: xor edx, edx
// asm:   0x1818a9249: lea rcx, [rsp + 0x70]
// asm:   0x1818a924e: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x1818a9253: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x1818a9258: test rcx, rcx
// asm:   0x1818a925b: jne 0x1818a928a
// asm:   0x1818a925d: mov rbx, qword ptr [rsp + 0xf8]
// asm:   0x1818a928a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183331790: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331795: push rbp
// asm:   0x183331796: sub rsp, 0x50
// asm:   0x18333179a: mov rbp, rdx
// asm:   0x18333179d: mov rax, qword ptr [rbp + 0x50]
// asm:   0x1833317a1: mov rcx, qword ptr [rax]
// asm:   0x1833317a4: mov qword ptr [rbp + 0x58], rcx
// asm:   0x1833317a8: movabs rax, 0
// asm:   0x1833317b2: add rsp, 0x50
// asm:   0x1833317b6: pop rbp
// asm:   0x1833317b7: ret 

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
          Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay,UnityEngine_GameObject_o *anchor,
          int32_t kind,bool focusOnOpen,bool forceBelow,bool matchAnchorWidth,float popoverGap,bool animate,
          MethodInfo *method)

{
  System_String_o *area;
  System_String_o *str0;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar2;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  System_Enum_o local_90;
  int32_t local_80;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_78;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_58;
  
  if (Il2CppMethodInitialized_184341fd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayKind);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"Overlay.ShowOverlay");
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_184341fd5 = '\x01';
  }
  local_78.fields._area = (System_String_o *)0x0;
  local_78.fields._detail = (System_String_o *)0x0;
  local_78.fields._startMs = 0;
  local_78.fields._enabled = false;
  local_78.fields._hotLoop = false;
  local_78.fields._26_6_ = 0;
  local_90.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayKind;
  local_90.monitor = &g_data_ffffffffffffffff;
  local_80 = kind;
  str0 = System_Enum__ToString(&local_90,(MethodInfo *)0x0);
  area = "Overlay.ShowOverlay";
  pSVar1 = "null";
  if (overlay != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    pSVar1 = (overlay->fields).id;
  }
  pSVar1 = System_String__Concat_1969b70(str0," ",pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar2 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time(&local_58,area,pSVar1,(MethodInfo *)0x0);
  local_78.fields._area = (pGVar2->fields)._area;
  local_78.fields._detail = (pGVar2->fields)._detail;
  local_78.fields._startMs = (pGVar2->fields)._startMs;
  local_78.fields._enabled = (pGVar2->fields)._enabled;
  local_78.fields._hotLoop = (pGVar2->fields)._hotLoop;
  local_78.fields._26_6_ = *(undefined6 *)&(pGVar2->fields).field_0x1a;
  local_90.klass = (System_Enum_c *)0x0;
  local_90.monitor = &local_78;
  instance = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__GetOrBuildOverlayInstance
                       (__this,overlay,anchor,kind,forceBelow,matchAnchorWidth,popoverGap,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OpenInstance
            (__this,instance,anchor,focusOnOpen,forceBelow,matchAnchorWidth,popoverGap,animate,
             (MethodInfo *)0x0);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_78,(MethodInfo *)0x0);
  return instance;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ConfigureHost
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ConfigureHost (Gilzoide_FlexUi_FlexLayout_o* flex, bool modal, const MethodInfo* method);
// 0x1818a6030

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ConfigureHost
               (Gilzoide_FlexUi_FlexLayout_o *flex,bool modal,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGValue_o GVar1;
  
  if (Il2CppMethodInitialized_184341fd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_184341fd6 = '\x01';
  }
  if (flex != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    Gilzoide_FlexUi_FlexLayout__set_FlexDirection(flex,0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_FlexWrap(flex,0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_JustifyContent(flex,(uint)modal,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_AlignItems(flex,modal + 1,(MethodInfo *)0x0);
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    }
    GVar1 = Gilzoide_FlexUi_Yoga_YGValue__Percent(100.0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_Width(flex,GVar1,(MethodInfo *)0x0);
    GVar1 = Gilzoide_FlexUi_Yoga_YGValue__Percent(100.0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_Height(flex,GVar1,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$OverlayName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OverlayName (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* overlay, const MethodInfo* method);
// 0x1818a7640

System_String_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OverlayName
          (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184341fd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG ");
    il2cpp_codegen_initialize_runtime_metadata(&"Popover");
    il2cpp_codegen_initialize_runtime_metadata(&"Dialog");
    Il2CppMethodInitialized_184341fd7 = '\x01';
  }
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = "Popover";
  if ((overlay->fields).modal != false) {
    pSVar2 = "Dialog";
  }
  bVar1 = System_String__IsNullOrEmpty((overlay->fields).id,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = System_String__Concat_1969e50("AoTTG ",pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = System_String__Concat_1969590
                     ("AoTTG ",pSVar2," ",(overlay->fields).id,
                      (MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$AddBackdrop
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AddBackdrop (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, UnityEngine_Transform_o* parent, bool dismiss, UnityEngine_Color_o color, const MethodInfo* method);
// 0x1818a4520

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AddBackdrop
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,UnityEngine_Transform_o *parent,
               bool dismiss,UnityEngine_Color_o *color,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_UI_Button_o *__this_03;
  UnityEngine_Events_UnityAction_o *__this_04;
  UnityEngine_Color_Fields local_48;
  
  if (Il2CppMethodInitialized_184341fd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_AddBackdrop_b__45_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Backdrop");
    Il2CppMethodInitialized_184341fd8 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if ((obj != (System_Type_o *)0x0) &&
       (pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
       pIVar1 == (Il2CppObject *)0x0)) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this_01,"AoTTG Backdrop",components,(MethodInfo *)0x0);
    if ((__this_01 != (UnityEngine_GameObject_o *)0x0) &&
       (__this_02 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent_2f5a7e0(__this_02,parent,false,(MethodInfo *)0x0);
      rect = UnityEngine_GameObject__GetComponent_object_
                       (__this_01,
                        (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(rect,(MethodInfo *)0x0);
      pUVar2 = UnityEngine_GameObject__AddComponent_object_
                         (__this_01,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image)
      ;
      if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
        local_48.r = (color->fields).r;
        local_48.g = (color->fields).g;
        local_48.b = (color->fields).b;
        local_48.a = (color->fields).a;
        (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                  (pUVar2,(UnityEngine_Color_o *)&local_48,(pUVar2->klass->vtable)._23_set_color.method);
        if (!dismiss) {
          return;
        }
        __this_03 = UnityEngine_GameObject__AddComponent_object_
                              (__this_01,
                               (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Button);
        if (__this_03 != (UnityEngine_UI_Button_o *)0x0) {
          UnityEngine_UI_Selectable__set_transition
                    ((UnityEngine_UI_Selectable_o *)__this_03,0,(MethodInfo *)0x0);
          __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this_03->fields).m_OnClick;
          __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_04,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_AddBackdrop_b__45_0,
                     (MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_04,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x18189b1d0

void
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Stretch(UnityEngine_RectTransform_o* rect, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_18433e3c9 = '\x01';
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184341f36 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_184341f36 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FindDialog
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, const MethodInfo* method);
// 0x1818a6570
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a65d9: nop dword ptr [rax]
// asm:   0x1818a6646: sub edi, 1
// asm:   0x1818a6649: jns 0x1818a65e0
// asm:   0x1818a6668: mov rax, rbx
// asm:   0x1818a666b: jmp 0x1818a664d

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,MethodInfo *method)

{
  int index;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *pSVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar3;
  
  if (Il2CppMethodInitialized_184341fd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fd9 = '\x01';
  }
  pSVar1 = (__this->fields)._stack;
  if (pSVar1 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    index = (pSVar1->fields)._size;
    while( true ) {
      index = index + -1;
      if (index < 0) {
        return (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
      }
      pSVar1 = (__this->fields)._stack;
      if ((pSVar1 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) ||
         (pGVar3 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
                   System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar1,index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                             ),
         pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)) break;
      if (((pGVar3->fields).Kind == 0) &&
         (bVar2 = System_String__op_Equality((pGVar3->fields).Id,id,(MethodInfo *)0x0), bVar2)) {
        x = (UnityEngine_Object_o *)(pGVar3->fields).Host;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          return pGVar3;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$GetOrBuildOverlayInstance
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__GetOrBuildOverlayInstance (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* overlay, UnityEngine_GameObject_o* anchor, int32_t kind, bool forceBelow, bool matchAnchorWidth, float popoverGap, const MethodInfo* method);
// 0x1818a6bd0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a6e40: mov rax, rdi

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__GetOrBuildOverlayInstance
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
          Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay,UnityEngine_GameObject_o *anchor,
          int32_t kind,bool forceBelow,bool matchAnchorWidth,float popoverGap,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  bool bVar4;
  System_String_o *pSVar5;
  UnityEngine_CanvasGroup_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar6;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *local_res10;
  
  if (Il2CppMethodInitialized_184341fda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fda = '\x01';
  }
  local_res10 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
  if ((overlay != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) &&
     (bVar4 = Gisketch_Aottg2UI_Data_GisketchOverlayDefinition__UsesCachedResetLifecycle
                        (overlay,(MethodInfo *)0x0), bVar4)) {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cached;
    pSVar5 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CacheKey
                       (kind,(overlay->fields).id,(MethodInfo *)0x0);
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1818a6e56;
    bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)pSVar5,(Il2CppObject **)&local_res10,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_TryGetValue
                      );
    if ((bVar4) && (local_res10 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)
       ) {
      pUVar2 = (UnityEngine_Object_o *)(local_res10->fields).Host;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pGVar6 = local_res10;
      if (bVar4) {
        if (Il2CppMethodInitialized_184341fe2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_184341fe2 = '\x01';
        }
        if (pGVar6 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
          return local_res10;
        }
        pUVar2 = (UnityEngine_Object_o *)(pGVar6->fields).Host;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          return local_res10;
        }
        Gisketch_Aottg2UI_Actions_GisketchFormState__Reset
                  ((pGVar6->fields)._ContentRoot_k__BackingField,(MethodInfo *)0x0);
        pUVar3 = (pGVar6->fields).Host;
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          __this_00 = UnityEngine_GameObject__GetComponent_object_
                                (pUVar3,(MethodInfo_6F5650 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar4) {
            if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) goto label_1818a6e56;
            UnityEngine_CanvasGroup__set_alpha(__this_00,1.0,(MethodInfo *)0x0);
          }
          pUVar3 = (pGVar6->fields).Host;
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetInputLocked
                      ((pGVar6->fields).Host,false,(MethodInfo *)0x0);
            return local_res10;
          }
        }
        goto label_1818a6e56;
      }
    }
  }
  pGVar6 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__BuildOverlayInstance
                     (__this,overlay,anchor,kind,forceBelow,matchAnchorWidth,popoverGap,(MethodInfo *)0x0);
  if (((overlay != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) &&
      (bVar4 = Gisketch_Aottg2UI_Data_GisketchOverlayDefinition__UsesCachedResetLifecycle
                         (overlay,(MethodInfo *)0x0), bVar4)) &&
     (pGVar6 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)) {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cached;
    pSVar5 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CacheKey
                       (kind,(overlay->fields).id,(MethodInfo *)0x0);
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_1818a6e56:
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar1,(Il2CppObject *)pSVar5,(Il2CppObject *)pGVar6,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_set_Item
              );
  }
  return pGVar6;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CacheKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CacheKey (int32_t kind, System_String_o* id, const MethodInfo* method);
// 0x1818a54d0

System_String_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CacheKey
          (int32_t kind,System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_28;
  int32_t local_18;
  
  if (Il2CppMethodInitialized_184341fdb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayKind);
    il2cpp_codegen_initialize_runtime_metadata(&":");
    Il2CppMethodInitialized_184341fdb = '\x01';
  }
  local_28.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayKind;
  local_28.monitor = &g_data_ffffffffffffffff;
  local_18 = kind;
  pSVar1 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969b70(pSVar1,":",id,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Top
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Top (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x1818a9570

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Top
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar1;
  
  if (Il2CppMethodInitialized_184341fdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
    Il2CppMethodInitialized_184341fdc = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    if (0 < (__this_00->fields)._size) {
      pGVar1 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
               System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (__this_00->fields)._size + -1,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                         );
      return pGVar1;
    }
    return (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShouldGuardClose
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShouldGuardClose (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, const MethodInfo* method);
// 0x1818a8b60

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShouldGuardClose
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341fdd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"gisketch-unsaved-changes");
    Il2CppMethodInitialized_184341fdd = '\x01';
  }
  if (((instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) &&
      ((instance->fields).Kind == 0)) && ((instance->fields).GuardUnsavedChanges != false)) {
    bVar1 = System_String__op_Inequality((instance->fields).Id,"gisketch-unsaved-changes",(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = Gisketch_Aottg2UI_Actions_GisketchFormState__IsDirty
                        ((instance->fields)._ContentRoot_k__BackingField,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowUnsavedChanges
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowUnsavedChanges (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, const MethodInfo* method);
// 0x1818a9440

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowUnsavedChanges
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               MethodInfo *method)

{
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *pSVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_184341fde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"gisketch-unsaved-changes");
    Il2CppMethodInitialized_184341fde = '\x01';
  }
  (__this->fields)._pendingUnsavedClose = instance;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingUnsavedClose,instance);
  if (Il2CppMethodInitialized_184341fdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
    Il2CppMethodInitialized_184341fdc = '\x01';
  }
  pSVar1 = (__this->fields)._stack;
  if (pSVar1 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    if ((0 < (pSVar1->fields)._size) &&
       (pIVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,(pSVar1->fields)._size + -1,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                           ), pIVar3 != (Il2CppObject *)0x0)) {
      if (Il2CppMethodInitialized_184341fdc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                  );
        Il2CppMethodInitialized_184341fdc = '\x01';
      }
      pSVar1 = (__this->fields)._stack;
      if (((pSVar1 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) ||
          ((pSVar1->fields)._size < 1)) ||
         (pIVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar1,(pSVar1->fields)._size + -1,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                             ), pIVar3 == (Il2CppObject *)0x0)) goto label_1818a955d;
      bVar2 = System_String__op_Inequality(pIVar3[1].monitor,"gisketch-unsaved-changes",(MethodInfo *)0x0);
      if (!bVar2) {
        return true;
      }
    }
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
              (__this,"gisketch-unsaved-changes",true,(MethodInfo *)0x0);
    return true;
  }
label_1818a955d:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ResolveDialog
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ResolveDialog (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, const MethodInfo* method);
// 0x1818a8430

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ResolveDialog
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  System_Func_string__GisketchOverlayDefinition__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar3;
  
  pGVar1 = (__this->fields)._context;
  if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
    if (((pGVar1->fields).DialogResolver != (System_Func_string__GisketchOverlayDefinition__o *)0x0) &&
       (pSVar2 = (pGVar1->fields).DialogResolver,
       pGVar3 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)
                (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code),
       pGVar3 != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0)) {
      return pGVar3;
    }
    pGVar1 = (__this->fields)._context;
    if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
      if ((pGVar1->fields).Manifest != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
        pGVar3 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindDialog
                           ((pGVar1->fields).Manifest,id,(MethodInfo *)0x0);
        return pGVar3;
      }
      return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CloseInstance
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, bool restoreFocus, bool animate, const MethodInfo* method);
// 0x1818a5a20
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a5da8: xor edx, edx
// asm:   0x1818a5daa: mov rcx, rbx
// asm:   0x1818a5dad: call 0x1818a8a10  ; Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected()
// asm:   0x1818a5db2: jmp 0x1818a5cba

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,bool restoreFocus
               ,bool animate,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *pSVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  UnityEngine_Object_o *x;
  bool bVar3;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass54_0_o *object;
  System_String_o *key;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *action;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance_00;
  UnityEngine_UI_Selectable_o *selectable;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *local_res10;
  
  if (Il2CppMethodInitialized_184341fdf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_c__DisplayClass54_0_CloseInstance_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_c__DisplayClass54_0);
    Il2CppMethodInitialized_184341fdf = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_c__DisplayClass54_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass54_0_o *)0x0)
  goto label_1818a5db7;
  (object->fields).instance = instance;
  Il2CppCodeGenWriteBarrier(&(object->fields).instance,instance);
  if ((object->fields).instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)
  {
    return;
  }
  pSVar1 = (__this->fields)._stack;
  if (pSVar1 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0)
  goto label_1818a5db7;
  System_Collections_Generic_List_object___Remove
            ((System_Collections_Generic_List_object__o *)pSVar1,(Il2CppObject *)(object->fields).instance,
             (MethodInfo_947340 *)
             MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_Remove);
  if ((__this->fields)._activePopover == (object->fields).instance) {
    (__this->fields)._activePopover =
         (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._activePopover,(void *)0x0);
  }
  if ((__this->fields)._pendingUnsavedClose == (object->fields).instance) {
    (__this->fields)._pendingUnsavedClose =
         (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingUnsavedClose,(void *)0x0);
  }
  pGVar2 = (object->fields).instance;
  if (Il2CppMethodInitialized_184341fe0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_TryGetValue
              );
    Il2CppMethodInitialized_184341fe0 = '\x01';
  }
  local_res10 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
  if (pGVar2 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
label_1818a5ba1:
    bVar3 = false;
  }
  else {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cached;
    key = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CacheKey
                    ((pGVar2->fields).Kind,(pGVar2->fields).Id,(MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)key,(Il2CppObject **)&local_res10,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_TryGetValue
                      );
    if (!bVar3) goto label_1818a5ba1;
    bVar3 = local_res10 == pGVar2;
  }
  (object->fields).cache = bVar3;
  if (animate) {
    pGVar2 = (object->fields).instance;
    if (pGVar2 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)
    goto label_1818a5db7;
    view = (pGVar2->fields).View;
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    }
    t = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit(view,(MethodInfo *)0x0);
    action = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
    DG_Tweening_TweenCallback___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)action,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_c__DisplayClass54_0_CloseInstance_b__0
               ,(MethodInfo *)0x0);
    if (t == (DG_Tweening_Tween_o *)0x0) goto label_1818a5c3f;
    DG_Tweening_TweenSettingsExtensions__OnComplete_object_
              ((Il2CppObject *)t,action,
               (MethodInfo_7C92E0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
  }
  else {
    action = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
    DG_Tweening_TweenCallback___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)action,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_c__DisplayClass54_0_CloseInstance_b__0
               ,(MethodInfo *)0x0);
label_1818a5c3f:
    if (action == (DG_Tweening_TweenCallback_o *)0x0) goto label_1818a5db7;
    (*(code *)(action->fields).invoke_impl)((action->fields).method_code);
  }
  if (!restoreFocus) {
    return;
  }
  pGVar2 = (object->fields).instance;
  if (Il2CppMethodInitialized_184341fdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
    Il2CppMethodInitialized_184341fdc = '\x01';
  }
  pSVar1 = (__this->fields)._stack;
  if (pSVar1 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
label_1818a5db7:
    ThrowNullReferenceException();
  }
  if ((0 < (pSVar1->fields)._size) &&
     (instance_00 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
                    System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar1,(pSVar1->fields)._size + -1
                               ,(MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                              ),
     instance_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(instance_00,(MethodInfo *)0x0);
    return;
  }
  if (pGVar2 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)
  goto label_1818a5db7;
  x = (UnityEngine_Object_o *)(pGVar2->fields)._PreviousSelected_k__BackingField;
  if (Il2CppMethodInitialized_184341fe7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Selectable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fe7 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (x == (UnityEngine_Object_o *)0x0) goto label_1818a5db7;
    selectable = UnityEngine_GameObject__GetComponent_object_
                           ((UnityEngine_GameObject_o *)x,
                            (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Selectable);
  }
  else {
    selectable = (UnityEngine_UI_Selectable_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)selectable,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (selectable == (UnityEngine_UI_Selectable_o *)0x0) goto label_1818a5db7;
    bVar3 = (*(selectable->klass->vtable)._9_IsActive.methodPtr)
                      (selectable,(selectable->klass->vtable)._9_IsActive.method);
    if ((bVar3) &&
       (bVar3 = (*(selectable->klass->vtable)._24_IsInteractable.methodPtr)
                          (selectable,(selectable->klass->vtable)._24_IsInteractable.method), bVar3))
    goto label_1818a5da8;
  }
  selectable = (UnityEngine_UI_Selectable_o *)0x0;
label_1818a5da8:
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected(selectable,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$IsCached
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__IsCached (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, const MethodInfo* method);
// 0x1818a70e0

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__IsCached
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  System_String_o *key;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *local_res10 [3];
  
  if (Il2CppMethodInitialized_184341fe0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_TryGetValue
              );
    Il2CppMethodInitialized_184341fe0 = '\x01';
  }
  local_res10[0] = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
  if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cached;
    key = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CacheKey
                    ((instance->fields).Kind,(instance->fields).Id,(MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)key,(Il2CppObject **)local_res10,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_TryGetValue
                      );
    if (bVar1) {
      return local_res10[0] == instance;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$HideCachedInstance
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__HideCachedInstance (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, const MethodInfo* method);
// 0x1818a6e60

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__HideCachedInstance
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  UnityEngine_GameObject_o *pUVar2;
  bool bVar3;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *__this;
  UnityEngine_Transform_o *parent;
  UnityEngine_EventSystems_EventSystem_o *pUVar4;
  UnityEngine_CanvasGroup_o *__this_00;
  
  if (Il2CppMethodInitialized_184341fe1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fe1 = '\x01';
  }
  if (instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    return;
  }
  pUVar1 = (UnityEngine_Object_o *)(instance->fields).Host;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  view = (instance->fields).View;
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetViewToRest(view,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Actions_GisketchFormState__Reset
            ((instance->fields)._ContentRoot_k__BackingField,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetInputLocked
            ((instance->fields).Host,true,(MethodInfo *)0x0);
  pUVar1 = (UnityEngine_Object_o *)(instance->fields)._ContentRoot_k__BackingField;
  if (Il2CppMethodInitialized_184341fe4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fe4 = '\x01';
  }
  x = (UnityEngine_Object_o *)
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if (((x == (UnityEngine_Object_o *)0x0) ||
          (__this = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0),
          pUVar1 == (UnityEngine_Object_o *)0x0)) ||
         (parent = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar1,(MethodInfo *)0x0)
         , __this == (UnityEngine_Transform_o *)0x0)) goto label_1818a70d8;
      bVar3 = UnityEngine_Transform__IsChildOf(__this,parent,(MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
        }
        pUVar4 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
          }
          pUVar4 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
          if (pUVar4 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_1818a70d8;
          UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_32f3500
                    (pUVar4,(UnityEngine_GameObject_o *)0x0,(MethodInfo *)0x0);
        }
      }
    }
  }
  pUVar2 = (instance->fields).Host;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (pUVar2,(MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if (__this_00 == (UnityEngine_CanvasGroup_o *)0x0) goto label_1818a70d8;
      UnityEngine_CanvasGroup__set_alpha(__this_00,1.0,(MethodInfo *)0x0);
    }
    pUVar2 = (instance->fields).Host;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      return;
    }
  }
label_1818a70d8:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ResetCachedInstance
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ResetCachedInstance (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, const MethodInfo* method);
// 0x1818a8330

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ResetCachedInstance
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar1;
  bool bVar2;
  UnityEngine_CanvasGroup_o *__this;
  
  if (Il2CppMethodInitialized_184341fe2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fe2 = '\x01';
  }
  if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    x = (UnityEngine_Object_o *)(instance->fields).Host;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      Gisketch_Aottg2UI_Actions_GisketchFormState__Reset
                ((instance->fields)._ContentRoot_k__BackingField,(MethodInfo *)0x0);
      pUVar1 = (instance->fields).Host;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        __this = UnityEngine_GameObject__GetComponent_object_
                           (pUVar1,(MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if (__this == (UnityEngine_CanvasGroup_o *)0x0) goto label_1818a842a;
          UnityEngine_CanvasGroup__set_alpha(__this,1.0,(MethodInfo *)0x0);
        }
        pUVar1 = (instance->fields).Host;
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar1,true,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetInputLocked
                    ((instance->fields).Host,false,(MethodInfo *)0x0);
          return;
        }
      }
label_1818a842a:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$SetInputLocked
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetInputLocked (UnityEngine_GameObject_o* root, bool locked, const MethodInfo* method);
// 0x1818a8880

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetInputLocked
               (UnityEngine_GameObject_o *root,bool locked,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_CanvasGroup_o *__this;
  
  if (Il2CppMethodInitialized_184341fe3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fe3 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (root != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__GetComponent_object_
                       (root,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      __this = UnityEngine_GameObject__AddComponent_object_
                         (root,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup
                         );
    }
    if (__this != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_interactable(__this,!locked,(MethodInfo *)0x0);
      UnityEngine_CanvasGroup__set_blocksRaycasts(__this,!locked,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ClearSelectedIfInside
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ClearSelectedIfInside (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818a5570

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ClearSelectedIfInside
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *__this;
  UnityEngine_Transform_o *parent;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  
  if (Il2CppMethodInitialized_184341fe4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fe4 = '\x01';
  }
  x = (UnityEngine_Object_o *)
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (((x != (UnityEngine_Object_o *)0x0) &&
          (__this = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0),
          root != (UnityEngine_GameObject_o *)0x0)) &&
         (parent = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0),
         __this != (UnityEngine_Transform_o *)0x0)) {
        bVar1 = UnityEngine_Transform__IsChildOf(__this,parent,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
        }
        pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
        }
        pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
          UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_32f3500
                    (pUVar2,(UnityEngine_GameObject_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FocusAfterClose
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FocusAfterClose (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* closed, const MethodInfo* method);
// 0x1818a6900

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FocusAfterClose
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *closed,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  UnityEngine_Object_o *x;
  bool bVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  UnityEngine_UI_Selectable_o *selectable;
  
  if (Il2CppMethodInitialized_184341fdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
    Il2CppMethodInitialized_184341fdc = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
label_1818a6a61:
    ThrowNullReferenceException();
  }
  if (0 < (__this_00->fields)._size) {
    instance = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
               System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (__this_00->fields)._size + -1,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                         );
    if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(instance,(MethodInfo *)0x0);
      return;
    }
  }
  if (closed == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)
  goto label_1818a6a61;
  x = (UnityEngine_Object_o *)(closed->fields)._PreviousSelected_k__BackingField;
  if (Il2CppMethodInitialized_184341fe7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Selectable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fe7 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (UnityEngine_Object_o *)0x0) goto label_1818a6a61;
    selectable = UnityEngine_GameObject__GetComponent_object_
                           ((UnityEngine_GameObject_o *)x,
                            (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Selectable);
  }
  else {
    selectable = (UnityEngine_UI_Selectable_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)selectable,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (selectable == (UnityEngine_UI_Selectable_o *)0x0) goto label_1818a6a61;
    bVar1 = (*(selectable->klass->vtable)._9_IsActive.methodPtr)
                      (selectable,(selectable->klass->vtable)._9_IsActive.method);
    if (bVar1) {
      bVar1 = (*(selectable->klass->vtable)._24_IsInteractable.methodPtr)
                        (selectable,(selectable->klass->vtable)._24_IsInteractable.method);
      if (bVar1) goto label_1818a6a4d;
    }
  }
  selectable = (UnityEngine_UI_Selectable_o *)0x0;
label_1818a6a4d:
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected(selectable,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Focus
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Focus (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, bool focus, const MethodInfo* method);
// 0x1818a6bc0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Focus
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,bool focus,
               MethodInfo *method)

{
  if (focus) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(instance,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ContainsSelected
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ContainsSelected (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, const MethodInfo* method);
// 0x1818a6100

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ContainsSelected
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this;
  bool bVar1;
  UnityEngine_Object_o *x_00;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  
  if (Il2CppMethodInitialized_184341fe5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fe5 = '\x01';
  }
  x_00 = (UnityEngine_Object_o *)
         Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) && (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)) {
    x = (UnityEngine_Object_o *)(instance->fields)._ContentRoot_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x_00 != (UnityEngine_Object_o *)0x0) {
        __this_00 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x_00,(MethodInfo *)0x0);
        __this = (instance->fields)._ContentRoot_k__BackingField;
        if (__this != (UnityEngine_GameObject_o *)0x0) {
          parent = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            bVar1 = UnityEngine_Transform__IsChildOf(__this_00,parent,(MethodInfo *)0x0);
            return bVar1;
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FirstSelectable
// il2cpp: UnityEngine_UI_Selectable_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstSelectable (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818a67c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a684f: nop 

UnityEngine_UI_Selectable_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstSelectable
          (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *x;
  bool bVar1;
  char cVar2;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184341fe6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Selectable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fe6 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (UnityEngine_UI_Selectable_o *)0x0;
  }
  if ((root != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar3 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                         (root,false,
                          (MethodInfo_6F5750 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Selectable),
     pUVar3 != (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0)) {
    uVar4 = 0;
    do {
      if ((int)pUVar3->max_length <= (int)uVar4) {
        return (UnityEngine_UI_Selectable_o *)0x0;
      }
      if ((uint)pUVar3->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      x = (&pUVar3->m_Items[0].klass)[(int)uVar4];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (x == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0) break;
        cVar2 = (*(code *)(x->_1).image[1]._1.declaringType)(x);
        if ((cVar2 != '\0') && (cVar2 = (*(code *)(x->_1).image[1].vtable._0_Equals.method)(x), cVar2 != '\0')
           ) {
          return (UnityEngine_UI_Selectable_o *)x;
        }
      }
      uVar4 = uVar4 + 1;
    } while( true );
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Restore
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Restore (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x1818a84b0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Restore
               (UnityEngine_GameObject_o *go,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Selectable_o *selectable;
  
  if (Il2CppMethodInitialized_184341fe7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Selectable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fe7 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (go == (UnityEngine_GameObject_o *)0x0) goto label_1818a859e;
    selectable = UnityEngine_GameObject__GetComponent_object_
                           (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Selectable)
    ;
  }
  else {
    selectable = (UnityEngine_UI_Selectable_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)selectable,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (selectable == (UnityEngine_UI_Selectable_o *)0x0) {
label_1818a859e:
      ThrowNullReferenceException();
    }
    bVar1 = (*(selectable->klass->vtable)._9_IsActive.methodPtr)
                      (selectable,(selectable->klass->vtable)._9_IsActive.method);
    if (bVar1) {
      bVar1 = (*(selectable->klass->vtable)._24_IsInteractable.methodPtr)
                        (selectable,(selectable->klass->vtable)._24_IsInteractable.method);
      if (bVar1) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected(selectable,(MethodInfo *)0x0);
        return;
      }
    }
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected
            ((UnityEngine_UI_Selectable_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CurrentSelected
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected (const MethodInfo* method);
// 0x1818a61f0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  
  if (Il2CppMethodInitialized_184341fe8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fe8 = '\x01';
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
      return (pUVar2->fields).m_CurrentSelected;
    }
    ThrowNullReferenceException();
  }
  return (UnityEngine_GameObject_o *)0x0;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$SetSelected
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected (UnityEngine_UI_Selectable_o* selectable, const MethodInfo* method);
// 0x1818a8a10

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected
               (UnityEngine_UI_Selectable_o *selectable,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  if (Il2CppMethodInitialized_184341fe9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fe9 = '\x01';
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)selectable,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (selectable == (UnityEngine_UI_Selectable_o *)0x0) goto label_1818a8b50;
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selectable,(MethodInfo *)0x0);
    }
    else {
      pUVar3 = (UnityEngine_GameObject_o *)0x0;
    }
    if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
label_1818a8b50:
      ThrowNullReferenceException();
    }
    UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_32f3500(pUVar2,pUVar3,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)selectable,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (selectable == (UnityEngine_UI_Selectable_o *)0x0) goto label_1818a8b50;
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selectable,(MethodInfo *)0x0);
    }
    else {
      pUVar3 = (UnityEngine_GameObject_o *)0x0;
    }
    Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(pUVar3,12.0,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$DestroyObject
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DestroyObject (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x1818a6330

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DestroyObject
               (UnityEngine_GameObject_o *go,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341fea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341fea = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__DestroyImmediate_2f1fb90((UnityEngine_Object_o *)go,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)go,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$<AddBackdrop>b__45_0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___AddBackdrop_b__45_0 (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x1818a95e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a96c5: mov rbx, qword ptr [rsp + 0x40]

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___AddBackdrop_b__45_0
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  bool bVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  
  if (Il2CppMethodInitialized_184341feb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Il2CppMethodInitialized_184341feb = '\x01';
  }
  if (Il2CppMethodInitialized_184341fdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
    Il2CppMethodInitialized_184341fdc = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    if ((0 < (__this_00->fields)._size) &&
       (instance = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
                   System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,
                              (__this_00->fields)._size + -1,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                             ),
       instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)) {
      if (Il2CppMethodInitialized_184341fdd == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"gisketch-unsaved-changes");
        Il2CppMethodInitialized_184341fdd = '\x01';
      }
      if (((((instance->fields).Kind == 0) && ((instance->fields).GuardUnsavedChanges != false)) &&
          (bVar1 = System_String__op_Inequality((instance->fields).Id,"gisketch-unsaved-changes",(MethodInfo *)0x0)
          , bVar1)) &&
         (bVar1 = Gisketch_Aottg2UI_Actions_GisketchFormState__IsDirty
                            ((instance->fields)._ContentRoot_k__BackingField,(MethodInfo *)0x0), bVar1)) {
        bVar1 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowUnsavedChanges
                          (__this,instance,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
      }
      else {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
                  (__this,instance,true,true,(MethodInfo *)0x0);
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
      }
      Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(1,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  ThrowNullReferenceException();
}


