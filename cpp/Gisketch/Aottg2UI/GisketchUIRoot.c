// Type: Gisketch.Aottg2UI.GisketchUIRoot
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI/GisketchUIRoot.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.GisketchUIRoot.<>c__DisplayClass71_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass71_0___ctor (Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass71_0_o* __this, const MethodInfo* method);
// 0x531c0a0

void Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass71_0___ctor
               (Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass71_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<>c__DisplayClass71_0$$<Build>b__0
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass71_0___Build_b__0 (Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass71_0_o* __this, System_String_o* id, const MethodInfo* method);
// 0x531d720

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass71_0___Build_b__0
          (Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass71_0_o *__this,System_String_o *id,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar2;
  
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog_5264440
                     ((__this->fields).catalog,id,(pGVar1->fields)._codeActions,(MethodInfo *)0x0);
  return pGVar2;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$.ctor
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11___ctor (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x531a8d0

void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11___ctor
               (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__System_IDisposable_Dispose (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, const MethodInfo* method);
// 0x531d750

void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar4;
  ulong uVar5;
  long lVar6;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == 2) || (iVar1 == -3)) {
    if (Il2CppMethodInitialized_075427c3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_075427c3 = '\x01';
    }
    (__this->fields).__1__state = -1;
    obj = il2cpp_vm_Object_IsInst
                    ((Il2CppObject *)(__this->fields)._prewarm_5__3,(Il2CppClass *)TypeInfo_System_IDisposable
                    );
    if (obj != (Il2CppObject *)0x0) {
      pIVar2 = obj->klass;
      uVar5 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar5 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar6 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar6) == TypeInfo_System_IDisposable)
          {
            pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar6);
            goto label_0531d805;
          }
          lVar6 = lVar6 + 0x10;
        } while (uVar5 * 0x10 != lVar6);
      }
      pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0531d805:
      (*pVVar4->methodPtr)(obj,pVVar4->method);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__MoveNext (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, const MethodInfo* method);
// 0x531d820
// eh: try 0x531d8cb..0x531dd20 -> pad 0x531dd38 (+22 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x531dd5e..0x531dd63 -> pad 0x531dd88 cleanup
// eh: try 0x531dd8b..0x531dd95 -> pad 0x531dd9d catch (...) [compiler noexcept guard]
// asm: 40 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531dd20: jmp 0x531dd46
// asm:   0x531dd22: jmp 0x531dd46
// asm:   0x531dd24: jmp 0x531dd46
// asm:   0x531dd26: jmp 0x531dd46
// asm:   0x531dd28: jmp 0x531dd46
// asm:   0x531dd2a: jmp 0x531dd46
// asm:   0x531dd2c: jmp 0x531dd46
// asm:   0x531dd2e: jmp 0x531dd46
// asm:   0x531dd30: jmp 0x531dd46
// asm:   0x531dd32: jmp 0x531dd46
// asm:   0x531dd34: jmp 0x531dd46
// asm:   0x531dd36: jmp 0x531dd46
// asm:   0x531dd38: jmp 0x531dd46
// asm:   0x531dd3a: jmp 0x531dd46
// asm:   0x531dd3c: jmp 0x531dd46
// asm:   0x531dd3e: jmp 0x531dd46
// asm:   0x531dd40: jmp 0x531dd46
// asm:   0x531dd42: jmp 0x531dd46
// asm:   0x531dd44: jmp 0x531dd46
// asm:   0x531dd46: mov rbx, rax
// asm:   0x531dd49: cmp edx, 1
// asm:   0x531dd4c: jne 0x531dd8b
// asm:   0x531dd4e: mov rdi, rbx
// asm:   0x531dd51: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x531dd56: mov rbx, qword ptr [rax]
// asm:   0x531dd59: mov qword ptr [rsp + 8], rbx
// asm:   0x531dd5e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x531dd63: test rbx, rbx
// asm:   0x531dd66: jne 0x531dd77
// asm:   0x531dd77: mov rdi, qword ptr [rsp]
// asm:   0x531dd7b: call 0x2d4a380  ; il2cpp_runtime_helper_02d4a380()
// asm:   0x531dd80: mov rdi, rbx
// asm:   0x531dd83: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x531dd88: mov rbx, rax
// asm:   0x531dd8b: lea rdi, [rsp + 8]
// asm:   0x531dd90: call 0x2d49d30  ; il2cpp_runtime_helper_02d49d30()
// asm:   0x531dd95: mov rdi, rbx
// asm:   0x531dd98: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x531dd9d: mov rdi, rax
// asm:   0x531dda0: call 0x2ab61e0  ; __clang_call_terminate()

bool Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__MoveNext
               (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *__this,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_01;
  System_Collections_Generic_HashSet_object__o *__this_02;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar4;
  System_Collections_Generic_List_string__o *pSVar5;
  Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *pGVar6;
  Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o **ppGVar7;
  bool bVar8;
  VirtualInvokeData *pVVar9;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGVar10;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o *__this_03;
  Il2CppObject *pIVar12;
  ulong uVar13;
  int32_t iVar14;
  MethodInfo *method_00;
  long lVar15;
  Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *pGStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  pGStack_38 = __this;
  if (Il2CppMethodInitialized_075427c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"input");
    Il2CppMethodInitialized_075427c2 = '\x01';
  }
  puStack_28 = (undefined1 *)&pGStack_38;
  uStack_30 = 0;
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    ppGVar7 = &pGStack_38;
    if (__this_00 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      ThrowNullReferenceException();
    }
  }
  else {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      if (__this_00 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        puStack_28 = (undefined1 *)&pGStack_38;
        ThrowNullReferenceException();
      }
      pSVar11 = (__this->fields)._id_5__2;
      method_00 = (MethodInfo *)0x0;
      puStack_28 = (undefined1 *)&pGStack_38;
      bVar8 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
      ppGVar7 = (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o **)puStack_28;
      if ((((bVar8) ||
           (bVar8 = Gisketch_Aottg2UI_GisketchUIRoot__CanWaitForScreenPrewarm(__this_00,method_00),
           ppGVar7 = (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o **)puStack_28, !bVar8))
          || (__this_01 = (__this_00->fields)._Manifest_k__BackingField,
             __this_01 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) ||
         (((pGVar10 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                                (__this_01,pSVar11,(MethodInfo *)0x0),
           ppGVar7 = (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o **)puStack_28,
           pGVar10 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0 ||
           (pGVar4 = (__this_00->fields)._Screens_k__BackingField,
           pGVar4 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)) ||
          (bVar8 = System_String__Equals_52ffe30((pGVar4->fields)._activeId,pSVar11,5,(MethodInfo *)0x0),
          ppGVar7 = (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o **)puStack_28, bVar8))))
      goto label_0531dbcc;
      pGVar4 = (__this_00->fields)._Screens_k__BackingField;
      if (pGVar4 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        ThrowNullReferenceException();
      }
      method = (MethodInfo *)
               Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen
                         (pGVar4,(pGStack_38->fields)._id_5__2,
                          (__this_00->fields)._screenPrewarmKeepAliveFrames,(MethodInfo *)0x0);
      (pGStack_38->fields)._prewarm_5__3 = (System_Collections_IEnumerator_o *)method;
      Il2CppCodeGenWriteBarrier(&(pGStack_38->fields)._prewarm_5__3);
      (pGStack_38->fields).__1__state = -3;
    }
    else {
      if (iVar1 != 2) {
        return false;
      }
      (__this->fields).__1__state = -3;
      puStack_28 = (undefined1 *)&pGStack_38;
      if (__this_00 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        puStack_28 = (undefined1 *)&pGStack_38;
        ThrowNullReferenceException();
      }
    }
    bVar8 = Gisketch_Aottg2UI_GisketchUIRoot__CanContinueScreenPrewarm(__this_00,method);
    if (bVar8) {
      pIVar12 = (Il2CppObject *)(pGStack_38->fields)._prewarm_5__3;
      if (pIVar12 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = pIVar12->klass;
      uVar13 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar13 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar15) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar9 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar15);
            goto label_0531da37;
          }
          lVar15 = lVar15 + 0x10;
        } while (uVar13 * 0x10 != lVar15);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar12,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_0531da37:
      method = pVVar9->method;
      bVar8 = (*pVVar9->methodPtr)(pIVar12,method);
      if (bVar8) {
        pIVar12 = (Il2CppObject *)(pGStack_38->fields)._prewarm_5__3;
        if (pIVar12 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = pIVar12->klass;
        uVar13 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar13 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar15 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar15) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar9 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar15) + 1);
              goto label_0531dcd4;
            }
            lVar15 = lVar15 + 0x10;
          } while (uVar13 * 0x10 != lVar15);
        }
        pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar12,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_0531dcd4:
        pIVar12 = (*pVVar9->methodPtr)(pIVar12,pVVar9->method);
        (pGStack_38->fields).__2__current = pIVar12;
        iVar14 = 2;
        Il2CppCodeGenWriteBarrier(&(pGStack_38->fields).__2__current);
        goto label_0531dc91;
      }
    }
    bVar8 = Gisketch_Aottg2UI_GisketchUIRoot__CanContinueScreenPrewarm(__this_00,method);
    pGVar6 = pGStack_38;
    if (Il2CppMethodInitialized_075427c3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
      Il2CppMethodInitialized_075427c3 = '\x01';
    }
    (pGVar6->fields).__1__state = -1;
    pIVar12 = il2cpp_vm_Object_IsInst
                        ((Il2CppObject *)(pGVar6->fields)._prewarm_5__3,
                         (Il2CppClass *)TypeInfo_System_IDisposable);
    if (pIVar12 != (Il2CppObject *)0x0) {
      pIVar2 = pIVar12->klass;
      uVar13 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar13 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar15 = 0;
        do {
          if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar15) == TypeInfo_System_IDisposable
             ) {
            pVVar9 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar15);
            goto label_0531db4d;
          }
          lVar15 = lVar15 + 0x10;
        } while (uVar13 * 0x10 != lVar15);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar12,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0531db4d:
      (*pVVar9->methodPtr)(pIVar12,pVVar9->method);
    }
    if (bVar8) {
      __this_02 = (System_Collections_Generic_HashSet_object__o *)(__this_00->fields)._screenPrewarmed;
      if (__this_02 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_object___Add
                (__this_02,(Il2CppObject *)(pGStack_38->fields)._id_5__2,
                 (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    }
    else {
      pGVar4 = (__this_00->fields)._Screens_k__BackingField;
      if (pGVar4 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm
                  (pGVar4,"input",(MethodInfo *)0x0);
      }
    }
    (pGStack_38->fields)._id_5__2 = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(pGStack_38->fields)._id_5__2);
    (pGStack_38->fields)._prewarm_5__3 = (System_Collections_IEnumerator_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(pGStack_38->fields)._prewarm_5__3);
    ppGVar7 = (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o **)puStack_28;
  }
label_0531dbcc:
  puStack_28 = (undefined1 *)ppGVar7;
  pSVar5 = (__this_00->fields)._screenPrewarmQueue;
  if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pSVar5->fields)._size < 1) {
    (__this_00->fields)._screenPrewarmRoutine = (UnityEngine_Coroutine_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._screenPrewarmRoutine);
    return false;
  }
  pSVar11 = System_Collections_Generic_List_object___get_Item
                      ((System_Collections_Generic_List_object__o *)pSVar5,0,
                       (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
  (pGStack_38->fields)._id_5__2 = pSVar11;
  Il2CppCodeGenWriteBarrier(&(pGStack_38->fields)._id_5__2);
  pSVar5 = (__this_00->fields)._screenPrewarmQueue;
  if (pSVar5 == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___RemoveAt
            ((System_Collections_Generic_List_object__o *)pSVar5,0,
             (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_string_RemoveAt);
  if (Il2CppMethodInitialized_075427a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_GisketchUIRoot_WaitForScreenPrewarmIdle_d__12);
    Il2CppMethodInitialized_075427a8 = '\x01';
  }
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_GisketchUIRoot_WaitForScreenPrewarmIdle_d__12);
  System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
  (__this_03->fields).__1__state = 0;
  (__this_03->fields).__4__this = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this_03->fields).__4__this);
  (pGStack_38->fields).__2__current = (Il2CppObject *)__this_03;
  iVar14 = 1;
  Il2CppCodeGenWriteBarrier(&(pGStack_38->fields).__2__current);
label_0531dc91:
  (pGStack_38->fields).__1__state = iVar14;
  return true;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$<>m__Finally1
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11____m__Finally1 (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, const MethodInfo* method);
// 0x531ddb0

void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11____m__Finally1
               (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *__this,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar3;
  ulong uVar4;
  long lVar5;
  
  if (Il2CppMethodInitialized_075427c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_075427c3 = '\x01';
  }
  (__this->fields).__1__state = -1;
  obj = il2cpp_vm_Object_IsInst
                  ((Il2CppObject *)(__this->fields)._prewarm_5__3,(Il2CppClass *)TypeInfo_System_IDisposable);
  if (obj == (Il2CppObject *)0x0) {
    return;
  }
  pIVar1 = obj->klass;
  uVar4 = (ulong)(pIVar1->_2).interface_offsets_count;
  if (uVar4 != 0) {
    pIVar2 = (pIVar1->_1).interfaceOffsets;
    lVar5 = 0;
    do {
      if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar5) == TypeInfo_System_IDisposable) {
        pVVar3 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar5);
        goto label_0531de55;
      }
      lVar5 = lVar5 + 0x10;
    } while (uVar4 * 0x10 != lVar5);
  }
  pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_0531de55:
  (*pVVar3->methodPtr)(obj,pVVar3->method);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, const MethodInfo* method);
// 0x531de70

Il2CppObject *
Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, const MethodInfo* method);
// 0x531de80

void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *__this,MethodInfo *method)

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
                  MethodInfo_Gisketch_Aottg2UI_GisketchUIRoot_RunScreenPrewarmQueue_d__11_System_Collections_IEnumerator_Rese
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, const MethodInfo* method);
// 0x531dec0

Il2CppObject *
Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$.ctor
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12___ctor (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x531a960

void Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12___ctor
               (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__System_IDisposable_Dispose (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o* __this, const MethodInfo* method);
// 0x531ded0

void Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o *__this,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__MoveNext (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o* __this, const MethodInfo* method);
// 0x531dee0

bool Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__MoveNext
               (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o *__this,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  bool bVar2;
  float fVar3;
  UnityEngine_Vector2_o UVar4;
  float fVar5;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if ((__this->fields)._target_5__3 <= (__this->fields)._idleSeconds_5__2) {
      return false;
    }
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    (__this->fields)._idleSeconds_5__2 = 0.0;
    if (__this_00 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_0531dff3;
    fVar3 = (__this_00->fields)._screenPrewarmIdleDelay;
    fVar5 = 0.0;
    if (0.0 <= fVar3) {
      fVar5 = fVar3;
    }
    (__this->fields)._target_5__3 = fVar5;
    if (fVar5 <= 0.0) {
      return false;
    }
  }
  if (__this_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    bVar2 = Gisketch_Aottg2UI_GisketchUIRoot__CanWaitForScreenPrewarm(__this_00,method);
    fVar3 = 0.0;
    if (bVar2) {
      bVar2 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0);
      if (((bVar2) || (bVar2 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0), bVar2)) ||
         (bVar2 = UnityEngine_Input__GetMouseButtonDown(1,(MethodInfo *)0x0), bVar2)) {
        fVar3 = 0.0;
      }
      else {
        bVar2 = UnityEngine_Input__GetMouseButtonDown(2,(MethodInfo *)0x0);
        fVar3 = 0.0;
        if (!bVar2) {
          UVar4 = UnityEngine_Input__get_mouseScrollDelta((MethodInfo *)0x0);
          fVar3 = 0.0;
          if (UVar4.fields.y * UVar4.fields.y + UVar4.fields.x * UVar4.fields.x <= 0.0) {
            fVar5 = (__this->fields)._idleSeconds_5__2;
            fVar3 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
            fVar3 = fVar3 + fVar5;
          }
        }
      }
    }
    (__this->fields)._idleSeconds_5__2 = fVar3;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    return true;
  }
label_0531dff3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o* __this, const MethodInfo* method);
// 0x531e000

Il2CppObject *
Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o* __this, const MethodInfo* method);
// 0x531e010

void Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o *__this,MethodInfo *method)

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
                  MethodInfo_Gisketch_Aottg2UI_GisketchUIRoot_WaitForScreenPrewarmIdle_d__12_System_Collections_IEnumerator_R
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o* __this, const MethodInfo* method);
// 0x531e050

Il2CppObject *
Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$UpdateFocusInput
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__UpdateFocusInput (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x5319e90

void Gisketch_Aottg2UI_GisketchUIRoot__UpdateFocusInput
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *pGVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  ulong in_RAX;
  UnityEngine_UI_Selectable_o *x_00;
  UnityEngine_EventSystems_EventSystem_o *pUVar3;
  undefined1 backwards;
  MethodInfo *pMVar4;
  UnityEngine_GameObject_o *root;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_075427a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427a1 = '\x01';
  }
  uStack_28 = uStack_28 & 0xffffffffffffff;
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    bVar2 = Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_BlocksUiInput((MethodInfo *)0x0);
    if (bVar2) goto label_05319ef1;
  }
  else {
    bVar2 = Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_BlocksUiInput((MethodInfo *)0x0);
    if (bVar2) {
label_05319ef1:
      Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__PollPointerOnly((MethodInfo *)0x0);
      return;
    }
  }
  pMVar4 = (MethodInfo *)((long)&uStack_28 + 7);
  bVar2 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__TakeTab((bool *)pMVar4,(MethodInfo *)0x0);
  if (bVar2) {
    pGVar1 = (__this->fields)._Overlays_k__BackingField;
    if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
      bVar2 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CycleFocus
                        (pGVar1,(bool)uStack_28._7_1_,(MethodInfo *)0x0);
      if (bVar2) {
        return;
      }
    }
    root = (__this->fields)._canvasObject;
    backwards = uStack_28._7_1_;
  }
  else {
    x_00 = Gisketch_Aottg2UI_GisketchUIRoot__SelectedInput(pMVar4);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pMVar4 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__PollPointerOnly((MethodInfo *)0x0);
      return;
    }
    bVar2 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Poll((MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07542884 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542884 = '\x01';
    }
    if (TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->_Mode_k__BackingField == 0)
    {
      Gisketch_Aottg2UI_GisketchUIRoot__ClearPointerSelection(__this,pMVar4);
      return;
    }
    if (!bVar2) {
      return;
    }
    pGVar1 = (__this->fields)._Overlays_k__BackingField;
    if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FocusTopFromNavigation(pGVar1,(MethodInfo *)0x0);
    }
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
      ThrowNullReferenceException();
    }
    x = (UnityEngine_Object_o *)(pUVar3->fields).m_CurrentSelected;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    root = (__this->fields)._canvasObject;
    backwards = false;
  }
  Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle(root,(bool)backwards,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$ClearPointerSelection
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__ClearPointerSelection (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x531a1f0

void Gisketch_Aottg2UI_GisketchUIRoot__ClearPointerSelection
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *x;
  
  if (Il2CppMethodInitialized_075427a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427a2 = '\x01';
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  x = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_0531a30f;
    x = (MethodInfo *)(pUVar2->fields).m_CurrentSelected;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    method_01 = x;
    bVar1 = Gisketch_Aottg2UI_GisketchUIRoot__IsInsideGisketchCanvas
                      (__this,(UnityEngine_GameObject_o *)x,method_00);
    if (bVar1) {
      bVar1 = Gisketch_Aottg2UI_GisketchUIRoot__IsInput((UnityEngine_GameObject_o *)x,method_01);
      if (!bVar1) {
        if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
        }
        pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
          UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_6d01480
                    (pUVar2,(UnityEngine_GameObject_o *)0x0,(MethodInfo *)0x0);
          return;
        }
label_0531a30f:
        ThrowNullReferenceException();
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SelectedInput
// il2cpp: UnityEngine_UI_Selectable_o* Gisketch_Aottg2UI_GisketchUIRoot__SelectedInput (const MethodInfo* method);
// 0x531a0a0

UnityEngine_UI_Selectable_o * Gisketch_Aottg2UI_GisketchUIRoot__SelectedInput(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  TMPro_TMP_InputField_o *x;
  UnityEngine_UI_InputField_o *pUVar3;
  UnityEngine_Object_o *x_00;
  
  if (Il2CppMethodInitialized_075427a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427a3 = '\x01';
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  x_00 = (UnityEngine_Object_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_0531a1e6;
    x_00 = (UnityEngine_Object_o *)(pUVar2->fields).m_CurrentSelected;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  x = (TMPro_TMP_InputField_o *)0x0;
  bVar1 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (x_00 == (UnityEngine_Object_o *)0x0) {
label_0531a1e6:
      ThrowNullReferenceException();
    }
    x = UnityEngine_GameObject__GetComponent_object_
                  ((UnityEngine_GameObject_o *)x_00,
                   (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      pUVar3 = UnityEngine_GameObject__GetComponent_object_
                         ((UnityEngine_GameObject_o *)x_00,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
      return (UnityEngine_UI_Selectable_o *)pUVar3;
    }
  }
  return (UnityEngine_UI_Selectable_o *)x;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$IsInsideGisketchCanvas
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__IsInsideGisketchCanvas (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, UnityEngine_GameObject_o* selected, const MethodInfo* method);
// 0x531a320

bool Gisketch_Aottg2UI_GisketchUIRoot__IsInsideGisketchCanvas
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,UnityEngine_GameObject_o *selected,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  
  if (Il2CppMethodInitialized_075427a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427a4 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._canvasObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)selected,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (selected != (UnityEngine_GameObject_o *)0x0) {
        __this_01 = UnityEngine_GameObject__get_transform(selected,(MethodInfo *)0x0);
        __this_00 = (__this->fields)._canvasObject;
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          parent = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            bVar1 = UnityEngine_Transform__IsChildOf(__this_01,parent,(MethodInfo *)0x0);
            return bVar1;
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$IsInput
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__IsInput (UnityEngine_GameObject_o* selected, const MethodInfo* method);
// 0x531a3f0

bool Gisketch_Aottg2UI_GisketchUIRoot__IsInput(UnityEngine_GameObject_o *selected,MethodInfo *method)

{
  bool bVar1;
  TMPro_TMP_InputField_o *x;
  UnityEngine_UI_InputField_o *x_00;
  
  if (Il2CppMethodInitialized_075427a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427a5 = '\x01';
  }
  if (selected == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  x = UnityEngine_GameObject__GetComponent_object_
                (selected,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
  ;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  x_00 = UnityEngine_GameObject__GetComponent_object_
                   (selected,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$QueueScreenPrewarm
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__QueueScreenPrewarm (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_array* screenIds, const MethodInfo* method);
// 0x531a4c0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531a4f8: jmp 0x531a721
// asm:   0x531a677: jmp 0x531a7ad
// asm:   0x531a6cd: jmp 0x531a6fd

void Gisketch_Aottg2UI_GisketchUIRoot__QueueScreenPrewarm
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_array *screenIds,MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  uint uVar3;
  System_String_o *value;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  ulong uVar7;
  System_String_o *a;
  Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *__this_01;
  UnityEngine_Coroutine_o *pUVar8;
  int index;
  System_Collections_Generic_List_string__o *pSVar9;
  ulong uVar10;
  
  if (Il2CppMethodInitialized_075427a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenPrewarm.Queue");
    Il2CppMethodInitialized_075427a6 = '\x01';
    uVar2 = (TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  else {
    bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  if ((bVar6) && (screenIds != (System_String_array *)0x0)) {
    if (0 < (int)screenIds->max_length) {
      uVar7 = screenIds->max_length & 0xffffffff;
      uVar10 = 0;
      do {
        if (uVar7 <= uVar10) {
          ThrowIndexOutOfRangeException();
        }
        value = screenIds->m_Items[uVar10];
        bVar6 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if (!bVar6) {
          __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._screenPrewarmed;
          if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0531a7ad;
          bVar6 = System_Collections_Generic_HashSet_object___Contains
                            (__this_00,(Il2CppObject *)value,
                             (MethodInfo_4FB3720 *)
                             MethodInfo_System_Collections_Generic_HashSet_string_Contains);
          if (!bVar6) {
            if (Il2CppMethodInitialized_075427a9 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_string_get_Count);
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Collections_Generic_List_string_get_Item);
              Il2CppMethodInitialized_075427a9 = '\x01';
            }
            pSVar9 = (__this->fields)._screenPrewarmQueue;
            if (pSVar9 == (System_Collections_Generic_List_string__o *)0x0) goto label_0531a7ad;
            index = 0;
            while( true ) {
              pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
              uVar3 = (pSVar9->fields)._size;
              if ((int)uVar3 <= index) break;
              a = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar9,index,
                             (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item)
              ;
              bVar6 = System_String__Equals_52ffe30(a,value,5,(MethodInfo *)0x0);
              if (bVar6) goto label_0531a5b0;
              index = index + 1;
              pSVar9 = (__this->fields)._screenPrewarmQueue;
              if (pSVar9 == (System_Collections_Generic_List_string__o *)0x0) goto label_0531a7ad;
            }
            piVar1 = &(pSVar9->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (pSVar9->fields)._items;
            if (pSVar4 == (System_String_array *)0x0) goto label_0531a7ad;
            if (uVar3 < (uint)pSVar4->max_length) {
              (pSVar9->fields)._size = uVar3 + 1;
              pSVar4->m_Items[(int)uVar3] = value;
              Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar3);
              uVar2 = (TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).
                      cctor_finished_or_no_cctor;
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)value,
                         (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
              uVar2 = (TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).
                      cctor_finished_or_no_cctor;
            }
            if (uVar2 == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
            }
            Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
                      ("ScreenPrewarm.Queue",value,(MethodInfo *)0x0);
          }
        }
label_0531a5b0:
        uVar10 = uVar10 + 1;
        uVar3 = (uint)screenIds->max_length;
        uVar7 = (ulong)uVar3;
      } while ((long)uVar10 < (long)(int)uVar3);
    }
    pSVar9 = (__this->fields)._screenPrewarmQueue;
    if (pSVar9 == (System_Collections_Generic_List_string__o *)0x0) {
label_0531a7ad:
      ThrowNullReferenceException();
    }
    if ((0 < (pSVar9->fields)._size) &&
       ((__this->fields)._screenPrewarmRoutine == (UnityEngine_Coroutine_o *)0x0)) {
      if (Il2CppMethodInitialized_075427a7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_GisketchUIRoot_RunScreenPrewarmQueue_d__11);
        Il2CppMethodInitialized_075427a7 = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_GisketchUIRoot_RunScreenPrewarmQueue_d__11);
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      (__this_01->fields).__1__state = 0;
      (__this_01->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
      pUVar8 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                         ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_01,
                          (MethodInfo *)0x0);
      (__this->fields)._screenPrewarmRoutine = pUVar8;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._screenPrewarmRoutine);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$RunScreenPrewarmQueue
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x531a860

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *__this_00;
  
  if (Il2CppMethodInitialized_075427a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_GisketchUIRoot_RunScreenPrewarmQueue_d__11);
    Il2CppMethodInitialized_075427a7 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_GisketchUIRoot_RunScreenPrewarmQueue_d__11)
  ;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$WaitForScreenPrewarmIdle
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x531a8f0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o *__this_00;
  
  if (Il2CppMethodInitialized_075427a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_GisketchUIRoot_WaitForScreenPrewarmIdle_d__12);
    Il2CppMethodInitialized_075427a8 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_GisketchUIRoot_WaitForScreenPrewarmIdle_d__12);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CanStartScreenPrewarm
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__CanStartScreenPrewarm (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_o* id, const MethodInfo* method);
// 0x531a980

bool Gisketch_Aottg2UI_GisketchUIRoot__CanStartScreenPrewarm
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_00;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGVar3;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  bVar2 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (bVar2) {
    return false;
  }
  bVar2 = Gisketch_Aottg2UI_GisketchUIRoot__CanWaitForScreenPrewarm(__this,method_00);
  if (bVar2) {
    __this_00 = (__this->fields)._Manifest_k__BackingField;
    if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      return false;
    }
    pGVar3 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen(__this_00,id,(MethodInfo *)0x0);
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
      return false;
    }
    pGVar1 = (__this->fields)._Screens_k__BackingField;
    if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
      bVar2 = System_String__Equals_52ffe30((pGVar1->fields)._activeId,id,5,(MethodInfo *)0x0);
      return !bVar2;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$IsScreenPrewarmQueued
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__IsScreenPrewarmQueued (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_o* id, const MethodInfo* method);
// 0x531a7c0

bool Gisketch_Aottg2UI_GisketchUIRoot__IsScreenPrewarmQueued
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_o *id,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_String_o *a;
  int index;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_075427a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    Il2CppMethodInitialized_075427a9 = '\x01';
  }
  __this_00 = (__this->fields)._screenPrewarmQueue;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    index = 0;
    do {
      iVar1 = (__this_00->fields)._size;
      if (iVar1 <= index) {
label_0531a848:
        return index < iVar1;
      }
      a = System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)__this_00,index,
                     (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
      bVar2 = System_String__Equals_52ffe30(a,id,5,(MethodInfo *)0x0);
      if (bVar2) goto label_0531a848;
      index = index + 1;
      __this_00 = (__this->fields)._screenPrewarmQueue;
    } while (__this_00 != (System_Collections_Generic_List_string__o *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CanWaitForScreenPrewarm
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__CanWaitForScreenPrewarm (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x531aa00

bool Gisketch_Aottg2UI_GisketchUIRoot__CanWaitForScreenPrewarm
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c *method_00;
  
  if (Il2CppMethodInitialized_075427aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    Il2CppMethodInitialized_075427aa = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar3 = false;
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (bVar2) {
    bVar3 = false;
    bVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0)
    ;
    if (bVar2) {
      pGVar1 = (__this->fields)._Screens_k__BackingField;
      bVar3 = false;
      if (pGVar1 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        bVar2 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsTransitioning(pGVar1,(MethodInfo *)0x0);
        if (!bVar2) {
          pGVar1 = (__this->fields)._Screens_k__BackingField;
          if (pGVar1 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar3 = false;
          bVar2 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsPrewarming(pGVar1,(MethodInfo *)0x0);
          if (!bVar2) {
            method_00 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver;
            if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
            }
            bVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive((MethodInfo *)method_00);
            if (bVar2) {
              bVar3 = false;
            }
            else {
              __this_00 = (__this->fields)._Overlays_k__BackingField;
              if (__this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
                bVar3 = true;
              }
              else {
                bVar3 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__get_HasOpenOverlays
                                  (__this_00,(MethodInfo *)0x0);
                bVar3 = !bVar3;
              }
            }
          }
        }
      }
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CanContinueScreenPrewarm
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__CanContinueScreenPrewarm (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x531acf0

bool Gisketch_Aottg2UI_GisketchUIRoot__CanContinueScreenPrewarm
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_01;
  bool bVar1;
  bool bVar2;
  UnityEngine_Vector2_o UVar3;
  
  if (Il2CppMethodInitialized_075427ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_075427ab = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar2 = false;
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (bVar1) {
    bVar2 = false;
    bVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      __this_00 = (__this->fields)._Screens_k__BackingField;
      bVar2 = false;
      if (__this_00 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        bVar1 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsTransitioning
                          (__this_00,(MethodInfo *)0x0);
        if (!bVar1) {
          bVar2 = false;
          bVar1 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0);
          if (!bVar1) {
            bVar2 = false;
            bVar1 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
            if (!bVar1) {
              bVar2 = false;
              bVar1 = UnityEngine_Input__GetMouseButtonDown(1,(MethodInfo *)0x0);
              if (!bVar1) {
                bVar2 = false;
                bVar1 = UnityEngine_Input__GetMouseButtonDown(2,(MethodInfo *)0x0);
                if (!bVar1) {
                  bVar2 = false;
                  UVar3 = UnityEngine_Input__get_mouseScrollDelta((MethodInfo *)0x0);
                  if (UVar3.fields.y * UVar3.fields.y + UVar3.fields.x * UVar3.fields.x <= 0.0) {
                    __this_01 = (__this->fields)._Overlays_k__BackingField;
                    if (__this_01 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
                      bVar2 = true;
                    }
                    else {
                      bVar2 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__get_HasOpenOverlays
                                        (__this_01,(MethodInfo *)0x0);
                      bVar2 = !bVar2;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return bVar2;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$ScreenPrewarmInput
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__ScreenPrewarmInput (const MethodInfo* method);
// 0x531ae00

bool Gisketch_Aottg2UI_GisketchUIRoot__ScreenPrewarmInput(MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  UnityEngine_Vector2_o UVar3;
  
  bVar1 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0);
  bVar2 = true;
  if (!bVar1) {
    bVar1 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = UnityEngine_Input__GetMouseButtonDown(1,(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = UnityEngine_Input__GetMouseButtonDown(2,(MethodInfo *)0x0);
        if (!bVar1) {
          UVar3 = UnityEngine_Input__get_mouseScrollDelta((MethodInfo *)0x0);
          bVar2 = 0.0 < UVar3.fields.y * UVar3.fields.y + UVar3.fields.x * UVar3.fields.x;
        }
      }
    }
  }
  return bVar2;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CancelScreenPrewarm
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__CancelScreenPrewarm (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, bool clearQueue, const MethodInfo* method);
// 0x531ae60

void Gisketch_Aottg2UI_GisketchUIRoot__CancelScreenPrewarm
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,bool clearQueue,MethodInfo *method)

{
  UnityEngine_Coroutine_o **targetAddress;
  int32_t *piVar1;
  int32_t length;
  UnityEngine_Coroutine_o *routine;
  System_Collections_Generic_List_string__o *pSVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_01;
  
  if (Il2CppMethodInitialized_075427ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&"root cancel");
    Il2CppMethodInitialized_075427ac = '\x01';
  }
  targetAddress = &(__this->fields)._screenPrewarmRoutine;
  routine = (__this->fields)._screenPrewarmRoutine;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  *targetAddress = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if (clearQueue) {
    pSVar2 = (__this->fields)._screenPrewarmQueue;
    if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._screenPrewarmed;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Clear
                  (__this_00,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear)
        ;
        goto label_0531af0b;
      }
    }
    ThrowNullReferenceException();
  }
label_0531af0b:
  __this_01 = (__this->fields)._Screens_k__BackingField;
  if (__this_01 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    return;
  }
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm
            (__this_01,"root cancel",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_ScalePreset
// il2cpp: int32_t Gisketch_Aottg2UI_GisketchUIRoot__get_ScalePreset (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x531af40

int32_t Gisketch_Aottg2UI_GisketchUIRoot__get_ScalePreset
                  (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return (__this->fields)._scalePreset;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Scale
// il2cpp: float Gisketch_Aottg2UI_GisketchUIRoot__get_Scale (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x531af50
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531af90: cmp byte ptr [rip + 0x222782f], 0
// asm:   0x531af97: je 0x531b00c

float Gisketch_Aottg2UI_GisketchUIRoot__get_Scale
                (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  float fVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075427ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    Il2CppMethodInitialized_075427ad = '\x01';
  }
  fVar3 = (__this->fields)._scale;
  if ((TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
  }
  if (Il2CppMethodInitialized_075427c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    Il2CppMethodInitialized_075427c6 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
  }
  fVar2 = 1.5;
  if (fVar3 <= 1.5) {
    fVar2 = fVar3;
  }
  fVar2 = (float)(-(uint)(0.5 <= fVar3) & (uint)(fVar2 + -0.5));
  fVar3 = 1.0;
  if (fVar2 <= 1.0) {
    fVar3 = fVar2;
  }
  fVar3 = (float)(-(uint)(0.0 <= fVar2) & (uint)fVar3);
  fVar2 = 0.0;
  if (0.0 <= fVar3) {
    fVar2 = fVar3;
  }
  return fVar2 * 0.40000004 + 0.8;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SetScale
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__SetScale (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, int32_t preset, const MethodInfo* method);
// 0x531b0e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531b11a: cmp ebp, 4
// asm:   0x531b11d: ja 0x531b13a

void Gisketch_Aottg2UI_GisketchUIRoot__SetScale
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,int32_t preset,MethodInfo *method)

{
  int32_t iVar1;
  undefined4 in_register_00000034;
  float scale;
  
  iVar1 = preset;
  if (Il2CppMethodInitialized_075427ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    Il2CppMethodInitialized_075427ae = '\x01';
  }
  (__this->fields)._scalePreset = preset;
  if ((TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
  }
  if ((uint)preset < 5) {
    scale = *(float *)(&g_data_01010910 + (long)preset * 4);
  }
  else {
    scale = 1.0;
  }
  Gisketch_Aottg2UI_GisketchUIRoot__SetScale_521b170
            (__this,scale,(MethodInfo *)CONCAT44(in_register_00000034,iVar1));
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SetScale
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__SetScale (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, float scale, const MethodInfo* method);
// 0x531b170

void Gisketch_Aottg2UI_GisketchUIRoot__SetScale_521b170
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,float scale,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *root;
  bool bVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  float fVar2;
  
  if (Il2CppMethodInitialized_075427af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427af = '\x01';
    in_RDX = extraout_RDX;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    in_RDX = extraout_RDX_00;
  }
  fVar2 = 1.5;
  if (scale <= 1.5) {
    fVar2 = scale;
  }
  (__this->fields)._scale = (float)(~-(uint)(0.5 <= scale) & 0x3f000000 | (uint)fVar2 & -(uint)(0.5 <= scale))
  ;
  Gisketch_Aottg2UI_GisketchUIRoot__ApplyScale(__this,(UnityEngine_UI_CanvasScaler_o *)0x0,in_RDX);
  x = (UnityEngine_Object_o *)(__this->fields)._canvasObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    root = (__this->fields)._canvasObject;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(root,0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$ApplyScale
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__ApplyScale (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, UnityEngine_UI_CanvasScaler_o* scaler, const MethodInfo* method);
// 0x531b2a0

void Gisketch_Aottg2UI_GisketchUIRoot__ApplyScale
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,UnityEngine_UI_CanvasScaler_o *scaler,
               MethodInfo *method)

{
  float scale;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  Gisketch_Aottg2UI_AottgUiScale_c *method_00;
  UnityEngine_Vector2_o value;
  
  if (Il2CppMethodInitialized_075427b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasScaler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427b0 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)scaler,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    x = (UnityEngine_Object_o *)(__this->fields)._canvasObject;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    scaler = (UnityEngine_UI_CanvasScaler_o *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = (__this->fields)._canvasObject;
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_0531b3c9;
      scaler = UnityEngine_GameObject__GetComponent_object_
                         (__this_00,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_CanvasScaler);
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)scaler,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  scale = (__this->fields)._scale;
  method_00 = TypeInfo_Gisketch_Aottg2UI_AottgUiScale;
  if ((TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
  }
  value = Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution_521b3d0(scale,(MethodInfo *)method_00);
  if (scaler != (UnityEngine_UI_CanvasScaler_o *)0x0) {
    UnityEngine_UI_CanvasScaler__set_referenceResolution(scaler,value,(MethodInfo *)0x0);
    return;
  }
label_0531b3c9:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_State
// il2cpp: Gisketch_Aottg2UI_State_GisketchUIState_o* Gisketch_Aottg2UI_GisketchUIRoot__get_State (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x531b4f0

Gisketch_Aottg2UI_State_GisketchUIState_o *
Gisketch_Aottg2UI_GisketchUIRoot__get_State(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return (__this->fields)._State_k__BackingField;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_State
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_State (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_State_GisketchUIState_o* value, const MethodInfo* method);
// 0x531b500

void Gisketch_Aottg2UI_GisketchUIRoot__set_State
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,Gisketch_Aottg2UI_State_GisketchUIState_o *value,
               MethodInfo *method)

{
  (__this->fields)._State_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._State_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Manifest
// il2cpp: Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* Gisketch_Aottg2UI_GisketchUIRoot__get_Manifest (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x531b520

Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *
Gisketch_Aottg2UI_GisketchUIRoot__get_Manifest(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return (__this->fields)._Manifest_k__BackingField;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_Manifest
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_Manifest (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* value, const MethodInfo* method);
// 0x531b530

void Gisketch_Aottg2UI_GisketchUIRoot__set_Manifest
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,
               Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *value,MethodInfo *method)

{
  (__this->fields)._Manifest_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Manifest_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Theme
// il2cpp: Gisketch_Aottg2UI_Styling_GisketchTheme_o* Gisketch_Aottg2UI_GisketchUIRoot__get_Theme (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x531b550

Gisketch_Aottg2UI_Styling_GisketchTheme_o *
Gisketch_Aottg2UI_GisketchUIRoot__get_Theme(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return (__this->fields)._Theme_k__BackingField;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_Theme
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_Theme (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Styling_GisketchTheme_o* value, const MethodInfo* method);
// 0x531b560

void Gisketch_Aottg2UI_GisketchUIRoot__set_Theme
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,Gisketch_Aottg2UI_Styling_GisketchTheme_o *value,
               MethodInfo *method)

{
  (__this->fields)._Theme_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Theme_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Screens
// il2cpp: Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* Gisketch_Aottg2UI_GisketchUIRoot__get_Screens (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x531b580

Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *
Gisketch_Aottg2UI_GisketchUIRoot__get_Screens(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return (__this->fields)._Screens_k__BackingField;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_Screens
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_Screens (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* value, const MethodInfo* method);
// 0x531b590

void Gisketch_Aottg2UI_GisketchUIRoot__set_Screens
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,
               Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *value,MethodInfo *method)

{
  (__this->fields)._Screens_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Screens_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Overlays
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* Gisketch_Aottg2UI_GisketchUIRoot__get_Overlays (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x531b5b0

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *
Gisketch_Aottg2UI_GisketchUIRoot__get_Overlays(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return (__this->fields)._Overlays_k__BackingField;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_Overlays
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_Overlays (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* value, const MethodInfo* method);
// 0x531b5c0

void Gisketch_Aottg2UI_GisketchUIRoot__set_Overlays
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *value,MethodInfo *method)

{
  (__this->fields)._Overlays_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Overlays_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Toasts
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* Gisketch_Aottg2UI_GisketchUIRoot__get_Toasts (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x531b5e0

Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *
Gisketch_Aottg2UI_GisketchUIRoot__get_Toasts(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  return (__this->fields)._Toasts_k__BackingField;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_Toasts
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_Toasts (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* value, const MethodInfo* method);
// 0x531b5f0

void Gisketch_Aottg2UI_GisketchUIRoot__set_Toasts
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *value,MethodInfo *method)

{
  (__this->fields)._Toasts_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Toasts_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$Start
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__Start (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x531b610
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531b63b: jmp 0x531b682

void Gisketch_Aottg2UI_GisketchUIRoot__Start(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075427b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_075427b1 = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  else {
    bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  if (((bVar2) && ((__this->fields)._buildOnStart != false)) && ((__this->fields)._runtimeBuilt == false)) {
    Gisketch_Aottg2UI_GisketchUIRoot__Build(__this,method);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$Update
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__Update (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x531bd10
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531bd41: jmp 0x531be57
// asm:   0x531bdca: jmp 0x531be57
// asm:   0x531be13: cmp byte ptr [rip + 0x2226a19], 0
// asm:   0x531be1a: je 0x531be70

void Gisketch_Aottg2UI_GisketchUIRoot__Update(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_01;
  bool bVar3;
  int32_t iVar4;
  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c *method_00;
  
  if (Il2CppMethodInitialized_075427b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Il2CppMethodInitialized_075427b2 = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  else {
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  if (!bVar3) {
    return;
  }
  Gisketch_Aottg2UI_GisketchUIRoot__UpdateFocusInput(__this,method);
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    bVar3 = Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_BlocksUiInput((MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
  }
  else {
    bVar3 = Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_BlocksUiInput((MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
  }
  bVar3 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    }
    if (Il2CppMethodInitialized_07542833 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
      Il2CppMethodInitialized_07542833 = '\x01';
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)->_2).
              cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    }
    iVar2 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_lastSkipFrame;
    iVar4 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    if (iVar2 != iVar4) {
      method_00 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver;
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
      }
      bVar3 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip((MethodInfo *)method_00);
      if ((!bVar3) &&
         (((__this_00 = (__this->fields)._Overlays_k__BackingField,
           __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0 &&
           (bVar3 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                              (__this_00,true,(MethodInfo *)0x0), bVar3)) ||
          ((__this_01 = (__this->fields)._Screens_k__BackingField,
           __this_01 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0 &&
           (bVar3 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Back(__this_01,(MethodInfo *)0x0), bVar3))
          )))) {
        if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
        }
        Gisketch_Aottg2UI_Actions_GisketchInputCapture__BlockThisFrame((MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
        }
        Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(1,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$Build
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__Build (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x531b690
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531ba74: mov rbx, rax
// asm:   0x531bc27: jmp 0x531bcd1

void Gisketch_Aottg2UI_GisketchUIRoot__Build(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Tweening_GisketchMotion_StaticFields *pGVar3;
  UnityEngine_MonoBehaviour_o *obj;
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *definition;
  UnityEngine_Object_o *x;
  UnityEngine_TextAsset_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *pGVar4;
  bool bVar5;
  Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass71_0_o *__this_01;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_02;
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *manifest;
  Il2CppObject *pIVar7;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar8;
  UnityEngine_RectTransform_o *parent;
  UnityEngine_Transform_o *screenLayer;
  UnityEngine_Transform_o *layer;
  UnityEngine_Transform_o *layer_00;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme;
  System_String_o *json;
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *localizer;
  System_Func_string__GisketchOverlayDefinition__o *__this_03;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *__this_04;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar9;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_05;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_06;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_Fields *pGVar10;
  byte bVar11;
  MethodInfo *method_07;
  float fVar12;
  
  if (Il2CppMethodInitialized_075427b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgActionRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_GisketchOverlayDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchBuildContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_State_GisketchUIState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_GisketchUIRoot_c__DisplayClass71_0_Build_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_GisketchUIRoot_c__DisplayClass71_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Toasts");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Screens");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Overlays");
    Il2CppMethodInitialized_075427b3 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_GisketchUIRoot_c__DisplayClass71_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass71_0_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    bVar2 = (__this->fields)._suppressNextBuildMotion;
    (__this->fields)._suppressNextBuildMotion = false;
    if ((__this->fields)._preserveStateOnBuild == false) {
      method_07 = (MethodInfo *)0x0;
    }
    else {
      method_07 = (MethodInfo *)(__this->fields)._State_k__BackingField;
    }
    (__this->fields)._preserveStateOnBuild = false;
    Gisketch_Aottg2UI_GisketchUIRoot__Clear_521c0b0(__this,false,method_00);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgActionRegistry);
    Gisketch_Aottg2UI_Code_AottgActionRegistry___ctor(__this_02,(MethodInfo *)0x0);
    (__this->fields)._codeActions = __this_02;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._codeActions);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgCodeCatalog__Discover((MethodInfo *)0x0);
    (__this_01->fields).catalog = pGVar6;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).catalog);
    manifest = Gisketch_Aottg2UI_GisketchUIRoot__LoadCodeManifest
                         (__this,(__this_01->fields).catalog,method_01);
    if (manifest == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      return;
    }
    (__this->fields)._Manifest_k__BackingField = manifest;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Manifest_k__BackingField);
    bVar11 = bVar2 ^ 1;
    if ((__this->fields)._motionEnabled == false) {
      bVar11 = false;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
    }
    pGVar3 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields;
    pGVar3->Enabled = (bool)bVar11;
    fVar1 = (__this->fields)._motionScale;
    fVar12 = 0.0;
    if (0.0 <= fVar1) {
      fVar12 = fVar1;
    }
    pGVar3->DurationScale = fVar12;
    obj = (__this->fields)._actionHandler;
    pIVar7 = il2cpp_vm_Object_IsInst
                       ((Il2CppObject *)obj,
                        (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    (__this->fields)._customActions = (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)pIVar7;
    il2cpp_vm_Object_IsInst
              ((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    Il2CppCodeGenWriteBarrier(&(__this->fields)._customActions);
    pGVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_State_GisketchUIState);
    Gisketch_Aottg2UI_State_GisketchUIState___ctor(pGVar8,(MethodInfo *)0x0);
    (__this->fields)._State_k__BackingField = pGVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._State_k__BackingField);
    pGVar8 = (__this->fields)._State_k__BackingField;
    if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchUIState__CopyFrom
                (pGVar8,(Gisketch_Aottg2UI_State_GisketchUIState_o *)method_07,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_GisketchUIRoot__EnsureEventSystem(__this,method_07);
      parent = Gisketch_Aottg2UI_GisketchUIRoot__CreateCanvas(__this,method_07);
      screenLayer = Gisketch_Aottg2UI_GisketchUIRoot__CreateLayer
                              ((UnityEngine_Transform_o *)parent,"AoTTG Screens",method_02);
      layer = Gisketch_Aottg2UI_GisketchUIRoot__CreateLayer
                        ((UnityEngine_Transform_o *)parent,"AoTTG Overlays",method_03);
      layer_00 = Gisketch_Aottg2UI_GisketchUIRoot__CreateLayer
                           ((UnityEngine_Transform_o *)parent,"AoTTG Toasts",method_04);
      Gisketch_Aottg2UI_GisketchUIRoot__PromoteLayer(layer,900,method_05);
      Gisketch_Aottg2UI_GisketchUIRoot__PromoteLayer(layer_00,1000,method_06);
      definition = (manifest->fields).theme;
      if (definition == (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)0x0) {
        x = (UnityEngine_Object_o *)(__this->fields)._themeJson;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          __this_00 = (__this->fields)._themeJson;
          if (__this_00 == (UnityEngine_TextAsset_o *)0x0) goto label_0531bcd1;
          json = UnityEngine_TextAsset__get_text(__this_00,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme)
            ;
          }
          theme = Gisketch_Aottg2UI_Styling_GisketchTheme__FromJson(json,(MethodInfo *)0x0);
        }
        else {
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme)
            ;
          }
          theme = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->static_fields->Default;
        }
      }
      else {
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
        }
        theme = Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(definition,(MethodInfo *)0x0);
      }
      (__this->fields)._Theme_k__BackingField = theme;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._Theme_k__BackingField);
      localizer = (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
      Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor
                ((Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *)localizer,(MethodInfo *)0x0);
      pGVar8 = (__this->fields)._State_k__BackingField;
      __this_03 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_string_GisketchOverlayDefinition);
      System_Func_object__object____ctor
                ((System_Func_object__object__o *)__this_03,(Il2CppObject *)__this_01,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_GisketchUIRoot_c__DisplayClass71_0_Build_b__0,
                 (MethodInfo_4F19B50 *)0x0);
      __this_04 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchBuildContext);
      Gisketch_Aottg2UI_Building_GisketchBuildContext___ctor
                (__this_04,manifest,theme,localizer,
                 (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)__this,pGVar8,
                 (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0,__this_03,(MethodInfo *)0x0);
      pGVar9 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
      Gisketch_Aottg2UI_Routing_GisketchScreenRouter___ctor
                (pGVar9,screenLayer,__this_04,(UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
      (__this->fields)._Screens_k__BackingField = pGVar9;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._Screens_k__BackingField);
      __this_05 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager);
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___ctor(__this_05,layer,__this_04,(MethodInfo *)0x0);
      (__this->fields)._Overlays_k__BackingField = __this_05;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._Overlays_k__BackingField);
      __this_06 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager);
      Gisketch_Aottg2UI_Overlays_GisketchToastManager___ctor(__this_06,layer_00,__this_04,(MethodInfo *)0x0);
      (__this->fields)._Toasts_k__BackingField = __this_06;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._Toasts_k__BackingField);
      pGVar9 = (__this->fields)._Screens_k__BackingField;
      bVar5 = System_String__IsNullOrEmpty((manifest->fields).initialScreen,(MethodInfo *)0x0);
      if (bVar5) {
        pGVar4 = (manifest->fields).screens;
        if ((pGVar4 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0) ||
           (pGVar4->max_length == 0)) {
          pGVar10 = *(Gisketch_Aottg2UI_Data_GisketchScreenDefinition_Fields **)(g_data_07556758 + 0xb8);
        }
        else {
          if ((int)pGVar4->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          if (pGVar4->m_Items[0] == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0)
          goto label_0531bcd1;
          pGVar10 = &pGVar4->m_Items[0]->fields;
        }
      }
      else {
        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_Fields *)&(manifest->fields).initialScreen;
      }
      if (pGVar9 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen(pGVar9,pGVar10->id,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
        }
        bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        (__this->fields)._runtimeBuilt = bVar5;
        if (bVar2 != false) {
          bVar2 = (__this->fields)._motionEnabled;
          if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
          }
          TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->Enabled = bVar2;
        }
        return;
      }
    }
  }
label_0531bcd1:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$Clear
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__Clear (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x531cb10

void Gisketch_Aottg2UI_GisketchUIRoot__Clear(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  Gisketch_Aottg2UI_GisketchUIRoot__Clear_521c0b0(__this,true,in_RDX);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$Clear
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__Clear (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, bool destroyEventSystem, const MethodInfo* method);
// 0x531c0b0

void Gisketch_Aottg2UI_GisketchUIRoot__Clear_521c0b0
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,bool destroyEventSystem,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_01;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_02;
  MethodInfo *method_00;
  
  Gisketch_Aottg2UI_GisketchUIRoot__CancelScreenPrewarm(__this,true,method);
  __this_00 = (__this->fields)._Screens_k__BackingField;
  if (__this_00 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Clear(__this_00,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields)._Overlays_k__BackingField;
  if (__this_01 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Clear(__this_01,(MethodInfo *)0x0);
  }
  __this_02 = (__this->fields)._Toasts_k__BackingField;
  if (__this_02 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close(__this_02,false,(MethodInfo *)0x0);
  }
  (__this->fields)._Screens_k__BackingField = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Screens_k__BackingField);
  (__this->fields)._Overlays_k__BackingField = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Overlays_k__BackingField);
  (__this->fields)._Toasts_k__BackingField = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Toasts_k__BackingField);
  (__this->fields)._State_k__BackingField = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._State_k__BackingField);
  (__this->fields)._runtimeBuilt = false;
  (__this->fields)._Manifest_k__BackingField = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Manifest_k__BackingField);
  (__this->fields)._Theme_k__BackingField = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Theme_k__BackingField);
  (__this->fields)._codeActions = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._codeActions);
  method_00 = (MethodInfo *)0x0;
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__ReleaseAll
            ((__this->fields)._canvasObject,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_GisketchUIRoot__DestroyObject(&(__this->fields)._canvasObject,method_00);
  if (destroyEventSystem) {
    Gisketch_Aottg2UI_GisketchUIRoot__DestroyObject(&(__this->fields)._eventSystemObject,method_00);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SetTheme
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__SetTheme (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, UnityEngine_TextAsset_o* themeJson, const MethodInfo* method);
// 0x531cc00

void Gisketch_Aottg2UI_GisketchUIRoot__SetTheme
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,UnityEngine_TextAsset_o *themeJson,
               MethodInfo *method)

{
  UnityEngine_Object_o *y;
  bool bVar1;
  
  if (Il2CppMethodInitialized_075427b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427b4 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)themeJson,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    y = (UnityEngine_Object_o *)(__this->fields)._themeJson;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)themeJson,y,(MethodInfo *)0x0);
    if (!bVar1) {
      (__this->fields)._themeJson = themeJson;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._themeJson);
      (__this->fields)._preserveStateOnBuild = true;
      Gisketch_Aottg2UI_GisketchUIRoot__Build(__this,(MethodInfo *)themeJson);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SetSelectedScreen
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__SetSelectedScreen (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_o* screenId, const MethodInfo* method);
// 0x531ccc0

void Gisketch_Aottg2UI_GisketchUIRoot__SetSelectedScreen
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_o *screenId,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty(screenId,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__op_Equality(screenId,(__this->fields)._selectedScreenId,(MethodInfo *)0x0);
    if (!bVar1) {
      (__this->fields)._selectedScreenId = screenId;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedScreenId);
      if ((__this->fields)._Screens_k__BackingField != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0
         ) {
        Gisketch_Aottg2UI_GisketchUIRoot__Build(__this,(MethodInfo *)screenId);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$RefreshActiveScreen
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, UnityEngine_TextAsset_o* themeJson, const MethodInfo* method);
// 0x531cd20

void Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,UnityEngine_TextAsset_o *themeJson,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075427b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427b5 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)themeJson,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    (__this->fields)._themeJson = themeJson;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._themeJson);
    method_00 = (MethodInfo *)themeJson;
  }
  Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen_521cd90(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$RefreshActiveScreen
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x531cd90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531ce16: jmp 0x531ceb4

void Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen_521cd90
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *__this_00;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar4;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_075427b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    Il2CppMethodInitialized_075427b6 = '\x01';
  }
  pGVar4 = (__this->fields)._Screens_k__BackingField;
  if ((pGVar4 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) ||
     (pGVar1 = (pGVar4->fields)._active, pGVar1 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    }
    __this_00 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Empty((MethodInfo *)0x0);
    pGVar4 = (__this->fields)._Screens_k__BackingField;
  }
  else {
    pUVar2 = (pGVar1->fields)._Root_k__BackingField;
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    }
    method = (MethodInfo *)0x0;
    __this_00 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__CaptureAll(pUVar2,(MethodInfo *)0x0);
    pGVar4 = (__this->fields)._Screens_k__BackingField;
  }
  if (pGVar4 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    pGVar1 = (pGVar4->fields)._active;
    if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      pUVar2 = (pGVar1->fields)._Root_k__BackingField;
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
      }
      method = (MethodInfo *)0x0;
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__CaptureActiveSections(pUVar2,(MethodInfo *)0x0);
      pGVar4 = (__this->fields)._Screens_k__BackingField;
      if (pGVar4 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) goto label_0531ceb4;
    }
    method = (MethodInfo *)0x0;
    bVar3 = System_String__IsNullOrEmpty((pGVar4->fields)._activeId,(MethodInfo *)0x0);
    if (!bVar3) {
      pGVar4 = (__this->fields)._Screens_k__BackingField;
      if (pGVar4 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) goto label_0531cf6c;
      method = (MethodInfo *)(pGVar4->fields)._activeId;
      (__this->fields)._selectedScreenId = (System_String_o *)method;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedScreenId);
    }
  }
label_0531ceb4:
  (__this->fields)._suppressNextBuildMotion = true;
  (__this->fields)._preserveStateOnBuild = true;
  Gisketch_Aottg2UI_GisketchUIRoot__Build(__this,method);
  if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *)0x0) {
label_0531cf6c:
    ThrowNullReferenceException();
  }
  bVar3 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__get_HasEntries(__this_00,(MethodInfo *)0x0);
  if (((bVar3) &&
      (pGVar4 = (__this->fields)._Screens_k__BackingField,
      pGVar4 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)) &&
     (pGVar1 = (pGVar4->fields)._active, pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
    Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Restore
              (__this_00,(pGVar1->fields)._Root_k__BackingField,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    }
    else {
      bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    }
    if (bVar3) {
      pGVar4 = (__this->fields)._Screens_k__BackingField;
      if ((pGVar4 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) &&
         (pGVar1 = (pGVar4->fields)._active, pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
        routine = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame
                            (__this_00,(pGVar1->fields)._Root_k__BackingField,(MethodInfo *)0x0);
        UnityEngine_MonoBehaviour__StartCoroutine_691c390
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        return;
      }
      goto label_0531cf6c;
    }
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$RefreshNode
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__RefreshNode (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_o* nodeId, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* replacement, Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o* options, const MethodInfo* method);
// 0x531cf80

bool Gisketch_Aottg2UI_GisketchUIRoot__RefreshNode
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_o *nodeId,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *replacement,
               Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *options,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields)._Screens_k__BackingField;
  if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    return false;
  }
  bVar1 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__RefreshNode
                    (__this_00,nodeId,replacement,options,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$InvalidateScreen
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__InvalidateScreen (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_o* screenId, const MethodInfo* method);
// 0x531cfa0

bool Gisketch_Aottg2UI_GisketchUIRoot__InvalidateScreen
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_o *screenId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields)._Screens_k__BackingField;
  if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    return false;
  }
  bVar1 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__InvalidateScreen
                    (__this_00,screenId,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$BuildDetachedNodes
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_o* ownerId, System_Action_AottgUi__o* build, System_String_o* clearOwnerPrefix, const MethodInfo* method);
// 0x531cfc0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_o *ownerId,System_Action_AottgUi__o *build
          ,System_String_o *clearOwnerPrefix,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  
  if (Il2CppMethodInitialized_075427b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    Il2CppMethodInitialized_075427b7 = '\x01';
  }
  if (build == (System_Action_AottgUi__o *)0x0) {
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,0);
    return pGVar3;
  }
  bVar2 = System_String__IsNullOrEmpty(clearOwnerPrefix,(MethodInfo *)0x0);
  if ((!bVar2) &&
     (pGVar1 = (__this->fields)._codeActions, pGVar1 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0))
  {
    Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwnersWithPrefix
              (pGVar1,clearOwnerPrefix,(MethodInfo *)0x0);
  }
  pGVar1 = (__this->fields)._codeActions;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_00,ownerId,pGVar1,(MethodInfo *)0x0);
  (*(code *)(build->fields).invoke_impl)((build->fields).method_code,__this_00,(build->fields).method);
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__ToArray(__this_00,(MethodInfo *)0x0);
  return pGVar3;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SetActionHandler
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__SetActionHandler (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, UnityEngine_MonoBehaviour_o* actionHandler, const MethodInfo* method);
// 0x531d0a0

void Gisketch_Aottg2UI_GisketchUIRoot__SetActionHandler
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,UnityEngine_MonoBehaviour_o *actionHandler,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_075427b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    Il2CppMethodInitialized_075427b8 = '\x01';
  }
  (__this->fields)._actionHandler = actionHandler;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._actionHandler);
  pIVar1 = il2cpp_vm_Object_IsInst
                     ((Il2CppObject *)actionHandler,
                      (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
  (__this->fields)._customActions = (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)pIVar1;
  il2cpp_vm_Object_IsInst
            ((Il2CppObject *)actionHandler,
             (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._customActions);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$ShowToast
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__ShowToast (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x531d110

void Gisketch_Aottg2UI_GisketchUIRoot__ShowToast
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_00;
  
  __this_00 = (__this->fields)._Toasts_k__BackingField;
  if (__this_00 == (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
    return;
  }
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__Show(__this_00,toast,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$HandleAction
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__HandleAction (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_o* actionId, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x531d130

void Gisketch_Aottg2UI_GisketchUIRoot__HandleAction
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_o *actionId,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *pGVar1;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_01;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *pGVar2;
  bool bVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_075427b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&"dialog.");
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"screen.");
    il2cpp_codegen_initialize_runtime_metadata(&"aottg-search-palette");
    il2cpp_codegen_initialize_runtime_metadata(&"popover.");
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch UI action: ");
    Il2CppMethodInitialized_075427b9 = '\x01';
  }
  bVar3 = System_String__IsNullOrEmpty(actionId,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if (actionId != (System_String_o *)0x0) {
    bVar3 = System_String__StartsWith_53002b0(actionId,"screen.",5,(MethodInfo *)0x0);
    if (bVar3) {
      if ("screen." != (System_String_o *)0x0) {
        __this_00 = (__this->fields)._Screens_k__BackingField;
        pSVar4 = System_String__Substring
                           (actionId,("screen."->fields)._stringLength,(MethodInfo *)0x0);
        if (__this_00 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
          Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen(__this_00,pSVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      bVar3 = System_String__StartsWith_53002b0(actionId,"dialog.",5,(MethodInfo *)0x0);
      if (bVar3) {
        if ("dialog." != (System_String_o *)0x0) {
          pSVar4 = System_String__Substring
                             (actionId,("dialog."->fields)._stringLength,(MethodInfo *)0x0);
          pGVar1 = (__this->fields)._Overlays_k__BackingField;
          bVar3 = System_String__op_Equality(pSVar4,"aottg-search-palette",(MethodInfo *)0x0);
          if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                      (pGVar1,pSVar4,bVar3 || context.fields.InputSource != 1,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        bVar3 = System_String__StartsWith_53002b0(actionId,"popover.",5,(MethodInfo *)0x0);
        if (bVar3) {
          if ("popover." != (System_String_o *)0x0) {
            pGVar1 = (__this->fields)._Overlays_k__BackingField;
            pSVar4 = System_String__Substring
                               (actionId,("popover."->fields)._stringLength,(MethodInfo *)0x0);
            if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
              Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowPopover
                        (pGVar1,pSVar4,context.fields.GameObject,context.fields.InputSource != 1,24.0,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          bVar3 = System_String__op_Equality(actionId,"overlay.close",(MethodInfo *)0x0);
          if (!bVar3) {
            __this_01 = (__this->fields)._codeActions;
            if ((__this_01 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) &&
               (bVar3 = Gisketch_Aottg2UI_Code_AottgActionRegistry__TryHandle
                                  (__this_01,actionId,context,(MethodInfo *)0x0), bVar3)) {
              return;
            }
            pGVar2 = (__this->fields)._customActions;
            if (pGVar2 != (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0) {
              il2cpp_runtime_helper_02d49cb0(0,TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler,pGVar2,actionId);
              return;
            }
            pSVar4 = System_String__Concat_52f0320("Gisketch UI action: ",actionId,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
            }
            UnityEngine_Debug__Log_68c4420
                      ((Il2CppObject *)pSVar4,(UnityEngine_Object_o *)context.fields.GameObject,
                       (MethodInfo *)0x0);
            return;
          }
          pGVar1 = (__this->fields)._Overlays_k__BackingField;
          if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(pGVar1,true,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$LoadCodeManifest
// il2cpp: Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* Gisketch_Aottg2UI_GisketchUIRoot__LoadCodeManifest (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* catalog, const MethodInfo* method);
// 0x531c200
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531c3a8: jmp 0x531c2be

Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *
Gisketch_Aottg2UI_GisketchUIRoot__LoadCodeManifest
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog,
          MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_TextAsset_o *__this_00;
  bool bVar3;
  System_String_o *json;
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *theme;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_075427ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"GisketchUIRoot found no AoTTG code UI screens.");
    il2cpp_codegen_initialize_runtime_metadata(&"GisketchUIRoot has no theme JSON assigned; using readable default AoTTG UI theme.");
    Il2CppMethodInitialized_075427ba = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._themeJson;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    }
    else {
      bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    }
    if (bVar3) {
      if ((((Il2CppClass *)TypeInfo_UnityEngine_Debug)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogWarning_68c53f0
                ((Il2CppObject *)"GisketchUIRoot has no theme JSON assigned; using readable default AoTTG UI theme.",(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      pUVar2 = (UnityEngine_Object_o *)(__this->fields)._themeJson;
      uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      goto joined_r0x0531c2bc;
    }
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._themeJson;
  uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
joined_r0x0531c2bc:
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  theme = (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    __this_00 = (__this->fields)._themeJson;
    if (__this_00 == (UnityEngine_TextAsset_o *)0x0) {
      ThrowNullReferenceException();
    }
    json = UnityEngine_TextAsset__get_text(__this_00,(MethodInfo *)0x0);
    theme = Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson(json,(MethodInfo *)0x0);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build_5263860
                     (catalog,(__this->fields)._selectedScreenId,theme,(__this->fields)._codeActions,
                      (MethodInfo *)0x0);
  if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__LogWarning_68c53f0
              ((Il2CppObject *)"GisketchUIRoot found no AoTTG code UI screens.",(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
  }
  return pGVar4;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$EnsureEventSystem
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__EnsureEventSystem (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x531c3c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531c3fa: jmp 0x531c541

void Gisketch_Aottg2UI_GisketchUIRoot__EnsureEventSystem
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  
  if (Il2CppMethodInitialized_075427bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_StandaloneInputModule);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG EventSystem");
    Il2CppMethodInitialized_075427bb = '\x01';
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) goto label_0531c471;
label_0531c3eb:
    bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor != 0) goto label_0531c3eb;
label_0531c471:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  if ((bVar1) && ((__this->fields)._createEventSystem != false)) {
    if ((((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem)->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor(pUVar3,"AoTTG EventSystem",(MethodInfo *)0x0);
      targetAddress = &(__this->fields)._eventSystemObject;
      (__this->fields)._eventSystemObject = pUVar3;
      Il2CppCodeGenWriteBarrier(targetAddress);
      pUVar3 = (__this->fields)._eventSystemObject;
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
        parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510(__this_00,parent,false,(MethodInfo *)0x0);
          if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
            pUVar2 = UnityEngine_GameObject__AddComponent_object_
                               (*targetAddress,
                                (MethodInfo_353B6A0 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_EventSystem);
            if (Il2CppMethodInitialized_075427bc == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
              Il2CppMethodInitialized_075427bc = '\x01';
            }
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar1 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar1) {
              if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_0531c642;
              (pUVar2->fields).m_sendNavigationEvents = true;
            }
            if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__AddComponent_object_
                        (*targetAddress,
                         (MethodInfo_353B6A0 *)
                         MethodInfo_UnityEngine_GameObject_AddComponent_StandaloneInputModule);
              return;
            }
          }
        }
      }
label_0531c642:
      ThrowNullReferenceException();
    }
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (Il2CppMethodInitialized_075427bc == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_075427bc = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_0531c642;
      (pUVar2->fields).m_sendNavigationEvents = true;
    }
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$ConfigureEventSystem
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__ConfigureEventSystem (UnityEngine_EventSystems_EventSystem_o* eventSystem, const MethodInfo* method);
// 0x531d430

void Gisketch_Aottg2UI_GisketchUIRoot__ConfigureEventSystem
               (UnityEngine_EventSystems_EventSystem_o *eventSystem,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075427bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427bc = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)eventSystem,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (eventSystem == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
      ThrowNullReferenceException();
    }
    (eventSystem->fields).m_sendNavigationEvents = true;
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$ShouldFocusOverlay
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__ShouldFocusOverlay (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x531d420

bool Gisketch_Aottg2UI_GisketchUIRoot__ShouldFocusOverlay
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  return context.fields.InputSource != 1;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CreateCanvas
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_GisketchUIRoot__CreateCanvas (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x531c650

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_GisketchUIRoot__CreateCanvas(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_Canvas_o *__this_01;
  UnityEngine_UI_CanvasScaler_o *scaler;
  UnityEngine_RectTransform_o *rect;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_075427bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasScaler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG UI Canvas");
    Il2CppMethodInitialized_075427bd = '\x01';
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
    pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(pUVar2,"AoTTG UI Canvas",components,(MethodInfo *)0x0);
    targetAddress = &(__this->fields)._canvasObject;
    (__this->fields)._canvasObject = pUVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar2 = (__this->fields)._canvasObject;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510(__this_00,parent,false,(MethodInfo *)0x0);
        if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = UnityEngine_GameObject__AddComponent_object_
                                (*targetAddress,
                                 (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
          if (__this_01 != (UnityEngine_Canvas_o *)0x0) {
            UnityEngine_Canvas__set_renderMode(__this_01,0,(MethodInfo *)0x0);
            if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__AddComponent_object_
                        (*targetAddress,
                         (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster
                        );
              if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
                scaler = UnityEngine_GameObject__AddComponent_object_
                                   (*targetAddress,
                                    (MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_CanvasScaler);
                if (scaler != (UnityEngine_UI_CanvasScaler_o *)0x0) {
                  (scaler->fields).m_UiScaleMode = 1;
                  (scaler->fields).m_MatchWidthOrHeight = 0.5;
                  Gisketch_Aottg2UI_GisketchUIRoot__ApplyScale(__this,scaler,method_00);
                  pUVar2 = (__this->fields)._canvasObject;
                  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                    method_01 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
                    rect = UnityEngine_GameObject__GetComponent_object_
                                     (pUVar2,(MethodInfo_353B730 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                    Gisketch_Aottg2UI_GisketchUIRoot__Stretch(rect,method_01);
                    return rect;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CreateLayer
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_GisketchUIRoot__CreateLayer (UnityEngine_Transform_o* parent, System_String_o* name, const MethodInfo* method);
// 0x531c890

UnityEngine_Transform_o *
Gisketch_Aottg2UI_GisketchUIRoot__CreateLayer
          (UnityEngine_Transform_o *parent,System_String_o *name,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_RectTransform_o *rect;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075427be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_075427be = '\x01';
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
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this,name,components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510(pUVar2,parent,false,(MethodInfo *)0x0);
        method_00 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
        rect = UnityEngine_GameObject__GetComponent_object_
                         (__this,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        Gisketch_Aottg2UI_GisketchUIRoot__Stretch(rect,method_00);
        pUVar2 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        return pUVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$PromoteLayer
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__PromoteLayer (UnityEngine_Transform_o* layer, int32_t sortingOrder, const MethodInfo* method);
// 0x531ca00

void Gisketch_Aottg2UI_GisketchUIRoot__PromoteLayer
               (UnityEngine_Transform_o *layer,int32_t sortingOrder,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Canvas_o *__this;
  
  if (Il2CppMethodInitialized_075427bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
    Il2CppMethodInitialized_075427bf = '\x01';
  }
  if (layer != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)layer,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      __this = UnityEngine_GameObject__AddComponent_object_
                         (pUVar1,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
      if (__this != (UnityEngine_Canvas_o *)0x0) {
        UnityEngine_Canvas__set_overrideSorting(__this,true,(MethodInfo *)0x0);
        UnityEngine_Canvas__set_sortingOrder(__this,sortingOrder,(MethodInfo *)0x0);
        pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)layer,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__AddComponent_object_
                    (pUVar1,(MethodInfo_353B6A0 *)
                            MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$FirstScreenId
// il2cpp: System_String_o* Gisketch_Aottg2UI_GisketchUIRoot__FirstScreenId (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* manifest, const MethodInfo* method);
// 0x531cab0

System_String_o *
Gisketch_Aottg2UI_GisketchUIRoot__FirstScreenId
          (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *manifest,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *pGVar1;
  
  if (manifest != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
    pGVar1 = (manifest->fields).screens;
    if ((pGVar1 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0) || (pGVar1->max_length == 0))
    {
      return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    if ((int)pGVar1->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (pGVar1->m_Items[0] != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
      return (pGVar1->m_Items[0]->fields).id;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$Stretch
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x531d4a0

void Gisketch_Aottg2UI_GisketchUIRoot__Stretch(UnityEngine_RectTransform_o *rect,MethodInfo *method)

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


// Gisketch.Aottg2UI.GisketchUIRoot$$DestroyObject
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__DestroyObject (UnityEngine_GameObject_o** go, const MethodInfo* method);
// 0x531cb20

void Gisketch_Aottg2UI_GisketchUIRoot__DestroyObject(UnityEngine_GameObject_o **go,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Object_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075427c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075427c0 = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)*go;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  pUVar2 = (UnityEngine_Object_o *)*go;
  uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  if (bVar3) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
  }
  else {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__DestroyImmediate_6921750(pUVar2,(MethodInfo *)0x0);
  }
  *go = (UnityEngine_GameObject_o *)0x0;
  Il2CppCodeGenWriteBarrier(go);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$MarkEditorPreview
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__MarkEditorPreview (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x531d490

void Gisketch_Aottg2UI_GisketchUIRoot__MarkEditorPreview(UnityEngine_GameObject_o *go,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$.ctor
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot___ctor (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x531d5a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x531d64d: cmp byte ptr [rip + 0x2225232], 0
// asm:   0x531d654: je 0x531d6e9

void Gisketch_Aottg2UI_GisketchUIRoot___ctor(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_HashSet_string__o *__this_01;
  
  if (Il2CppMethodInitialized_075427c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_075427c1 = '\x01';
  }
  (__this->fields)._screenPrewarmIdleDelay = 0.75;
  (__this->fields)._screenPrewarmKeepAliveFrames = 10;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields)._screenPrewarmQueue = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._screenPrewarmQueue);
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
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_4fb2f30
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_4FB2F30 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
  (__this->fields)._screenPrewarmed = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._screenPrewarmed);
  (__this->fields)._scalePreset = 2;
  (__this->fields)._scale = 1.0;
  (__this->fields)._buildOnStart = true;
  (__this->fields)._previewInEditor = true;
  (__this->fields)._createEventSystem = true;
  (__this->fields)._motionEnabled = true;
  (__this->fields)._motionScale = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


