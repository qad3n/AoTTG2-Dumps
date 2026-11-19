// Type: Utility.CoroutineWithData
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/CoroutineWithData.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/CoroutineWithData.cs
// --------------------------------

// Utility.CoroutineWithData.<Run>d__8$$.ctor
// il2cpp: void Utility_CoroutineWithData__Run_d__8___ctor (Utility_CoroutineWithData__Run_d__8_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5deb320

void Utility_CoroutineWithData__Run_d__8___ctor
               (Utility_CoroutineWithData__Run_d__8_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CoroutineWithData.<Run>d__8$$System.IDisposable.Dispose
// il2cpp: void Utility_CoroutineWithData__Run_d__8__System_IDisposable_Dispose (Utility_CoroutineWithData__Run_d__8_o* __this, const MethodInfo* method);
// 0x5deb340

void Utility_CoroutineWithData__Run_d__8__System_IDisposable_Dispose
               (Utility_CoroutineWithData__Run_d__8_o *__this,MethodInfo *method)

{
  return;
}


// Utility.CoroutineWithData.<Run>d__8$$MoveNext
// il2cpp: bool Utility_CoroutineWithData__Run_d__8__MoveNext (Utility_CoroutineWithData__Run_d__8_o* __this, const MethodInfo* method);
// 0x5deb350
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5deb3cd: nop dword ptr [rax]
// asm:   0x5deb43c: nop dword ptr [rax]

bool Utility_CoroutineWithData__Run_d__8__MoveNext
               (Utility_CoroutineWithData__Run_d__8_o *__this,MethodInfo *method)

{
  Utility_CoroutineWithData_o *pUVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  Il2CppObject *pIVar6;
  ulong uVar7;
  long lVar8;
  
  if (Il2CppMethodInitialized_075482c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    Il2CppMethodInitialized_075482c2 = '\x01';
  }
  if (1 < (uint)(__this->fields).__1__state) {
    return false;
  }
  pUVar1 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if ((pUVar1 != (Utility_CoroutineWithData_o *)0x0) &&
     (pIVar6 = (Il2CppObject *)(pUVar1->fields)._target, pIVar6 != (Il2CppObject *)0x0)) {
    pIVar2 = pIVar6->klass;
    uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar8) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
          goto label_05deb401;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05deb401:
    bVar4 = (*pVVar5->methodPtr)(pIVar6,pVVar5->method);
    if (!bVar4) {
      (pUVar1->fields).Done = true;
      return false;
    }
    pIVar6 = (Il2CppObject *)(pUVar1->fields)._target;
    if (pIVar6 != (Il2CppObject *)0x0) {
      pIVar2 = pIVar6->klass;
      uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar7 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar8 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar8) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar5 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar8) + 1);
            goto label_05deb482;
          }
          lVar8 = lVar8 + 0x10;
        } while (uVar7 * 0x10 != lVar8);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05deb482:
      pIVar6 = (*pVVar5->methodPtr)(pIVar6,pVVar5->method);
      (pUVar1->fields).Result = pIVar6;
      Il2CppCodeGenWriteBarrier(&(pUVar1->fields).Result);
      (__this->fields).__2__current = (pUVar1->fields).Result;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Utility.CoroutineWithData.<Run>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CoroutineWithData__Run_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CoroutineWithData__Run_d__8_o* __this, const MethodInfo* method);
// 0x5deb4d0

Il2CppObject *
Utility_CoroutineWithData__Run_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Utility_CoroutineWithData__Run_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CoroutineWithData.<Run>d__8$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CoroutineWithData__Run_d__8__System_Collections_IEnumerator_Reset (Utility_CoroutineWithData__Run_d__8_o* __this, const MethodInfo* method);
// 0x5deb4e0

void Utility_CoroutineWithData__Run_d__8__System_Collections_IEnumerator_Reset
               (Utility_CoroutineWithData__Run_d__8_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Utility_CoroutineWithData_Run_d__8_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Utility.CoroutineWithData.<Run>d__8$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_CoroutineWithData__Run_d__8__System_Collections_IEnumerator_get_Current (Utility_CoroutineWithData__Run_d__8_o* __this, const MethodInfo* method);
// 0x5deb520

Il2CppObject *
Utility_CoroutineWithData__Run_d__8__System_Collections_IEnumerator_get_Current
          (Utility_CoroutineWithData__Run_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CoroutineWithData$$get_Coroutine
// il2cpp: UnityEngine_Coroutine_o* Utility_CoroutineWithData__get_Coroutine (Utility_CoroutineWithData_o* __this, const MethodInfo* method);
// 0x5deb1e0

UnityEngine_Coroutine_o *
Utility_CoroutineWithData__get_Coroutine(Utility_CoroutineWithData_o *__this,MethodInfo *method)

{
  return (__this->fields)._Coroutine_k__BackingField;
}


// Utility.CoroutineWithData$$set_Coroutine
// il2cpp: void Utility_CoroutineWithData__set_Coroutine (Utility_CoroutineWithData_o* __this, UnityEngine_Coroutine_o* value, const MethodInfo* method);
// 0x5deb1f0

void Utility_CoroutineWithData__set_Coroutine
               (Utility_CoroutineWithData_o *__this,UnityEngine_Coroutine_o *value,MethodInfo *method)

{
  (__this->fields)._Coroutine_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Coroutine_k__BackingField);
  return;
}


// Utility.CoroutineWithData$$.ctor
// il2cpp: void Utility_CoroutineWithData___ctor (Utility_CoroutineWithData_o* __this, UnityEngine_MonoBehaviour_o* owner, System_Collections_IEnumerator_o* target, const MethodInfo* method);
// 0x5deb200

void Utility_CoroutineWithData___ctor
               (Utility_CoroutineWithData_o *__this,UnityEngine_MonoBehaviour_o *owner,
               System_Collections_IEnumerator_o *target,MethodInfo *method)

{
  Utility_CoroutineWithData__Run_d__8_o *__this_00;
  UnityEngine_Coroutine_o *pUVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._target = target;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._target);
  if (Il2CppMethodInitialized_075482c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CoroutineWithData_Run_d__8);
    Il2CppMethodInitialized_075482c1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CoroutineWithData_Run_d__8);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  if (owner == (UnityEngine_MonoBehaviour_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar1 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                     (owner,(System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
  (__this->fields)._Coroutine_k__BackingField = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Coroutine_k__BackingField);
  return;
}


// Utility.CoroutineWithData$$Run
// il2cpp: System_Collections_IEnumerator_o* Utility_CoroutineWithData__Run (Utility_CoroutineWithData_o* __this, const MethodInfo* method);
// 0x5deb2b0

System_Collections_IEnumerator_o *
Utility_CoroutineWithData__Run(Utility_CoroutineWithData_o *__this,MethodInfo *method)

{
  Utility_CoroutineWithData__Run_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_075482c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CoroutineWithData_Run_d__8);
    Il2CppMethodInitialized_075482c1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CoroutineWithData_Run_d__8);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


