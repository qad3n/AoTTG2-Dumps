// Type: Gisketch.Aottg2UI.Overlays.GisketchOverlayManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Overlays/GisketchOverlayManager.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$get_ContentRoot
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__get_ContentRoot (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, const MethodInfo* method);
// 0x5358fd0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__get_ContentRoot
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this,MethodInfo *method)

{
  return (__this->fields)._ContentRoot_k__BackingField;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$set_ContentRoot
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__set_ContentRoot (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, UnityEngine_GameObject_o* value, const MethodInfo* method);
// 0x5358fe0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__set_ContentRoot
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this,
               UnityEngine_GameObject_o *value,MethodInfo *method)

{
  (__this->fields)._ContentRoot_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._ContentRoot_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$get_PreviousSelected
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__get_PreviousSelected (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, const MethodInfo* method);
// 0x5358ff0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__get_PreviousSelected
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this,MethodInfo *method)

{
  return (__this->fields)._PreviousSelected_k__BackingField;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$set_PreviousSelected
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__set_PreviousSelected (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, UnityEngine_GameObject_o* value, const MethodInfo* method);
// 0x5359000

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__set_PreviousSelected
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this,
               UnityEngine_GameObject_o *value,MethodInfo *method)

{
  (__this->fields)._PreviousSelected_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._PreviousSelected_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance___ctor (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, int32_t kind, System_String_o* id, UnityEngine_GameObject_o* host, Gisketch_Aottg2UI_Building_GisketchView_o* inner, bool guardUnsavedChanges, const MethodInfo* method);
// 0x5354e60

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this,int32_t kind,
               System_String_o *id,UnityEngine_GameObject_o *host,
               Gisketch_Aottg2UI_Building_GisketchView_o *inner,bool guardUnsavedChanges,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o **targetAddress;
  System_Collections_Generic_List_GisketchMotionTarget__o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  UnityEngine_RectTransform_o *pUVar2;
  
  if (Il2CppMethodInitialized_07542969 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchView);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_AddRange);
    Il2CppMethodInitialized_07542969 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Kind = kind;
  (__this->fields).Id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Id);
  (__this->fields).Host = host;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Host);
  (__this->fields).GuardUnsavedChanges = guardUnsavedChanges;
  pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchView);
  Gisketch_Aottg2UI_Building_GisketchView___ctor(pGVar1,(MethodInfo *)0x0);
  targetAddress = &(__this->fields).View;
  (__this->fields).View = pGVar1;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pGVar1 = (__this->fields).View;
  if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchView__SetRoot(pGVar1,host,(MethodInfo *)0x0);
    pGVar1 = *targetAddress;
    if (((pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) &&
        (inner != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) &&
       (__this_00 = (pGVar1->fields)._MotionTargets_k__BackingField,
       __this_00 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0)) {
      System_Collections_Generic_List_GisketchMotionTarget___AddRange
                (__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)(inner->fields)._MotionTargets_k__BackingField
                 ,(MethodInfo_3902FC0 *)
                  MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_AddRange);
      (__this->fields)._ContentRoot_k__BackingField = (inner->fields)._Root_k__BackingField;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ContentRoot_k__BackingField);
      if (host != (UnityEngine_GameObject_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__GetComponent_object_
                           (host,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        (__this->fields).HostRect = pUVar2;
        Il2CppCodeGenWriteBarrier(&(__this->fields).HostRect);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$ReplaceContent
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__ReplaceContent (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, Gisketch_Aottg2UI_Building_GisketchView_o* inner, const MethodInfo* method);
// 0x5356840

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__ReplaceContent
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this,
               Gisketch_Aottg2UI_Building_GisketchView_o *inner,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar2;
  System_Collections_Generic_List_GisketchMotionTarget__o *pSVar3;
  
  if (Il2CppMethodInitialized_0754296a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_AddRange);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_Clear);
    Il2CppMethodInitialized_0754296a = '\x01';
  }
  pGVar2 = (__this->fields).View;
  if ((pGVar2 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) &&
     (pSVar3 = (pGVar2->fields)._MotionTargets_k__BackingField,
     pSVar3 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0)) {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (inner == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      (__this->fields)._ContentRoot_k__BackingField = (UnityEngine_GameObject_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ContentRoot_k__BackingField);
      return;
    }
    pGVar2 = (__this->fields).View;
    if ((pGVar2 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) &&
       (pSVar3 = (pGVar2->fields)._MotionTargets_k__BackingField,
       pSVar3 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0)) {
      System_Collections_Generic_List_GisketchMotionTarget___AddRange
                (pSVar3,(System_Collections_Generic_IEnumerable_T__o *)
                        (inner->fields)._MotionTargets_k__BackingField,
                 (MethodInfo_3902FC0 *)
                 MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_AddRange);
      (__this->fields)._ContentRoot_k__BackingField = (inner->fields)._Root_k__BackingField;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._ContentRoot_k__BackingField);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$SetPreviousSelected
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__SetPreviousSelected (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, UnityEngine_GameObject_o* previousSelected, const MethodInfo* method);
// 0x5355520

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__SetPreviousSelected
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this,
               UnityEngine_GameObject_o *previousSelected,MethodInfo *method)

{
  (__this->fields)._PreviousSelected_k__BackingField = previousSelected;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._PreviousSelected_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.<>c__DisplayClass57_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass57_0___ctor (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass57_0_o* __this, const MethodInfo* method);
// 0x5358940

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass57_0___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass57_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.<>c__DisplayClass57_0$$<CloseInstance>b__0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass57_0___CloseInstance_b__0 (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass57_0_o* __this, const MethodInfo* method);
// 0x5359010

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass57_0___CloseInstance_b__0
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass57_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  
  instance = (__this->fields).instance;
  if ((__this->fields).cache != false) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__HideCachedInstance(instance,method);
    return;
  }
  if (instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DestroyObject((instance->fields).Host,method);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$BuildOverlayInstance
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__BuildOverlayInstance (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* overlay, UnityEngine_GameObject_o* anchor, int32_t kind, bool forceBelow, bool matchAnchorWidth, float popoverGap, const MethodInfo* method);
// 0x5354190
// eh: try 0x5354358..0x5354676 -> pad 0x53546aa (+34 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x53546ca..0x53546cf -> pad 0x53546ed cleanup
// eh: try 0x53546f0..0x53546fa -> pad 0x5354702 catch (...) [compiler noexcept guard]
// asm: 53 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5354676: jmp 0x53546b2
// asm:   0x5354678: jmp 0x53546b2
// asm:   0x535467a: jmp 0x53546b2
// asm:   0x535467c: jmp 0x53546b2
// asm:   0x535467e: jmp 0x53546b2
// asm:   0x5354680: jmp 0x53546b2
// asm:   0x5354682: jmp 0x53546b2
// asm:   0x5354684: jmp 0x53546b2
// asm:   0x5354686: jmp 0x53546b2
// asm:   0x5354688: jmp 0x53546b2
// asm:   0x535468a: jmp 0x53546b2
// asm:   0x535468c: jmp 0x53546b2
// asm:   0x535468e: jmp 0x53546b2
// asm:   0x5354690: jmp 0x53546b2
// asm:   0x5354692: jmp 0x53546b2
// asm:   0x5354694: jmp 0x53546b2
// asm:   0x5354696: jmp 0x53546b2
// asm:   0x5354698: jmp 0x53546b2
// asm:   0x535469a: jmp 0x53546b2
// asm:   0x535469c: jmp 0x53546b2
// asm:   0x535469e: jmp 0x53546b2
// asm:   0x53546a0: jmp 0x53546b2
// asm:   0x53546a2: jmp 0x53546b2
// asm:   0x53546a4: jmp 0x53546b2
// asm:   0x53546a6: jmp 0x53546b2
// asm:   0x53546a8: jmp 0x53546b2
// asm:   0x53546aa: jmp 0x53546b2
// asm:   0x53546ac: jmp 0x53546b2
// asm:   0x53546ae: jmp 0x53546b2
// asm:   0x53546b0: jmp 0x53546b2
// asm:   0x53546b2: mov rbx, rax
// asm:   0x53546b5: cmp edx, 1
// asm:   0x53546b8: jne 0x53546f0
// asm:   0x53546ba: mov rdi, rbx
// asm:   0x53546bd: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x53546c2: mov rbx, qword ptr [rax]
// asm:   0x53546c5: mov qword ptr [rsp + 0x20], rbx
// asm:   0x53546ca: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x53546cf: lea rdi, [rsp + 0x50]
// asm:   0x53546d4: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x53546d9: test rbx, rbx
// asm:   0x53546dc: jne 0x53546e5
// asm:   0x53546de: xor ebx, ebx
// asm:   0x53546e0: jmp 0x5354628
// asm:   0x53546e5: mov rdi, rbx
// asm:   0x53546e8: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x53546ed: mov rbx, rax
// asm:   0x53546f0: lea rdi, [rsp + 0x20]
// asm:   0x53546f5: call 0x2d4ac60  ; il2cpp_runtime_helper_02d4ac60()
// asm:   0x53546fa: mov rdi, rbx
// asm:   0x53546fd: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5354702: mov rdi, rax
// asm:   0x5354705: call 0x2ab61e0  ; __clang_call_terminate()

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__BuildOverlayInstance
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
          Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay,UnityEngine_GameObject_o *anchor,
          int32_t kind,bool forceBelow,bool matchAnchorWidth,float popoverGap,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar1;
  Il2CppType *handle;
  bool bVar2;
  System_String_o *pSVar3;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_RectTransform_o *rect;
  Gilzoide_FlexUi_FlexLayout_o *flex;
  Gisketch_Aottg2UI_Building_GisketchView_o *inner;
  Gisketch_Aottg2UI_Actions_GisketchFormState_o *__this_01;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this_02;
  MethodInfo *pMVar6;
  System_String_o **ppSVar7;
  MethodInfo *method_00;
  MethodInfo *pMVar8;
  MethodInfo *in_stack_ffffffffffffff58;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_88;
  UnityEngine_GameObject_o *local_60;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_58;
  
  local_60 = anchor;
  if (Il2CppMethodInitialized_0754293c == '\0') {
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
    Il2CppMethodInitialized_0754293c = '\x01';
  }
  local_58.fields._startMs._0_4_ = 0;
  local_58.fields._startMs._4_2_ = 0;
  local_58.fields._startMs._6_2_ = 0;
  local_58.fields._enabled = false;
  local_58.fields._hotLoop = false;
  local_58.fields._26_6_ = 0;
  local_58.fields._area = (System_String_o *)0x0;
  local_58.fields._detail = (System_String_o *)0x0;
  local_88.fields._area =
       (System_String_o *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayKind;
  local_88.fields._detail = (System_String_o *)0xffffffffffffffff;
  local_88.fields._startMs = CONCAT44(local_88.fields._startMs._4_4_,kind);
  pSVar3 = System_Enum__ToString((System_Enum_o *)&local_88,(MethodInfo *)0x0);
  pMVar8 = (MethodInfo *)"Overlay.BuildOverlayInstance";
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    ppSVar7 = &"null";
  }
  else {
    ppSVar7 = &(overlay->fields).id;
  }
  pMVar6 = (MethodInfo *)0x0;
  pSVar3 = System_String__Concat_5301f10
                     (pSVar3," ",
                      ((Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *)ppSVar7)->id,
                      (MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  local_88.fields._startMs._0_4_ = 0;
  local_88.fields._startMs._4_2_ = 0;
  local_88.fields._startMs._6_2_ = 0;
  local_88.fields._enabled = false;
  local_88.fields._hotLoop = false;
  local_88.fields._26_6_ = 0;
  local_88.fields._area = (System_String_o *)0x0;
  local_88.fields._detail = (System_String_o *)0x0;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor
            (&local_88,(System_String_o *)pMVar8,pSVar3,pMVar6);
  local_58.fields._startMs = local_88.fields._startMs;
  local_58.fields._enabled = local_88.fields._enabled;
  local_58.fields._hotLoop = local_88.fields._hotLoop;
  local_58.fields._26_6_ = local_88.fields._26_6_;
  local_58.fields._area = local_88.fields._area;
  local_58.fields._detail = local_88.fields._detail;
  local_88.fields._area = (System_String_o *)0x0;
  local_88.fields._detail = (System_String_o *)&local_58;
  pSVar3 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OverlayName(overlay,pMVar8);
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (obj != (System_Type_o *)0x0) {
    pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
    if (pIVar4 == (Il2CppObject *)0x0) {
      pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
    }
  }
  if ((int)components->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  components->m_Items[0] = obj;
  Il2CppCodeGenWriteBarrier(components->m_Items);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(__this_00,pSVar3,components,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar5 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  pMVar6 = (MethodInfo *)0x0;
  UnityEngine_Transform__SetParent_692d510(pUVar5,(__this->fields)._layer,false,(MethodInfo *)0x0);
  UnityEngine_GameObject__AddComponent_object_
            (__this_00,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
  pMVar8 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
  rect = UnityEngine_GameObject__GetComponent_object_
                   (__this_00,
                    (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Stretch(rect,pMVar8);
  flex = UnityEngine_GameObject__AddComponent_object_
                   (__this_00,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_FlexLayout)
  ;
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ConfigureHost(flex,(overlay->fields).modal,method_00);
  if ((overlay->fields).modal == false) {
    if ((overlay->fields).dismissOnBackdrop != false) {
      pUVar5 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AddBackdrop
                (__this,pUVar5,true,(UnityEngine_Color_o)ZEXT816(0),pMVar6);
    }
  }
  else {
    pUVar5 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AddBackdrop
              (__this,pUVar5,(overlay->fields).dismissOnBackdrop,
               (UnityEngine_Color_o)(ZEXT816(0x3f1eb85200000000) << 0x40),pMVar6);
  }
  pUVar5 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
  context = (__this->fields)._context;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  inner = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildOverlay
                    (overlay,pUVar5,context,(MethodInfo *)0x0);
  if (inner == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayout
            (overlay,(inner->fields)._Root_k__BackingField,rect,local_60,forceBelow,matchAnchorWidth,
             popoverGap,in_stack_ffffffffffffff58);
  if (((overlay->fields).guardUnsavedChanges != false) || ((overlay->fields).lifecycle == 1)) {
    x = (UnityEngine_Object_o *)(inner->fields)._Root_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (inner->fields)._Root_k__BackingField;
      if (pUVar1 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_01 = UnityEngine_GameObject__GetComponent_object_
                            (pUVar1,(MethodInfo_353B730 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFormState);
      if (__this_01 == (Gisketch_Aottg2UI_Actions_GisketchFormState_o *)0x0) {
        pUVar1 = (inner->fields)._Root_k__BackingField;
        if (pUVar1 == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        __this_01 = UnityEngine_GameObject__AddComponent_object_
                              (pUVar1,(MethodInfo_353B6A0 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFormState);
        if (__this_01 == (Gisketch_Aottg2UI_Actions_GisketchFormState_o *)0x0) {
          ThrowNullReferenceException();
        }
      }
      Gisketch_Aottg2UI_Actions_GisketchFormState__CaptureBaseline(__this_01,(MethodInfo *)0x0);
    }
  }
  pSVar3 = (overlay->fields).id;
  bVar2 = (overlay->fields).guardUnsavedChanges;
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance);
  pMVar8 = (MethodInfo *)(ulong)(uint)kind;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance___ctor
            (__this_02,kind,pSVar3,__this_00,inner,bVar2,in_stack_ffffffffffffff58);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_58,pMVar8);
  return __this_02;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$OpenInstance
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OpenInstance (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, UnityEngine_GameObject_o* anchor, bool focusOnOpen, bool forceBelow, bool matchAnchorWidth, float popoverGap, bool animate, const MethodInfo* method);
// 0x5354fa0
// eh: try 0x53550b3..0x53551ef -> pad 0x5355201 (+11 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5355219..0x535521e -> pad 0x5355235 cleanup
// eh: try 0x5355238..0x5355242 -> pad 0x535524a catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53551ef: jmp 0x5355201
// asm:   0x53551f1: jmp 0x5355201
// asm:   0x53551f3: jmp 0x5355201
// asm:   0x53551f5: jmp 0x5355201
// asm:   0x53551f7: jmp 0x5355201
// asm:   0x53551f9: jmp 0x5355201
// asm:   0x53551fb: jmp 0x5355201
// asm:   0x53551fd: jmp 0x5355201
// asm:   0x53551ff: jmp 0x5355201
// asm:   0x5355201: mov rbx, rax
// asm:   0x5355204: cmp edx, 1
// asm:   0x5355207: jne 0x5355238
// asm:   0x5355209: mov rdi, rbx
// asm:   0x535520c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5355211: mov rbx, qword ptr [rax]
// asm:   0x5355214: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5355219: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x535521e: lea rdi, [rsp + 0x40]
// asm:   0x5355223: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x5355228: test rbx, rbx
// asm:   0x535522b: je 0x53551d1
// asm:   0x535522d: mov rdi, rbx
// asm:   0x5355230: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5355235: mov rbx, rax
// asm:   0x5355238: lea rdi, [rsp + 0x10]
// asm:   0x535523d: call 0x2d4ac80  ; il2cpp_runtime_helper_02d4ac80()
// asm:   0x5355242: mov rdi, rbx
// asm:   0x5355245: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x535524a: mov rdi, rax
// asm:   0x535524d: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OpenInstance
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               UnityEngine_GameObject_o *anchor,bool focusOnOpen,bool forceBelow,bool matchAnchorWidth,
               float popoverGap,bool animate,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *detail;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_array *pGVar3;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  MethodInfo *pMVar4;
  MethodInfo *pMVar5;
  UnityEngine_GameObject_o *pUVar6;
  System_String_o **method_00;
  undefined3 in_register_00000089;
  undefined4 uVar7;
  undefined4 in_register_0000008c;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_88;
  UnityEngine_GameObject_o *local_60;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_58;
  
  uVar7 = CONCAT31(in_register_00000089,matchAnchorWidth);
  local_60 = anchor;
  if (Il2CppMethodInitialized_0754293d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&"Overlay.OpenInstance");
    Il2CppMethodInitialized_0754293d = '\x01';
  }
  pMVar5 = (MethodInfo *)"Overlay.OpenInstance";
  local_58.fields._startMs._0_4_ = 0;
  local_58.fields._startMs._4_2_ = 0;
  local_58.fields._startMs._6_2_ = 0;
  local_58.fields._enabled = false;
  local_58.fields._hotLoop = false;
  local_58.fields._26_6_ = 0;
  local_58.fields._area = (System_String_o *)0x0;
  local_58.fields._detail = (System_String_o *)0x0;
  if (instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    method_00 = &"null";
  }
  else {
    method_00 = &(instance->fields).Id;
  }
  detail = (System_String_o *)((MethodInfo *)method_00)->methodPointer;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  local_88.fields._startMs._0_4_ = 0;
  local_88.fields._startMs._4_2_ = 0;
  local_88.fields._startMs._6_2_ = 0;
  local_88.fields._enabled = false;
  local_88.fields._hotLoop = false;
  local_88.fields._26_6_ = 0;
  local_88.fields._area = (System_String_o *)0x0;
  local_88.fields._detail = (System_String_o *)0x0;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor
            (&local_88,(System_String_o *)pMVar5,detail,(MethodInfo *)method_00);
  local_58.fields._startMs = local_88.fields._startMs;
  local_58.fields._enabled = local_88.fields._enabled;
  local_58.fields._hotLoop = local_88.fields._hotLoop;
  local_58.fields._26_6_ = local_88.fields._26_6_;
  local_58.fields._area = local_88.fields._area;
  local_58.fields._detail = local_88.fields._detail;
  local_88.fields._area = (System_String_o *)0x0;
  local_88.fields._detail = (System_String_o *)&local_58;
  if (instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
label_053551c7:
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_58,pMVar5);
    return;
  }
  pUVar6 = (instance->fields).Host;
  if (pUVar6 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pMVar5 = (MethodInfo *)UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0);
  if (pMVar5 == (MethodInfo *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)pMVar5,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayoutForShow
            ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)pMVar5,instance,local_60,forceBelow,
             matchAnchorWidth,popoverGap,(MethodInfo *)CONCAT44(in_register_0000008c,uVar7));
  if (focusOnOpen) {
    pUVar6 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected(pMVar5);
  }
  else {
    pUVar6 = (UnityEngine_GameObject_o *)0x0;
  }
  (instance->fields)._PreviousSelected_k__BackingField = pUVar6;
  Il2CppCodeGenWriteBarrier(&(instance->fields)._PreviousSelected_k__BackingField);
  pMVar4 = MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_Add;
  __this_00 = (__this->fields)._stack;
  if (__this_00 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar3 = (__this_00->fields)._items;
    if (pGVar3 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      pMVar5 = (MethodInfo *)instance;
      if (uVar2 < (uint)pGVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pGVar3->m_Items[(int)uVar2] = instance;
        Il2CppCodeGenWriteBarrier(pGVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)instance,
                   (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      if ((instance->fields).Kind == 1) {
        (__this->fields)._activePopover = instance;
        pMVar5 = (MethodInfo *)instance;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._activePopover);
      }
      if (animate) {
        view = (instance->fields).View;
        if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion)
          ;
        }
        pMVar5 = (MethodInfo *)0x0;
        Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewEnter(view,(MethodInfo *)0x0);
      }
      if (focusOnOpen) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(instance,pMVar5);
      }
      goto label_053551c7;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PrepareLayoutForShow
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayoutForShow (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, UnityEngine_GameObject_o* anchor, bool forceBelow, bool matchAnchorWidth, float popoverGap, const MethodInfo* method);
// 0x5355260
// eh: try 0x5355357..0x535540c -> pad 0x535540c (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5355430..0x5355435 -> pad 0x535544c cleanup
// eh: try 0x535544f..0x5355459 -> pad 0x5355461 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x535540c: jmp 0x5355418
// asm:   0x535540e: jmp 0x5355418
// asm:   0x5355410: jmp 0x5355418
// asm:   0x5355412: jmp 0x5355418
// asm:   0x5355414: jmp 0x5355418
// asm:   0x5355416: jmp 0x5355418
// asm:   0x5355418: mov rbx, rax
// asm:   0x535541b: cmp edx, 1
// asm:   0x535541e: jne 0x535544f
// asm:   0x5355420: mov rdi, rbx
// asm:   0x5355423: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5355428: mov rbx, qword ptr [rax]
// asm:   0x535542b: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5355430: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5355435: lea rdi, [rsp + 0x30]
// asm:   0x535543a: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x535543f: test rbx, rbx
// asm:   0x5355442: je 0x53553f8
// asm:   0x5355444: mov rdi, rbx
// asm:   0x5355447: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x535544c: mov rbx, rax
// asm:   0x535544f: lea rdi, [rsp + 0x10]
// asm:   0x5355454: call 0x2d4aca0  ; il2cpp_runtime_helper_02d4aca0()
// asm:   0x5355459: mov rdi, rbx
// asm:   0x535545c: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5355461: mov rdi, rax
// asm:   0x5355464: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayoutForShow
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               UnityEngine_GameObject_o *anchor,bool forceBelow,bool matchAnchorWidth,float popoverGap,
               MethodInfo *method)

{
  System_String_o *detail;
  UnityEngine_GameObject_o *pUVar1;
  System_String_o *area;
  System_String_o **method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  undefined3 in_register_00000081;
  undefined4 uVar2;
  undefined4 in_register_00000084;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_78;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_58;
  
  uVar2 = CONCAT31(in_register_00000081,matchAnchorWidth);
  if (Il2CppMethodInitialized_0754293e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&"Overlay.PrepareLayoutForShow");
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_0754293e = '\x01';
  }
  area = "Overlay.PrepareLayoutForShow";
  if (instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    method_00 = &"null";
  }
  else {
    method_00 = &(instance->fields).Id;
  }
  detail = (System_String_o *)((MethodInfo *)method_00)->methodPointer;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  local_78.fields._startMs._0_4_ = 0;
  local_78.fields._startMs._4_2_ = 0;
  local_78.fields._startMs._6_2_ = 0;
  local_78.fields._enabled = false;
  local_78.fields._hotLoop = false;
  local_78.fields._26_6_ = 0;
  local_78.fields._area = (System_String_o *)0x0;
  local_78.fields._detail = (System_String_o *)0x0;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(&local_78,area,detail,(MethodInfo *)method_00);
  local_58.fields._startMs = local_78.fields._startMs;
  local_58.fields._enabled = local_78.fields._enabled;
  local_58.fields._hotLoop = local_78.fields._hotLoop;
  local_58.fields._26_6_ = local_78.fields._26_6_;
  local_58.fields._area = local_78.fields._area;
  local_58.fields._detail = local_78.fields._detail;
  local_78.fields._area = (System_String_o *)0x0;
  local_78.fields._detail = (System_String_o *)&local_58;
  if (instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((instance->fields).Kind == 1) {
    if (matchAnchorWidth) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__MatchPopoverWidth
                ((instance->fields)._ContentRoot_k__BackingField,(instance->fields).HostRect,anchor,
                 (MethodInfo *)method_00);
    }
    pUVar1 = (instance->fields).Host;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(pUVar1,2,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover
              ((instance->fields)._ContentRoot_k__BackingField,(instance->fields).HostRect,anchor,forceBelow,
               popoverGap,(MethodInfo *)CONCAT44(in_register_00000084,uVar2));
    method_02 = (MethodInfo *)0x1;
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0
              ((instance->fields).Host,1,(MethodInfo *)0x0);
  }
  else {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ApplyDialogMaxHeight
              ((instance->fields).HostRect,(instance->fields)._ContentRoot_k__BackingField,method_01);
    pUVar1 = (instance->fields).Host;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    method_02 = (MethodInfo *)0x1;
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(pUVar1,1,(MethodInfo *)0x0);
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_58,method_02);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PrepareLayout
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayout (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* overlay, UnityEngine_GameObject_o* root, UnityEngine_RectTransform_o* hostRect, UnityEngine_GameObject_o* anchor, bool forceBelow, bool matchAnchorWidth, float popoverGap, const MethodInfo* method);
// 0x5354c00
// eh: try 0x5354d00..0x5354de8 -> pad 0x5354dec (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5354e0c..0x5354e11 -> pad 0x5354e28 cleanup
// eh: try 0x5354e2b..0x5354e35 -> pad 0x5354e3d catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5354d1c: jmp 0x5354d3b
// asm:   0x5354de8: jmp 0x5354df4
// asm:   0x5354dea: jmp 0x5354df4
// asm:   0x5354dec: jmp 0x5354df4
// asm:   0x5354dee: jmp 0x5354df4
// asm:   0x5354df0: jmp 0x5354df4
// asm:   0x5354df2: jmp 0x5354df4
// asm:   0x5354df4: mov rbx, rax
// asm:   0x5354df7: cmp edx, 1
// asm:   0x5354dfa: jne 0x5354e2b
// asm:   0x5354dfc: mov rdi, rbx
// asm:   0x5354dff: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5354e04: mov rbx, qword ptr [rax]
// asm:   0x5354e07: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5354e0c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5354e11: lea rdi, [rsp + 0x30]
// asm:   0x5354e16: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x5354e1b: test rbx, rbx
// asm:   0x5354e1e: je 0x5354dcf
// asm:   0x5354e20: mov rdi, rbx
// asm:   0x5354e23: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5354e28: mov rbx, rax
// asm:   0x5354e2b: lea rdi, [rsp + 0x10]
// asm:   0x5354e30: call 0x2d4acc0  ; il2cpp_runtime_helper_02d4acc0()
// asm:   0x5354e35: mov rdi, rbx
// asm:   0x5354e38: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5354e3d: mov rdi, rax
// asm:   0x5354e40: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayout
               (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay,UnityEngine_GameObject_o *root,
               UnityEngine_RectTransform_o *hostRect,UnityEngine_GameObject_o *anchor,bool forceBelow,
               bool matchAnchorWidth,float popoverGap,MethodInfo *method)

{
  System_String_o *detail;
  System_String_o *area;
  UnityEngine_GameObject_o *pUVar1;
  System_String_o **method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  undefined3 in_register_00000081;
  undefined4 uVar2;
  undefined4 in_register_00000084;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_78;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_58;
  
  uVar2 = CONCAT31(in_register_00000081,forceBelow);
  if (Il2CppMethodInitialized_0754293f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&"Overlay.PrepareLayout");
    Il2CppMethodInitialized_0754293f = '\x01';
  }
  area = "Overlay.PrepareLayout";
  local_58.fields._startMs._0_4_ = 0;
  local_58.fields._startMs._4_2_ = 0;
  local_58.fields._startMs._6_2_ = 0;
  local_58.fields._enabled = false;
  local_58.fields._hotLoop = false;
  local_58.fields._26_6_ = 0;
  local_58.fields._area = (System_String_o *)0x0;
  local_58.fields._detail = (System_String_o *)0x0;
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    method_00 = &"null";
  }
  else {
    method_00 = &(overlay->fields).id;
  }
  detail = (System_String_o *)((MethodInfo *)method_00)->methodPointer;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  local_78.fields._startMs._0_4_ = 0;
  local_78.fields._startMs._4_2_ = 0;
  local_78.fields._startMs._6_2_ = 0;
  local_78.fields._enabled = false;
  local_78.fields._hotLoop = false;
  local_78.fields._26_6_ = 0;
  local_78.fields._area = (System_String_o *)0x0;
  local_78.fields._detail = (System_String_o *)0x0;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(&local_78,area,detail,(MethodInfo *)method_00);
  local_58.fields._startMs = local_78.fields._startMs;
  local_58.fields._enabled = local_78.fields._enabled;
  local_58.fields._hotLoop = local_78.fields._hotLoop;
  local_58.fields._26_6_ = local_78.fields._26_6_;
  local_58.fields._area = local_78.fields._area;
  local_58.fields._detail = local_78.fields._detail;
  local_78.fields._area = (System_String_o *)0x0;
  local_78.fields._detail = (System_String_o *)&local_58;
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((overlay->fields).modal == false) {
    if (!matchAnchorWidth) goto label_05354d3b;
  }
  else {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ApplyDialogMaxHeight(hostRect,root,method_01);
    if ((((overlay->fields).modal ^ 0xffU) & matchAnchorWidth) == 0) goto label_05354d3b;
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__MatchPopoverWidth
            (root,hostRect,anchor,(MethodInfo *)(ulong)matchAnchorWidth);
label_05354d3b:
  if (hostRect == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hostRect,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(pUVar1,2,(MethodInfo *)0x0);
  if ((overlay->fields).modal == false) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover
              (root,hostRect,anchor,forceBelow,popoverGap,(MethodInfo *)CONCAT44(in_register_00000084,uVar2));
  }
  pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hostRect,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  method_02 = (MethodInfo *)0x1;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(pUVar1,1,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_58,method_02);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowDynamicPopover
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* root, UnityEngine_GameObject_o* anchor, bool focusOnOpen, bool matchAnchorWidth, float gap, bool animate, int32_t lifecycle, const MethodInfo* method);
// 0x5355e10

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *root,UnityEngine_GameObject_o *anchor,
          bool focusOnOpen,bool matchAnchorWidth,float gap,bool animate,int32_t lifecycle,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar1;
  UnityEngine_GameObject_o *pUVar2;
  undefined7 in_register_00000081;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffa8;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000081,focusOnOpen);
  if (Il2CppMethodInitialized_07542940 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition);
    Il2CppMethodInitialized_07542940 = '\x01';
  }
  if (root == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pUVar2 = (UnityEngine_GameObject_o *)0x0;
  }
  else {
    pGVar1 = (__this->fields)._activePopover;
    if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance(__this,pGVar1,false,false,method_00);
    }
    overlay = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition);
    (overlay->fields).modal = true;
    (overlay->fields).dismissOnBackdrop = true;
    pUVar2 = (UnityEngine_GameObject_o *)0x0;
    System_Object___ctor((Il2CppObject *)overlay,(MethodInfo *)0x0);
    (overlay->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(overlay->fields).id);
    (overlay->fields).modal = false;
    (overlay->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(overlay->fields).root);
    (overlay->fields).lifecycle = lifecycle;
    pGVar1 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay
                       (__this,overlay,anchor,1,focusOnOpen,false,matchAnchorWidth,gap,animate,
                        in_stack_ffffffffffffffa8);
    if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
      pUVar2 = (pGVar1->fields)._ContentRoot_k__BackingField;
    }
  }
  return pUVar2;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowDynamicDialog
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicDialog (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* root, bool focusOnOpen, bool dismissOnBackdrop, bool animate, int32_t lifecycle, const MethodInfo* method);
// 0x5356340

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicDialog
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *root,bool focusOnOpen,bool dismissOnBackdrop,
          bool animate,int32_t lifecycle,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RDX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *method_00;
  undefined7 in_register_00000081;
  MethodInfo *method_01;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  method_01 = (MethodInfo *)CONCAT71(in_register_00000081,dismissOnBackdrop);
  method_00 = root;
  if (Il2CppMethodInitialized_07542941 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition);
    Il2CppMethodInitialized_07542941 = '\x01';
    method_00 = extraout_RDX;
  }
  if (root == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pUVar2 = (UnityEngine_GameObject_o *)0x0;
  }
  else {
    pGVar1 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog(__this,id,(MethodInfo *)method_00);
    if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance(__this,pGVar1,false,false,method_01);
    }
    overlay = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchOverlayDefinition);
    (overlay->fields).modal = true;
    (overlay->fields).dismissOnBackdrop = true;
    pUVar2 = (UnityEngine_GameObject_o *)0x0;
    System_Object___ctor((Il2CppObject *)overlay,(MethodInfo *)0x0);
    (overlay->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(overlay->fields).id);
    (overlay->fields).modal = true;
    (overlay->fields).dismissOnBackdrop = dismissOnBackdrop;
    (overlay->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(overlay->fields).root);
    (overlay->fields).lifecycle = lifecycle;
    pGVar1 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay
                       (__this,overlay,(UnityEngine_GameObject_o *)0x0,0,focusOnOpen,false,false,0.0,animate,
                        in_stack_ffffffffffffffb8);
    if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
      pUVar2 = (pGVar1->fields)._ContentRoot_k__BackingField;
    }
  }
  return pUVar2;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ClosePopover
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ClosePopover (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, bool animate, const MethodInfo* method);
// 0x5356540

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ClosePopover
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,bool animate,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar1;
  bool bVar2;
  MethodInfo *in_R8;
  
  if ((__this->fields)._activePopover ==
      (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    bVar2 = false;
  }
  else {
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
              (__this,(__this->fields)._activePopover,false,animate,in_R8);
    bVar2 = true;
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$RefreshDialogContent
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__RefreshDialogContent (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, bool focusOnRefresh, const MethodInfo* method);
// 0x53565b0

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__RefreshDialogContent
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
               bool focusOnRefresh,MethodInfo *method)

{
  System_Func_string__GisketchOverlayDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this_02;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay;
  UnityEngine_Transform_o *parent;
  Gisketch_Aottg2UI_Building_GisketchView_o *inner;
  undefined7 in_register_00000011;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar3;
  undefined1 auVar4 [16];
  MethodInfo *in_stack_ffffffffffffffc8;
  
  pMVar3 = (MethodInfo *)CONCAT71(in_register_00000011,focusOnRefresh);
  if (Il2CppMethodInitialized_07542942 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_07542942 = '\x01';
    pMVar3 = extraout_RDX;
  }
  __this_02 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog(__this,id,pMVar3);
  if (__this_02 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    return false;
  }
  pGVar2 = (__this->fields)._context;
  if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_05356702;
  pSVar1 = (pGVar2->fields).DialogResolver;
  pMVar3 = extraout_RDX_00;
  if (pSVar1 == (System_Func_string__GisketchOverlayDefinition__o *)0x0) {
label_05356631:
    __this_00 = (pGVar2->fields).Manifest;
    if ((__this_00 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) ||
       (overlay = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindDialog(__this_00,id,pMVar3),
       method_01 = (MethodInfo *)id, overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0)) {
      return false;
    }
  }
  else {
    method_01 = (MethodInfo *)id;
    auVar4 = (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,id,(pSVar1->fields).method);
    pMVar3 = auVar4._8_8_;
    overlay = auVar4._0_8_;
    if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
      pGVar2 = (__this->fields)._context;
      if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_05356702;
      goto label_05356631;
    }
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DestroyObject
            ((__this_02->fields)._ContentRoot_k__BackingField,method_01);
  __this_01 = (__this_02->fields).Host;
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    parent = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
    pGVar2 = (__this->fields)._context;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    inner = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildOverlay
                      (overlay,parent,pGVar2,(MethodInfo *)0x0);
    if (inner != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayout
                (overlay,(inner->fields)._Root_k__BackingField,(__this_02->fields).HostRect,
                 (UnityEngine_GameObject_o *)0x0,false,false,0.0,in_stack_ffffffffffffffc8);
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__ReplaceContent
                (__this_02,inner,method_00);
      pMVar3 = (MethodInfo *)0x1;
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0
                ((__this_02->fields).Host,1,(MethodInfo *)0x0);
      if (focusOnRefresh) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(__this_02,pMVar3);
        return true;
      }
      return true;
    }
  }
label_05356702:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CycleFocus
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CycleFocus (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, bool backwards, const MethodInfo* method);
// 0x5356920

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CycleFocus
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,bool backwards,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  bool bVar2;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_07542959 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
    Il2CppMethodInitialized_07542959 = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (__this_00->fields)._size;
  if (0 < iVar1) {
    pIVar3 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,iVar1 + -1,
                        (MethodInfo_395CF20 *)
                        MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                       );
    if (pIVar3 != (Il2CppObject *)0x0) {
      bVar2 = Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle
                        (pIVar3[3].monitor,backwards,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$SelectInitialFocus
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, const MethodInfo* method);
// 0x5356a00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5356ab4: jmp 0x5356a44

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  TMPro_TMP_InputField_o *__this;
  UnityEngine_UI_Selectable_o *selectable;
  MethodInfo *method_00;
  UnityEngine_GameObject_o *root;
  
  if (Il2CppMethodInitialized_07542943 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542943 = '\x01';
  }
  if ((instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) ||
     ((instance->fields).Kind != 0)) {
    __this = (TMPro_TMP_InputField_o *)0x0;
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    __this = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstInput
                       ((instance->fields)._ContentRoot_k__BackingField,method);
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected
              ((UnityEngine_UI_Selectable_o *)__this,method_00);
    if (__this == (TMPro_TMP_InputField_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(__this->klass->vtable)._38_Select.methodPtr)(__this,(__this->klass->vtable)._38_Select.method);
    TMPro_TMP_InputField__ActivateInputField(__this,(MethodInfo *)0x0);
    return;
  }
  if (instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    root = (UnityEngine_GameObject_o *)0x0;
  }
  else {
    root = (instance->fields)._ContentRoot_k__BackingField;
  }
  selectable = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstSelectable(root,method_00);
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected(selectable,method_00);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FirstInput
// il2cpp: TMPro_TMP_InputField_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstInput (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x5356ae0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5356bf1: jmp 0x5356bf6
// asm:   0x5356bf3: xor r12d, r12d

TMPro_TMP_InputField_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstInput
          (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  uint uVar1;
  TMPro_TMP_InputField_o *x;
  bool bVar2;
  System_Object_array *pSVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (Il2CppMethodInitialized_07542944 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542944 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((root == (UnityEngine_GameObject_o *)0x0) ||
       (pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object_
                           (root,false,
                            (MethodInfo_353C0B0 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_TMP_InputField),
       pSVar3 == (System_Object_array *)0x0)) {
label_05356c0a:
      ThrowNullReferenceException();
    }
    if (0 < (int)pSVar3->max_length) {
      uVar4 = pSVar3->max_length & 0xffffffff;
      uVar5 = 0;
      do {
        if (uVar4 <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        x = (TMPro_TMP_InputField_o *)pSVar3->m_Items[uVar5];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if (x == (TMPro_TMP_InputField_o *)0x0) goto label_05356c0a;
          bVar2 = (*(x->klass->vtable)._9_IsActive.methodPtr)(x,(x->klass->vtable)._9_IsActive.method);
          if ((bVar2) &&
             (bVar2 = (*(x->klass->vtable)._24_IsInteractable.methodPtr)
                                (x,(x->klass->vtable)._24_IsInteractable.method), bVar2)) {
            return x;
          }
        }
        uVar5 = uVar5 + 1;
        uVar1 = (uint)pSVar3->max_length;
        uVar4 = (ulong)uVar1;
      } while ((long)uVar5 < (long)(int)uVar1);
    }
  }
  return (TMPro_TMP_InputField_o *)0x0;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ApplyDialogMaxHeight
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ApplyDialogMaxHeight (UnityEngine_RectTransform_o* host, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x5355c00
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5355cfb: shufps xmm1, xmm1, 0x55
// asm:   0x5355cff: xorps xmm0, xmm0
// asm:   0x5355d02: ucomiss xmm0, xmm1
// asm:   0x5355d05: jae 0x5355d22
// asm:   0x5355d07: jmp 0x5355d7b
// asm:   0x5355d74: movaps xmm1, xmmword ptr [rsp]
// asm:   0x5355d78: xorps xmm0, xmm0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ApplyDialogMaxHeight
               (UnityEngine_RectTransform_o *host,UnityEngine_GameObject_o *root,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar1;
  bool bVar2;
  int32_t iVar3;
  Gilzoide_FlexUi_FlexLayout_o *__this;
  UnityEngine_RectTransform_o *__this_00;
  Gilzoide_FlexUi_Yoga_YGValue_o value;
  float value_00;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  
  if (Il2CppMethodInitialized_07542945 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_07542945 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (root == (UnityEngine_GameObject_o *)0x0) goto label_05355e06;
    __this = UnityEngine_GameObject__GetComponent_object_
                       (root,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if (host != (UnityEngine_RectTransform_o *)0x0) {
    UVar5 = UnityEngine_RectTransform__get_rect(host,(MethodInfo *)0x0);
    fVar4 = UVar5.fields.m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    if (((fVar4 <= 0.0) &&
        (__this_00 = (UnityEngine_RectTransform_o *)
                     UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)host,(MethodInfo *)0x0),
        __this_00 != (UnityEngine_RectTransform_o *)0x0)) &&
       (__this_00->klass == TypeInfo_UnityEngine_RectTransform)) {
      UVar5 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      fVar4 = UVar5.fields.m_Height;
    }
    if (fVar4 <= 0.0) {
      iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      fVar4 = (float)iVar3;
    }
    if (__this != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      value_00 = 0.0;
      if (0.0 <= fVar4 + -64.0) {
        value_00 = fVar4 + -64.0;
      }
      GVar1 = (__this->fields)._maxHeight.fields;
      if (GVar1.Unit == 1) {
        fVar4 = GVar1.Value;
        if ((0.0 < fVar4) && (fVar4 <= value_00)) {
          value_00 = fVar4;
        }
      }
      if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
      }
      value = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(value_00,(MethodInfo *)0x0);
      Gilzoide_FlexUi_FlexLayout__set_MaxHeight(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
label_05355e06:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PositionPopover
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover (UnityEngine_GameObject_o* root, UnityEngine_RectTransform_o* host, UnityEngine_GameObject_o* anchor, bool forceBelow, float gap, const MethodInfo* method);
// 0x53556e0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover
               (UnityEngine_GameObject_o *root,UnityEngine_RectTransform_o *host,
               UnityEngine_GameObject_o *anchor,bool forceBelow,float gap,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  Gilzoide_FlexUi_FlexLayout_o *__this;
  UnityEngine_RectTransform_o *__this_00;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar3;
  MethodInfo *method_00;
  float fVar4;
  undefined8 extraout_XMM0_Qb;
  float fVar5;
  float fVar7;
  undefined8 in_XMM1_Qb;
  undefined8 uVar8;
  undefined1 auVar6 [16];
  float fVar10;
  undefined1 auVar9 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector3_o value;
  UnityEngine_Rect_o UVar15;
  UnityEngine_Rect_o UVar16;
  UnityEngine_Rect_o UVar17;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  UnityEngine_Vector2_o local_d8;
  float fStack_d0;
  float fStack_cc;
  float local_b8;
  float fStack_b4;
  float local_88;
  float fStack_84;
  
  if (Il2CppMethodInitialized_07542946 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_07542946 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (root == (UnityEngine_GameObject_o *)0x0) goto label_05355bf9;
    __this = UnityEngine_GameObject__GetComponent_object_
                       (root,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this_00 = (UnityEngine_RectTransform_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (root == (UnityEngine_GameObject_o *)0x0) goto label_05355bf9;
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          (root,(MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
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
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
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
          if (host != (UnityEngine_RectTransform_o *)0x0) {
            UVar15 = UnityEngine_RectTransform__get_rect(host,(MethodInfo *)0x0);
            UVar16 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AnchorRect(host,anchor,method_00);
            uVar8 = in_XMM1_Qb;
            if (Il2CppMethodInitialized_0754294a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
              Il2CppMethodInitialized_0754294a = '\x01';
            }
            if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
              UVar17 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
              auVar9._0_8_ = UVar17.fields._8_8_;
              auVar9._8_8_ = uVar8;
              if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                auVar9 = maxps(_DAT_01005870,auVar9);
                if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                }
              }
              else {
                auVar9 = maxps(_DAT_01005870,auVar9);
              }
              fStack_84 = UVar15.fields.m_YMin;
              local_d8.fields.y = UVar16.fields.m_YMin;
              local_b8 = UVar15.fields.m_Width;
              fStack_b4 = UVar15.fields.m_Height;
              fVar11 = fStack_b4 + fStack_84;
              local_e8 = UVar16.fields.m_Width;
              fStack_e4 = UVar16.fields.m_Height;
              fStack_e0 = (float)in_XMM1_Qb;
              fStack_dc = (float)((ulong)in_XMM1_Qb >> 0x20);
              fVar14 = fStack_e4 + local_d8.fields.y;
              fVar10 = auVar9._4_4_;
              bVar2 = true;
              if ((!forceBelow) && (local_d8.fields.y - fStack_84 < fVar10 + gap)) {
                bVar2 = fVar11 - fVar14 <= local_d8.fields.y - fStack_84;
              }
              if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
              }
              local_d8.fields.x = UVar16.fields.m_XMin;
              fStack_d0 = (float)extraout_XMM0_Qb;
              fStack_cc = (float)((ulong)extraout_XMM0_Qb >> 0x20);
              local_d8.fields.x = local_d8.fields.x + local_e8 * 0.5;
              fVar7 = local_d8.fields.y + fStack_e4 * 0.5;
              fVar5 = local_d8.fields.x - auVar9._0_4_ * 0.5;
              local_88 = UVar15.fields.m_XMin;
              fVar13 = (local_b8 + local_88) - auVar9._0_4_;
              fVar4 = fVar13;
              if (fVar5 <= fVar13) {
                fVar4 = fVar5;
              }
              uVar1 = (TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor;
              if (bVar2) {
                if (uVar1 == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                }
                fVar12 = local_d8.fields.y - gap;
                fVar14 = local_d8.fields.y;
              }
              else {
                if (uVar1 == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                }
                fVar12 = fVar14 + gap + fVar10;
              }
              fVar4 = (float)(~-(uint)(fVar13 < local_88) &
                              (~-(uint)(local_88 <= fVar5) & (uint)local_88 |
                              (uint)fVar4 & -(uint)(local_88 <= fVar5)) |
                             -(uint)(fVar13 < local_88) & (uint)local_88);
              if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
              }
              if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
              }
              GVar3 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar4 - local_88,(MethodInfo *)0x0);
              if (__this != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                fVar13 = fStack_84 + fVar10;
                fVar5 = fVar11;
                if (fVar12 <= fVar11) {
                  fVar5 = fVar12;
                }
                fVar5 = (float)(-(uint)(fVar11 < fVar13) & (uint)fVar13 |
                               ~-(uint)(fVar11 < fVar13) &
                               (~-(uint)(fVar13 <= fVar12) & (uint)fVar13 |
                               (uint)fVar5 & -(uint)(fVar13 <= fVar12)));
                Gilzoide_FlexUi_FlexLayout__set_MarginLeft(__this,GVar3,(MethodInfo *)0x0);
                GVar3 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar11 - fVar5,(MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_MarginTop(__this,GVar3,(MethodInfo *)0x0);
                auVar6._0_4_ = local_d8.fields.x - fVar4;
                auVar6._4_4_ = fVar7 - (fVar5 - fVar10);
                auVar6._8_4_ = (fStack_d0 + fStack_e0 * 0.0) -
                               (float)(~(uint)fStack_b4 &
                                       (~(uint)fVar7 & (uint)fStack_84 | (uint)fStack_b4 & (uint)fVar7) |
                                      (uint)fStack_b4 & (uint)fStack_84);
                auVar6._12_4_ =
                     (fStack_cc + fStack_dc * 0.0) -
                     (float)((uint)fVar11 & (uint)fStack_84 |
                            ~(uint)fVar11 & (~(uint)fVar14 & (uint)fStack_84 | (uint)fVar11 & (uint)fVar14));
                auVar9 = divps(auVar6,auVar9);
                value = UnityEngine_Transform__get_position
                                  ((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
                local_d8.fields = auVar9._0_8_;
                UnityEngine_RectTransform__set_pivot(__this_00,local_d8,(MethodInfo *)0x0);
                UnityEngine_Transform__set_position
                          ((UnityEngine_Transform_o *)__this_00,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
label_05355bf9:
          ThrowNullReferenceException();
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$AnchorRect
// il2cpp: UnityEngine_Rect_o Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AnchorRect (UnityEngine_RectTransform_o* host, UnityEngine_GameObject_o* anchor, const MethodInfo* method);
// 0x5356e90

UnityEngine_Rect_o
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AnchorRect
          (UnityEngine_RectTransform_o *host,UnityEngine_GameObject_o *anchor,MethodInfo *method)

{
  undefined4 uVar1;
  UnityEngine_Vector2_Fields UVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  UnityEngine_Vector3_o worldPoint;
  undefined1 auVar6 [16];
  bool bVar7;
  UnityEngine_RectTransform_o *pUVar8;
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector3_array *fourCornersArray;
  ulong uVar9;
  UnityEngine_RectTransform_o *__this_00;
  float *pfVar10;
  ulong uVar11;
  UnityEngine_Vector2_o UVar12;
  UnityEngine_Vector2_Fields UVar13;
  undefined8 uVar15;
  undefined1 auVar14 [16];
  undefined8 extraout_XMM0_Qb;
  float fVar16;
  undefined1 auVar17 [16];
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o worldPoint_00;
  UnityEngine_Rect_o UVar19;
  UnityEngine_Vector2_Fields local_70;
  float local_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float local_4c;
  UnityEngine_Vector2_o local_48;
  undefined8 uStack_40;
  
  if (Il2CppMethodInitialized_07542947 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3_array);
    Il2CppMethodInitialized_07542947 = '\x01';
  }
  if (anchor != (UnityEngine_GameObject_o *)0x0) {
    pUVar8 = (UnityEngine_RectTransform_o *)UnityEngine_GameObject__get_transform(anchor,(MethodInfo *)0x0);
    __this_00 = (UnityEngine_RectTransform_o *)0x0;
    if ((pUVar8 != (UnityEngine_RectTransform_o *)0x0) &&
       (__this_00 = (UnityEngine_RectTransform_o *)0x0, pUVar8->klass == TypeInfo_UnityEngine_RectTransform))
    {
      __this_00 = pUVar8;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar7) {
      __this = UnityEngine_GameObject__get_transform(anchor,(MethodInfo *)0x0);
      if (__this != (UnityEngine_Transform_o *)0x0) {
        UVar18 = UnityEngine_Transform__get_position(__this,(MethodInfo *)0x0);
        worldPoint = UVar18;
        if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
          local_68 = UVar18.fields.z;
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
          worldPoint.fields.z = local_68;
          worldPoint.fields.x = UVar18.fields.x;
          worldPoint.fields.y = UVar18.fields.y;
        }
        UVar12 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                           ((UnityEngine_Camera_o *)0x0,worldPoint,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_07542949 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
          Il2CppMethodInitialized_07542949 = '\x01';
        }
        local_70.x = 0.0;
        local_70.y = 0.0;
        if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
        }
        UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                  (host,UVar12,(UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&local_70,
                   (MethodInfo *)0x0);
        UVar13 = local_70;
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        UVar2 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
        local_68 = UVar2.x;
        fStack_64 = UVar2.y;
label_05357264:
        UVar19.fields.m_Height = fStack_64;
        UVar19.fields.m_Width = local_68;
        UVar19.fields.m_XMin = UVar13.x;
        UVar19.fields.m_YMin = UVar13.y;
        return (UnityEngine_Rect_o)UVar19.fields;
      }
    }
    else {
      fourCornersArray = (UnityEngine_Vector3_array *)SZArrayNew(TypeInfo_UnityEngine_Vector3_array,4);
      if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__GetWorldCorners(__this_00,fourCornersArray,(MethodInfo *)0x0);
        if (fourCornersArray != (UnityEngine_Vector3_array *)0x0) {
          if ((int)fourCornersArray->max_length == 0) {
label_05357273:
            ThrowIndexOutOfRangeException();
          }
          uVar1 = fourCornersArray->m_Items[0].fields.x;
          uVar3 = fourCornersArray->m_Items[0].fields.y;
          UVar18.fields.y = (float)uVar3;
          UVar18.fields.x = (float)uVar1;
          fVar16 = fourCornersArray->m_Items[0].fields.z;
          if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
            local_68 = fVar16;
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
            fVar16 = local_68;
          }
          UVar18.fields.z = fVar16;
          UVar12 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                             ((UnityEngine_Camera_o *)0x0,UVar18,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_07542949 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
            Il2CppMethodInitialized_07542949 = '\x01';
          }
          local_70.x = 0.0;
          local_70.y = 0.0;
          if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
          }
          UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                    (host,UVar12,(UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&local_70,
                     (MethodInfo *)0x0);
          auVar14._8_8_ = 0;
          auVar14._0_4_ = local_70.x;
          auVar14._4_4_ = local_70.y;
          local_68 = local_70.x;
          fStack_64 = local_70.y;
          uStack_60 = 0;
          uStack_5c = 0;
          if ((int)fourCornersArray->max_length < 2) {
            UVar13 = local_70;
          }
          else {
            uVar9 = fourCornersArray->max_length & 0xffffffff;
            pfVar10 = &fourCornersArray->m_Items[1].fields.z;
            uVar11 = 1;
            do {
              if (uVar9 <= uVar11) goto label_05357273;
              UVar12.fields.x = ((UnityEngine_Vector3_Fields *)(pfVar10 + -2))->x;
              UVar12.fields.y = ((UnityEngine_Vector3_Fields *)(pfVar10 + -2))->y;
              fVar16 = *pfVar10;
              if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
                uStack_40 = 0;
                local_4c = *pfVar10;
                local_48.fields = UVar12.fields;
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
                fVar16 = local_4c;
                UVar12.fields = local_48.fields;
              }
              worldPoint_00.fields.z = fVar16;
              worldPoint_00.fields.x = UVar12.fields.x;
              worldPoint_00.fields.y = UVar12.fields.y;
              UVar12 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                                 ((UnityEngine_Camera_o *)0x0,worldPoint_00,(MethodInfo *)0x0);
              uVar15 = extraout_XMM0_Qb;
              if (Il2CppMethodInitialized_07542949 == '\0') {
                local_48 = UVar12;
                uStack_40 = extraout_XMM0_Qb;
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
                Il2CppMethodInitialized_07542949 = '\x01';
                UVar12.fields = local_48.fields;
                uVar15 = uStack_40;
              }
              local_70.x = 0.0;
              local_70.y = 0.0;
              if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
                local_48.fields = UVar12.fields;
                uStack_40 = uVar15;
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
                UVar12.fields = local_48.fields;
              }
              UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                        (host,UVar12,(UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&local_70,
                         (MethodInfo *)0x0);
              auVar17._8_8_ = 0;
              auVar17._0_4_ = local_70.x;
              auVar17._4_4_ = local_70.y;
              auVar14 = minps(auVar14,auVar17);
              auVar6._4_4_ = fStack_64;
              auVar6._0_4_ = local_68;
              auVar6._8_4_ = uStack_60;
              auVar6._12_4_ = uStack_5c;
              auVar5._8_8_ = 0;
              auVar5._0_4_ = local_70.x;
              auVar5._4_4_ = local_70.y;
              auVar17 = maxps(auVar6,auVar5);
              local_68 = auVar17._0_4_;
              fStack_64 = auVar17._4_4_;
              uStack_60 = auVar17._8_4_;
              uStack_5c = auVar17._12_4_;
              uVar11 = uVar11 + 1;
              uVar4 = (uint)fourCornersArray->max_length;
              uVar9 = (ulong)uVar4;
              pfVar10 = pfVar10 + 3;
              UVar13 = auVar14._0_8_;
            } while ((long)uVar11 < (long)(int)uVar4);
          }
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          local_68 = local_68 - UVar13.x;
          fStack_64 = fStack_64 - UVar13.y;
          goto label_05357264;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$MatchPopoverWidth
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__MatchPopoverWidth (UnityEngine_GameObject_o* root, UnityEngine_RectTransform_o* host, UnityEngine_GameObject_o* anchor, const MethodInfo* method);
// 0x5355540

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__MatchPopoverWidth
               (UnityEngine_GameObject_o *root,UnityEngine_RectTransform_o *host,
               UnityEngine_GameObject_o *anchor,MethodInfo *method)

{
  bool bVar1;
  Gilzoide_FlexUi_FlexLayout_o *__this;
  Gilzoide_FlexUi_Yoga_YGValue_o value;
  MethodInfo *method_00;
  float value_00;
  UnityEngine_Rect_o UVar2;
  
  if (Il2CppMethodInitialized_07542948 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_07542948 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (root == (UnityEngine_GameObject_o *)0x0) goto label_053556d3;
    __this = UnityEngine_GameObject__GetComponent_object_
                       (root,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)host,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)anchor,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        UVar2 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AnchorRect(host,anchor,method_00);
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
        value_00 = 1.0;
        if (1.0 <= UVar2.fields.m_Width) {
          value_00 = UVar2.fields.m_Width;
        }
        if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
        }
        value = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(value_00,(MethodInfo *)0x0);
        if (__this != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          Gilzoide_FlexUi_FlexLayout__set_Width(__this,value,(MethodInfo *)0x0);
          return;
        }
label_053556d3:
        ThrowNullReferenceException();
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$LocalPoint
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__LocalPoint (UnityEngine_RectTransform_o* host, UnityEngine_Vector2_o screenPoint, const MethodInfo* method);
// 0x53573a0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__LocalPoint
          (UnityEngine_RectTransform_o *host,UnityEngine_Vector2_o screenPoint,MethodInfo *method)

{
  UnityEngine_Vector2_o screenPoint_00;
  float fVar1;
  float fVar2;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  UnityEngine_Vector2_Fields local_20;
  undefined1 local_18 [8];
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  fVar1 = screenPoint.fields.x;
  fVar2 = screenPoint.fields.y;
  if (Il2CppMethodInitialized_07542949 == '\0') {
    uStack_10 = in_XMM0_Dc;
    local_18 = (undefined1  [8])screenPoint.fields;
    uStack_c = in_XMM0_Dd;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    Il2CppMethodInitialized_07542949 = '\x01';
    fVar1 = (float)local_18._0_4_;
    fVar2 = (float)local_18._4_4_;
    in_XMM0_Dc = uStack_10;
    in_XMM0_Dd = uStack_c;
  }
  local_20.x = 0.0;
  local_20.y = 0.0;
  if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
    local_18._4_4_ = fVar2;
    local_18._0_4_ = fVar1;
    uStack_10 = in_XMM0_Dc;
    uStack_c = in_XMM0_Dd;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
    fVar1 = (float)local_18._0_4_;
    fVar2 = (float)local_18._4_4_;
  }
  screenPoint_00.fields.y = fVar2;
  screenPoint_00.fields.x = fVar1;
  UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
            (host,screenPoint_00,(UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&local_20,
             (MethodInfo *)0x0);
  return (UnityEngine_Vector2_o)local_20;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PopoverSize
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PopoverSize (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x5357280

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PopoverSize
          (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  undefined1 auVar1 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar2;
  
  if (Il2CppMethodInitialized_0754294a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_0754294a = '\x01';
  }
  if (rect == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar2 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
  }
  auVar1._8_4_ = in_XMM1_Dc;
  auVar1._0_8_ = UVar2.fields._8_8_;
  auVar1._12_4_ = in_XMM1_Dd;
  auVar1 = maxps(_DAT_01005870,auVar1);
  return (UnityEngine_Vector2_o)auVar1._0_8_;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PivotFor
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PivotFor (UnityEngine_Vector2_o anchor, float left, float top, UnityEngine_Vector2_o size, const MethodInfo* method);
// 0x5357320

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PivotFor
          (UnityEngine_Vector2_o anchor,float left,float top,UnityEngine_Vector2_o size,MethodInfo *method)

{
  undefined8 in_XMM0_Qb;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float in_XMM1_Db;
  float in_XMM2_Db;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  
  auVar1._0_4_ = anchor.fields.x - left;
  auVar1._4_4_ = anchor.fields.y - (top - size.fields.y);
  auVar1._8_4_ = (float)in_XMM0_Qb - in_XMM1_Db;
  auVar1._12_4_ = (float)((ulong)in_XMM0_Qb >> 0x20) - in_XMM2_Db;
  auVar2._8_4_ = in_XMM3_Dc;
  auVar2._0_8_ = size.fields;
  auVar2._12_4_ = in_XMM3_Dd;
  auVar2 = divps(auVar1,auVar2);
  return (UnityEngine_Vector2_o)auVar2._0_8_;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$SetPivot
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetPivot (UnityEngine_RectTransform_o* rect, UnityEngine_Vector2_o pivot, const MethodInfo* method);
// 0x5357340

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetPivot
               (UnityEngine_RectTransform_o *rect,UnityEngine_Vector2_o pivot,MethodInfo *method)

{
  UnityEngine_Vector3_o value;
  
  if (rect == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  value = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_pivot(rect,pivot,(MethodInfo *)0x0);
  UnityEngine_Transform__set_position((UnityEngine_Transform_o *)rect,value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Clamp
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Clamp (float value, float min, float max, const MethodInfo* method);
// 0x53572f0

float Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Clamp
                (float value,float min,float max,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = max;
  if (value <= max) {
    fVar1 = value;
  }
  return (float)(~-(uint)(max < min) &
                 (~-(uint)(min <= value) & (uint)min | (uint)fVar1 & -(uint)(min <= value)) |
                -(uint)(max < min) & (uint)min);
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___ctor (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, UnityEngine_Transform_o* layer, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x5357420
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53574cb: cmp byte ptr [rip + 0x21eb3b4], 0
// asm:   0x53574d2: je 0x5357577

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,UnityEngine_Transform_o *layer,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  System_Collections_Generic_Dictionary_string__GisketchOverlayManager_OverlayInstance__o *__this_01;
  
  if (Il2CppMethodInitialized_0754294b == '\0') {
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
    Il2CppMethodInitialized_0754294b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)
             MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_ctor);
  (__this->fields)._stack = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stack);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance
                        );
  System_Collections_Generic_Dictionary_object__object____ctor_4aac9c0
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_4AAC9C0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_ctor
            );
  (__this->fields)._cached = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cached);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._layer = layer;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._layer);
  (__this->fields)._context = context;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._context);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$get_HasOpenOverlays
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__get_HasOpenOverlays (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x53575b0

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__get_HasOpenOverlays
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *pSVar1;
  
  if (Il2CppMethodInitialized_0754294c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    Il2CppMethodInitialized_0754294c = '\x01';
  }
  pSVar1 = (__this->fields)._stack;
  if (pSVar1 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pSVar1->fields)._size < 1) {
    return (__this->fields)._activePopover !=
           (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
  }
  return true;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowDialog
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, bool focusOnOpen, const MethodInfo* method);
// 0x5357600
// eh: try 0x53576dc..0x535783e -> pad 0x5357848 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5357861..0x5357866 -> pad 0x535787d cleanup
// eh: try 0x5357880..0x5357888 -> pad 0x5357890 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x535783e: jmp 0x535784a
// asm:   0x5357840: jmp 0x535784a
// asm:   0x5357842: jmp 0x535784a
// asm:   0x5357844: jmp 0x535784a
// asm:   0x5357846: jmp 0x535784a
// asm:   0x5357848: jmp 0x535784a
// asm:   0x535784a: mov rbx, rax
// asm:   0x535784d: cmp edx, 1
// asm:   0x5357850: jne 0x5357880
// asm:   0x5357852: mov rdi, rbx
// asm:   0x5357855: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x535785a: mov rbx, qword ptr [rax]
// asm:   0x535785d: mov qword ptr [rsp], rbx
// asm:   0x5357861: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5357866: lea rdi, [rsp + 0x20]
// asm:   0x535786b: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x5357870: test rbx, rbx
// asm:   0x5357873: je 0x535782a
// asm:   0x5357875: mov rdi, rbx
// asm:   0x5357878: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x535787d: mov rbx, rax
// asm:   0x5357880: mov rdi, rsp
// asm:   0x5357883: call 0x2d4ace0  ; il2cpp_runtime_helper_02d4ace0()
// asm:   0x5357888: mov rdi, rbx
// asm:   0x535788b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5357890: mov rdi, rax
// asm:   0x5357893: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
               bool focusOnOpen,MethodInfo *method)

{
  System_Func_string__GisketchOverlayDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar2;
  System_String_o *pSVar3;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar4;
  undefined1 auVar5 [16];
  MethodInfo *in_stack_ffffffffffffff78;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_78;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_58;
  
  if (Il2CppMethodInitialized_0754294d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&"Overlay.ShowDialog");
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch dialog not found: ");
    il2cpp_codegen_initialize_runtime_metadata(&"missing ");
    il2cpp_codegen_initialize_runtime_metadata(&"focus existing ");
    Il2CppMethodInitialized_0754294d = '\x01';
  }
  local_58.fields._startMs._0_4_ = 0;
  local_58.fields._startMs._4_2_ = 0;
  local_58.fields._startMs._6_2_ = 0;
  local_58.fields._enabled = false;
  local_58.fields._hotLoop = false;
  local_58.fields._26_6_ = 0;
  local_58.fields._area = (System_String_o *)0x0;
  local_58.fields._detail = (System_String_o *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  local_78.fields._area = (System_String_o *)0x0;
  local_78.fields._detail = (System_String_o *)0x0;
  local_78.fields._startMs._0_4_ = 0;
  local_78.fields._startMs._4_2_ = 0;
  local_78.fields._startMs._6_2_ = 0;
  local_78.fields._enabled = false;
  local_78.fields._hotLoop = false;
  local_78.fields._26_6_ = 0;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(&local_78,"Overlay.ShowDialog",id,method);
  local_58.fields._startMs = local_78.fields._startMs;
  local_58.fields._enabled = local_78.fields._enabled;
  local_58.fields._hotLoop = local_78.fields._hotLoop;
  local_58.fields._26_6_ = local_78.fields._26_6_;
  local_58.fields._area = local_78.fields._area;
  local_58.fields._detail = local_78.fields._detail;
  local_78.fields._area = (System_String_o *)0x0;
  local_78.fields._detail = (System_String_o *)&local_58;
  instance = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog(__this,id,method_01);
  if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    method_00 = (MethodInfo *)System_String__Concat_52f0320("focus existing ",id,(MethodInfo *)0x0);
    pMVar4 = extraout_RDX_00;
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
      pMVar4 = extraout_RDX_01;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
              ("Overlay.ShowDialog",(System_String_o *)method_00,pMVar4);
    if (focusOnOpen) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(instance,method_00);
    }
    goto label_05357820;
  }
  pGVar2 = (__this->fields)._context;
  if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
label_05357839:
    ThrowNullReferenceException();
  }
  pSVar1 = (pGVar2->fields).DialogResolver;
  pMVar4 = extraout_RDX;
  if (pSVar1 == (System_Func_string__GisketchOverlayDefinition__o *)0x0) {
label_05357770:
    __this_00 = (pGVar2->fields).Manifest;
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      method_00 = (MethodInfo *)
                  Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindDialog(__this_00,id,pMVar4);
      if (method_00 != (MethodInfo *)0x0) goto label_05357786;
    }
    pSVar3 = System_String__Concat_52f0320("missing ",id,(MethodInfo *)0x0);
    pMVar4 = extraout_RDX_02;
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
      pMVar4 = extraout_RDX_03;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Overlay.ShowDialog",pSVar3,pMVar4);
    pSVar3 = System_String__Concat_52f0320("Gisketch dialog not found: ",id,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    method_00 = (MethodInfo *)0x0;
    UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  }
  else {
    auVar5 = (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,id,(pSVar1->fields).method);
    pMVar4 = auVar5._8_8_;
    method_00 = auVar5._0_8_;
    if (method_00 == (MethodInfo *)0x0) {
      pGVar2 = (__this->fields)._context;
      if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_05357839;
      goto label_05357770;
    }
label_05357786:
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay
              (__this,(Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)method_00,
               (UnityEngine_GameObject_o *)0x0,0,focusOnOpen,false,false,24.0,true,in_stack_ffffffffffffff78);
  }
label_05357820:
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_58,method_00);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowPopover
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowPopover (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, UnityEngine_GameObject_o* anchor, bool focusOnOpen, float gap, const MethodInfo* method);
// 0x53578a0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowPopover
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
          UnityEngine_GameObject_o *anchor,bool focusOnOpen,float gap,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_00;
  UnityEngine_GameObject_o *root;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar4;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  pMVar4 = (MethodInfo *)anchor;
  if (Il2CppMethodInitialized_0754294e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_0754294e = '\x01';
    pMVar4 = extraout_RDX;
  }
  pGVar1 = (__this->fields)._context;
  if ((pGVar1 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
     (__this_00 = (pGVar1->fields).Manifest,
     __this_00 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) goto label_053579be;
  overlay = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindPopover(__this_00,id,pMVar4);
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    return (UnityEngine_GameObject_o *)0x0;
  }
  pGVar3 = (__this->fields)._activePopover;
  if (pGVar3 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    bVar2 = System_String__op_Equality((pGVar3->fields).Id,id,(MethodInfo *)0x0);
    pGVar3 = (__this->fields)._activePopover;
    if (bVar2) {
      if (pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
label_053579be:
        ThrowNullReferenceException();
      }
      root = (pGVar3->fields).Host;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(root,2,(MethodInfo *)0x0);
      pGVar3 = (__this->fields)._activePopover;
      if (pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)
      goto label_053579be;
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover
                ((pGVar3->fields)._ContentRoot_k__BackingField,(pGVar3->fields).HostRect,anchor,false,gap,
                 method);
      pGVar3 = (__this->fields)._activePopover;
      if (pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)
      goto label_053579be;
      pMVar4 = (MethodInfo *)0x1;
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0
                ((pGVar3->fields).Host,1,(MethodInfo *)0x0);
      pGVar3 = (__this->fields)._activePopover;
      if (focusOnOpen) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(pGVar3,pMVar4);
        pGVar3 = (__this->fields)._activePopover;
      }
      if (pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)
      goto label_053579be;
      goto label_05357a06;
    }
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance(__this,pGVar3,false,false,method);
  }
  pGVar3 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay
                     (__this,overlay,anchor,1,focusOnOpen,false,false,gap,true,in_stack_ffffffffffffffb8);
  if (pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    return (UnityEngine_GameObject_o *)0x0;
  }
label_05357a06:
  return (pGVar3->fields)._ContentRoot_k__BackingField;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CloseTop
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, bool restoreFocus, const MethodInfo* method);
// 0x5357b40
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5357c11: mov rdi, rbx
// asm:   0x5357c14: mov rsi, rbp
// asm:   0x5357c17: call 0x5357c90  ; Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowUnsavedChanges()
// asm:   0x5357c1c: jmp 0x5357bd5

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,bool restoreFocus,
               MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  bool bVar2;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07542959 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
    Il2CppMethodInitialized_07542959 = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (__this_00->fields)._size;
  if (iVar1 < 1) {
    return false;
  }
  instance = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
             System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,iVar1 + -1,
                        (MethodInfo_395CF20 *)
                        MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                       );
  if (instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    return false;
  }
  if (Il2CppMethodInitialized_0754295a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"gisketch-unsaved-changes");
    Il2CppMethodInitialized_0754295a = '\x01';
  }
  if (((((instance->fields).Kind == 0) && ((instance->fields).GuardUnsavedChanges != false)) &&
      (bVar2 = System_String__op_Inequality((instance->fields).Id,"gisketch-unsaved-changes",(MethodInfo *)0x0),
      bVar2)) &&
     (bVar2 = Gisketch_Aottg2UI_Actions_GisketchFormState__IsDirty
                        ((instance->fields)._ContentRoot_k__BackingField,(MethodInfo *)0x0), bVar2)) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowUnsavedChanges(__this,instance,method_00);
    return true;
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance(__this,instance,restoreFocus,true,in_R8);
  return true;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CloseTopForced
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTopForced (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, bool restoreFocus, const MethodInfo* method);
// 0x5357da0

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTopForced
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,bool restoreFocus,
               MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07542959 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
    Il2CppMethodInitialized_07542959 = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (__this_00->fields)._size;
  if (0 < iVar1) {
    instance = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,iVar1 + -1,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                         );
    if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
                (__this,instance,restoreFocus,true,in_R8);
      return true;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CloseDialog
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, bool restoreFocus, const MethodInfo* method);
// 0x5357e30

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
               bool restoreFocus,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  undefined7 in_register_00000011;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  
  instance = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog
                       (__this,id,(MethodInfo *)CONCAT71(in_register_00000011,restoreFocus));
  if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    if (Il2CppMethodInitialized_0754295a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"gisketch-unsaved-changes");
      Il2CppMethodInitialized_0754295a = '\x01';
    }
    if (((instance->fields).Kind == 0) && ((instance->fields).GuardUnsavedChanges != false)) {
      bVar1 = System_String__op_Inequality((instance->fields).Id,"gisketch-unsaved-changes",(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = Gisketch_Aottg2UI_Actions_GisketchFormState__IsDirty
                          ((instance->fields)._ContentRoot_k__BackingField,(MethodInfo *)0x0);
        if (bVar1) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowUnsavedChanges(__this,instance,method_00);
          goto label_05357e7c;
        }
      }
    }
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance(__this,instance,restoreFocus,true,in_R8);
  }
label_05357e7c:
  return instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CloseDialogForced
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialogForced (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, bool restoreFocus, const MethodInfo* method);
// 0x5357ed0

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialogForced
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
               bool restoreFocus,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  undefined7 in_register_00000011;
  MethodInfo *in_R8;
  
  instance = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog
                       (__this,id,(MethodInfo *)CONCAT71(in_register_00000011,restoreFocus));
  if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance(__this,instance,restoreFocus,true,in_R8);
  }
  return instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$DiscardPendingUnsavedChanges
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DiscardPendingUnsavedChanges (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x5357f10
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5357f28: cmp byte ptr [rip + 0x21eaa2a], 0
// asm:   0x5357f2f: je 0x5358019

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DiscardPendingUnsavedChanges
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  UnityEngine_Object_o *x;
  System_String_o *overlayId;
  UnityEngine_GameObject_o *source;
  bool bVar2;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar3;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_0754294f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"gisketch-unsaved-changes");
    Il2CppMethodInitialized_0754294f = '\x01';
  }
  if (Il2CppMethodInitialized_07542959 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
    Il2CppMethodInitialized_07542959 = '\x01';
    __this_00 = (__this->fields)._stack;
  }
  else {
    __this_00 = (__this->fields)._stack;
  }
  if (__this_00 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (__this_00->fields)._size;
  if (((0 < iVar1) &&
      (pGVar3 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,iVar1 + -1,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                          ),
      pGVar3 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)) &&
     (bVar2 = System_String__op_Equality((pGVar3->fields).Id,"gisketch-unsaved-changes",(MethodInfo *)0x0), bVar2))
  {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance(__this,pGVar3,false,true,in_R8);
  }
  pGVar3 = (__this->fields)._pendingUnsavedClose;
  (__this->fields)._pendingUnsavedClose =
       (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingUnsavedClose);
  if (pGVar3 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    x = (UnityEngine_Object_o *)(pGVar3->fields).Host;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      overlayId = (pGVar3->fields).Id;
      source = (pGVar3->fields)._ContentRoot_k__BackingField;
      if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions);
      }
      Gisketch_Aottg2UI_Actions_GisketchFormDiscardActions__Invoke(overlayId,source,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance(__this,pGVar3,true,true,in_R8);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CloseAll
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseAll (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x53580a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53580d8: lea r14, [rip + 0x1f40341]  ; MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
// asm:   0x53580df: nop 

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseAll
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07542950 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
    Il2CppMethodInitialized_07542950 = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  while( true ) {
    if (__this_00 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) break;
    instance = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,iVar1 + -1,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                         );
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance(__this,instance,false,false,in_R8);
    __this_00 = (__this->fields)._stack;
  }
  (__this->fields)._pendingUnsavedClose =
       (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
  method_00 = (MethodInfo *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingUnsavedClose);
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected((UnityEngine_UI_Selectable_o *)0x0,method_00)
  ;
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Clear
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Clear (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x5358140
// eh: try 0x5358213..0x535826d -> pad 0x5358276 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x535828e..0x5358293 -> pad 0x53582b2 cleanup
// eh: try 0x53582b5..0x53582bf -> pad 0x53582c7 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x535820e: nop 
// asm:   0x5358272: jmp 0x5358276
// asm:   0x5358274: jmp 0x5358276
// asm:   0x5358276: mov r14, rax
// asm:   0x5358279: cmp edx, 1
// asm:   0x535827c: jne 0x53582b5
// asm:   0x535827e: mov rdi, r14
// asm:   0x5358281: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5358286: mov rbx, qword ptr [rax]
// asm:   0x5358289: mov qword ptr [rsp + 0x20], rbx
// asm:   0x535828e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5358293: lea rax, [rip + 0x1f3802e]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_GisketchOverlayManager_O
// asm:   0x535829a: mov rsi, qword ptr [rax]
// asm:   0x535829d: mov rdi, rsp
// asm:   0x53582a0: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x53582a5: test rbx, rbx
// asm:   0x53582a8: je 0x5358246
// asm:   0x53582aa: mov rdi, rbx
// asm:   0x53582ad: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x53582b2: mov r14, rax
// asm:   0x53582b5: lea rdi, [rsp + 0x20]
// asm:   0x53582ba: call 0x2d4ad00  ; il2cpp_runtime_helper_02d4ad00()
// asm:   0x53582bf: mov rdi, r14
// asm:   0x53582c2: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x53582c7: mov rdi, rax
// asm:   0x53582ca: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Clear
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  undefined8 local_28;
  undefined1 *local_20;
  
  if (Il2CppMethodInitialized_07542951 == '\0') {
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
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_GisketchOverlayManager_O_71902d0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_GisketchOverlayManager_O_71902d8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_GisketchOverlayManager_OverlayInsta
              );
    Il2CppMethodInitialized_07542951 = '\x01';
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentValue = (Il2CppObject *)0x0;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseAll(__this,method);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cached;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_00 = System_Collections_Generic_Dictionary_object__object___get_Values
                          (pSVar1,(MethodInfo_4AAD2A0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_get_Values
                          );
    if (__this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                (&local_48,__this_00,
                 (MethodInfo_43F93D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_GisketchOverlayManager_OverlayInsta
                );
      local_28 = 0;
      local_20 = (undefined1 *)&local_48;
      while( true ) {
        method_00 = 
        MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_GisketchOverlayManager_O_71902d0
        ;
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          (&local_48,
                           (MethodInfo_4CE7200 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_GisketchOverlayManager_O_71902d0
                          );
        if (!bVar2) break;
        if (local_48.fields._currentValue == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DestroyObject
                  ((UnityEngine_GameObject_o *)local_48.fields._currentValue[2].klass,method_00);
      }
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                (&local_48,
                 (MethodInfo_4CE71F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_GisketchOverlayManager_O
                );
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cached;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Clear
                  (pSVar1,(MethodInfo_4AAD690 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_Clear
                  );
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FocusTopFromNavigation
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FocusTopFromNavigation (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x53582d0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FocusTopFromNavigation
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  bool bVar2;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  uint index;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542959 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
    Il2CppMethodInitialized_07542959 = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (__this_00->fields)._size;
  if (0 < iVar1) {
    index = iVar1 - 1;
    method_00 = (MethodInfo *)(ulong)index;
    instance = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                         );
    if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
      bVar2 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ContainsSelected(instance,method_00);
      if (!bVar2) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(instance,method_00);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowOverlay
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* overlay, UnityEngine_GameObject_o* anchor, int32_t kind, bool focusOnOpen, bool forceBelow, bool matchAnchorWidth, float popoverGap, bool animate, const MethodInfo* method);
// 0x5356130
// eh: try 0x5356264..0x53562c1 -> pad 0x53562df (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x53562f7..0x53562fc -> pad 0x5356318 cleanup
// eh: try 0x535631b..0x5356325 -> pad 0x535632d catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53562dd: jmp 0x53562df
// asm:   0x53562df: mov rbx, rax
// asm:   0x53562e2: cmp edx, 1
// asm:   0x53562e5: jne 0x535631b
// asm:   0x53562e7: mov rdi, rbx
// asm:   0x53562ea: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x53562ef: mov rbx, qword ptr [rax]
// asm:   0x53562f2: mov qword ptr [rsp + 0x20], rbx
// asm:   0x53562f7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x53562fc: lea rdi, [rsp + 0x50]
// asm:   0x5356301: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x5356306: test rbx, rbx
// asm:   0x5356309: jne 0x5356310
// asm:   0x535630b: xor r14d, r14d
// asm:   0x535630e: jmp 0x53562cb
// asm:   0x5356310: mov rdi, rbx
// asm:   0x5356313: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5356318: mov rbx, rax
// asm:   0x535631b: lea rdi, [rsp + 0x20]
// asm:   0x5356320: call 0x2d4ad30  ; il2cpp_runtime_helper_02d4ad30()
// asm:   0x5356325: mov rdi, rbx
// asm:   0x5356328: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x535632d: mov rdi, rax
// asm:   0x5356330: call 0x2ab61e0  ; __clang_call_terminate()

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
          Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay,UnityEngine_GameObject_o *anchor,
          int32_t kind,bool focusOnOpen,bool forceBelow,bool matchAnchorWidth,float popoverGap,bool animate,
          MethodInfo *method)

{
  System_String_o *area;
  UnityEngine_GameObject_o *anchor_00;
  System_String_o *pSVar1;
  MethodInfo *instance;
  MethodInfo *pMVar2;
  System_String_o **ppSVar3;
  undefined4 in_stack_ffffffffffffff58;
  undefined4 in_stack_ffffffffffffff5c;
  MethodInfo *in_stack_ffffffffffffff60;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_88;
  UnityEngine_GameObject_o *local_60;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_58;
  
  local_60 = anchor;
  if (Il2CppMethodInitialized_07542952 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayKind);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"Overlay.ShowOverlay");
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_07542952 = '\x01';
  }
  local_88.fields._area =
       (System_String_o *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayKind;
  local_88.fields._detail = (System_String_o *)0xffffffffffffffff;
  local_88.fields._startMs = CONCAT44(local_88.fields._startMs._4_4_,kind);
  pSVar1 = System_Enum__ToString((System_Enum_o *)&local_88,(MethodInfo *)0x0);
  area = "Overlay.ShowOverlay";
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    ppSVar3 = &"null";
  }
  else {
    ppSVar3 = &(overlay->fields).id;
  }
  pMVar2 = (MethodInfo *)0x0;
  pSVar1 = System_String__Concat_5301f10
                     (pSVar1," ",
                      ((Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *)ppSVar3)->id,
                      (MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  local_88.fields._startMs._0_4_ = 0;
  local_88.fields._startMs._4_2_ = 0;
  local_88.fields._startMs._6_2_ = 0;
  local_88.fields._enabled = false;
  local_88.fields._hotLoop = false;
  local_88.fields._26_6_ = 0;
  local_88.fields._area = (System_String_o *)0x0;
  local_88.fields._detail = (System_String_o *)0x0;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(&local_88,area,pSVar1,pMVar2);
  anchor_00 = local_60;
  local_58.fields._startMs = local_88.fields._startMs;
  local_58.fields._enabled = local_88.fields._enabled;
  local_58.fields._hotLoop = local_88.fields._hotLoop;
  local_58.fields._26_6_ = local_88.fields._26_6_;
  local_58.fields._area = local_88.fields._area;
  local_58.fields._detail = local_88.fields._detail;
  local_88.fields._area = (System_String_o *)0x0;
  local_88.fields._detail = (System_String_o *)&local_58;
  instance = (MethodInfo *)
             Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__GetOrBuildOverlayInstance
                       (__this,overlay,local_60,kind,forceBelow,matchAnchorWidth,popoverGap,
                        (MethodInfo *)CONCAT44(in_stack_ffffffffffffff5c,in_stack_ffffffffffffff58));
  pMVar2 = instance;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OpenInstance
            (__this,(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)instance,anchor_00,
             focusOnOpen,forceBelow,matchAnchorWidth,popoverGap,animate,in_stack_ffffffffffffff60);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_58,pMVar2);
  return (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)instance;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ConfigureHost
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ConfigureHost (Gilzoide_FlexUi_FlexLayout_o* flex, bool modal, const MethodInfo* method);
// 0x53548d0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ConfigureHost
               (Gilzoide_FlexUi_FlexLayout_o *flex,bool modal,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGValue_o GVar1;
  
  if (Il2CppMethodInitialized_07542953 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    Il2CppMethodInitialized_07542953 = '\x01';
  }
  if (flex == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
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


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$OverlayName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OverlayName (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* overlay, const MethodInfo* method);
// 0x5354710

System_String_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OverlayName
          (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay,MethodInfo *method)

{
  bool bVar1;
  System_String_o **ppSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07542954 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG ");
    il2cpp_codegen_initialize_runtime_metadata(&"Popover");
    il2cpp_codegen_initialize_runtime_metadata(&"Dialog");
    Il2CppMethodInitialized_07542954 = '\x01';
  }
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((overlay->fields).modal == false) {
    ppSVar2 = &"Popover";
  }
  else {
    ppSVar2 = &"Dialog";
  }
  pSVar3 = *ppSVar2;
  bVar1 = System_String__IsNullOrEmpty((overlay->fields).id,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar3 = System_String__Concat_52f0320("AoTTG ",pSVar3,(MethodInfo *)0x0);
    return pSVar3;
  }
  pSVar3 = System_String__Concat_5302810
                     ("AoTTG ",pSVar3," ",(overlay->fields).id,
                      (MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$AddBackdrop
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AddBackdrop (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, UnityEngine_Transform_o* parent, bool dismiss, UnityEngine_Color_o color, const MethodInfo* method);
// 0x5354990

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AddBackdrop
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,UnityEngine_Transform_o *parent,
               bool dismiss,UnityEngine_Color_o color,MethodInfo *method)

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
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542955 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_AddBackdrop_b__48_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Backdrop");
    Il2CppMethodInitialized_07542955 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this_01,"AoTTG Backdrop",components,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      __this_02 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510(__this_02,parent,false,(MethodInfo *)0x0);
        method_00 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
        rect = UnityEngine_GameObject__GetComponent_object_
                         (__this_01,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Stretch(rect,method_00);
        pUVar2 = UnityEngine_GameObject__AddComponent_object_
                           (__this_01,
                            (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
        if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
          (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                    (pUVar2,color,(pUVar2->klass->vtable)._23_set_color.method);
          if (!dismiss) {
            return;
          }
          __this_03 = UnityEngine_GameObject__AddComponent_object_
                                (__this_01,
                                 (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Button);
          if (__this_03 != (UnityEngine_UI_Button_o *)0x0) {
            UnityEngine_UI_Selectable__set_transition
                      ((UnityEngine_UI_Selectable_o *)__this_03,0,(MethodInfo *)0x0);
            __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this_03->fields).m_OnClick;
            __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      (__this_04,(Il2CppObject *)__this,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_AddBackdrop_b__48_0,
                       (MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_04,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x53547d0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Stretch
               (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  if (rect == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_RectTransform__set_anchorMin
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07542885 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07542885 = '\x01';
  }
  UnityEngine_RectTransform__set_anchorMax
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMin
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMax
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FindDialog
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, const MethodInfo* method);
// 0x5356450
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53564a9: lea r13, [rip + 0x1f41f70]  ; MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
// asm:   0x53564b0: jmp 0x53564d4
// asm:   0x53564c2: nop word ptr cs:[rax + rax]
// asm:   0x53564d0: dec ebp
// asm:   0x53564d2: js 0x5356526

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,MethodInfo *method)

{
  int index;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *pSVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar3;
  
  if (Il2CppMethodInitialized_07542956 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542956 = '\x01';
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
                   System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar1,index,
                              (MethodInfo_395CF20 *)
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
// 0x5358430

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__GetOrBuildOverlayInstance
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
          Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay,UnityEngine_GameObject_o *anchor,
          int32_t kind,bool forceBelow,bool matchAnchorWidth,float popoverGap,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar4;
  System_String_o *str0;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffff88;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *local_60;
  UnityEngine_GameObject_o *local_58;
  System_Enum_o local_50;
  int32_t local_40;
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07542957 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542957 = '\x01';
  }
  local_60 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    pGVar4 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__BuildOverlayInstance
                       (__this,(Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0,anchor,kind,
                        forceBelow,matchAnchorWidth,popoverGap,in_stack_ffffffffffffff88);
    return pGVar4;
  }
  if ((overlay->fields).lifecycle == 1) {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cached;
    local_38 = (overlay->fields).id;
    local_58 = anchor;
    if (Il2CppMethodInitialized_07542958 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayKind);
      il2cpp_codegen_initialize_runtime_metadata(&":");
      Il2CppMethodInitialized_07542958 = '\x01';
    }
    local_50.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayKind;
    local_50.monitor = (void *)0xffffffffffffffff;
    local_40 = kind;
    pSVar3 = System_Enum__ToString(&local_50,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_5301f10(pSVar3,":",local_38,(MethodInfo *)0x0);
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05358691;
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)pSVar3,(Il2CppObject **)&local_60,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_TryGetValue
                      );
    anchor = local_58;
    if ((bVar2) && (local_60 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)) {
      x = (UnityEngine_Object_o *)(local_60->fields).Host;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      method_00 = (MethodInfo *)0x0;
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      anchor = local_58;
      if (bVar2) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ResetCachedInstance(local_60,method_00);
        return local_60;
      }
    }
  }
  pGVar4 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__BuildOverlayInstance
                     (__this,overlay,anchor,kind,forceBelow,matchAnchorWidth,popoverGap,
                      in_stack_ffffffffffffff88);
  if (((overlay->fields).lifecycle == 1) &&
     (pGVar4 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)) {
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cached;
    pSVar3 = (overlay->fields).id;
    if (Il2CppMethodInitialized_07542958 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayKind);
      il2cpp_codegen_initialize_runtime_metadata(&":");
      Il2CppMethodInitialized_07542958 = '\x01';
    }
    local_50.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayKind;
    local_50.monitor = (void *)0xffffffffffffffff;
    local_40 = kind;
    str0 = System_Enum__ToString(&local_50,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_5301f10(str0,":",pSVar3,(MethodInfo *)0x0);
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05358691:
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar1,(Il2CppObject *)pSVar3,(Il2CppObject *)pGVar4,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_set_Item
              );
  }
  return pGVar4;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CacheKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CacheKey (int32_t kind, System_String_o* id, const MethodInfo* method);
// 0x53586a0

System_String_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CacheKey
          (int32_t kind,System_String_o *id,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o SStack_28;
  int32_t iStack_18;
  
  if (Il2CppMethodInitialized_07542958 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayKind);
    il2cpp_codegen_initialize_runtime_metadata(&":");
    Il2CppMethodInitialized_07542958 = '\x01';
  }
  SStack_28.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayKind;
  SStack_28.monitor = (void *)0xffffffffffffffff;
  iStack_18 = kind;
  pSVar1 = System_Enum__ToString(&SStack_28,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5301f10(pSVar1,":",id,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Top
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Top (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x53569a0

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Top
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar2;
  
  if (Il2CppMethodInitialized_07542959 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
    Il2CppMethodInitialized_07542959 = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (__this_00->fields)._size;
  if (iVar1 < 1) {
    return (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
  }
  pGVar2 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
           System_Collections_Generic_List_object___get_Item
                     ((System_Collections_Generic_List_object__o *)__this_00,iVar1 + -1,
                      (MethodInfo_395CF20 *)
                      MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                     );
  return pGVar2;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShouldGuardClose
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShouldGuardClose (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, const MethodInfo* method);
// 0x5357c30

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShouldGuardClose
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_0754295a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"gisketch-unsaved-changes");
    Il2CppMethodInitialized_0754295a = '\x01';
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
// 0x5357c90

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowUnsavedChanges
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *pSVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_0754295b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"gisketch-unsaved-changes");
    Il2CppMethodInitialized_0754295b = '\x01';
  }
  (__this->fields)._pendingUnsavedClose = instance;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingUnsavedClose);
  if (Il2CppMethodInitialized_07542959 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
    Il2CppMethodInitialized_07542959 = '\x01';
  }
  pSVar2 = (__this->fields)._stack;
  if (pSVar2 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
label_05357d99:
    ThrowNullReferenceException();
  }
  iVar1 = (pSVar2->fields)._size;
  if ((0 < iVar1) &&
     (pIVar4 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,iVar1 + -1,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                         ), pIVar4 != (Il2CppObject *)0x0)) {
    if (Il2CppMethodInitialized_07542959 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count)
      ;
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
      Il2CppMethodInitialized_07542959 = '\x01';
    }
    pSVar2 = (__this->fields)._stack;
    if (((pSVar2 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) ||
        (iVar1 = (pSVar2->fields)._size, iVar1 < 1)) ||
       (pIVar4 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar2,iVar1 + -1,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                           ), pIVar4 == (Il2CppObject *)0x0)) goto label_05357d99;
    bVar3 = System_String__op_Inequality(pIVar4[1].monitor,"gisketch-unsaved-changes",(MethodInfo *)0x0);
    if (!bVar3) {
      return true;
    }
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog(__this,"gisketch-unsaved-changes",true,in_RCX);
  return true;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ResolveDialog
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ResolveDialog (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, const MethodInfo* method);
// 0x5356710

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ResolveDialog
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,MethodInfo *method)

{
  System_Func_string__GisketchOverlayDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar3;
  undefined1 auVar4 [16];
  
  pGVar2 = (__this->fields)._context;
  if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
label_05356772:
    ThrowNullReferenceException();
  }
  pSVar1 = (pGVar2->fields).DialogResolver;
  if (pSVar1 != (System_Func_string__GisketchOverlayDefinition__o *)0x0) {
    auVar4 = (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,id,(pSVar1->fields).method);
    method = auVar4._8_8_;
    if (auVar4._0_8_ != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
      return auVar4._0_8_;
    }
    pGVar2 = (__this->fields)._context;
    if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_05356772;
  }
  __this_00 = (pGVar2->fields).Manifest;
  if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
    return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
  }
  pGVar3 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindDialog(__this_00,id,method);
  return pGVar3;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CloseInstance
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, bool restoreFocus, bool animate, const MethodInfo* method);
// 0x5355f20

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,bool restoreFocus
               ,bool animate,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o **ppGVar1;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  bool bVar2;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass57_0_o *__this_01;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *__this_02;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar3;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar4;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o **targetAddress;
  
  if (Il2CppMethodInitialized_0754295c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_DG_Tweening_TweenCallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_c__DisplayClass57_0_CloseInstance_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_c__DisplayClass57_0);
    Il2CppMethodInitialized_0754295c = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_c__DisplayClass57_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass57_0_o *)0x0)
  goto label_05356117;
  targetAddress = &(__this_01->fields).instance;
  (__this_01->fields).instance = instance;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pGVar4 = (__this_01->fields).instance;
  if (pGVar4 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0)
  goto label_05356117;
  System_Collections_Generic_List_object___Remove
            ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pGVar4,
             (MethodInfo_395ED70 *)
             MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_Remove);
  pGVar4 = *targetAddress;
  if ((__this->fields)._activePopover == pGVar4) {
    ppGVar1 = &(__this->fields)._activePopover;
    *ppGVar1 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
    Il2CppCodeGenWriteBarrier(ppGVar1);
    pGVar4 = *targetAddress;
    pMVar3 = extraout_RDX_01;
    if ((__this->fields)._pendingUnsavedClose == pGVar4) goto label_053560d8;
  }
  else {
    pMVar3 = extraout_RDX;
    if ((__this->fields)._pendingUnsavedClose == pGVar4) {
label_053560d8:
      ppGVar1 = &(__this->fields)._pendingUnsavedClose;
      *ppGVar1 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
      Il2CppCodeGenWriteBarrier(ppGVar1);
      pGVar4 = *targetAddress;
      pMVar3 = extraout_RDX_02;
    }
  }
  bVar2 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__IsCached(__this,pGVar4,pMVar3);
  (__this_01->fields).cache = bVar2;
  if (animate) {
    if (*targetAddress == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)
    goto label_05356117;
    view = ((*targetAddress)->fields).View;
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    }
    t = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit(view,(MethodInfo *)0x0);
  }
  else {
    t = (DG_Tweening_Tween_o *)0x0;
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_DG_Tweening_TweenCallback);
  DG_Tweening_TweenCallback___ctor
            (__this_02,(Il2CppObject *)__this_01,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_c__DisplayClass57_0_CloseInstance_b__0
             ,(MethodInfo *)0x0);
  if (t == (DG_Tweening_Tween_o *)0x0) {
    if (__this_02 == (DG_Tweening_TweenCallback_o *)0x0) {
label_05356117:
      ThrowNullReferenceException();
    }
    (*(code *)(__this_02->fields).invoke_impl)((__this_02->fields).method_code,(__this_02->fields).method);
    pMVar3 = extraout_RDX_03;
  }
  else {
    DG_Tweening_TweenSettingsExtensions__OnComplete_object_
              ((Il2CppObject *)t,__this_02,
               (MethodInfo_36AF8A0 *)MethodInfo_DG_Tweening_TweenSettingsExtensions_OnComplete_Tween);
    pMVar3 = extraout_RDX_00;
  }
  if (restoreFocus) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FocusAfterClose(__this,*targetAddress,pMVar3);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$IsCached
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__IsCached (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, const MethodInfo* method);
// 0x5358950

bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__IsCached
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  System_String_o *str0;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *local_40;
  System_Enum_o local_38;
  int32_t local_28;
  
  if (Il2CppMethodInitialized_0754295d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_TryGetValue
              );
    Il2CppMethodInitialized_0754295d = '\x01';
  }
  local_40 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
  if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._cached;
    iVar1 = (instance->fields).Kind;
    pSVar3 = (instance->fields).Id;
    if (Il2CppMethodInitialized_07542958 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayKind);
      il2cpp_codegen_initialize_runtime_metadata(&":");
      Il2CppMethodInitialized_07542958 = '\x01';
    }
    local_38.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayKind;
    local_38.monitor = (void *)0xffffffffffffffff;
    local_28 = iVar1;
    str0 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_5301f10(str0,":",pSVar3,(MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)pSVar3,(Il2CppObject **)&local_40,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchOverlayManager_OverlayInstance_TryGetValue
                      );
    if (bVar2) {
      return local_40 == instance;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$HideCachedInstance
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__HideCachedInstance (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, const MethodInfo* method);
// 0x5358ae0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__HideCachedInstance
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  UnityEngine_GameObject_o *pUVar1;
  bool bVar2;
  UnityEngine_CanvasGroup_o *__this;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_0754295e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754295e = '\x01';
  }
  if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    x = (UnityEngine_Object_o *)(instance->fields).Host;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      view = (instance->fields).View;
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      }
      Gisketch_Aottg2UI_Tweening_GisketchMotion__ResetViewToRest(view,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Actions_GisketchFormState__Reset
                ((instance->fields)._ContentRoot_k__BackingField,(MethodInfo *)0x0);
      method_01 = (MethodInfo *)0x1;
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetInputLocked
                ((instance->fields).Host,true,method_00);
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ClearSelectedIfInside
                ((instance->fields)._ContentRoot_k__BackingField,method_01);
      pUVar1 = (instance->fields).Host;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        __this = UnityEngine_GameObject__GetComponent_object_
                           (pUVar1,(MethodInfo_353B730 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if (__this == (UnityEngine_CanvasGroup_o *)0x0) goto label_05358c16;
          UnityEngine_CanvasGroup__set_alpha(__this,1.0,(MethodInfo *)0x0);
        }
        pUVar1 = (instance->fields).Host;
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
          return;
        }
      }
label_05358c16:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ResetCachedInstance
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ResetCachedInstance (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, const MethodInfo* method);
// 0x5358720

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ResetCachedInstance
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar1;
  bool bVar2;
  UnityEngine_CanvasGroup_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754295f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754295f = '\x01';
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
                           (pUVar1,(MethodInfo_353B730 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if (__this == (UnityEngine_CanvasGroup_o *)0x0) goto label_0535881b;
          UnityEngine_CanvasGroup__set_alpha(__this,1.0,(MethodInfo *)0x0);
        }
        pUVar1 = (instance->fields).Host;
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar1,true,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetInputLocked
                    ((instance->fields).Host,false,method_00);
          return;
        }
      }
label_0535881b:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$SetInputLocked
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetInputLocked (UnityEngine_GameObject_o* root, bool locked, const MethodInfo* method);
// 0x5358c20

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetInputLocked
               (UnityEngine_GameObject_o *root,bool locked,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_CanvasGroup_o *__this;
  
  if (Il2CppMethodInitialized_07542960 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542960 = '\x01';
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
                       (root,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup)
    ;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      __this = UnityEngine_GameObject__AddComponent_object_
                         (root,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
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
// 0x5358d20

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ClearSelectedIfInside
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *__this;
  UnityEngine_Transform_o *parent;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_Object_c **method_00;
  
  method_00 = (UnityEngine_Object_c **)root;
  if (Il2CppMethodInitialized_07542961 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    method_00 = &TypeInfo_UnityEngine_Object;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542961 = '\x01';
  }
  x = (UnityEngine_Object_o *)
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected((MethodInfo *)method_00);
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
          UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_6d01480
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
// 0x5358a50

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FocusAfterClose
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *closed,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542959 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item);
    Il2CppMethodInitialized_07542959 = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    uVar1 = (__this_00->fields)._size;
    method_00 = (MethodInfo *)(ulong)uVar1;
    if (0 < (int)uVar1) {
      method_00 = (MethodInfo *)(ulong)(uVar1 - 1);
      instance = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,uVar1 - 1,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Item
                           );
      if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(instance,method_00);
        return;
      }
    }
    if (closed != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Restore
                ((closed->fields)._PreviousSelected_k__BackingField,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Focus
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Focus (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, bool focus, const MethodInfo* method);
// 0x5355530

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Focus
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,bool focus,
               MethodInfo *method)

{
  undefined3 in_register_00000031;
  undefined4 in_register_00000034;
  
  if (CONCAT31(in_register_00000031,focus) == 0) {
    return;
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus
            (instance,(MethodInfo *)CONCAT44(in_register_00000034,CONCAT31(in_register_00000031,focus)));
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ContainsSelected
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ContainsSelected (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, const MethodInfo* method);
// 0x5358350

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
  UnityEngine_Object_c **method_00;
  
  method_00 = (UnityEngine_Object_c **)instance;
  if (g_data_07542962 == '\0') {
    method_00 = &TypeInfo_UnityEngine_Object;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    g_data_07542962 = '\x01';
  }
  x_00 = (UnityEngine_Object_o *)
         Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected((MethodInfo *)method_00);
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
// 0x5356d60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5356e71: jmp 0x5356e76
// asm:   0x5356e73: xor r12d, r12d

UnityEngine_UI_Selectable_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstSelectable
          (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Selectable_o *x;
  bool bVar2;
  System_Object_array *pSVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (Il2CppMethodInitialized_07542963 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Selectable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542963 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((root == (UnityEngine_GameObject_o *)0x0) ||
       (pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object_
                           (root,false,
                            (MethodInfo_353C0B0 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Selectable),
       pSVar3 == (System_Object_array *)0x0)) {
label_05356e8a:
      ThrowNullReferenceException();
    }
    if (0 < (int)pSVar3->max_length) {
      uVar4 = pSVar3->max_length & 0xffffffff;
      uVar5 = 0;
      do {
        if (uVar4 <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        x = (UnityEngine_UI_Selectable_o *)pSVar3->m_Items[uVar5];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if (x == (UnityEngine_UI_Selectable_o *)0x0) goto label_05356e8a;
          bVar2 = (*(x->klass->vtable)._9_IsActive.methodPtr)(x,(x->klass->vtable)._9_IsActive.method);
          if ((bVar2) &&
             (bVar2 = (*(x->klass->vtable)._24_IsInteractable.methodPtr)
                                (x,(x->klass->vtable)._24_IsInteractable.method), bVar2)) {
            return x;
          }
        }
        uVar5 = uVar5 + 1;
        uVar1 = (uint)pSVar3->max_length;
        uVar4 = (ulong)uVar1;
      } while ((long)uVar5 < (long)(int)uVar1);
    }
  }
  return (UnityEngine_UI_Selectable_o *)0x0;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Restore
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Restore (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x5358e70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5358f43: jmp 0x5358f47

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Restore
               (UnityEngine_GameObject_o *go,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Selectable_o *x;
  UnityEngine_UI_Selectable_o *selectable;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542964 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Selectable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542964 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  x = (UnityEngine_UI_Selectable_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (go == (UnityEngine_GameObject_o *)0x0) goto label_05358f54;
    x = UnityEngine_GameObject__GetComponent_object_
                  (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Selectable);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  selectable = (UnityEngine_UI_Selectable_o *)0x0;
  if (bVar1) {
    if (x == (UnityEngine_UI_Selectable_o *)0x0) {
label_05358f54:
      ThrowNullReferenceException();
    }
    method_00 = (x->klass->vtable)._9_IsActive.method;
    bVar1 = (*(x->klass->vtable)._9_IsActive.methodPtr)(x,method_00);
    if (bVar1) {
      method_00 = (x->klass->vtable)._24_IsInteractable.method;
      bVar1 = (*(x->klass->vtable)._24_IsInteractable.methodPtr)(x,method_00);
      selectable = (UnityEngine_UI_Selectable_o *)0x0;
      if (bVar1) {
        selectable = x;
      }
    }
    else {
      selectable = (UnityEngine_UI_Selectable_o *)0x0;
    }
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected(selectable,method_00);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CurrentSelected
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected (const MethodInfo* method);
// 0x5355470

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  if (Il2CppMethodInitialized_07542965 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542965 = '\x01';
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar3 = (UnityEngine_GameObject_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar3 = (pUVar2->fields).m_CurrentSelected;
  }
  return pUVar3;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$SetSelected
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected (UnityEngine_UI_Selectable_o* selectable, const MethodInfo* method);
// 0x5356c10

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected
               (UnityEngine_UI_Selectable_o *selectable,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  if (Il2CppMethodInitialized_07542966 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542966 = '\x01';
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
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar3 = (UnityEngine_GameObject_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)selectable,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (selectable == (UnityEngine_UI_Selectable_o *)0x0) goto label_05356d54;
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selectable,(MethodInfo *)0x0);
  }
  if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
label_05356d54:
    ThrowNullReferenceException();
  }
  UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_6d01480(pUVar2,pUVar3,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar3 = (UnityEngine_GameObject_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)selectable,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (selectable == (UnityEngine_UI_Selectable_o *)0x0) goto label_05356d54;
    pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selectable,(MethodInfo *)0x0);
  }
  Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(pUVar3,12.0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$DestroyObject
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DestroyObject (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x5356780

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DestroyObject
               (UnityEngine_GameObject_o *go,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07542967 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542967 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  if (bVar2) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)go,(MethodInfo *)0x0);
    return;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  UnityEngine_Object__DestroyImmediate_6921750((UnityEngine_Object_o *)go,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$<AddBackdrop>b__48_0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___AddBackdrop_b__48_0 (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x5358f60

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___AddBackdrop_b__48_0
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07542968 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Il2CppMethodInitialized_07542968 = '\x01';
    in_RDX = extraout_RDX;
  }
  bVar1 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this,true,in_RDX);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
      Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(1,(MethodInfo *)0x0);
      return;
    }
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(1,(MethodInfo *)0x0);
    return;
  }
  return;
}


