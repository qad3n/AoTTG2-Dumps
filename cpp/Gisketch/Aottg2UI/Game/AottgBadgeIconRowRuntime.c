// Type: Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgBadgeIconRowRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27___ctor (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x1808e2870

void
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27___ctor(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, int32_t __1__state, MethodInfo* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x181e0c010
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e0c07b: jmp 0x181e0c091
// asm:   0x181e0c07d: lea rcx, [rsp + 0x30]
// asm:   0x181e0c082: call 0x181deff50  ; il2cpp_runtime_helper_181deff50()
// asm:   0x181e0c087: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e0c08c: test rcx, rcx
// asm:   0x181e0c08f: jne 0x181e0c097
// asm:   0x181e0c097: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 1)) {
    if (Il2CppMethodInitialized_184344b51 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_184344b51 = '\x01';
    }
    (__this->fields).__1__state = -1;
    if ((__this->fields).__7__wrap1 != (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
      InterfaceInvoker0_Invoke
                (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields).__7__wrap1);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__MoveNext (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x181e0bca0
// eh: try 0x181e0bd02..0x181e0bf18 -> pad 0x183315930 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e0bee8: mov rbx, qword ptr [rsp + 0x28]
// asm:   0x181e0beed: test rbx, rbx
// asm:   0x181e0bef0: jne 0x181e0bf18
// asm:   0x181e0bef2: movzx eax, byte ptr [rsp + 0x60]
// asm:   0x181e0bf18: lea rcx, [rsp + 0x30]
// asm:   0x181e0bf1d: call 0x181deff40  ; il2cpp_runtime_helper_181deff40()
// asm:   0x181e0bf22: mov rcx, rbx
// asm:   0x181e0bf25: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__MoveNext
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_IEnumerator_JSONNode__o *value;
  void *pvVar5;
  longlong *plVar6;
  System_String_o *pSVar7;
  
  if (Il2CppMethodInitialized_184344b50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184344b50 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    pSVar2 = (__this->fields).badges;
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      return false;
    }
    pSVar2 = (__this->fields).badges;
    if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = (Il2CppObject *)
             (*(pSVar2->klass->vtable)._27_get_Children.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._27_get_Children.method);
    if (pIVar4 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    value = InterfaceInvoker0_Invoke
                      (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,pIVar4);
    (__this->fields).__7__wrap1 = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__7__wrap1,value);
  }
  else if (iVar1 != 1) {
    return false;
  }
  (__this->fields).__1__state = -3;
  while( true ) {
    pIVar4 = (Il2CppObject *)(__this->fields).__7__wrap1;
    if (pIVar4 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar5 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar4);
    if ((char)pvVar5 == '\0') {
      if (Il2CppMethodInitialized_184344b51 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
        Il2CppMethodInitialized_184344b51 = '\x01';
      }
      (__this->fields).__1__state = -1;
      if ((__this->fields).__7__wrap1 != (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
        InterfaceInvoker0_Invoke
                  (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields).__7__wrap1);
      }
      (__this->fields).__7__wrap1 = (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__7__wrap1,(void *)0x0);
      return false;
    }
    pIVar4 = (Il2CppObject *)(__this->fields).__7__wrap1;
    if (pIVar4 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    plVar6 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,pIVar4);
    if (plVar6 == (longlong *)0x0) break;
    pSVar7 = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6);
    bVar3 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
    if (!bVar3) {
      pSVar7 = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
      (__this->fields).__2__current = pSVar7;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pSVar7);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$<>m__Finally1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27____m__Finally1 (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x181e0c0a0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27____m__Finally1
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344b51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_184344b51 = '\x01';
  }
  (__this->fields).__1__state = -1;
  if ((__this->fields).__7__wrap1 != (System_Collections_Generic_IEnumerator_JSONNode__o *)0x0) {
    InterfaceInvoker0_Invoke
              (0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)(__this->fields).__7__wrap1);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.Collections.Generic.IEnumerator<System.String>.get_Current
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_Generic_IEnumerator_System_String__get_Current (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x180573e90

System_String_o*
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_Generic_IEnumerator_System_String__get_Current(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x181e0bfd0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_BadgeIds_d__27_System_Collections_IEnumerator_Re
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.Collections.Generic.IEnumerable<System.String>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_string__o* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_Generic_IEnumerable_System_String__GetEnumerator (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x181e0bf30

System_Collections_Generic_IEnumerator_string__o*
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_Generic_IEnumerable_System_String__GetEnumerator(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, MethodInfo* method)

{
  int iVar1;
  SimpleJSONFixed_JSONNode_o *value;
  int32_t iVar2;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this_00;
  
  if (Il2CppMethodInitialized_184344b52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_BadgeIds_d__27);
    Il2CppMethodInitialized_184344b52 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_181e0bfa3;
    }
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_BadgeIds_d__27);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
label_181e0bfa3:
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *)0x0) {
    value = (__this->fields).__3__badges;
    (__this_00->fields).badges = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).badges,value);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime.<BadgeIds>d__27$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_IEnumerable_GetEnumerator (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o* __this, const MethodInfo* method);
// 0x181e0bf30

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27__System_Collections_IEnumerable_GetEnumerator
          (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONNode_o *value;
  int32_t iVar2;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this_00;
  
  if (Il2CppMethodInitialized_184344b52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_BadgeIds_d__27);
    Il2CppMethodInitialized_184344b52 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      __this_00 = __this;
      goto label_181e0bfa3;
    }
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_BadgeIds_d__27);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
label_181e0bfa3:
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *)0x0) {
    value = (__this->fields).__3__badges;
    (__this_00->fields).badges = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).badges,value);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$get_HasBadges
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__get_HasBadges (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x181ad8260

bool
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__get_HasBadges(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, MethodInfo* method)

{
  return (__this->fields)._HasBadges_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$set_HasBadges
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__set_HasBadges (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, bool value, const MethodInfo* method);
// 0x181d26380

void
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__set_HasBadges(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, bool value, MethodInfo* method)

{
  (__this->fields)._HasBadges_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, float size, float gap, Gisketch_Aottg2UI_State_GisketchUIState_o* state, System_String_o* stateKey, bool controlsActive, const MethodInfo* method);
// 0x181df0d10

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,float size,float gap,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,System_String_o *stateKey,bool controlsActive,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_00;
  UnityEngine_UI_ContentSizeFitter_o *__this_01;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_184344b43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    Il2CppMethodInitialized_184344b43 = '\x01';
  }
  fVar3 = 1.0;
  if (1.0 <= size) {
    fVar3 = size;
  }
  (__this->fields)._state = state;
  (__this->fields)._size = fVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._state,state);
  (__this->fields)._stateKey = stateKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stateKey,stateKey);
  (__this->fields)._controlsActive = controlsActive;
  pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_181df0f72;
  __this_00 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar1,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_HorizontalLayoutGroup);
  if (__this_00 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
    pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_181df0f72;
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (pUVar1,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
    if (__this_00 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) goto label_181df0f72;
  }
  UnityEngine_UI_LayoutGroup__set_childAlignment
            ((UnityEngine_UI_LayoutGroup_o *)__this_00,4,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,true,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,true,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,false,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,false,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_00,gap,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_181df0f72;
  __this_01 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar1,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_ContentSizeFitter);
  if (__this_01 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) {
    pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_181df0f72;
    __this_01 = UnityEngine_GameObject__AddComponent_object_
                          (pUVar1,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_ContentSizeFitter);
    if (__this_01 == (UnityEngine_UI_ContentSizeFitter_o *)0x0) goto label_181df0f72;
  }
  UnityEngine_UI_ContentSizeFitter__set_horizontalFit(__this_01,2,(MethodInfo *)0x0);
  UnityEngine_UI_ContentSizeFitter__set_verticalFit(__this_01,2,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar1,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
label_181df0f31:
      (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
                (pUVar2,(__this->fields)._size,(pUVar2->klass->vtable)._38_set_preferredHeight.method);
      (__this->fields)._setupComplete = true;
      Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Subscribe(__this,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Refresh(__this,(MethodInfo *)0x0);
      return;
    }
    pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__AddComponent_object_
                         (pUVar1,(MethodInfo_6F4D60 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
      if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) goto label_181df0f31;
    }
  }
label_181df0f72:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$SetBadges
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, System_Collections_Generic_IEnumerable_string__o* ids, const MethodInfo* method);
// 0x181df0ab0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,
               System_Collections_Generic_IEnumerable_string__o *ids,MethodInfo *method)

{
  bool bVar1;
  System_String_array *ids_00;
  
  if (Il2CppMethodInitialized_184344b44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_SequenceEqual_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344b44 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    ids_00 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds(ids,(MethodInfo *)0x0);
    if ((__this->fields)._last != (System_String_array *)0x0) {
      bVar1 = System_Linq_Enumerable__SequenceEqual_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields)._last,
                         (System_Collections_Generic_IEnumerable_TSource__o *)ids_00,
                         (MethodInfo_6C4480 *)MethodInfo_System_Linq_Enumerable_SequenceEqual_string);
      if (bVar1) {
        Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetActive
                  (__this,(__this->fields)._HasBadges_k__BackingField,(MethodInfo *)0x0);
        return;
      }
    }
    (__this->fields)._last = ids_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._last,ids_00);
    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Rebuild(__this,ids_00,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$SetFromCharacterInfo
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfo (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, SimpleJSONFixed_JSONNode_o* info, const MethodInfo* method);
// 0x181df0c60

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfo
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,SimpleJSONFixed_JSONNode_o *info,
               MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *badges;
  System_Collections_Generic_IEnumerable_string__o *ids;
  
  if (Il2CppMethodInitialized_184344b45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"badges");
    Il2CppMethodInitialized_184344b45 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(info,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (info == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181df0d08;
    badges = (*(info->klass->vtable)._7_get_Item.methodPtr)(info,(MethodInfo *)"badges");
  }
  else {
    badges = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  ids = Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds
                  ((SimpleJSONFixed_JSONNode_o *)badges,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges(__this,ids,(MethodInfo *)0x0);
    return;
  }
label_181df0d08:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$SetFromCharacterInfoJson
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfoJson (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, System_String_o* json, System_Collections_Generic_IEnumerable_string__o* roles, const MethodInfo* method);
// 0x181df0b80

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfoJson
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,System_String_o *json,
               System_Collections_Generic_IEnumerable_string__o *roles,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *a;
  System_Xml_Schema_XmlSchema_o *requested;
  SimpleJSONFixed_JSONArray_o *badges;
  System_Collections_Generic_IEnumerable_string__o *ids;
  
  if (Il2CppMethodInitialized_184344b46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"badges");
    Il2CppMethodInitialized_184344b46 = '\x01';
  }
  a = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Parse(json,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    requested = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)"badges");
  }
  else {
    requested = (System_Xml_Schema_XmlSchema_o *)0x0;
  }
  badges = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges_1e16050
                     ((SimpleJSONFixed_JSONNode_o *)requested,roles,(MethodInfo *)0x0);
  ids = Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds
                  ((SimpleJSONFixed_JSONNode_o *)badges,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetBadges(__this,ids,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Refresh (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x181df0960

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Refresh
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool bVar1;
  System_String_o *json;
  SimpleJSONFixed_JSONNode_o *info;
  
  if (Il2CppMethodInitialized_184344b47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344b47 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((!bVar1) && ((__this->fields)._setupComplete != false)) &&
     ((__this->fields)._state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    bVar1 = System_String__IsNullOrEmpty((__this->fields)._stateKey,(MethodInfo *)0x0);
    if (!bVar1) {
      __this_00 = (__this->fields)._state;
      if (__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        json = Gisketch_Aottg2UI_State_GisketchUIState__Get
                         (__this_00,(__this->fields)._stateKey,
                          (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
        info = Gisketch_Aottg2UI_Game_AottgPublicProfileHoverState__Parse(json,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetFromCharacterInfo(__this,info,(MethodInfo *)0x0);
        return;
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnEnable (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x181df0590

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnEnable
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Subscribe(__this,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnDisable (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x181df0580

void
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnDisable(Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Unsubscribe(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnDestroy (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x181df0580

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Unsubscribe(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$OnStateChanged
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnStateChanged (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, System_String_o* key, const MethodInfo* method);
// 0x181df05b0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__OnStateChanged
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,System_String_o *key,
               MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344b48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344b48 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) || ((__this->fields)._setupComplete == false)) {
    Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Unsubscribe(__this,(MethodInfo *)0x0);
  }
  else {
    bVar1 = System_String__op_Equality(key,(__this->fields)._stateKey,(MethodInfo *)0x0);
    if (bVar1) {
      Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Refresh(__this,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Rebuild
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Rebuild (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, System_String_array* ids, const MethodInfo* method);
// 0x181df0680
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181df076c: nop dword ptr [rax]
// asm:   0x181df0811: sub ebx, 1
// asm:   0x181df0814: jns 0x181df0770
// asm:   0x181df092a: mov r14, qword ptr [rsp + 0x50]
// asm:   0x181df092f: mov rdi, qword ptr [rsp + 0x48]
// asm:   0x181df0934: mov rbx, qword ptr [rsp + 0x40]
// asm:   0x181df0939: mov r15, qword ptr [rsp + 0x20]

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Rebuild
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,System_String_array *ids,
               MethodInfo *method)

{
  System_String_o *id;
  bool bVar1;
  int iVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Object_o *pUVar4;
  System_String_o *resourcePath;
  UnityEngine_GameObject_o *__this_00;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184344b49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344b49 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (Il2CppMethodInitialized_184344b4c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184344b4c = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_181df0945;
      iVar2 = UnityEngine_Transform__get_childCount(pUVar3,(MethodInfo *)0x0);
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_181df0945;
        pUVar3 = UnityEngine_Transform__GetChild(pUVar3,iVar2,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
        }
        bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_181df0945;
        if (bVar1) {
          pUVar4 = (UnityEngine_Object_o *)
                   UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__Destroy_2f1ff70(pUVar4,(MethodInfo *)0x0);
        }
        else {
          pUVar4 = (UnityEngine_Object_o *)
                   UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          UnityEngine_Object__DestroyImmediate_2f1fb90(pUVar4,(MethodInfo *)0x0);
        }
      }
    }
    if (ids == (System_String_array *)0x0) {
label_181df0945:
      ThrowNullReferenceException();
    }
    iVar2 = 0;
    for (uVar5 = 0; (int)uVar5 < (int)ids->max_length; uVar5 = uVar5 + 1) {
      if ((uint)ids->max_length <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      id = ids->m_Items[(int)uVar5];
      resourcePath = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeIcon(id,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
      }
      pUVar4 = (UnityEngine_Object_o *)
               Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(resourcePath,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__AddIcon
                  (__this,id,(UnityEngine_Sprite_o *)pUVar4,(MethodInfo *)0x0);
        iVar2 = iVar2 + 1;
      }
    }
    bVar1 = Il2CppMethodInitialized_184344b4a == '\0';
    (__this->fields)._HasBadges_k__BackingField = 0 < iVar2;
    if (bVar1) {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184344b4a = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((bVar1) && ((__this->fields)._controlsActive != false)) {
      __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_181df0945;
      UnityEngine_GameObject__SetActive(__this_00,0 < iVar2,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$SetActive
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetActive (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, bool active, const MethodInfo* method);
// 0x181df0a20

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__SetActive
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,bool active,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_184344b4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344b4a = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) && ((__this->fields)._controlsActive != false)) {
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(__this_00,active,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$AddIcon
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__AddIcon (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, System_String_o* id, UnityEngine_Sprite_o* sprite, const MethodInfo* method);
// 0x181deffb0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__AddIcon
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,System_String_o *id,
               UnityEngine_Sprite_o *sprite,MethodInfo *method)

{
  Il2CppType *handle;
  bool bVar1;
  System_String_o *pSVar2;
  System_Type_array *components;
  System_Type_o *pSVar3;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_02;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this_03;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_Color_Fields local_28;
  
  if (Il2CppMethodInitialized_184344b4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Badge ");
    Il2CppMethodInitialized_184344b4b = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pSVar2 = System_String__Concat_1969e50("AoTTG Badge ",id,(MethodInfo *)0x0);
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,4);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_181df0362:
    ThrowNullReferenceException();
  }
  if ((pSVar3 != (System_Type_o *)0x0) &&
     (pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((components->obj).klass)->_1).element_class),
     pIVar4 == (Il2CppObject *)0x0)) {
    pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar3;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar3);
    pSVar3 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if ((pSVar3 != (System_Type_o *)0x0) &&
       (pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar3,(((components->obj).klass)->_1).element_class)
       , pIVar4 == (Il2CppObject *)0x0)) {
      pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar3;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar3);
      pSVar3 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
      if ((pSVar3 != (System_Type_o *)0x0) &&
         (pIVar4 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)pSVar3,(((components->obj).klass)->_1).element_class),
         pIVar4 == (Il2CppObject *)0x0)) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar3;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2,pSVar3);
        pSVar3 = System_Type__GetTypeFromHandle
                           ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_LayoutElement,(MethodInfo *)0x0
                           );
        if ((pSVar3 != (System_Type_o *)0x0) &&
           (pIVar4 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)pSVar3,(((components->obj).klass)->_1).element_class),
           pIVar4 == (Il2CppObject *)0x0)) {
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
        if (3 < (uint)components->max_length) {
          components->m_Items[3] = pSVar3;
          Il2CppCodeGenWriteBarrier(components->m_Items + 3,pSVar3);
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
          UnityEngine_GameObject___ctor_2f1abe0(__this_00,pSVar2,components,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
            __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
            parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            if (__this_01 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_2f5a7e0(__this_01,parent,false,(MethodInfo *)0x0);
              __this_02 = UnityEngine_GameObject__GetComponent_object_
                                    (__this_00,
                                     (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image
                                    );
              if (__this_02 != (UnityEngine_UI_Image_o *)0x0) {
                UnityEngine_UI_Image__set_sprite(__this_02,sprite,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_preserveAspect(__this_02,true,(MethodInfo *)0x0);
                (*(__this_02->klass->vtable)._25_set_raycastTarget.methodPtr)
                          (__this_02,true,(__this_02->klass->vtable)._25_set_raycastTarget.method);
                local_28.r = 1.0;
                local_28.g = 1.0;
                local_28.b = 1.0;
                local_28.a = 1.0;
                (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                          (__this_02,(UnityEngine_Color_o *)&local_28,
                           (__this_02->klass->vtable)._23_set_color.method);
                __this_03 = UnityEngine_GameObject__AddComponent_object_
                                      (__this_00,
                                       (MethodInfo_6F4D60 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_GisketchTooltipTrigger);
                pSVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeLabel
                                   (id,(MethodInfo *)0x0);
                if (__this_03 != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
                  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup
                            (__this_03,pSVar2,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0,
                             (System_String_o *)0x0,(MethodInfo *)0x0);
                  pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                     (__this_00,
                                      (MethodInfo_6F5650 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
                  if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
                    (*(pUVar5->klass->vtable)._36_set_preferredWidth.methodPtr)
                              (pUVar5,(__this->fields)._size,
                               (pUVar5->klass->vtable)._36_set_preferredWidth.method);
                    (*(pUVar5->klass->vtable)._38_set_preferredHeight.methodPtr)
                              (pUVar5,(__this->fields)._size,
                               (pUVar5->klass->vtable)._38_set_preferredHeight.method);
                    return;
                  }
                }
              }
            }
          }
          goto label_181df0362;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Clear
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Clear (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x181df0430
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181df04bd: nop dword ptr [rax]
// asm:   0x181df055d: sub ebx, 1
// asm:   0x181df0560: jns 0x181df04c0
// asm:   0x181df0566: mov rbx, qword ptr [rsp + 0x30]
// asm:   0x181df056b: mov rdi, qword ptr [rsp + 0x38]

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Clear
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  bool bVar1;
  int index;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Object_o *pUVar3;
  
  if (Il2CppMethodInitialized_184344b4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344b4c = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) {
label_181df0576:
      ThrowNullReferenceException();
    }
    index = UnityEngine_Transform__get_childCount(pUVar2,(MethodInfo *)0x0);
    while (index = index + -1, -1 < index) {
      pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_181df0576;
      pUVar2 = UnityEngine_Transform__GetChild(pUVar2,index,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      }
      bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_181df0576;
      if (bVar1) {
        pUVar3 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(pUVar3,(MethodInfo *)0x0);
      }
      else {
        pUVar3 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__DestroyImmediate_2f1fb90(pUVar3,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Subscribe
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Subscribe (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x181df0f80

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Subscribe
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  bool bVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  
  if (Il2CppMethodInitialized_184344b4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_OnStateChanged);
    Il2CppMethodInitialized_184344b4d = '\x01';
  }
  if ((((__this->fields)._setupComplete != false) && ((__this->fields)._subscribed == false)) &&
     ((__this->fields)._state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    bVar1 = System_String__IsNullOrEmpty((__this->fields)._stateKey,(MethodInfo *)0x0);
    if (!bVar1) {
      __this_00 = (__this->fields)._state;
      __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      System_Action_object____ctor
                (__this_01,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_OnStateChanged,
                 (MethodInfo *)0x0);
      if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        ThrowNullReferenceException();
      }
      Gisketch_Aottg2UI_State_GisketchUIState__add_Changed
                (__this_00,(System_Action_string__o *)__this_01,(MethodInfo *)0x0);
      (__this->fields)._subscribed = true;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Unsubscribe
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Unsubscribe (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x181df1040

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Unsubscribe
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  
  if (Il2CppMethodInitialized_184344b4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_OnStateChanged);
    Il2CppMethodInitialized_184344b4e = '\x01';
  }
  if (((__this->fields)._subscribed != false) &&
     ((__this->fields)._state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    __this_00 = (__this->fields)._state;
    __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    System_Action_object____ctor
              (__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_OnStateChanged,
               (MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed
              (__this_00,(System_Action_string__o *)__this_01,(MethodInfo *)0x0);
    (__this->fields)._subscribed = false;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$Parse
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Parse (System_String_o* json, const MethodInfo* method);
// 0x181df0650
// eh: try 0x181df0669..0x181df0679 -> pad 0x183315840 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x183315840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315845: push rbx
// asm:   0x183315846: push rbp
// asm:   0x183315847: sub rsp, 0x28
// asm:   0x18331584b: mov rbp, rdx
// asm:   0x18331584e: mov rbx, qword ptr [rbp + 0x28]
// asm:   0x183315852: mov rdx, qword ptr [rbx]
// asm:   0x183315855: mov rdx, qword ptr [rdx]
// asm:   0x183315858: mov rcx, qword ptr [rip + 0x103f571]
// asm:   0x18331585f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315864: test al, al
// asm:   0x183315866: je 0x183315874
// asm:   0x183315868: movabs rax, 0
// asm:   0x183315872: jmp 0x18331588c
// asm:   0x183315874: mov rax, qword ptr [rbx]
// asm:   0x183315877: mov qword ptr [rbp + 0x20], rax
// asm:   0x18331587b: lea rdx, [rip + 0xcc6706]
// asm:   0x183315882: lea rcx, [rbp + 0x20]
// asm:   0x183315886: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331588c: add rsp, 0x28
// asm:   0x183315890: pop rbp
// asm:   0x183315891: pop rbx
// asm:   0x183315892: ret 

SimpleJSONFixed_JSONNode_o*
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__Parse(System_String_o* json, MethodInfo* method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  bVar1 = System_String__IsNullOrWhiteSpace(json,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  else {
    pSVar2 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$BadgeIds
// il2cpp: System_Collections_Generic_IEnumerable_string__o* Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds (SimpleJSONFixed_JSONNode_o* badges, const MethodInfo* method);
// 0x181df03b0

System_Collections_Generic_IEnumerable_string__o *
Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds
          (SimpleJSONFixed_JSONNode_o *badges,MethodInfo *method)

{
  int32_t iVar1;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime__BadgeIds_d__27_o *__this;
  
  if (Il2CppMethodInitialized_184344b4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_BadgeIds_d__27);
    Il2CppMethodInitialized_184344b4f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_BadgeIds_d__27);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = -2;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  (__this->fields).__3__badges = badges;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__3__badges,badges);
  return (System_Collections_Generic_IEnumerable_string__o *)__this;
}


// Gisketch.Aottg2UI.Game.AottgBadgeIconRowRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime___ctor (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o* __this, const MethodInfo* method);
// 0x181df10e0

void Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgBadgeIconRowRuntime_o *__this,MethodInfo *method)

{
  (__this->fields)._size = 20.0;
  (__this->fields)._controlsActive = true;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


