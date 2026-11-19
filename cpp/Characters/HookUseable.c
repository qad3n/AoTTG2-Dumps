// Type: Characters.HookUseable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/HookUseable.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HookUseable.cs
// --------------------------------

// Characters.HookUseable$$.ctor
// il2cpp: void Characters_HookUseable___ctor (Characters_HookUseable_o* __this, Characters_BaseCharacter_o* owner, bool left, bool gun, const MethodInfo* method);
// 0x5bee0c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bee41b: jmp 0x5bee56e

void Characters_HookUseable___ctor
               (Characters_HookUseable_o *__this,Characters_BaseCharacter_o *owner,bool left,bool gun,
               MethodInfo *method)

{
  System_Collections_Generic_List_Hook__o **targetAddress;
  int32_t *piVar1;
  byte bVar2;
  uint32_t uVar3;
  uint uVar4;
  Characters_Hook_array *pCVar5;
  MethodInfo *pMVar6;
  System_Collections_Generic_List_Hook__o *pSVar7;
  Characters_Hook_o *pCVar8;
  
  if (Il2CppMethodInitialized_07547600 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Hook);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Hook_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Hook_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Hook);
    Il2CppMethodInitialized_07547600 = '\x01';
  }
  (__this->fields).Enabled = true;
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Hook);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar7,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Hook_ctor);
  targetAddress = &(__this->fields).Hooks;
  (__this->fields).Hooks = pSVar7;
  Il2CppCodeGenWriteBarrier(targetAddress);
  Characters_HoldUseable___ctor((Characters_HoldUseable_o *)__this,owner,(MethodInfo *)0x0);
  (__this->fields)._left = left;
  (__this->fields)._hookSpeed = 3.0;
  pSVar7 = (__this->fields).Hooks;
  uVar3 = (TypeInfo_Characters_Hook->_2).cctor_finished_or_no_cctor;
  if (owner == (Characters_BaseCharacter_o *)0x0) {
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_Hook);
    }
    pCVar8 = Characters_Hook__CreateHook((Characters_Human_o *)0x0,left,0,0.8,gun,method);
    pMVar6 = MethodInfo_System_Collections_Generic_List_Hook_Add;
    if (pSVar7 == (System_Collections_Generic_List_Hook__o *)0x0) goto label_05bee56e;
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar5 = (pSVar7->fields)._items;
    if (pCVar5 == (Characters_Hook_array *)0x0) goto label_05bee56e;
    uVar4 = (pSVar7->fields)._size;
    if (uVar4 < (uint)pCVar5->max_length) {
      (pSVar7->fields)._size = uVar4 + 1;
      pCVar5->m_Items[(int)uVar4] = pCVar8;
      Il2CppCodeGenWriteBarrier(pCVar5->m_Items + (int)uVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pCVar8,
                 (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
    }
    pSVar7 = *targetAddress;
    if ((TypeInfo_Characters_Hook->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_Hook);
    }
    pCVar8 = Characters_Hook__CreateHook((Characters_Human_o *)0x0,left,1,0.8,gun,method);
    pMVar6 = MethodInfo_System_Collections_Generic_List_Hook_Add;
    if (pSVar7 == (System_Collections_Generic_List_Hook__o *)0x0) goto label_05bee56e;
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar5 = (pSVar7->fields)._items;
    if (pCVar5 == (Characters_Hook_array *)0x0) goto label_05bee56e;
    uVar4 = (pSVar7->fields)._size;
    if (uVar4 < (uint)pCVar5->max_length) {
      (pSVar7->fields)._size = uVar4 + 1;
      pCVar5->m_Items[(int)uVar4] = pCVar8;
      Il2CppCodeGenWriteBarrier(pCVar5->m_Items + (int)uVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pCVar8,
                 (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
    }
    pSVar7 = *targetAddress;
    if ((TypeInfo_Characters_Hook->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_Hook);
    }
    pCVar8 = Characters_Hook__CreateHook((Characters_Human_o *)0x0,left,2,0.8,gun,method);
    pMVar6 = MethodInfo_System_Collections_Generic_List_Hook_Add;
    if (pSVar7 == (System_Collections_Generic_List_Hook__o *)0x0) goto label_05bee56e;
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar5 = (pSVar7->fields)._items;
  }
  else {
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_Hook);
    }
    bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((owner->klass->_2).typeHierarchyDepth < bVar2) ||
       ((owner->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
label_05bee573:
      il2cpp_codegen_raise_invalid_cast_exception(owner);
    }
    pCVar8 = Characters_Hook__CreateHook((Characters_Human_o *)owner,left,0,0.8,gun,method);
    pMVar6 = MethodInfo_System_Collections_Generic_List_Hook_Add;
    if (pSVar7 == (System_Collections_Generic_List_Hook__o *)0x0) goto label_05bee56e;
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar5 = (pSVar7->fields)._items;
    if (pCVar5 == (Characters_Hook_array *)0x0) goto label_05bee56e;
    uVar4 = (pSVar7->fields)._size;
    if (uVar4 < (uint)pCVar5->max_length) {
      (pSVar7->fields)._size = uVar4 + 1;
      pCVar5->m_Items[(int)uVar4] = pCVar8;
      Il2CppCodeGenWriteBarrier(pCVar5->m_Items + (int)uVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pCVar8,
                 (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
    }
    pSVar7 = *targetAddress;
    if ((TypeInfo_Characters_Hook->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_Hook);
    }
    bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((owner->klass->_2).typeHierarchyDepth < bVar2) ||
       ((owner->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
    goto label_05bee573;
    pCVar8 = Characters_Hook__CreateHook((Characters_Human_o *)owner,left,1,0.8,gun,method);
    pMVar6 = MethodInfo_System_Collections_Generic_List_Hook_Add;
    if (pSVar7 == (System_Collections_Generic_List_Hook__o *)0x0) goto label_05bee56e;
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar5 = (pSVar7->fields)._items;
    if (pCVar5 == (Characters_Hook_array *)0x0) goto label_05bee56e;
    uVar4 = (pSVar7->fields)._size;
    if (uVar4 < (uint)pCVar5->max_length) {
      (pSVar7->fields)._size = uVar4 + 1;
      pCVar5->m_Items[(int)uVar4] = pCVar8;
      Il2CppCodeGenWriteBarrier(pCVar5->m_Items + (int)uVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pCVar8,
                 (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
    }
    pSVar7 = *targetAddress;
    if ((TypeInfo_Characters_Hook->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_Hook);
    }
    bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (((owner->klass->_2).typeHierarchyDepth < bVar2) ||
       ((owner->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
    goto label_05bee573;
    pCVar8 = Characters_Hook__CreateHook((Characters_Human_o *)owner,left,2,0.8,gun,method);
    pMVar6 = MethodInfo_System_Collections_Generic_List_Hook_Add;
    if (pSVar7 == (System_Collections_Generic_List_Hook__o *)0x0) goto label_05bee56e;
    piVar1 = &(pSVar7->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar5 = (pSVar7->fields)._items;
  }
  if (pCVar5 != (Characters_Hook_array *)0x0) {
    uVar4 = (pSVar7->fields)._size;
    if (uVar4 < (uint)pCVar5->max_length) {
      (pSVar7->fields)._size = uVar4 + 1;
      pCVar5->m_Items[(int)uVar4] = pCVar8;
      Il2CppCodeGenWriteBarrier(pCVar5->m_Items + (int)uVar4);
      return;
    }
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pCVar8,
               (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
    return;
  }
label_05bee56e:
  ThrowNullReferenceException();
}


// Characters.HookUseable$$GetRenderers
// il2cpp: System_Collections_Generic_List_Renderer__o* Characters_HookUseable__GetRenderers (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x5bee580
// eh: try 0x5bee68f..0x5bee735 -> pad 0x5bee737 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5bee755..0x5bee75a -> pad 0x5bee779 cleanup
// eh: try 0x5bee77c..0x5bee786 -> pad 0x5bee78e catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bee664: lea r15, [rip + 0x169f7d5]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext
// asm:   0x5bee66b: mov r14, rsp
// asm:   0x5bee66e: lea r12, [rip + 0x16a7dcb]  ; MethodInfo_System_Collections_Generic_List_Renderer_Add
// asm:   0x5bee675: jmp 0x5bee697
// asm:   0x5bee735: jmp 0x5bee73d
// asm:   0x5bee737: jmp 0x5bee73d
// asm:   0x5bee739: jmp 0x5bee73d
// asm:   0x5bee73b: jmp 0x5bee73d
// asm:   0x5bee73d: mov r14, rax
// asm:   0x5bee740: cmp edx, 1
// asm:   0x5bee743: jne 0x5bee77c
// asm:   0x5bee745: mov rdi, r14
// asm:   0x5bee748: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5bee74d: mov r14, qword ptr [rax]
// asm:   0x5bee750: mov qword ptr [rsp + 0x20], r14
// asm:   0x5bee755: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5bee75a: lea rax, [rip + 0x169f6d7]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose
// asm:   0x5bee761: mov rsi, qword ptr [rax]
// asm:   0x5bee764: mov rdi, rsp
// asm:   0x5bee767: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5bee76c: test r14, r14
// asm:   0x5bee76f: je 0x5bee70f
// asm:   0x5bee771: mov rdi, r14
// asm:   0x5bee774: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5bee779: mov r14, rax
// asm:   0x5bee77c: lea rdi, [rsp + 0x20]
// asm:   0x5bee781: call 0x2fd8d70  ; il2cpp_runtime_helper_02fd8d70()
// asm:   0x5bee786: mov rdi, r14
// asm:   0x5bee789: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5bee78e: mov rdi, rax
// asm:   0x5bee791: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_List_Renderer__o *
Characters_HookUseable__GetRenderers(Characters_HookUseable_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_Hook__o *__this_00;
  UnityEngine_Renderer_o *item;
  UnityEngine_Renderer_array *pUVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_Renderer__o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o local_58;
  undefined1 local_38 [16];
  Il2CppObject *local_28;
  
  if (Il2CppMethodInitialized_07547601 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Renderer);
    Il2CppMethodInitialized_07547601 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
  __this_00 = (__this->fields).Hooks;
  if (__this_00 == (System_Collections_Generic_List_Hook__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
             (System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator);
  local_58.fields._current = local_28;
  local_58.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
  local_58.fields._index = local_38._8_4_;
  local_58.fields._version = local_38._12_4_;
  local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_38._8_8_ = &local_58;
  if (__this_01 == (System_Collections_Generic_List_Renderer__o *)0x0) {
    local_38._8_8_ = &local_58;
    bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_58,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext);
    if (bVar5) {
      if (local_58.fields._current != (Il2CppObject *)0x0) {
label_05bee730:
        ThrowNullReferenceException();
      }
label_05bee72b:
      ThrowNullReferenceException();
    }
  }
  else {
    while (bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (&local_58,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext),
          pMVar4 = MethodInfo_System_Collections_Generic_List_Renderer_Add, bVar5) {
      if (local_58.fields._current == (Il2CppObject *)0x0) goto label_05bee72b;
      item = local_58.fields._current[4].monitor;
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (__this_01->fields)._items;
      if (pUVar3 == (UnityEngine_Renderer_array *)0x0) goto label_05bee730;
      uVar2 = (__this_01->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (__this_01->fields)._size = uVar2 + 1;
        pUVar3->m_Items[(int)uVar2] = item;
        Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                   (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            (&local_58,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
  return __this_01;
}


// Characters.HookUseable$$IsHooked
// il2cpp: bool Characters_HookUseable__IsHooked (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x5bee7a0

bool Characters_HookUseable__IsHooked(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07547602 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547602 = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = false;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields)._activeHook;
    if (pCVar1 == (Characters_Hook_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar3 = (pCVar1->fields).State == 2;
  }
  return bVar3;
}


// Characters.HookUseable$$HasHook
// il2cpp: bool Characters_HookUseable__HasHook (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x5bee810

bool Characters_HookUseable__HasHook(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07547603 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547603 = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = false;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields)._activeHook;
    if (pCVar1 == (Characters_Hook_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar3 = (pCVar1->fields).State != 0;
  }
  return bVar3;
}


// Characters.HookUseable$$IsHooking
// il2cpp: bool Characters_HookUseable__IsHooking (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x5bee880

bool Characters_HookUseable__IsHooking(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07547604 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547604 = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = false;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields)._activeHook;
    if (pCVar1 == (Characters_Hook_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar3 = (pCVar1->fields).State == 1;
  }
  return bVar3;
}


// Characters.HookUseable$$IsReady
// il2cpp: bool Characters_HookUseable__IsReady (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x5bee8f0

bool Characters_HookUseable__IsReady(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07547605 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547605 = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar3 = true;
  if (!bVar2) {
    pCVar1 = (__this->fields)._activeHook;
    if (pCVar1 == (Characters_Hook_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar3 = (pCVar1->fields).State == 0;
  }
  return bVar3;
}


// Characters.HookUseable$$GetHookState
// il2cpp: int32_t Characters_HookUseable__GetHookState (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x5bee960

int32_t Characters_HookUseable__GetHookState(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  
  pCVar1 = (__this->fields)._activeHook;
  if (pCVar1 == (Characters_Hook_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).State;
}


// Characters.HookUseable$$GetHookPosition
// il2cpp: UnityEngine_Vector3_o Characters_HookUseable__GetHookPosition (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x5bee980

UnityEngine_Vector3_o
Characters_HookUseable__GetHookPosition(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool bVar2;
  MethodInfo *method_00;
  UnityEngine_Vector3_Fields UVar3;
  
  if (Il2CppMethodInitialized_07547606 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547606 = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields)._activeHook;
    if (pCVar1 == (Characters_Hook_o *)0x0) {
      ThrowNullReferenceException();
    }
    UVar3 = (UnityEngine_Vector3_Fields)Characters_Hook__GetHookPosition(pCVar1,method_00);
    return (UnityEngine_Vector3_o)UVar3;
  }
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  return (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields;
}


// Characters.HookUseable$$GetCLHookPosition
// il2cpp: System_Nullable_Vector3__o Characters_HookUseable__GetCLHookPosition (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x5beea30

System_Nullable_Vector3__o
Characters_HookUseable__GetCLHookPosition(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  System_Nullable_Vector3__Fields SVar2;
  bool bVar3;
  MethodInfo *method_00;
  UnityEngine_Vector3_o value;
  System_Nullable_Vector3__Fields local_28;
  
  if (Il2CppMethodInitialized_07547607 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547607 = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pCVar1 = (__this->fields)._activeHook;
    if (pCVar1 == (Characters_Hook_o *)0x0) {
      ThrowNullReferenceException();
    }
    value = Characters_Hook__GetHookPosition(pCVar1,method_00);
    local_28.hasValue = false;
    local_28._1_3_ = 0;
    local_28.value.fields.x = 0.0;
    local_28.value.fields.y = 0.0;
    local_28.value.fields.z = 0.0;
    System_Nullable_Vector3____ctor
              ((System_Nullable_Vector3__o *)&local_28,value,
               (MethodInfo_3CDCAA0 *)MethodInfo_System_Nullable_Vector3_ctor);
  }
  else {
    local_28.hasValue = false;
    local_28._1_3_ = 0;
    local_28.value.fields.x = 0.0;
    local_28.value.fields.y = 0.0;
    local_28.value.fields.z = 0.0;
  }
  SVar2.value.fields.y = local_28.value.fields.y;
  SVar2.value.fields.z = local_28.value.fields.z;
  SVar2.hasValue = local_28.hasValue;
  SVar2._1_3_ = local_28._1_3_;
  SVar2.value.fields.x = local_28.value.fields.x;
  return (System_Nullable_Vector3__o)SVar2;
}


// Characters.HookUseable$$IsHookOffset
// il2cpp: bool Characters_HookUseable__IsHookOffset (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x5beeae0

bool Characters_HookUseable__IsHookOffset(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07547608 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547608 = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = false;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields)._activeHook;
    if (pCVar1 == (Characters_Hook_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar3 = (pCVar1->fields).HasOffset != false;
  }
  return bVar3;
}


// Characters.HookUseable$$GetHookParent
// il2cpp: UnityEngine_Transform_o* Characters_HookUseable__GetHookParent (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x5beeb50

UnityEngine_Transform_o *
Characters_HookUseable__GetHookParent(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  
  pCVar1 = (__this->fields)._activeHook;
  if (pCVar1 == (Characters_Hook_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).HookParent;
}


// Characters.HookUseable$$GetHookCharacter
// il2cpp: Characters_BaseCharacter_o* Characters_HookUseable__GetHookCharacter (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x5beeb70

Characters_BaseCharacter_o *
Characters_HookUseable__GetHookCharacter(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  
  pCVar1 = (__this->fields)._activeHook;
  if (pCVar1 == (Characters_Hook_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).HookCharacter;
}


// Characters.HookUseable$$DisableActiveHook
// il2cpp: void Characters_HookUseable__DisableActiveHook (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x5beeb90

void Characters_HookUseable__DisableActiveHook(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool bVar2;
  MethodInfo *method_00;
  Characters_Hook_o **targetAddress;
  
  if (Il2CppMethodInitialized_07547609 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547609 = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    targetAddress = &(__this->fields)._activeHook;
    pCVar1 = *targetAddress;
    if (pCVar1 == (Characters_Hook_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pCVar1->fields).State == 2) {
      Characters_Hook__SetHookState(pCVar1,4,method_00);
      *targetAddress = (Characters_Hook_o *)0x0;
      Il2CppCodeGenWriteBarrier(targetAddress);
      return;
    }
  }
  return;
}


// Characters.HookUseable$$DisableAnyHook
// il2cpp: void Characters_HookUseable__DisableAnyHook (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x5beec20

void Characters_HookUseable__DisableAnyHook(Characters_HookUseable_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_Hook_o *pCVar2;
  bool bVar3;
  MethodInfo *method_00;
  Characters_Hook_o **targetAddress;
  int32_t state;
  
  if (Il2CppMethodInitialized_0754760a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754760a = '\x01';
  }
  pCVar2 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._activeHook;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pCVar2 = *targetAddress;
    if (pCVar2 == (Characters_Hook_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar1 = (pCVar2->fields).State;
    if (iVar1 == 2) {
      state = 4;
    }
    else {
      if (iVar1 != 1) goto label_05beec99;
      state = 3;
    }
    Characters_Hook__SetHookState(pCVar2,state,method_00);
  }
label_05beec99:
  *targetAddress = (Characters_Hook_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// Characters.HookUseable$$MoveHookParents
// il2cpp: void Characters_HookUseable__MoveHookParents (Characters_HookUseable_o* __this, UnityEngine_Transform_o* from, UnityEngine_Transform_o* to, const MethodInfo* method);
// 0x5beecc0
// eh: try 0x5beed64..0x5beedaa -> pad 0x5beedb3 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5beedcb..0x5beedd0 -> pad 0x5beedef cleanup
// eh: try 0x5beedf2..0x5beedfc -> pad 0x5beee04 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5beedaf: jmp 0x5beedb3
// asm:   0x5beedb1: jmp 0x5beedb3
// asm:   0x5beedb3: mov rbx, rax
// asm:   0x5beedb6: cmp edx, 1
// asm:   0x5beedb9: jne 0x5beedf2
// asm:   0x5beedbb: mov rdi, rbx
// asm:   0x5beedbe: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5beedc3: mov rbx, qword ptr [rax]
// asm:   0x5beedc6: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5beedcb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5beedd0: lea rax, [rip + 0x169f061]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose
// asm:   0x5beedd7: mov rsi, qword ptr [rax]
// asm:   0x5beedda: mov rdi, rsp
// asm:   0x5beeddd: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5beede2: test rbx, rbx
// asm:   0x5beede5: je 0x5beed99
// asm:   0x5beede7: mov rdi, rbx
// asm:   0x5beedea: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5beedef: mov rbx, rax
// asm:   0x5beedf2: lea rdi, [rsp + 0x18]
// asm:   0x5beedf7: call 0x2fd8da0  ; il2cpp_runtime_helper_02fd8da0()
// asm:   0x5beedfc: mov rdi, rbx
// asm:   0x5beedff: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5beee04: mov rdi, rax
// asm:   0x5beee07: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_HookUseable__MoveHookParents
               (Characters_HookUseable_o *__this,UnityEngine_Transform_o *from,UnityEngine_Transform_o *to,
               MethodInfo *method)

{
  System_Collections_Generic_List_Hook__o *__this_00;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_30;
  undefined1 *local_28;
  
  if (Il2CppMethodInitialized_0754760b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator)
    ;
    Il2CppMethodInitialized_0754760b = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).Hooks;
  if (__this_00 == (System_Collections_Generic_List_Hook__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator);
  local_30 = 0;
  local_28 = (undefined1 *)&local_48;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
      return;
    }
    if ((Characters_Hook_o *)local_48.fields._current == (Characters_Hook_o *)0x0) break;
    Characters_Hook__MoveHookParent((Characters_Hook_o *)local_48.fields._current,from,to,method);
  }
  ThrowNullReferenceException();
}


// Characters.HookUseable$$DestroyHooks
// il2cpp: void Characters_HookUseable__DestroyHooks (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x5beee10
// eh: try 0x5beeed0..0x5beef87 -> pad 0x5beef94 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5beefac..0x5beefb1 -> pad 0x5beefd6 cleanup
// eh: try 0x5beefd9..0x5beefe3 -> pad 0x5beefeb catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5beef8c: jmp 0x5beef94
// asm:   0x5beef8e: jmp 0x5beef94
// asm:   0x5beef90: jmp 0x5beef94
// asm:   0x5beef92: jmp 0x5beef94
// asm:   0x5beef94: mov rbx, rax
// asm:   0x5beef97: cmp edx, 1
// asm:   0x5beef9a: jne 0x5beefd9
// asm:   0x5beef9c: mov rdi, rbx
// asm:   0x5beef9f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5beefa4: mov rbx, qword ptr [rax]
// asm:   0x5beefa7: mov qword ptr [rsp + 8], rbx
// asm:   0x5beefac: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5beefb1: lea rax, [rip + 0x169ee80]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose
// asm:   0x5beefb8: mov rsi, qword ptr [rax]
// asm:   0x5beefbb: lea rdi, [rsp + 0x20]
// asm:   0x5beefc0: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5beefc5: test rbx, rbx
// asm:   0x5beefc8: je 0x5beef48
// asm:   0x5beefce: mov rdi, rbx
// asm:   0x5beefd1: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5beefd6: mov rbx, rax
// asm:   0x5beefd9: lea rdi, [rsp + 8]
// asm:   0x5beefde: call 0x2fd8dd0  ; il2cpp_runtime_helper_02fd8dd0()
// asm:   0x5beefe3: mov rdi, rbx
// asm:   0x5beefe6: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5beefeb: mov rdi, rax
// asm:   0x5beefee: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_HookUseable__DestroyHooks(Characters_HookUseable_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_Hook__o *pSVar2;
  UnityEngine_Component_o *__this_00;
  bool bVar3;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Object_o *obj;
  undefined1 local_60 [16];
  UnityEngine_Component_o *local_50;
  undefined1 local_48 [16];
  UnityEngine_Component_o *local_38;
  
  if (Il2CppMethodInitialized_0754760c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Hook_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754760c = '\x01';
  }
  pSVar2 = (__this->fields).Hooks;
  if (pSVar2 != (System_Collections_Generic_List_Hook__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_object__o *)pSVar2,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator);
    local_38 = local_50;
    local_48._0_8_ = local_60._0_8_;
    local_48._8_8_ = local_60._8_8_;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_48;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext);
      __this_00 = local_38;
      if (!bVar3) break;
      if (local_38 == (UnityEngine_Component_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_01 = UnityEngine_Component__get_gameObject(local_38,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      obj = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
    pSVar2 = (__this->fields).Hooks;
    if (pSVar2 != (System_Collections_Generic_List_Hook__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HookUseable$$Activate
// il2cpp: void Characters_HookUseable__Activate (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x5bef000

void Characters_HookUseable__Activate(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_HookUseable__StartHook(__this,method);
  return;
}


// Characters.HookUseable$$ActiveFixedUpdate
// il2cpp: void Characters_HookUseable__ActiveFixedUpdate (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x5bef8d0

void Characters_HookUseable__ActiveFixedUpdate(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_HookUseable__StartHook(__this,method);
  return;
}


// Characters.HookUseable$$FixedUpdateMock
// il2cpp: void Characters_HookUseable__FixedUpdateMock (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x5bef8e0

void Characters_HookUseable__FixedUpdateMock(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o *pCVar1;
  bool bVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754760d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754760d = '\x01';
  }
  pCVar1 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pCVar1 = (__this->fields)._activeHook;
  if (pCVar1 == (Characters_Hook_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_Hook__FixedUpdateMock(pCVar1,method_00);
  return;
}


// Characters.HookUseable$$StartHook
// il2cpp: void Characters_HookUseable__StartHook (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x5bef010
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bef200: jmp 0x5bef84b
// asm:   0x5bef525: jmp 0x5bef56d

void Characters_HookUseable__StartHook(Characters_HookUseable_o *__this,MethodInfo *method)

{
  Characters_Hook_o **targetAddress;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  byte bVar8;
  uint32_t uVar9;
  Characters_BaseCharacter_o *pCVar10;
  Characters_BaseCharacter_c *pCVar11;
  Cameras_BaseCamera_o *pCVar12;
  Utility_BaseComponentCache_o *pUVar13;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_Rigidbody_o *__this_00;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  bool bVar19;
  Characters_Hook_o *pCVar20;
  UnityEngine_Vector3_StaticFields *pUVar21;
  MethodInfo *pMVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float extraout_XMM0_Db;
  float fVar26;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float extraout_XMM0_Db_02;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float fVar27;
  float extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  float fVar28;
  undefined4 extraout_XMM0_Dc_04;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float fVar29;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float fVar30;
  undefined4 extraout_XMM0_Dd_04;
  float fVar31;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  undefined4 uVar32;
  float in_XMM1_Dd;
  undefined4 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  UnityEngine_Vector3_o UVar36;
  UnityEngine_Vector3_o relativeVelocity;
  undefined1 local_c8 [8];
  float fStack_c0;
  float fStack_bc;
  UnityEngine_Vector3_StaticFields local_b0;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (Il2CppMethodInitialized_0754760e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_0754760e = '\x01';
  }
  pCVar20 = (__this->fields)._activeHook;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._activeHook;
  bVar19 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pCVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar19) {
    if (*targetAddress == (Characters_Hook_o *)0x0) goto label_05bef8b8;
    if (((*targetAddress)->fields).State != 0) goto label_05bef09e;
    *targetAddress = (Characters_Hook_o *)0x0;
    Il2CppCodeGenWriteBarrier(targetAddress);
    cVar7 = (__this->fields).Enabled;
  }
  else {
label_05bef09e:
    cVar7 = (__this->fields).Enabled;
  }
  if (cVar7 == '\0') {
    return;
  }
  pCVar20 = *targetAddress;
  if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar22 = (MethodInfo *)0x0;
  bVar19 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pCVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar19) {
    return;
  }
  pCVar20 = Characters_HookUseable__FindAvailableHook(__this,pMVar22);
  (__this->fields)._activeHook = pCVar20;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pCVar10 = (__this->fields)._owner;
  if (pCVar10 == (Characters_BaseCharacter_o *)0x0) goto label_05bef8b8;
  pCVar11 = pCVar10->klass;
  bVar8 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if (((pCVar11->_2).typeHierarchyDepth < bVar8) ||
     ((pCVar11->_2).typeHierarchy[(ulong)bVar8 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
  goto label_05bef8bd;
  UVar36 = (*(pCVar11->vtable)._76_GetAimPoint.methodPtr)(pCVar10,(pCVar11->vtable)._76_GetAimPoint.method);
  fVar27 = UVar36.fields.z;
  fVar24 = UVar36.fields.x;
  fVar26 = UVar36.fields.y;
  fVar23 = extraout_XMM0_Dc;
  fVar25 = extraout_XMM0_Dd;
  if ((__this->fields).HookBoth != false) {
    pCVar12 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if (((pCVar12 == (Cameras_BaseCamera_o *)0x0) ||
        (pUVar13 = (pCVar12->fields).Cache, pUVar13 == (Utility_BaseComponentCache_o *)0x0)) ||
       (pUVar14 = (pUVar13->fields).Transform, local_b0.zeroVector.fields.z = fVar27,
       local_b0.oneVector.fields.x = in_XMM1_Db, local_b0.oneVector.fields.y = in_XMM1_Dc,
       local_b0.oneVector.fields.z = in_XMM1_Dd, pUVar14 == (UnityEngine_Transform_o *)0x0))
    goto label_05bef8b8;
    UVar36 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
    fVar23 = UVar36.fields.z;
    fVar25 = UVar36.fields.x;
    fVar27 = UVar36.fields.y;
    if (g_data_0753e7b7 == '\0') {
      local_b0.leftVector.fields.x = extraout_XMM0_Dc_00;
      local_b0.downVector.fields._4_8_ = UVar36.fields._0_8_;
      local_b0.leftVector.fields.y = extraout_XMM0_Dd_00;
      local_b0.rightVector.fields.x = in_XMM1_Db;
      local_b0.leftVector.fields.z = fVar23;
      local_b0.rightVector.fields.y = in_XMM1_Dc;
      local_b0.rightVector.fields.z = in_XMM1_Dd;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      g_data_0753e7b7 = '\x01';
      uVar9 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      fVar23 = local_b0.leftVector.fields.z;
      in_XMM1_Db = local_b0.rightVector.fields.x;
      in_XMM1_Dc = local_b0.rightVector.fields.y;
      in_XMM1_Dd = local_b0.rightVector.fields.z;
      fVar25 = local_b0.downVector.fields.y;
      fVar27 = local_b0.downVector.fields.z;
      fVar29 = local_b0.leftVector.fields.x;
      fVar31 = local_b0.leftVector.fields.y;
    }
    else {
      uVar9 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      fVar29 = extraout_XMM0_Dc_00;
      fVar31 = extraout_XMM0_Dd_00;
    }
    if (uVar9 == 0) {
      local_b0.downVector.fields.z = fVar27;
      local_b0.downVector.fields.y = fVar25;
      local_b0.leftVector.fields.x = fVar29;
      local_b0.leftVector.fields.y = fVar31;
      local_b0.rightVector.fields.x = in_XMM1_Db;
      local_b0.leftVector.fields.z = fVar23;
      local_b0.rightVector.fields.y = in_XMM1_Dc;
      local_b0.rightVector.fields.z = in_XMM1_Dd;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      fVar25 = local_b0.downVector.fields.y;
      fVar27 = local_b0.downVector.fields.z;
      fVar23 = local_b0.leftVector.fields.z;
    }
    fVar25 = (fVar27 - fVar26) * (fVar27 - fVar26) + (fVar25 - fVar24) * (fVar25 - fVar24);
    fVar23 = fVar25 + (fVar23 - local_b0.zeroVector.fields.z) * (fVar23 - local_b0.zeroVector.fields.z);
    if (fVar23 < 0.0) {
      fVar23 = sqrtf(fVar23);
      fVar25 = extraout_XMM0_Db;
      fVar27 = extraout_XMM0_Dc_01;
      fVar29 = extraout_XMM0_Dd_01;
    }
    else {
      fVar23 = SQRT(fVar23);
      fVar27 = fVar25;
      fVar29 = fVar25;
    }
    fVar23 = fVar23 * *(float *)(&g_data_0100ae98 + (ulong)(50.0 < fVar23) * 4);
    if ((__this->fields)._left != false) {
      fVar23 = -fVar23;
      fVar25 = -fVar25;
      fVar27 = -fVar27;
      fVar29 = -fVar29;
    }
    pCVar10 = (__this->fields)._owner;
    if ((pCVar10 == (Characters_BaseCharacter_o *)0x0) ||
       (pUVar13 = (pCVar10->fields).Cache, pUVar13 == (Utility_BaseComponentCache_o *)0x0)) goto label_05bef8b8;
    local_b0.downVector.fields.z = fVar25;
    local_b0.downVector.fields.y = fVar23;
    local_b0.leftVector.fields.x = fVar27;
    local_b0.leftVector.fields.y = fVar29;
    pUVar14 = (pUVar13->fields).Transform;
    if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto label_05bef8b8;
    UVar36 = UnityEngine_Transform__get_right(pUVar14,(MethodInfo *)0x0);
    fVar24 = fVar24 + local_b0.downVector.fields.y * UVar36.fields.x;
    fVar26 = fVar26 + local_b0.downVector.fields.y * UVar36.fields.y;
    fVar23 = extraout_XMM0_Dc + local_b0.downVector.fields.y * extraout_XMM0_Dc_02;
    fVar25 = extraout_XMM0_Dd + local_b0.downVector.fields.y * extraout_XMM0_Dd_02;
    fVar27 = local_b0.zeroVector.fields.z + UVar36.fields.z * local_b0.downVector.fields.y;
    in_XMM1_Db = local_b0.oneVector.fields.x;
    in_XMM1_Dc = local_b0.oneVector.fields.y;
    in_XMM1_Dd = local_b0.oneVector.fields.z;
  }
  if ((*targetAddress == (Characters_Hook_o *)0x0) ||
     (pUVar14 = ((*targetAddress)->fields).Anchor, local_b0.zeroVector.fields.z = fVar27,
     local_b0.oneVector.fields.x = in_XMM1_Db, local_b0.oneVector.fields.y = in_XMM1_Dc,
     local_b0.oneVector.fields.z = in_XMM1_Dd, pUVar14 == (UnityEngine_Transform_o *)0x0)) goto label_05bef8b8;
  UVar36 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
  fVar31 = UVar36.fields.z;
  fVar27 = UVar36.fields.x;
  fVar29 = UVar36.fields.y;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    local_b0.downVector.fields.y = fVar31;
    local_b0.rightVector.fields.y = extraout_XMM0_Dc_03;
    local_b0._56_8_ = UVar36.fields._0_8_;
    local_b0.rightVector.fields.z = extraout_XMM0_Dd_03;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    local_b0.zeroVector.fields.x = 0.0;
    local_b0.zeroVector.fields.y = 0.0;
    fVar27 = local_b0.leftVector.fields.z;
    fVar29 = local_b0.rightVector.fields.x;
    fVar28 = local_b0.rightVector.fields.y;
    fVar30 = local_b0.rightVector.fields.z;
    fVar31 = local_b0.downVector.fields.y;
  }
  else {
    local_b0.zeroVector.fields.x = 0.0;
    local_b0.zeroVector.fields.y = 0.0;
    fVar28 = extraout_XMM0_Dc_03;
    fVar30 = extraout_XMM0_Dd_03;
  }
  local_b0.zeroVector.fields.x = 0.0;
  local_b0.zeroVector.fields.y = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    local_b0.zeroVector.fields.x = 0.0;
    local_b0.zeroVector.fields.y = 0.0;
    local_b0.downVector.fields.y = fVar31;
    local_b0.rightVector.fields.x = fVar29;
    local_b0.leftVector.fields.z = fVar27;
    local_b0.rightVector.fields.y = fVar28;
    local_b0.rightVector.fields.z = fVar30;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    fVar27 = local_b0.leftVector.fields.z;
    fVar29 = local_b0.rightVector.fields.x;
    fVar28 = local_b0.rightVector.fields.y;
    fVar30 = local_b0.rightVector.fields.z;
    fVar31 = local_b0.downVector.fields.y;
  }
  auVar34._0_4_ = fVar24 - fVar27;
  auVar34._4_4_ = fVar26 - fVar29;
  auVar34._8_4_ = fVar23 - fVar28;
  auVar34._12_4_ = fVar25 - fVar30;
  fVar23 = local_b0.zeroVector.fields.z - fVar31;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    local_b0.zeroVector.fields.z = local_b0.zeroVector.fields.z - fVar31;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    fVar23 = local_b0.zeroVector.fields.z;
  }
  fVar25 = fVar23 * fVar23 + auVar34._4_4_ * auVar34._4_4_ + auVar34._0_4_ * auVar34._0_4_;
  fVar24 = 0.0;
  uVar32 = 0;
  uVar33 = 0;
  if (fVar25 < 0.0) {
    local_b0.zeroVector.fields.z = fVar23;
    fVar25 = sqrtf(fVar25);
    fVar26 = extraout_XMM0_Db_00;
    fVar23 = local_b0.zeroVector.fields.z;
    if (1e-05 < fVar25) goto label_05bef379;
label_05bef341:
    pUVar21 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar23 = (pUVar21->zeroVector).fields.z;
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
  }
  else {
    fVar25 = SQRT(fVar25);
    fVar26 = local_b0.oneVector.fields.x;
    if (fVar25 <= 1e-05) goto label_05bef341;
label_05bef379:
    fVar23 = fVar23 / fVar25;
    auVar18._4_4_ = fVar25;
    auVar18._0_4_ = fVar25;
    auVar18._8_4_ = fVar26;
    auVar18._12_4_ = fVar26;
    auVar34 = divps(auVar34,auVar18);
    local_b0.zeroVector.fields.x = auVar34._0_4_;
    local_b0.zeroVector.fields.y = auVar34._4_4_;
    pUVar21 = &local_b0;
    fVar25 = local_b0.oneVector.fields.x;
    fVar26 = local_b0.oneVector.fields.y;
    fVar27 = local_b0.oneVector.fields.z;
  }
  pCVar10 = (__this->fields)._owner;
  if ((pCVar10 == (Characters_BaseCharacter_o *)0x0) ||
     (pUVar13 = (pCVar10->fields).Cache, pUVar13 == (Utility_BaseComponentCache_o *)0x0)) goto label_05bef8b8;
  local_b0.zeroVector.fields.z = fVar23;
  local_b0.oneVector.fields.x = fVar25;
  local_b0.oneVector.fields.y = fVar26;
  local_b0.oneVector.fields.z = fVar27;
  __this_00 = (pUVar13->fields).Rigidbody;
  if (__this_00 == (UnityEngine_Rigidbody_o *)0x0) goto label_05bef8b8;
  uVar1 = (pUVar21->zeroVector).fields.x;
  uVar4 = (pUVar21->zeroVector).fields.y;
  local_b0._88_16_ = ZEXT416((uint)(__this->fields)._hookSpeed);
  pMVar22 = (MethodInfo *)0x0;
  UVar36 = UnityEngine_Rigidbody__get_linearVelocity(__this_00,(MethodInfo *)0x0);
  local_b0.leftVector.fields.z = UVar36.fields.x;
  local_b0.rightVector.fields.x = UVar36.fields.y;
  local_b0.rightVector.fields.y = (float)extraout_XMM0_Dc_04;
  local_b0.rightVector.fields.z = (float)extraout_XMM0_Dd_04;
  local_b0.downVector.fields.z = fVar24;
  local_b0.downVector.fields.y = UVar36.fields.z;
  local_b0.leftVector.fields.x = (float)uVar32;
  local_b0.leftVector.fields.y = (float)uVar33;
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar21 = TypeInfo_UnityEngine_Vector3->static_fields;
  local_38._0_4_ = (pUVar21->zeroVector).fields.x;
  local_38._4_4_ = (pUVar21->zeroVector).fields.y;
  uStack_30 = 0;
  local_b0.downVector.fields.x = (pUVar21->zeroVector).fields.z;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
  }
  local_b0.zeroVector.fields.x = 0.0;
  local_b0.zeroVector.fields.y = 0.0;
  local_c8._0_4_ = local_b0.backVector.fields.y;
  local_c8._4_4_ = local_b0.backVector.fields.y;
  fVar23 = local_b0.backVector.fields.y;
  fVar25 = local_b0.backVector.fields.y;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    local_b0.negativeInfinityVector.fields.x = local_b0.backVector.fields.y;
    local_b0.positiveInfinityVector.fields.z = local_b0.backVector.fields.y;
    local_b0.negativeInfinityVector.fields.z = local_b0.backVector.fields.y;
    local_b0.negativeInfinityVector.fields.y = local_b0.backVector.fields.y;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    local_c8._0_4_ = local_b0.positiveInfinityVector.fields.z;
    local_c8._4_4_ = local_b0.negativeInfinityVector.fields.x;
    fVar23 = local_b0.negativeInfinityVector.fields.y;
    fVar25 = local_b0.negativeInfinityVector.fields.z;
  }
  local_c8._0_4_ = (float)uVar1 * (float)local_c8._0_4_;
  local_c8._4_4_ = (float)uVar4 * (float)local_c8._4_4_;
  local_b0.zeroVector.fields.z = local_b0.zeroVector.fields.z * local_b0.backVector.fields.y;
  fStack_c0 = fVar23 * 0.0;
  fStack_bc = fVar25 * 0.0;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  local_b0.backVector.fields.x =
       local_b0.zeroVector.fields.z * local_b0.zeroVector.fields.z +
       (float)local_c8._4_4_ * (float)local_c8._4_4_ + (float)local_c8._0_4_ * (float)local_c8._0_4_;
  if (local_b0.backVector.fields.x < 0.0) {
    fVar26 = sqrtf(local_b0.backVector.fields.x);
    fVar24 = extraout_XMM0_Db_01;
    if (1e-05 < fVar26) goto label_05bef53e;
label_05bef4fa:
    pUVar21 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_b0.backVector.fields.y = (pUVar21->zeroVector).fields.z;
    local_b0.positiveInfinityVector.fields.z = (pUVar21->zeroVector).fields.x;
    local_b0.negativeInfinityVector.fields.x = (pUVar21->zeroVector).fields.y;
    local_b0.negativeInfinityVector.fields.y = 0.0;
    local_b0.negativeInfinityVector.fields.z = 0.0;
  }
  else {
    fVar26 = SQRT(local_b0.backVector.fields.x);
    fVar24 = local_b0.oneVector.fields.x;
    if (fVar26 <= 1e-05) goto label_05bef4fa;
label_05bef53e:
    local_b0.backVector.fields.y = local_b0.zeroVector.fields.z / fVar26;
    auVar17._4_4_ = fVar26;
    auVar17._0_4_ = fVar26;
    auVar17._8_4_ = fVar24;
    auVar17._12_4_ = fVar24;
    auVar34 = divps(_local_c8,auVar17);
    local_b0.zeroVector.fields._0_8_ = auVar34._0_8_;
    local_b0.positiveInfinityVector.fields.z = auVar34._0_4_;
    local_b0.negativeInfinityVector.fields.x = auVar34._4_4_;
    local_b0.negativeInfinityVector.fields.y = 0.0;
    local_b0.negativeInfinityVector.fields.z = 0.0;
  }
  local_b0.negativeInfinityVector.fields.y = 0.0;
  local_b0.negativeInfinityVector.fields.z = 0.0;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    local_b0.negativeInfinityVector.fields.y = 0.0;
    local_b0.negativeInfinityVector.fields.z = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
  }
  local_b0.zeroVector.fields.x = 0.0;
  local_b0.zeroVector.fields.y = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar9 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar9 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar9 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar24 = local_b0.downVector.fields.y * local_b0.downVector.fields.y +
           local_b0.rightVector.fields.x * local_b0.rightVector.fields.x +
           local_b0.leftVector.fields.z * local_b0.leftVector.fields.z;
  if (fVar24 < 0.0) {
    fVar24 = sqrtf(fVar24);
    fVar26 = extraout_XMM0_Db_02;
    if (1e-05 < fVar24) goto label_05bef5fb;
label_05bef5db:
    pUVar21 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar27 = (pUVar21->zeroVector).fields.z;
  }
  else {
    fVar24 = SQRT(fVar24);
    fVar26 = local_b0.downVector.fields.z;
    if (fVar24 <= 1e-05) goto label_05bef5db;
label_05bef5fb:
    fVar27 = local_b0.downVector.fields.y / fVar24;
    auVar16._4_4_ = fVar24;
    auVar16._0_4_ = fVar24;
    auVar16._8_4_ = fVar26;
    auVar16._12_4_ = fVar26;
    auVar34 = divps((undefined1  [16])local_b0._56_16_,auVar16);
    local_b0.zeroVector.fields.x = auVar34._0_4_;
    local_b0.zeroVector.fields.y = auVar34._4_4_;
    pUVar21 = &local_b0;
  }
  uVar2 = (pUVar21->zeroVector).fields.x;
  uVar5 = (pUVar21->zeroVector).fields.y;
  fVar24 = acosf(local_b0.negativeInfinityVector.fields.x * (float)uVar5 +
                 local_b0.positiveInfinityVector.fields.z * (float)uVar2 +
                 local_b0.backVector.fields.y * fVar27);
  auVar35._8_8_ = uStack_30;
  auVar35._0_8_ = local_38;
  if (ABS(fVar24 * 57.29578) <= 90.0) {
    if (Il2CppMethodInitialized_0753e81c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
      Il2CppMethodInitialized_0753e81c = '\x01';
    }
    if (TypeInfo_UnityEngine_Mathf->static_fields->Epsilon <= local_b0.backVector.fields.x) {
      fVar24 = (local_b0.downVector.fields.y * local_b0.zeroVector.fields.z +
               local_b0.rightVector.fields.x * (float)local_c8._4_4_ +
               local_b0.leftVector.fields.z * (float)local_c8._0_4_) / local_b0.backVector.fields.x;
      local_b0.downVector.fields.x = local_b0.zeroVector.fields.z * fVar24;
      auVar35._4_4_ = fVar24 * (float)local_c8._4_4_;
      auVar35._0_4_ = fVar24 * (float)local_c8._0_4_;
      auVar35._8_4_ = fVar24 * fVar23 * 0.0;
      auVar35._12_4_ = fVar24 * fVar25 * 0.0;
    }
    else {
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      pUVar21 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar3 = (pUVar21->zeroVector).fields.x;
      uVar6 = (pUVar21->zeroVector).fields.y;
      auVar35._4_4_ = uVar6;
      auVar35._0_4_ = uVar3;
      auVar35._8_8_ = 0;
      local_b0.downVector.fields.x = (pUVar21->zeroVector).fields.z;
    }
  }
  if (*targetAddress != (Characters_Hook_o *)0x0) {
    UVar36.fields.z = local_b0.zeroVector.fields.z;
    UVar36.fields.x = (float)local_c8._0_4_;
    UVar36.fields.y = (float)local_c8._4_4_;
    relativeVelocity.fields._0_8_ = auVar35._0_8_;
    relativeVelocity.fields.z = local_b0.downVector.fields.x;
    Characters_Hook__SetHooking(*targetAddress,UVar36,relativeVelocity,pMVar22);
    pCVar10 = (__this->fields)._owner;
    if (pCVar10 != (Characters_BaseCharacter_o *)0x0) {
      bVar8 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if (((pCVar10->klass->_2).typeHierarchyDepth < bVar8) ||
         ((pCVar10->klass->_2).typeHierarchy[(ulong)bVar8 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
label_05bef8bd:
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      lVar15 = *(long *)&(*(uint8_t *)((char *)pCVar10 + 0x158));
      if (lVar15 != 0) {
        fVar23 = *(float *)(lVar15 + 0x28) - *(float *)(lVar15 + 0x30);
        if (fVar23 <= 0.0) {
          fVar23 = 0.0;
        }
        *(float *)(lVar15 + 0x28) = fVar23;
        return;
      }
    }
  }
label_05bef8b8:
  ThrowNullReferenceException();
}


// Characters.HookUseable$$Deactivate
// il2cpp: void Characters_HookUseable__Deactivate (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x5befbf0

void Characters_HookUseable__Deactivate(Characters_HookUseable_o *__this,MethodInfo *method)

{
  return;
}


// Characters.HookUseable$$FindAvailableHook
// il2cpp: Characters_Hook_o* Characters_HookUseable__FindAvailableHook (Characters_HookUseable_o* __this, const MethodInfo* method);
// 0x5bef960
// eh: try 0x5befa24..0x5befb24 -> pad 0x5befb72 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5befb43..0x5befb48 -> pad 0x5befb61 cleanup
// eh: try 0x5befb64..0x5befb6e -> pad 0x5befbc7 catch (...) [compiler noexcept guard]
// eh: try 0x5befb8a..0x5befb8f -> pad 0x5befbb2 cleanup
// eh: try 0x5befbb5..0x5befbbf -> pad 0x5befbc7 catch (...) [compiler noexcept guard]
// asm: 45 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5befa44: jmp 0x5befac5
// asm:   0x5befb29: jmp 0x5befb2b
// asm:   0x5befb2b: mov r15, rax
// asm:   0x5befb2e: cmp edx, 1
// asm:   0x5befb31: jne 0x5befb64
// asm:   0x5befb33: mov rdi, r15
// asm:   0x5befb36: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5befb3b: mov rbx, qword ptr [rax]
// asm:   0x5befb3e: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5befb43: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5befb48: lea rax, [rip + 0x169e2e9]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose
// asm:   0x5befb4f: mov rsi, qword ptr [rax]
// asm:   0x5befb52: mov rdi, rsp
// asm:   0x5befb55: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5befb5a: test rbx, rbx
// asm:   0x5befb5d: je 0x5befaeb
// asm:   0x5befb5f: jmp 0x5befbaa
// asm:   0x5befb61: mov r15, rax
// asm:   0x5befb64: lea rdi, [rsp + 0x20]
// asm:   0x5befb69: call 0x2fd8e30  ; il2cpp_runtime_helper_02fd8e30()
// asm:   0x5befb6e: jmp 0x5befbbf
// asm:   0x5befb70: jmp 0x5befb72
// asm:   0x5befb72: mov r15, rax
// asm:   0x5befb75: cmp edx, 1
// asm:   0x5befb78: jne 0x5befbb5
// asm:   0x5befb7a: mov rdi, r15
// asm:   0x5befb7d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5befb82: mov rbx, qword ptr [rax]
// asm:   0x5befb85: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5befb8a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5befb8f: lea rax, [rip + 0x169e2a2]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose
// asm:   0x5befb96: mov rsi, qword ptr [rax]
// asm:   0x5befb99: mov rdi, rsp
// asm:   0x5befb9c: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5befba1: test rbx, rbx
// asm:   0x5befba4: je 0x5befa58
// asm:   0x5befbaa: mov rdi, rbx
// asm:   0x5befbad: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5befbb2: mov r15, rax
// asm:   0x5befbb5: lea rdi, [rsp + 0x20]
// asm:   0x5befbba: call 0x2fd8e00  ; il2cpp_runtime_helper_02fd8e00()
// asm:   0x5befbbf: mov rdi, r15
// asm:   0x5befbc2: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5befbc7: mov rdi, rax
// asm:   0x5befbca: call 0x2ab61e0  ; __clang_call_terminate()

Characters_Hook_o *
Characters_HookUseable__FindAvailableHook(Characters_HookUseable_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Hook__o *pSVar1;
  bool bVar2;
  Characters_Hook_o *pCVar3;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  Characters_Hook_o *local_58;
  undefined1 local_48 [16];
  Characters_Hook_o *local_38;
  
  if (Il2CppMethodInitialized_0754760f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Hook_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Hook_get_Item);
    Il2CppMethodInitialized_0754760f = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (Characters_Hook_o *)0x0;
  pSVar1 = (__this->fields).Hooks;
  if (pSVar1 == (System_Collections_Generic_List_Hook__o *)0x0) {
label_05befb24:
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator);
  local_58 = local_38;
  local_68 = (undefined1  [8])local_48._0_8_;
  puStack_60 = (undefined1 *)local_48._8_8_;
  local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_48._8_8_ = local_68;
  do {
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext);
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
      pSVar1 = (__this->fields).Hooks;
      if (pSVar1 == (System_Collections_Generic_List_Hook__o *)0x0) goto label_05befb24;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_object__o *)pSVar1,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Hook_GetEnumerator);
      local_58 = local_38;
      local_68 = (undefined1  [8])local_48._0_8_;
      puStack_60 = (undefined1 *)local_48._8_8_;
      local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_48._8_8_ = local_68;
      goto label_05befaa0;
    }
    if (local_58 == (Characters_Hook_o *)0x0) {
      ThrowNullReferenceException();
    }
  } while ((local_58->fields).State != 0);
label_05befac5:
  pCVar3 = local_58;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
  return pCVar3;
  while( true ) {
    if (local_58 == (Characters_Hook_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((local_58->fields).State - 3U < 2) break;
label_05befaa0:
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_Hook_MoveNext);
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Hook_Dispose);
      pSVar1 = (__this->fields).Hooks;
      if (pSVar1 != (System_Collections_Generic_List_Hook__o *)0x0) {
        pCVar3 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,0,
                            (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_Hook_get_Item);
        return pCVar3;
      }
      goto label_05befb24;
    }
  }
  goto label_05befac5;
}


