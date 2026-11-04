// Type: Gisketch.Aottg2UI.GisketchUIRoot
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI/GisketchUIRoot.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.GisketchUIRoot.<>c__DisplayClass70_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass70_0___ctor (Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass70_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass70_0___ctor(Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass70_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<>c__DisplayClass70_0$$<Build>b__0
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass70_0___Build_b__0 (Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass70_0_o* __this, System_String_o* id, const MethodInfo* method);
// 0x1818a3590

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass70_0___Build_b__0
          (Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass70_0_o *__this,System_String_o *id,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar2;
  
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog_18c28f0
                       ((__this->fields).catalog,id,(pGVar1->fields)._codeActions,(MethodInfo *)0x0);
    return pGVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$.ctor
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11___ctor (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11___ctor(Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__System_IDisposable_Dispose (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, const MethodInfo* method);
// 0x1818a2a90
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a2aaf: xor edx, edx
// asm:   0x1818a2ab1: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x1818a2ab6: call 0x1818a2ad0  ; Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11____m__Finally1()
// asm:   0x1818a2abb: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1818a2ac0: test rcx, rcx
// asm:   0x1818a2ac3: jne 0x1818a2aca
// asm:   0x1818a2aca: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 2)) {
    Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11____m__Finally1(__this,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__MoveNext (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, const MethodInfo* method);
// 0x1818a2550
// eh: try 0x1818a25d2..0x1818a2a31 -> pad 0x183315930 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818a260b: jmp 0x1818a26f3
// asm:   0x1818a27a9: nop dword ptr [rax]
// asm:   0x1818a29de: mov rbx, qword ptr [rsp + 0x28]
// asm:   0x1818a29e3: test rbx, rbx
// asm:   0x1818a29e6: jne 0x1818a2a31
// asm:   0x1818a29e8: movzx eax, byte ptr [rsp + 0x60]
// asm:   0x1818a2a31: lea rcx, [rsp + 0x30]
// asm:   0x1818a2a36: call 0x181882bf0  ; il2cpp_runtime_helper_181882bf0()
// asm:   0x1818a2a3b: mov rcx, rbx
// asm:   0x1818a2a3e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__MoveNext
               (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar5;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Collections_Generic_List_string__o *pSVar6;
  bool bVar7;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGVar8;
  System_Collections_IEnumerator_o *value;
  VirtualInvokeData *pVVar9;
  Il2CppObject *pIVar10;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o *__this_02;
  ushort uVar12;
  ulonglong uVar14;
  ulonglong uVar13;
  
  if (Il2CppMethodInitialized_184341e81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"input");
    Il2CppMethodInitialized_184341e81 = '\x01';
  }
  uVar14 = 0;
  __this_00 = (__this->fields).__4__this;
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      ThrowNullReferenceException();
    }
  }
  else {
    if (iVar2 == 1) {
      (__this->fields).__1__state = -1;
      if (__this_00 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar11 = (__this->fields)._id_5__2;
      bVar7 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
      if ((((bVar7) ||
           (bVar7 = Gisketch_Aottg2UI_GisketchUIRoot__CanWaitForScreenPrewarm(__this_00,(MethodInfo *)0x0),
           !bVar7)) ||
          ((__this_00->fields)._Manifest_k__BackingField ==
           (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) ||
         (((pGVar8 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                               ((__this_00->fields)._Manifest_k__BackingField,pSVar11,(MethodInfo *)0x0),
           pGVar8 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0 ||
           ((__this_00->fields)._Screens_k__BackingField ==
            (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)) ||
          (bVar7 = System_String__Equals_196c550
                             ((((__this_00->fields)._Screens_k__BackingField)->fields)._activeId,pSVar11,5,
                              (MethodInfo *)0x0), bVar7)))) goto label_1818a28eb;
      pGVar5 = (__this_00->fields)._Screens_k__BackingField;
      if (pGVar5 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        ThrowNullReferenceException();
      }
      value = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__PrewarmScreen
                        (pGVar5,(__this->fields)._id_5__2,(__this_00->fields)._screenPrewarmKeepAliveFrames,
                         (MethodInfo *)0x0);
      (__this->fields)._prewarm_5__3 = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._prewarm_5__3,value);
      (__this->fields).__1__state = -3;
    }
    else {
      if (iVar2 != 2) {
        return false;
      }
      (__this->fields).__1__state = -3;
      if (__this_00 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        ThrowNullReferenceException();
      }
    }
    bVar7 = Gisketch_Aottg2UI_GisketchUIRoot__CanContinueScreenPrewarm(__this_00,(MethodInfo *)0x0);
    if (bVar7) {
      pIVar10 = (Il2CppObject *)(__this->fields)._prewarm_5__3;
      if (pIVar10 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = pIVar10->klass;
      uVar1 = (pIVar3->_2).interface_offsets_count;
      if (uVar1 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        uVar13 = uVar14;
        do {
          if (pIVar4[uVar13].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
            pVVar9 = pIVar3->vtable + pIVar4[uVar13].offset;
            goto label_1818a2766;
          }
          uVar12 = (short)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
        } while (uVar12 < uVar1);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar10,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_1818a2766:
      bVar7 = (*pVVar9->methodPtr)(pIVar10,pVVar9->method);
      if (bVar7) {
        pIVar10 = (Il2CppObject *)(__this->fields)._prewarm_5__3;
        if (pIVar10 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar3 = pIVar10->klass;
        uVar1 = (pIVar3->_2).interface_offsets_count;
        if (uVar1 != 0) {
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          do {
            if (pIVar4[uVar14].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar9 = pIVar3->vtable + (pIVar4[uVar14].offset + 1);
              goto label_1818a27d5;
            }
            uVar12 = (short)uVar14 + 1;
            uVar14 = (ulonglong)uVar12;
          } while (uVar12 < uVar1);
        }
        pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar10,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_1818a27d5:
        pIVar10 = (*pVVar9->methodPtr)(pIVar10,pVVar9->method);
        (__this->fields).__2__current = pIVar10;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar10);
        (__this->fields).__1__state = 2;
        return true;
      }
    }
    bVar7 = Gisketch_Aottg2UI_GisketchUIRoot__CanContinueScreenPrewarm(__this_00,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11____m__Finally1(__this,(MethodInfo *)0x0);
    if (bVar7) {
      __this_01 = (System_Collections_Generic_HashSet_object__o *)(__this_00->fields)._screenPrewarmed;
      if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_object___Add
                (__this_01,(Il2CppObject *)(__this->fields)._id_5__2,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    }
    else {
      pGVar5 = (__this_00->fields)._Screens_k__BackingField;
      if (pGVar5 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm
                  (pGVar5,"input",(MethodInfo *)0x0);
      }
    }
    (__this->fields)._id_5__2 = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._id_5__2,(void *)0x0);
    (__this->fields)._prewarm_5__3 = (System_Collections_IEnumerator_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._prewarm_5__3,(void *)0x0);
  }
label_1818a28eb:
  pSVar6 = (__this_00->fields)._screenPrewarmQueue;
  if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pSVar6->fields)._size < 1) {
    (__this_00->fields)._screenPrewarmRoutine = (UnityEngine_Coroutine_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._screenPrewarmRoutine,(void *)0x0);
    bVar7 = false;
  }
  else {
    pSVar11 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar6,0,
                         (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
    (__this->fields)._id_5__2 = pSVar11;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._id_5__2,pSVar11);
    pSVar6 = (__this_00->fields)._screenPrewarmQueue;
    if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___RemoveAt
              ((System_Collections_Generic_List_object__o *)pSVar6,0,
               (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_string_RemoveAt);
    if (Il2CppMethodInitialized_184341e68 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_GisketchUIRoot_WaitForScreenPrewarmIdle_d__12);
      Il2CppMethodInitialized_184341e68 = '\x01';
    }
    __this_02 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_GisketchUIRoot_WaitForScreenPrewarmIdle_d__12);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_02,(MethodInfo *)0x0);
    (__this_02->fields).__1__state = 0;
    if (__this_02 == (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this_02->fields).__4__this = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).__4__this,__this_00);
    (__this->fields).__2__current = (Il2CppObject *)__this_02;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_02);
    (__this->fields).__1__state = 1;
    bVar7 = true;
  }
  return bVar7;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$<>m__Finally1
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11____m__Finally1 (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, const MethodInfo* method);
// 0x1818a2ad0

void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11____m__Finally1
               (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar4;
  ushort uVar5;
  
  if (Il2CppMethodInitialized_184341e82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    Il2CppMethodInitialized_184341e82 = '\x01';
  }
  (__this->fields).__1__state = -1;
  obj = il2cpp_vm_Object_IsInst
                  ((Il2CppObject *)(__this->fields)._prewarm_5__3,(Il2CppClass *)TypeInfo_System_IDisposable);
  if (obj != (Il2CppObject *)0x0) {
    pIVar2 = obj->klass;
    uVar1 = (pIVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      uVar5 = 0;
      do {
        if (pIVar3[uVar5].interfaceType == (Il2CppClass *)TypeInfo_System_IDisposable) {
          (*pIVar2->vtable[pIVar3[uVar5].offset].methodPtr)(obj,pIVar2->vtable[pIVar3[uVar5].offset].method);
          return;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar1);
    }
    pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_System_IDisposable,0);
    (*pVVar4->methodPtr)(obj,pVVar4->method);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current(Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<RunScreenPrewarmQueue>d__11$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, const MethodInfo* method);
// 0x1818a2a50

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
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$.ctor
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12___ctor (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12___ctor(Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__System_IDisposable_Dispose (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o* __this, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__System_IDisposable_Dispose(Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o* __this, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__MoveNext (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o* __this, const MethodInfo* method);
// 0x1818a3790

bool Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__MoveNext
               (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o *__this,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  bool bVar4;
  float fVar5;
  
  iVar3 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar3 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields)._idleSeconds_5__2 = 0.0;
    if (__this_00 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_1818a384a;
    fVar2 = (__this_00->fields)._screenPrewarmIdleDelay;
    fVar5 = 0.0;
    if (0.0 <= fVar2) {
      fVar5 = fVar2;
    }
    (__this->fields)._target_5__3 = fVar5;
  }
  else {
    if (iVar3 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
  }
  fVar2 = (__this->fields)._target_5__3;
  pfVar1 = &(__this->fields)._idleSeconds_5__2;
  if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
    return false;
  }
  if (__this_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    bVar4 = Gisketch_Aottg2UI_GisketchUIRoot__CanWaitForScreenPrewarm(__this_00,(MethodInfo *)0x0);
    if ((!bVar4) || (bVar4 = Gisketch_Aottg2UI_GisketchUIRoot__ScreenPrewarmInput((MethodInfo *)0x0), bVar4))
    {
      (__this->fields)._idleSeconds_5__2 = 0.0;
    }
    else {
      fVar2 = (__this->fields)._idleSeconds_5__2;
      fVar5 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
      (__this->fields)._idleSeconds_5__2 = fVar5 + fVar2;
    }
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 1;
    return true;
  }
label_1818a384a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.GisketchUIRoot.<WaitForScreenPrewarmIdle>d__12$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o* __this, const MethodInfo* method);
// 0x1818a3850

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
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$UpdateFocusInput
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__UpdateFocusInput (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x18189b2e0

void Gisketch_Aottg2UI_GisketchUIRoot__UpdateFocusInput
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  TMPro_TMP_InputField_o *x;
  UnityEngine_Object_o *pUVar3;
  bool local_res18 [16];
  
  if (Il2CppMethodInitialized_184341e61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341e61 = '\x01';
  }
  local_res18[0] = false;
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  bVar1 = Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_BlocksUiInput((MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__TakeTab(local_res18,(MethodInfo *)0x0);
    if (bVar1) {
      if (((__this->fields)._Overlays_k__BackingField !=
           (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) &&
         (bVar1 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CycleFocus
                            ((__this->fields)._Overlays_k__BackingField,local_res18[0],(MethodInfo *)0x0),
         bVar1)) {
        return;
      }
      Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle
                ((__this->fields)._canvasObject,local_res18[0],(MethodInfo *)0x0);
      return;
    }
    if (Il2CppMethodInitialized_184341e63 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184341e63 = '\x01';
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
      if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_18189b643;
      pUVar3 = (UnityEngine_Object_o *)(pUVar2->fields).m_CurrentSelected;
    }
    else {
      pUVar3 = (UnityEngine_Object_o *)0x0;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      x = (TMPro_TMP_InputField_o *)0x0;
    }
    else {
      if (pUVar3 == (UnityEngine_Object_o *)0x0) goto label_18189b643;
      x = UnityEngine_GameObject__GetComponent_object_
                    ((UnityEngine_GameObject_o *)pUVar3,
                     (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        x = (TMPro_TMP_InputField_o *)
            UnityEngine_GameObject__GetComponent_object_
                      ((UnityEngine_GameObject_o *)pUVar3,
                       (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
      }
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__Poll((MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184341f35 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode)
        ;
        Il2CppMethodInitialized_184341f35 = '\x01';
      }
      if (TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->_Mode_k__BackingField == 0
         ) {
        Gisketch_Aottg2UI_GisketchUIRoot__ClearPointerSelection(__this,(MethodInfo *)0x0);
        return;
      }
      if (!bVar1) {
        return;
      }
      __this_00 = (__this->fields)._Overlays_k__BackingField;
      if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FocusTopFromNavigation(__this_00,(MethodInfo *)0x0)
        ;
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
        pUVar3 = (UnityEngine_Object_o *)(pUVar2->fields).m_CurrentSelected;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle
                  ((__this->fields)._canvasObject,false,(MethodInfo *)0x0);
        return;
      }
label_18189b643:
      ThrowNullReferenceException();
    }
  }
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__PollPointerOnly((MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$ClearPointerSelection
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__ClearPointerSelection (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x181899270

void Gisketch_Aottg2UI_GisketchUIRoot__ClearPointerSelection
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  TMPro_TMP_InputField_o *x_00;
  UnityEngine_UI_InputField_o *x_01;
  UnityEngine_Object_o *x_02;
  
  if (Il2CppMethodInitialized_184341e62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341e62 = '\x01';
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
    if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_1818994e5;
    x_02 = (UnityEngine_Object_o *)(pUVar2->fields).m_CurrentSelected;
  }
  else {
    x_02 = (UnityEngine_Object_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (Il2CppMethodInitialized_184341e64 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184341e64 = '\x01';
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
      bVar1 = UnityEngine_Object__op_Inequality(x_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (x_02 != (UnityEngine_Object_o *)0x0) {
          __this_01 = UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)x_02,(MethodInfo *)0x0);
          __this_00 = (__this->fields)._canvasObject;
          if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
             (parent = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
             __this_01 != (UnityEngine_Transform_o *)0x0)) {
            bVar1 = UnityEngine_Transform__IsChildOf(__this_01,parent,(MethodInfo *)0x0);
            if (!bVar1) {
              return;
            }
            if (Il2CppMethodInitialized_184341e65 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
              Il2CppMethodInitialized_184341e65 = '\x01';
            }
            x_00 = UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)x_02,
                              (MethodInfo_6F5650 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar1) {
              return;
            }
            x_01 = UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)x_02,
                              (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar1) {
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
        }
label_1818994e5:
        ThrowNullReferenceException();
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SelectedInput
// il2cpp: UnityEngine_UI_Selectable_o* Gisketch_Aottg2UI_GisketchUIRoot__SelectedInput (const MethodInfo* method);
// 0x18189abd0

UnityEngine_UI_Selectable_o * Gisketch_Aottg2UI_GisketchUIRoot__SelectedInput(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  TMPro_TMP_InputField_o *x;
  UnityEngine_UI_InputField_o *pUVar3;
  UnityEngine_Object_o *x_00;
  
  if (Il2CppMethodInitialized_184341e63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341e63 = '\x01';
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
    if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_18189ad1f;
    x_00 = (UnityEngine_Object_o *)(pUVar2->fields).m_CurrentSelected;
  }
  else {
    x_00 = (UnityEngine_Object_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (UnityEngine_UI_Selectable_o *)0x0;
  }
  if (x_00 != (UnityEngine_Object_o *)0x0) {
    x = UnityEngine_GameObject__GetComponent_object_
                  ((UnityEngine_GameObject_o *)x_00,
                   (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      pUVar3 = UnityEngine_GameObject__GetComponent_object_
                         ((UnityEngine_GameObject_o *)x_00,
                          (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
      return (UnityEngine_UI_Selectable_o *)pUVar3;
    }
    return (UnityEngine_UI_Selectable_o *)x;
  }
label_18189ad1f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$IsInsideGisketchCanvas
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__IsInsideGisketchCanvas (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, UnityEngine_GameObject_o* selected, const MethodInfo* method);
// 0x18189a2f0

bool Gisketch_Aottg2UI_GisketchUIRoot__IsInsideGisketchCanvas
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,UnityEngine_GameObject_o *selected,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  
  if (Il2CppMethodInitialized_184341e64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341e64 = '\x01';
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
// 0x18189a220

bool Gisketch_Aottg2UI_GisketchUIRoot__IsInput(UnityEngine_GameObject_o *selected,MethodInfo *method)

{
  bool bVar1;
  TMPro_TMP_InputField_o *x;
  UnityEngine_UI_InputField_o *x_00;
  
  if (Il2CppMethodInitialized_184341e65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341e65 = '\x01';
  }
  if (selected == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  x = UnityEngine_GameObject__GetComponent_object_
                (selected,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  x_00 = UnityEngine_GameObject__GetComponent_object_
                   (selected,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_InputField);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$QueueScreenPrewarm
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__QueueScreenPrewarm (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_array* screenIds, const MethodInfo* method);
// 0x18189a6d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18189a89d: mov rdi, qword ptr [rsp + 0x38]
// asm:   0x18189a8a2: mov rbx, qword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_GisketchUIRoot__QueueScreenPrewarm
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_array *screenIds,MethodInfo *method)

{
  System_String_o *value;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_List_string__o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *routine;
  UnityEngine_Coroutine_o *value_00;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184341e66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenPrewarm.Queue");
    Il2CppMethodInitialized_184341e66 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if ((bVar2) && (screenIds != (System_String_array *)0x0)) {
    for (uVar3 = 0; (int)uVar3 < (int)screenIds->max_length; uVar3 = uVar3 + 1) {
      if ((uint)screenIds->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      value = screenIds->m_Items[(int)uVar3];
      bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if (!bVar2) {
        __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._screenPrewarmed;
        if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_18189a8b2;
        bVar2 = System_Collections_Generic_HashSet_object___Contains
                          (__this_00,(Il2CppObject *)value,
                           (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        if ((!bVar2) &&
           (bVar2 = Gisketch_Aottg2UI_GisketchUIRoot__IsScreenPrewarmQueued(__this,value,(MethodInfo *)0x0),
           !bVar2)) {
          pSVar1 = (__this->fields)._screenPrewarmQueue;
          if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) goto label_18189a8b2;
          il2cpp_runtime_helper_180012890(pSVar1,value);
          if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
          }
          Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenPrewarm.Queue",value,(MethodInfo *)0x0)
          ;
        }
      }
    }
    pSVar1 = (__this->fields)._screenPrewarmQueue;
    if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) {
label_18189a8b2:
      ThrowNullReferenceException();
    }
    if ((0 < (pSVar1->fields)._size) &&
       ((__this->fields)._screenPrewarmRoutine == (UnityEngine_Coroutine_o *)0x0)) {
      if (Il2CppMethodInitialized_184341e67 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_GisketchUIRoot_RunScreenPrewarmQueue_d__11);
        Il2CppMethodInitialized_184341e67 = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_GisketchUIRoot_RunScreenPrewarmQueue_d__11);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      (routine->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
      value_00 = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                           ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                            (MethodInfo *)0x0);
      (__this->fields)._screenPrewarmRoutine = value_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._screenPrewarmRoutine,value_00);
    }
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$RunScreenPrewarmQueue
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x18189aae0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot__RunScreenPrewarmQueue_d__11_o *__this_00;
  
  if (Il2CppMethodInitialized_184341e67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_GisketchUIRoot_RunScreenPrewarmQueue_d__11);
    Il2CppMethodInitialized_184341e67 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_GisketchUIRoot_RunScreenPrewarmQueue_d__11)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$WaitForScreenPrewarmIdle
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x18189b830

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot__WaitForScreenPrewarmIdle_d__12_o *__this_00;
  
  if (Il2CppMethodInitialized_184341e68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_GisketchUIRoot_WaitForScreenPrewarmIdle_d__12);
    Il2CppMethodInitialized_184341e68 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_GisketchUIRoot_WaitForScreenPrewarmIdle_d__12);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CanStartScreenPrewarm
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__CanStartScreenPrewarm (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_o* id, const MethodInfo* method);
// 0x181899010

bool Gisketch_Aottg2UI_GisketchUIRoot__CanStartScreenPrewarm
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGVar2;
  
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = Gisketch_Aottg2UI_GisketchUIRoot__CanWaitForScreenPrewarm(__this,(MethodInfo *)0x0);
    if ((bVar1) &&
       ((__this->fields)._Manifest_k__BackingField !=
        (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) {
      pGVar2 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
                         ((__this->fields)._Manifest_k__BackingField,id,(MethodInfo *)0x0);
      if ((pGVar2 != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) &&
         ((__this->fields)._Screens_k__BackingField != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0
         )) {
        bVar1 = System_String__Equals_196c550
                          ((((__this->fields)._Screens_k__BackingField)->fields)._activeId,id,5,
                           (MethodInfo *)0x0);
        return !bVar1;
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$IsScreenPrewarmQueued
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__IsScreenPrewarmQueued (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_o* id, const MethodInfo* method);
// 0x18189a3d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18189a41a: nop word ptr [rax + rax]
// asm:   0x18189a461: jmp 0x18189a420

bool Gisketch_Aottg2UI_GisketchUIRoot__IsScreenPrewarmQueued
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  bool bVar2;
  System_String_o *a;
  int index;
  
  if (Il2CppMethodInitialized_184341e69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    Il2CppMethodInitialized_184341e69 = '\x01';
  }
  index = 0;
  pSVar1 = (__this->fields)._screenPrewarmQueue;
  while (pSVar1 != (System_Collections_Generic_List_string__o *)0x0) {
    if ((pSVar1->fields)._size <= index) {
      return false;
    }
    pSVar1 = (__this->fields)._screenPrewarmQueue;
    if (pSVar1 == (System_Collections_Generic_List_string__o *)0x0) break;
    a = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                  ((System_Collections_Generic_List_object__o *)pSVar1,index,
                   (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
    bVar2 = System_String__Equals_196c550(a,id,5,(MethodInfo *)0x0);
    if (bVar2) {
      return true;
    }
    index = index + 1;
    pSVar1 = (__this->fields)._screenPrewarmQueue;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CanWaitForScreenPrewarm
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__CanWaitForScreenPrewarm (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x1818990a0

bool Gisketch_Aottg2UI_GisketchUIRoot__CanWaitForScreenPrewarm
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341e6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    Il2CppMethodInitialized_184341e6a = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0)
    ;
    if ((bVar1) &&
       ((__this->fields)._Screens_k__BackingField != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0))
    {
      bVar1 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsTransitioning
                        ((__this->fields)._Screens_k__BackingField,(MethodInfo *)0x0);
      if (!bVar1) {
        __this_00 = (__this->fields)._Screens_k__BackingField;
        if (__this_00 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar1 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsPrewarming(__this_00,(MethodInfo *)0x0);
        if (!bVar1) {
          if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
          }
          bVar1 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive((MethodInfo *)0x0);
          if (!bVar1) {
            if ((__this->fields)._Overlays_k__BackingField ==
                (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
              return true;
            }
            bVar1 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__get_HasOpenOverlays
                              ((__this->fields)._Overlays_k__BackingField,(MethodInfo *)0x0);
            return !bVar1;
          }
        }
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CanContinueScreenPrewarm
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__CanContinueScreenPrewarm (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x181898f60

bool Gisketch_Aottg2UI_GisketchUIRoot__CanContinueScreenPrewarm
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341e6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_184341e6b = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0)
    ;
    if ((bVar1) &&
       ((__this->fields)._Screens_k__BackingField != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0))
    {
      bVar1 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__get_IsTransitioning
                        ((__this->fields)._Screens_k__BackingField,(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = Gisketch_Aottg2UI_GisketchUIRoot__ScreenPrewarmInput((MethodInfo *)0x0);
        if (!bVar1) {
          if ((__this->fields)._Overlays_k__BackingField ==
              (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
            return true;
          }
          bVar1 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__get_HasOpenOverlays
                            ((__this->fields)._Overlays_k__BackingField,(MethodInfo *)0x0);
          return !bVar1;
        }
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$ScreenPrewarmInput
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__ScreenPrewarmInput (const MethodInfo* method);
// 0x18189ab50

bool Gisketch_Aottg2UI_GisketchUIRoot__ScreenPrewarmInput(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Vector2_o UVar2;
  undefined4 uStackX_14;
  
  bVar1 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = UnityEngine_Input__GetMouseButtonDown(0,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = UnityEngine_Input__GetMouseButtonDown(1,(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = UnityEngine_Input__GetMouseButtonDown(2,(MethodInfo *)0x0);
        if (!bVar1) {
          UVar2 = UnityEngine_Input__get_mouseScrollDelta((MethodInfo *)0x0);
          uStackX_14 = UVar2.fields.y;
          return 0.0 < uStackX_14 * uStackX_14 + UVar2.fields.x * UVar2.fields.x;
        }
      }
    }
  }
  return true;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CancelScreenPrewarm
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__CancelScreenPrewarm (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, bool clearQueue, const MethodInfo* method);
// 0x181899190

void Gisketch_Aottg2UI_GisketchUIRoot__CancelScreenPrewarm
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,bool clearQueue,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  System_Collections_Generic_List_string__o *pSVar2;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_00;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_01;
  
  if (Il2CppMethodInitialized_184341e6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&"root cancel");
    Il2CppMethodInitialized_184341e6c = '\x01';
  }
  if ((__this->fields)._screenPrewarmRoutine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._screenPrewarmRoutine,(MethodInfo *)0x0)
    ;
  }
  (__this->fields)._screenPrewarmRoutine = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._screenPrewarmRoutine,(void *)0x0);
  if (clearQueue) {
    pSVar2 = (__this->fields)._screenPrewarmQueue;
    if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
      length = (pSVar2->fields)._size;
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      __this_00 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)(__this->fields)._screenPrewarmed;
      if (__this_00 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
        System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                  (__this_00,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear)
        ;
        goto label_181899241;
      }
    }
    ThrowNullReferenceException();
  }
label_181899241:
  __this_01 = (__this->fields)._Screens_k__BackingField;
  if (__this_01 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm
              (__this_01,"root cancel",(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_ScalePreset
// il2cpp: int32_t Gisketch_Aottg2UI_GisketchUIRoot__get_ScalePreset (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x18058a8b0

int32_t
Gisketch_Aottg2UI_GisketchUIRoot__get_ScalePreset(Gisketch_Aottg2UI_GisketchUIRoot_o* __this, MethodInfo* method)

{
  return (UnityEngine_InputForUI_EventModifiers_Fields)
         (UnityEngine_InputForUI_EventModifiers_Fields)
         (__this->fields)._scalePreset.fields._state;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Scale
// il2cpp: float Gisketch_Aottg2UI_GisketchUIRoot__get_Scale (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x18189ba00

float Gisketch_Aottg2UI_GisketchUIRoot__get_Scale
                (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_184341e6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    Il2CppMethodInitialized_184341e6d = '\x01';
  }
  fVar1 = (__this->fields)._scale;
  if ((TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
  }
  fVar1 = Gisketch_Aottg2UI_AottgUiScale__AppliedValue(fVar1,(MethodInfo *)0x0);
  return fVar1;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SetScale
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__SetScale (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, int32_t preset, const MethodInfo* method);
// 0x18189aea0

void Gisketch_Aottg2UI_GisketchUIRoot__SetScale
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,int32_t preset,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *root;
  bool bVar1;
  float fVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_184341e6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    Il2CppMethodInitialized_184341e6e = '\x01';
  }
  (__this->fields)._scalePreset = preset;
  if ((TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
  }
  if (preset == 0) {
    fVar2 = 0.5;
  }
  else if (preset == 1) {
    fVar2 = 0.75;
  }
  else {
    if (preset != 2) {
      if (preset == 3) {
        fVar2 = 1.25;
        goto label_18189af43;
      }
      if (preset == 4) {
        fVar2 = 1.5;
        goto label_18189af43;
      }
    }
    fVar2 = 1.0;
  }
label_18189af43:
  if (Il2CppMethodInitialized_184341e6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341e6f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
  }
  if (fVar2 < 0.5) {
    fVar3 = 0.5;
  }
  else {
    fVar3 = 1.5;
    if (fVar2 <= 1.5) {
      fVar3 = fVar2;
    }
  }
  (__this->fields)._scale = fVar3;
  Gisketch_Aottg2UI_GisketchUIRoot__ApplyScale(__this,(UnityEngine_UI_CanvasScaler_o *)0x0,(MethodInfo *)0x0);
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
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(root,0,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SetScale
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__SetScale (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, float scale, const MethodInfo* method);
// 0x18189adb0

void Gisketch_Aottg2UI_GisketchUIRoot__SetScale_189adb0
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,float scale,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *root;
  bool bVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_184341e6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341e6f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
  }
  fVar2 = 0.5;
  if ((0.5 <= scale) && (fVar2 = 1.5, scale <= 1.5)) {
    fVar2 = scale;
  }
  (__this->fields)._scale = fVar2;
  Gisketch_Aottg2UI_GisketchUIRoot__ApplyScale(__this,(UnityEngine_UI_CanvasScaler_o *)0x0,(MethodInfo *)0x0);
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
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(root,0,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$ApplyScale
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__ApplyScale (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, UnityEngine_UI_CanvasScaler_o* scaler, const MethodInfo* method);
// 0x1818985c0

void Gisketch_Aottg2UI_GisketchUIRoot__ApplyScale
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,UnityEngine_UI_CanvasScaler_o *scaler,
               MethodInfo *method)

{
  float scale;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar1;
  UnityEngine_Vector2_o value;
  
  if (Il2CppMethodInitialized_184341e70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasScaler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341e70 = '\x01';
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
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = (__this->fields)._canvasObject;
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_1818986e6;
      scaler = UnityEngine_GameObject__GetComponent_object_
                         (__this_00,
                          (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_CanvasScaler);
    }
    else {
      scaler = (UnityEngine_UI_CanvasScaler_o *)0x0;
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)scaler,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    scale = (__this->fields)._scale;
    if ((TypeInfo_Gisketch_Aottg2UI_AottgUiScale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_AottgUiScale);
    }
    value = Gisketch_Aottg2UI_AottgUiScale__ReferenceResolution_1882f60(scale,(MethodInfo *)0x0);
    if (scaler == (UnityEngine_UI_CanvasScaler_o *)0x0) {
label_1818986e6:
      ThrowNullReferenceException();
    }
    UnityEngine_UI_CanvasScaler__set_referenceResolution(scaler,value,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_State
// il2cpp: Gisketch_Aottg2UI_State_GisketchUIState_o* Gisketch_Aottg2UI_GisketchUIRoot__get_State (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x180a4d3d0

Gisketch_Aottg2UI_State_GisketchUIState_o*
Gisketch_Aottg2UI_GisketchUIRoot__get_State(Gisketch_Aottg2UI_GisketchUIRoot_o* __this, MethodInfo* method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields)._State_k__BackingField.fields;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_State
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_State (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_State_GisketchUIState_o* value, const MethodInfo* method);
// 0x180a4d750

void
Gisketch_Aottg2UI_GisketchUIRoot__set_State(Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_State_GisketchUIState_o* value, MethodInfo* method)

{
  (__this->fields)._State_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._State_k__BackingField,value);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Manifest
// il2cpp: Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* Gisketch_Aottg2UI_GisketchUIRoot__get_Manifest (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x18058a580

Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o*
Gisketch_Aottg2UI_GisketchUIRoot__get_Manifest(Gisketch_Aottg2UI_GisketchUIRoot_o* __this, MethodInfo* method)

{
  return (__this->fields)._Screens_k__BackingField;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_Manifest
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_Manifest (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* value, const MethodInfo* method);
// 0x18058a900

void
Gisketch_Aottg2UI_GisketchUIRoot__set_Manifest(Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* value, MethodInfo* method)

{
  (__this->fields)._Manifest_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Manifest_k__BackingField,value);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Theme
// il2cpp: Gisketch_Aottg2UI_Styling_GisketchTheme_o* Gisketch_Aottg2UI_GisketchUIRoot__get_Theme (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x18187bc20

Gisketch_Aottg2UI_Styling_GisketchTheme_o*
Gisketch_Aottg2UI_GisketchUIRoot__get_Theme(Gisketch_Aottg2UI_GisketchUIRoot_o* __this, MethodInfo* method)

{
  return (__this->fields)._Theme_k__BackingField;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_Theme
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_Theme (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Styling_GisketchTheme_o* value, const MethodInfo* method);
// 0x18189ba60

void
Gisketch_Aottg2UI_GisketchUIRoot__set_Theme(Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Styling_GisketchTheme_o* value, MethodInfo* method)

{
  (__this->fields)._Theme_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Theme_k__BackingField,value);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Screens
// il2cpp: Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* Gisketch_Aottg2UI_GisketchUIRoot__get_Screens (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x18058a890

Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o*
Gisketch_Aottg2UI_GisketchUIRoot__get_Screens(Gisketch_Aottg2UI_GisketchUIRoot_o* __this, MethodInfo* method)

{
  return (__this->fields)._Screens_k__BackingField;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_Screens
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_Screens (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* value, const MethodInfo* method);
// 0x18058aa30

void
Gisketch_Aottg2UI_GisketchUIRoot__set_Screens(Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o* value, MethodInfo* method)

{
  (__this->fields)._Screens_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Screens_k__BackingField,value);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Overlays
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* Gisketch_Aottg2UI_GisketchUIRoot__get_Overlays (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x181537220

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o*
Gisketch_Aottg2UI_GisketchUIRoot__get_Overlays(Gisketch_Aottg2UI_GisketchUIRoot_o* __this, MethodInfo* method)

{
  return (Unity_Properties_IProperty_TContainer__o *)__this[2].fields.m_Properties.fields._list;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_Overlays
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_Overlays (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* value, const MethodInfo* method);
// 0x181537500

void
Gisketch_Aottg2UI_GisketchUIRoot__set_Overlays(Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* value, MethodInfo* method)

{
  __this[2].fields.m_Properties.fields._list = (System_Collections_Generic_List_T__o *)value;
  Il2CppCodeGenWriteBarrier((void **)&__this[2].fields.m_Properties,value);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$get_Toasts
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* Gisketch_Aottg2UI_GisketchUIRoot__get_Toasts (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x18187bc10

Gisketch_Aottg2UI_Overlays_GisketchToastManager_o*
Gisketch_Aottg2UI_GisketchUIRoot__get_Toasts(Gisketch_Aottg2UI_GisketchUIRoot_o* __this, MethodInfo* method)

{
  return (__this->fields)._Toasts_k__BackingField;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$set_Toasts
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__set_Toasts (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* value, const MethodInfo* method);
// 0x18087bc50

void
Gisketch_Aottg2UI_GisketchUIRoot__set_Toasts(Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* value, MethodInfo* method)

{
  (__this->fields)._Toasts_k__BackingField = (Unity_Properties_IProperty_o *)property;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Toasts_k__BackingField,property);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$Start
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__Start (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x18189b160

void Gisketch_Aottg2UI_GisketchUIRoot__Start(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341e71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_184341e71 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (((bVar1) && ((__this->fields)._buildOnStart != false)) && ((__this->fields)._runtimeBuilt == false)) {
    Gisketch_Aottg2UI_GisketchUIRoot__Build(__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$Update
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__Update (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x18189b650

void Gisketch_Aottg2UI_GisketchUIRoot__Update(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_184341e72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Il2CppMethodInitialized_184341e72 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  Gisketch_Aottg2UI_GisketchUIRoot__UpdateFocusInput(__this,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  bVar2 = Gisketch_Aottg2UI_Actions_GisketchInputCapture__get_BlocksUiInput((MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
  }
  bVar2 = UnityEngine_Input__GetKeyDown(0x1b,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    }
    if (Il2CppMethodInitialized_184341ef2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
      Il2CppMethodInitialized_184341ef2 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    }
    iVar1 = TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->static_fields->_lastSkipFrame;
    iVar3 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    if (iVar1 == iVar3) {
      return;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    }
    bVar2 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__CompleteActiveForSkip((MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    if (((__this->fields)._Overlays_k__BackingField ==
         (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) ||
       (bVar2 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                          ((__this->fields)._Overlays_k__BackingField,true,(MethodInfo *)0x0), !bVar2)) {
      if ((__this->fields)._Screens_k__BackingField == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0
         ) {
        return;
      }
      bVar2 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Back
                        ((__this->fields)._Screens_k__BackingField,(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    }
    Gisketch_Aottg2UI_Actions_GisketchInputCapture__BlockThisFrame((MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$Build
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__Build (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x1818987c0

void Gisketch_Aottg2UI_GisketchUIRoot__Build(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_TextAsset_o *pUVar4;
  UnityEngine_MonoBehaviour_o *obj;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *pGVar5;
  bool bVar6;
  Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass70_0_o *object;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *pGVar7;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *manifest;
  Il2CppObject *pIVar10;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar11;
  UnityEngine_RectTransform_o *parent;
  UnityEngine_Transform_o *screenLayer;
  UnityEngine_Transform_o *layer;
  UnityEngine_Transform_o *layer_00;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme;
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *localizer;
  System_Func_string__GisketchOverlayDefinition__o *__this_01;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *__this_02;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar12;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_03;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_04;
  float fVar13;
  
  if (Il2CppMethodInitialized_184341e73 == '\0') {
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
              (&MethodInfo_Gisketch_Aottg2UI_GisketchUIRoot_c__DisplayClass70_0_Build_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_GisketchUIRoot_c__DisplayClass70_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Toasts");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Screens");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Overlays");
    Il2CppMethodInitialized_184341e73 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_GisketchUIRoot_c__DisplayClass70_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_GisketchUIRoot___c__DisplayClass70_0_o *)0x0) goto label_181898f49;
  (object->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
  bVar2 = (__this->fields)._suppressNextBuildMotion;
  (__this->fields)._suppressNextBuildMotion = false;
  Gisketch_Aottg2UI_GisketchUIRoot__Clear_1899500(__this,false,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgActionRegistry);
  Gisketch_Aottg2UI_Code_AottgActionRegistry___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields)._codeActions = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._codeActions,__this_00);
  pGVar7 = Gisketch_Aottg2UI_Code_AottgCodeCatalog__Discover((MethodInfo *)0x0);
  (object->fields).catalog = pGVar7;
  Il2CppCodeGenWriteBarrier(&(object->fields).catalog,pGVar7);
  pGVar7 = (object->fields).catalog;
  if (Il2CppMethodInitialized_184341e79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"GisketchUIRoot found no AoTTG code UI screens.");
    il2cpp_codegen_initialize_runtime_metadata(&"GisketchUIRoot has no theme JSON assigned; using readable default AoTTG UI theme.");
    Il2CppMethodInitialized_184341e79 = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._themeJson;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (bVar6) {
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogWarning_2ec3970
                ((Il2CppObject *)"GisketchUIRoot has no theme JSON assigned; using readable default AoTTG UI theme.",(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    }
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._themeJson;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    pUVar4 = (__this->fields)._themeJson;
    if (pUVar4 == (UnityEngine_TextAsset_o *)0x0) goto label_181898f49;
    pSVar8 = UnityEngine_TextAsset__ToString(pUVar4,(MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson(pSVar8,(MethodInfo *)0x0);
  }
  else {
    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)0x0;
  }
  manifest = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build_18c2f50
                       (pGVar7,(__this->fields)._selectedScreenId,pGVar9,(__this->fields)._codeActions,
                        (MethodInfo *)0x0);
  if (manifest == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__LogWarning_2ec3970
              ((Il2CppObject *)"GisketchUIRoot found no AoTTG code UI screens.",(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    return;
  }
  (__this->fields)._Manifest_k__BackingField = manifest;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Manifest_k__BackingField,manifest);
  bVar6 = (__this->fields)._motionEnabled;
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
  }
  TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->Enabled =
       bVar6 != false && bVar2 == false;
  fVar1 = (__this->fields)._motionScale;
  fVar13 = 0.0;
  if (0.0 <= fVar1) {
    fVar13 = fVar1;
  }
  TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->DurationScale = fVar13;
  obj = (__this->fields)._actionHandler;
  pIVar10 = il2cpp_vm_Object_IsInst
                      ((Il2CppObject *)obj,
                       (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
  (__this->fields)._customActions = (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)pIVar10;
  pIVar10 = il2cpp_vm_Object_IsInst
                      ((Il2CppObject *)obj,
                       (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._customActions,pIVar10);
  pGVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_State_GisketchUIState);
  Gisketch_Aottg2UI_State_GisketchUIState___ctor(pGVar11,(MethodInfo *)0x0);
  (__this->fields)._State_k__BackingField = pGVar11;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._State_k__BackingField,pGVar11);
  Gisketch_Aottg2UI_GisketchUIRoot__EnsureEventSystem(__this,(MethodInfo *)0x0);
  parent = Gisketch_Aottg2UI_GisketchUIRoot__CreateCanvas(__this,(MethodInfo *)0x0);
  screenLayer = Gisketch_Aottg2UI_GisketchUIRoot__CreateLayer
                          ((UnityEngine_Transform_o *)parent,"AoTTG Screens",(MethodInfo *)0x0);
  layer = Gisketch_Aottg2UI_GisketchUIRoot__CreateLayer
                    ((UnityEngine_Transform_o *)parent,"AoTTG Overlays",(MethodInfo *)0x0);
  layer_00 = Gisketch_Aottg2UI_GisketchUIRoot__CreateLayer
                       ((UnityEngine_Transform_o *)parent,"AoTTG Toasts",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_GisketchUIRoot__PromoteLayer(layer,900,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_GisketchUIRoot__PromoteLayer(layer_00,1000,(MethodInfo *)0x0);
  if ((manifest->fields).theme == (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)0x0) {
    pUVar3 = (UnityEngine_Object_o *)(__this->fields)._themeJson;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      pUVar4 = (__this->fields)._themeJson;
      if (pUVar4 == (UnityEngine_TextAsset_o *)0x0) goto label_181898f49;
      pSVar8 = UnityEngine_TextAsset__ToString(pUVar4,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
      }
      if (Il2CppMethodInitialized_184341f2b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
        Il2CppMethodInitialized_184341f2b = '\x01';
      }
      pGVar9 = Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson(pSVar8,(MethodInfo *)0x0);
      goto label_181898c4b;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    theme = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->static_fields->Default;
  }
  else {
    pGVar9 = (manifest->fields).theme;
label_181898c4b:
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    theme = Gisketch_Aottg2UI_Styling_GisketchTheme__FromDefinition(pGVar9,(MethodInfo *)0x0);
  }
  (__this->fields)._Theme_k__BackingField = theme;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Theme_k__BackingField,theme);
  localizer = (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)localizer,(MethodInfo *)0x0);
  pGVar11 = (__this->fields)._State_k__BackingField;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_GisketchOverlayDefinition);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,(Il2CppObject *)object,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_GisketchUIRoot_c__DisplayClass70_0_Build_b__0,
             (MethodInfo_16E67D0 *)0x0);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchBuildContext);
  Gisketch_Aottg2UI_Building_GisketchBuildContext___ctor
            (__this_02,manifest,theme,localizer,(Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)__this,
             pGVar11,(Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0,__this_01,(MethodInfo *)0x0
            );
  pGVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter);
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter___ctor
            (pGVar12,screenLayer,__this_02,(UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Screens_k__BackingField = pGVar12;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Screens_k__BackingField,pGVar12);
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager);
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___ctor(__this_03,layer,__this_02,(MethodInfo *)0x0);
  (__this->fields)._Overlays_k__BackingField = __this_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Overlays_k__BackingField,__this_03);
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchToastManager);
  Gisketch_Aottg2UI_Overlays_GisketchToastManager___ctor(__this_04,layer_00,__this_02,(MethodInfo *)0x0);
  (__this->fields)._Toasts_k__BackingField = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Toasts_k__BackingField,__this_04);
  pGVar12 = (__this->fields)._Screens_k__BackingField;
  bVar6 = System_String__IsNullOrEmpty((manifest->fields).initialScreen,(MethodInfo *)0x0);
  if (bVar6) {
    if (((manifest->fields).screens == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0) ||
       (pGVar5 = (manifest->fields).screens, pGVar5->max_length == 0)) {
      pSVar8 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      if ((int)pGVar5->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      if (pGVar5->m_Items[0] == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) goto label_181898f49;
      pSVar8 = (pGVar5->m_Items[0]->fields).id;
    }
  }
  else {
    pSVar8 = (manifest->fields).initialScreen;
  }
  if (pGVar12 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen(pGVar12,pSVar8,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    (__this->fields)._runtimeBuilt = bVar6;
    if (bVar2 != false) {
      bVar2 = (__this->fields)._motionEnabled;
      if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion);
      }
      TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotion->static_fields->Enabled = bVar2;
    }
    return;
  }
label_181898f49:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$Clear
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__Clear (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x1818994f0

void Gisketch_Aottg2UI_GisketchUIRoot__Clear(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot__Clear_1899500(__this,true,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$Clear
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__Clear (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, bool destroyEventSystem, const MethodInfo* method);
// 0x181899500

void Gisketch_Aottg2UI_GisketchUIRoot__Clear_1899500
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,bool destroyEventSystem,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  System_Collections_Generic_List_string__o *pSVar2;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_00;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar3;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_01;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_02;
  
  if (Il2CppMethodInitialized_184341e6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&"root cancel");
    Il2CppMethodInitialized_184341e6c = '\x01';
  }
  if ((__this->fields)._screenPrewarmRoutine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._screenPrewarmRoutine,(MethodInfo *)0x0)
    ;
  }
  (__this->fields)._screenPrewarmRoutine = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._screenPrewarmRoutine,(void *)0x0);
  pSVar2 = (__this->fields)._screenPrewarmQueue;
  if (pSVar2 != (System_Collections_Generic_List_string__o *)0x0) {
    length = (pSVar2->fields)._size;
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    __this_00 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)(__this->fields)._screenPrewarmed;
    if (__this_00 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
      System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                (__this_00,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear);
      pGVar3 = (__this->fields)._Screens_k__BackingField;
      if (pGVar3 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__CancelPrewarm
                  (pGVar3,"root cancel",(MethodInfo *)0x0);
      }
      pGVar3 = (__this->fields)._Screens_k__BackingField;
      if (pGVar3 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
        Gisketch_Aottg2UI_Routing_GisketchScreenRouter__Clear(pGVar3,(MethodInfo *)0x0);
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
      Il2CppCodeGenWriteBarrier(&(__this->fields)._Screens_k__BackingField,(void *)0x0);
      (__this->fields)._Overlays_k__BackingField = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._Overlays_k__BackingField,(void *)0x0);
      (__this->fields)._Toasts_k__BackingField = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._Toasts_k__BackingField,(void *)0x0);
      (__this->fields)._State_k__BackingField = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._State_k__BackingField,(void *)0x0);
      (__this->fields)._runtimeBuilt = false;
      (__this->fields)._Manifest_k__BackingField = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._Manifest_k__BackingField,(void *)0x0);
      (__this->fields)._Theme_k__BackingField = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._Theme_k__BackingField,(void *)0x0);
      (__this->fields)._codeActions = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._codeActions,(void *)0x0);
      Gisketch_Aottg2UI_GisketchUIRoot__DestroyObject(&(__this->fields)._canvasObject,(MethodInfo *)0x0);
      if (destroyEventSystem) {
        Gisketch_Aottg2UI_GisketchUIRoot__DestroyObject
                  (&(__this->fields)._eventSystemObject,(MethodInfo *)0x0);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SetTheme
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__SetTheme (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, UnityEngine_TextAsset_o* themeJson, const MethodInfo* method);
// 0x18189b080

void Gisketch_Aottg2UI_GisketchUIRoot__SetTheme
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,UnityEngine_TextAsset_o *themeJson,
               MethodInfo *method)

{
  UnityEngine_Object_o *y;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341e74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341e74 = '\x01';
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
      Il2CppCodeGenWriteBarrier(&(__this->fields)._themeJson,themeJson);
      Gisketch_Aottg2UI_GisketchUIRoot__Build(__this,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SetSelectedScreen
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__SetSelectedScreen (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_o* screenId, const MethodInfo* method);
// 0x18189b020

void Gisketch_Aottg2UI_GisketchUIRoot__SetSelectedScreen
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_o *screenId,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty(screenId,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__op_Equality(screenId,(__this->fields)._selectedScreenId,(MethodInfo *)0x0);
    if (!bVar1) {
      (__this->fields)._selectedScreenId = screenId;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedScreenId,screenId);
      if ((__this->fields)._Screens_k__BackingField != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0
         ) {
        Gisketch_Aottg2UI_GisketchUIRoot__Build(__this,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$RefreshActiveScreen
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x18189a8c0

void Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_String_o *value;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *__this_00;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_184341e75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    Il2CppMethodInitialized_184341e75 = '\x01';
  }
  if (((__this->fields)._Screens_k__BackingField == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)
     || (pGVar1 = (__this->fields)._Screens_k__BackingField,
        (pGVar1->fields)._active == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    }
    __this_00 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Empty((MethodInfo *)0x0);
  }
  else {
    pUVar2 = (((pGVar1->fields)._active)->fields)._Root_k__BackingField;
    if ((TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot);
    }
    __this_00 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__CaptureAll(pUVar2,(MethodInfo *)0x0);
  }
  if ((__this->fields)._Screens_k__BackingField != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    pGVar1 = (__this->fields)._Screens_k__BackingField;
    if ((pGVar1->fields)._active != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      pUVar2 = (((pGVar1->fields)._active)->fields)._Root_k__BackingField;
      if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
      }
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__CaptureActiveSections(pUVar2,(MethodInfo *)0x0);
    }
    if ((__this->fields)._Screens_k__BackingField != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)
    {
      bVar4 = System_String__IsNullOrEmpty
                        ((((__this->fields)._Screens_k__BackingField)->fields)._activeId,(MethodInfo *)0x0);
      if (!bVar4) {
        pGVar1 = (__this->fields)._Screens_k__BackingField;
        if (pGVar1 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) goto label_18189aaa0;
        value = (pGVar1->fields)._activeId;
        (__this->fields)._selectedScreenId = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._selectedScreenId,value);
      }
    }
  }
  (__this->fields)._suppressNextBuildMotion = true;
  Gisketch_Aottg2UI_GisketchUIRoot__Build(__this,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_o *)0x0) {
    bVar4 = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__get_HasEntries(__this_00,(MethodInfo *)0x0);
    if (((bVar4) &&
        ((__this->fields)._Screens_k__BackingField != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0)
        ) && (pGVar1 = (__this->fields)._Screens_k__BackingField,
             (pGVar1->fields)._active != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
      Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__Restore
                (__this_00,(((pGVar1->fields)._active)->fields)._Root_k__BackingField,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      }
      bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      if (bVar4) {
        pGVar1 = (__this->fields)._Screens_k__BackingField;
        if ((pGVar1 == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) ||
           (pGVar3 = (pGVar1->fields)._active, pGVar3 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0))
        goto label_18189aaa0;
        routine = Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot__RestoreNextFrame
                            (__this_00,(pGVar3->fields)._Root_k__BackingField,(MethodInfo *)0x0);
        UnityEngine_MonoBehaviour__StartCoroutine_Auto
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_18189aaa0:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$RefreshNode
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__RefreshNode (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_o* nodeId, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* replacement, Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o* options, const MethodInfo* method);
// 0x18189aab0

bool Gisketch_Aottg2UI_GisketchUIRoot__RefreshNode
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_o *nodeId,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *replacement,
               Gisketch_Aottg2UI_Building_GisketchNodeRefreshOptions_o *options,MethodInfo *method)

{
  bool bVar1;
  
  if ((__this->fields)._Screens_k__BackingField == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    return false;
  }
  bVar1 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__RefreshNode
                    ((__this->fields)._Screens_k__BackingField,nodeId,replacement,options,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$InvalidateScreen
// il2cpp: bool Gisketch_Aottg2UI_GisketchUIRoot__InvalidateScreen (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_o* screenId, const MethodInfo* method);
// 0x18189a200

bool Gisketch_Aottg2UI_GisketchUIRoot__InvalidateScreen
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_o *screenId,MethodInfo *method)

{
  bool bVar1;
  
  if ((__this->fields)._Screens_k__BackingField == (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
    return false;
  }
  bVar1 = Gisketch_Aottg2UI_Routing_GisketchScreenRouter__InvalidateScreen
                    ((__this->fields)._Screens_k__BackingField,screenId,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$BuildDetachedNodes
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_o* ownerId, System_Action_AottgUi__o* build, System_String_o* clearOwnerPrefix, const MethodInfo* method);
// 0x1818986f0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_o *ownerId,System_Action_AottgUi__o *build
          ,System_String_o *clearOwnerPrefix,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  
  if (Il2CppMethodInitialized_184341e76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    Il2CppMethodInitialized_184341e76 = '\x01';
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
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__ToArray(__this_00,(MethodInfo *)0x0);
    return pGVar3;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$SetActionHandler
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__SetActionHandler (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, UnityEngine_MonoBehaviour_o* actionHandler, const MethodInfo* method);
// 0x18189ad30

void Gisketch_Aottg2UI_GisketchUIRoot__SetActionHandler
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,UnityEngine_MonoBehaviour_o *actionHandler,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_184341e77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    Il2CppMethodInitialized_184341e77 = '\x01';
  }
  (__this->fields)._actionHandler = actionHandler;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._actionHandler,actionHandler);
  pIVar1 = il2cpp_vm_Object_IsInst
                     ((Il2CppObject *)actionHandler,
                      (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
  (__this->fields)._customActions = (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)pIVar1;
  pIVar1 = il2cpp_vm_Object_IsInst
                     ((Il2CppObject *)actionHandler,
                      (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
  Il2CppCodeGenWriteBarrier(&(__this->fields)._customActions,pIVar1);
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$ShowToast
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__ShowToast (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x18189b140

void Gisketch_Aottg2UI_GisketchUIRoot__ShowToast
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  if ((__this->fields)._Toasts_k__BackingField != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__Show
              ((__this->fields)._Toasts_k__BackingField,toast,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$HandleAction
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__HandleAction (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, System_String_o* actionId, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x181899e80
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18189a021: mov rbp, qword ptr [rsp + 0x60]
// asm:   0x18189a0e4: xor r8d, r8d
// asm:   0x18189a0e7: mov dl, 1
// asm:   0x18189a0e9: call 0x1818a5f00  ; Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop()
// asm:   0x18189a0ee: jmp 0x18189a021
// asm:   0x18189a121: cmp dword ptr [rsi + 0x18], 1
// asm:   0x18189a125: mov rdx, rax
// asm:   0x18189a128: movss xmm0, dword ptr [rip + 0x1abf588]
// asm:   0x18189a130: mov rcx, rdi
// asm:   0x18189a133: setne r9b
// asm:   0x18189a137: xor r8d, r8d
// asm:   0x18189a13a: mov qword ptr [rsp + 0x28], r8
// asm:   0x18189a13f: mov r8, qword ptr [rsi + 8]
// asm:   0x18189a143: movss dword ptr [rsp + 0x20], xmm0
// asm:   0x18189a149: call 0x1818a9290  ; Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowPopover()
// asm:   0x18189a14e: jmp 0x18189a021
// asm:   0x18189a1a6: xor r9d, r9d
// asm:   0x18189a1a9: mov rdx, rbp
// asm:   0x18189a1ac: mov rcx, rbx
// asm:   0x18189a1af: call 0x1818a8bd0  ; Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog()
// asm:   0x18189a1b4: jmp 0x18189a021
// asm:   0x18189a1df: xor r8d, r8d
// asm:   0x18189a1e2: mov rdx, rax
// asm:   0x18189a1e5: mov rcx, rdi
// asm:   0x18189a1e8: call 0x1818aca50  ; Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen()
// asm:   0x18189a1ed: jmp 0x18189a021

void Gisketch_Aottg2UI_GisketchUIRoot__HandleAction
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,System_String_o *actionId,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  ushort uVar1;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *pGVar4;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *__this_01;
  bool bVar5;
  System_String_o *pSVar6;
  VirtualInvokeData *pVVar7;
  ushort uVar8;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184341e78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&"dialog.");
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"screen.");
    il2cpp_codegen_initialize_runtime_metadata(&"aottg-search-palette");
    il2cpp_codegen_initialize_runtime_metadata(&"popover.");
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch UI action: ");
    Il2CppMethodInitialized_184341e78 = '\x01';
  }
  bVar5 = System_String__IsNullOrEmpty(actionId,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  if (actionId != (System_String_o *)0x0) {
    bVar5 = System_String__StartsWith_19722c0(actionId,"screen.",5,(MethodInfo *)0x0);
    if (bVar5) {
      if ("screen." != (System_String_o *)0x0) {
        __this_01 = (__this->fields)._Screens_k__BackingField;
        pSVar6 = System_String__Substring
                           (actionId,("screen."->fields)._stringLength,(MethodInfo *)0x0);
        if (__this_01 != (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) {
          Gisketch_Aottg2UI_Routing_GisketchScreenRouter__ShowScreen(__this_01,pSVar6,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      bVar5 = System_String__StartsWith_19722c0(actionId,"dialog.",5,(MethodInfo *)0x0);
      if (bVar5) {
        if ("dialog." != (System_String_o *)0x0) {
          pSVar6 = System_String__Substring
                             (actionId,("dialog."->fields)._stringLength,(MethodInfo *)0x0);
          pGVar4 = (__this->fields)._Overlays_k__BackingField;
          bVar5 = System_String__op_Equality(pSVar6,"aottg-search-palette",(MethodInfo *)0x0);
          if (bVar5) {
            bVar5 = true;
          }
          else {
            bVar5 = (context->fields).InputSource != 1;
          }
          if (pGVar4 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                      (pGVar4,pSVar6,bVar5,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        bVar5 = System_String__StartsWith_19722c0(actionId,"popover.",5,(MethodInfo *)0x0);
        if (bVar5) {
          if ("popover." != (System_String_o *)0x0) {
            pGVar4 = (__this->fields)._Overlays_k__BackingField;
            pSVar6 = System_String__Substring
                               (actionId,("popover."->fields)._stringLength,(MethodInfo *)0x0);
            if (pGVar4 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
              Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowPopover
                        (pGVar4,pSVar6,(context->fields).GameObject,(context->fields).InputSource != 1,24.0,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          bVar5 = System_String__op_Equality(actionId,"overlay.close",(MethodInfo *)0x0);
          if (!bVar5) {
            if ((__this->fields)._codeActions != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
              __this_00 = (__this->fields)._codeActions;
              if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) goto label_18189a1f2;
              local_28.fields.ElementId = (context->fields).ElementId;
              local_28.fields.GameObject = (context->fields).GameObject;
              local_28.fields.Node = (context->fields).Node;
              local_28.fields.InputSource = (context->fields).InputSource;
              local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
              bVar5 = Gisketch_Aottg2UI_Code_AottgActionRegistry__TryHandle
                                (__this_00,actionId,&local_28,(MethodInfo *)0x0);
              if (bVar5) {
                return;
              }
            }
            if ((__this->fields)._customActions == (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0)
            {
              pSVar6 = System_String__Concat_1969e50("Gisketch UI action: ",actionId,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
              }
              UnityEngine_Debug__Log_2ec3b00
                        ((Il2CppObject *)pSVar6,(UnityEngine_Object_o *)(context->fields).GameObject,
                         (MethodInfo *)0x0);
            }
            else {
              obj = (Il2CppObject *)(__this->fields)._customActions;
              if (obj == (Il2CppObject *)0x0) goto label_18189a1f2;
              pIVar2 = obj->klass;
              uVar8 = 0;
              uVar1 = (pIVar2->_2).interface_offsets_count;
              if (uVar1 != 0) {
                pIVar3 = (pIVar2->_1).interfaceOffsets;
                do {
                  if (pIVar3[uVar8].interfaceType ==
                      (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler) {
                    pVVar7 = pIVar2->vtable + pIVar3[uVar8].offset;
                    goto label_18189a092;
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar8 < uVar1);
              }
              pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                                 (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler
                                  ,0);
label_18189a092:
              local_28.fields.ElementId = (context->fields).ElementId;
              local_28.fields.GameObject = (context->fields).GameObject;
              local_28.fields.Node = (context->fields).Node;
              local_28.fields.InputSource = (context->fields).InputSource;
              local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
              (*pVVar7->methodPtr)(obj,actionId,&local_28,pVVar7->method);
            }
            return;
          }
          pGVar4 = (__this->fields)._Overlays_k__BackingField;
          if (pGVar4 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(pGVar4,true,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_18189a1f2:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$LoadCodeManifest
// il2cpp: Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* Gisketch_Aottg2UI_GisketchUIRoot__LoadCodeManifest (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* catalog, const MethodInfo* method);
// 0x18189a490

Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *
Gisketch_Aottg2UI_GisketchUIRoot__LoadCodeManifest
          (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *catalog,
          MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_TextAsset_o *__this_00;
  bool bVar2;
  System_String_o *json;
  Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *theme;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar3;
  
  if (Il2CppMethodInitialized_184341e79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"GisketchUIRoot found no AoTTG code UI screens.");
    il2cpp_codegen_initialize_runtime_metadata(&"GisketchUIRoot has no theme JSON assigned; using readable default AoTTG UI theme.");
    Il2CppMethodInitialized_184341e79 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._themeJson;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogWarning_2ec3970
                ((Il2CppObject *)"GisketchUIRoot has no theme JSON assigned; using readable default AoTTG UI theme.",(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    }
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._themeJson;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = (__this->fields)._themeJson;
    if (__this_00 == (UnityEngine_TextAsset_o *)0x0) {
      ThrowNullReferenceException();
    }
    json = UnityEngine_TextAsset__ToString(__this_00,(MethodInfo *)0x0);
    theme = Gisketch_Aottg2UI_Data_GisketchThemeDefinition__FromJson(json,(MethodInfo *)0x0);
  }
  else {
    theme = (Gisketch_Aottg2UI_Data_GisketchThemeDefinition_o *)0x0;
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Build_18c2f50
                     (catalog,(__this->fields)._selectedScreenId,theme,(__this->fields)._codeActions,
                      (MethodInfo *)0x0);
  if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__LogWarning_2ec3970
              ((Il2CppObject *)"GisketchUIRoot found no AoTTG code UI screens.",(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
  }
  return pGVar3;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$EnsureEventSystem
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__EnsureEventSystem (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x181899bc0

void Gisketch_Aottg2UI_GisketchUIRoot__EnsureEventSystem
               (Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  
  if (Il2CppMethodInitialized_184341e7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_StandaloneInputModule);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG EventSystem");
    Il2CppMethodInitialized_184341e7a = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if ((!bVar1) || ((__this->fields)._createEventSystem == false)) {
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
  if (bVar1) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184341e7b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184341e7b = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    if (pUVar2 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
      (pUVar2->fields).m_sendNavigationEvents = true;
      return;
    }
  }
  else {
    pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor(pUVar3,"AoTTG EventSystem",(MethodInfo *)0x0);
    (__this->fields)._eventSystemObject = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._eventSystemObject,pUVar3);
    pUVar3 = (__this->fields)._eventSystemObject;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
      parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._eventSystemObject;
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          pUVar2 = UnityEngine_GameObject__AddComponent_object_
                             (pUVar3,(MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_EventSystem);
          if (Il2CppMethodInitialized_184341e7b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
            Il2CppMethodInitialized_184341e7b = '\x01';
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar1) {
            if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_181899e19;
            (pUVar2->fields).m_sendNavigationEvents = true;
          }
          pUVar3 = (__this->fields)._eventSystemObject;
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__AddComponent_object_
                      (pUVar3,(MethodInfo_6F4D60 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_StandaloneInputModule);
            return;
          }
        }
      }
    }
  }
label_181899e19:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$ConfigureEventSystem
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__ConfigureEventSystem (UnityEngine_EventSystems_EventSystem_o* eventSystem, const MethodInfo* method);
// 0x1818996e0

void Gisketch_Aottg2UI_GisketchUIRoot__ConfigureEventSystem
               (UnityEngine_EventSystems_EventSystem_o *eventSystem,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341e7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341e7b = '\x01';
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
// 0x18189b130

bool Gisketch_Aottg2UI_GisketchUIRoot__ShouldFocusOverlay
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  return (context->fields).InputSource != 1;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$CreateCanvas
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_GisketchUIRoot__CreateCanvas (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x181899740

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_GisketchUIRoot__CreateCanvas(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
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
  
  if (Il2CppMethodInitialized_184341e7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasScaler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG UI Canvas");
    Il2CppMethodInitialized_184341e7c = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
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
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(pUVar2,"AoTTG UI Canvas",components,(MethodInfo *)0x0);
    (__this->fields)._canvasObject = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._canvasObject,pUVar2);
    pUVar2 = (__this->fields)._canvasObject;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._canvasObject;
        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = UnityEngine_GameObject__AddComponent_object_
                                (pUVar2,(MethodInfo_6F4D60 *)
                                        MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
          if (__this_01 != (UnityEngine_Canvas_o *)0x0) {
            UnityEngine_Canvas__set_renderMode(__this_01,0,(MethodInfo *)0x0);
            pUVar2 = (__this->fields)._canvasObject;
            if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__AddComponent_object_
                        (pUVar2,(MethodInfo_6F4D60 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
              pUVar2 = (__this->fields)._canvasObject;
              if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                scaler = UnityEngine_GameObject__AddComponent_object_
                                   (pUVar2,(MethodInfo_6F4D60 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_CanvasScaler);
                if (scaler != (UnityEngine_UI_CanvasScaler_o *)0x0) {
                  (scaler->fields).m_UiScaleMode = 1;
                  (scaler->fields).m_MatchWidthOrHeight = 0.5;
                  Gisketch_Aottg2UI_GisketchUIRoot__ApplyScale(__this,scaler,(MethodInfo *)0x0);
                  pUVar2 = (__this->fields)._canvasObject;
                  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                    rect = UnityEngine_GameObject__GetComponent_object_
                                     (pUVar2,(MethodInfo_6F5650 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                    Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(rect,(MethodInfo *)0x0);
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
// 0x181899980

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
  
  if (Il2CppMethodInitialized_184341e7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_184341e7d = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
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
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this,name,components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0(pUVar2,parent,false,(MethodInfo *)0x0);
        rect = UnityEngine_GameObject__GetComponent_object_
                         (__this,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(rect,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        return pUVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.GisketchUIRoot$$PromoteLayer
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__PromoteLayer (UnityEngine_Transform_o* layer, int32_t sortingOrder, const MethodInfo* method);
// 0x18189a610

void Gisketch_Aottg2UI_GisketchUIRoot__PromoteLayer
               (UnityEngine_Transform_o *layer,int32_t sortingOrder,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Canvas_o *__this;
  
  if (Il2CppMethodInitialized_184341e7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
    Il2CppMethodInitialized_184341e7e = '\x01';
  }
  if (layer != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)layer,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      __this = UnityEngine_GameObject__AddComponent_object_
                         (pUVar1,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
      if (__this != (UnityEngine_Canvas_o *)0x0) {
        UnityEngine_Canvas__set_overrideSorting(__this,true,(MethodInfo *)0x0);
        UnityEngine_Canvas__set_sortingOrder(__this,sortingOrder,(MethodInfo *)0x0);
        pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)layer,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__AddComponent_object_
                    (pUVar1,(MethodInfo_6F4D60 *)
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
// 0x181899e20

System_String_o *
Gisketch_Aottg2UI_GisketchUIRoot__FirstScreenId
          (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *manifest,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *pGVar1;
  
  if (manifest != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
    if (((manifest->fields).screens == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0) ||
       (pGVar1 = (manifest->fields).screens, pGVar1->max_length == 0)) {
      return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
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
// 0x18189b1d0

void
Gisketch_Aottg2UI_GisketchUIRoot__Stretch(UnityEngine_RectTransform_o* rect, MethodInfo* method)

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


// Gisketch.Aottg2UI.GisketchUIRoot$$DestroyObject
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__DestroyObject (UnityEngine_GameObject_o** go, const MethodInfo* method);
// 0x181899ae0

void Gisketch_Aottg2UI_GisketchUIRoot__DestroyObject(UnityEngine_GameObject_o **go,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184341e7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341e7f = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)*go;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    pUVar1 = (UnityEngine_Object_o *)*go;
    if (bVar2) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_2f1ff70(pUVar1,(MethodInfo *)0x0);
    }
    else {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__DestroyImmediate_2f1fb90(pUVar1,(MethodInfo *)0x0);
    }
    *go = (UnityEngine_GameObject_o *)0x0;
    Il2CppCodeGenWriteBarrier(go,(void *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$MarkEditorPreview
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot__MarkEditorPreview (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_GisketchUIRoot__MarkEditorPreview(UnityEngine_GameObject_o* go, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.GisketchUIRoot$$.ctor
// il2cpp: void Gisketch_Aottg2UI_GisketchUIRoot___ctor (Gisketch_Aottg2UI_GisketchUIRoot_o* __this, const MethodInfo* method);
// 0x18189b8a0

void Gisketch_Aottg2UI_GisketchUIRoot___ctor(Gisketch_Aottg2UI_GisketchUIRoot_o *__this,MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_HashSet_string__o *__this_01;
  
  if (Il2CppMethodInitialized_184341e80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341e80 = '\x01';
  }
  (__this->fields)._screenPrewarmIdleDelay = 0.75;
  (__this->fields)._screenPrewarmKeepAliveFrames = 10;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields)._screenPrewarmQueue = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._screenPrewarmQueue,__this_00);
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
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_176d450
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_176D450 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
  (__this->fields)._screenPrewarmed = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._screenPrewarmed,__this_01);
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


