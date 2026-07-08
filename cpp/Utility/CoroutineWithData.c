// Type: Utility.CoroutineWithData
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility/CoroutineWithData.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/CoroutineWithData.cs  [CHANGED since prior version]
// --------------------------------

// Utility.CoroutineWithData.<Run>d__8$$.ctor
// il2cpp: void Utility_CoroutineWithData__Run_d__8___ctor (Utility_CoroutineWithData__Run_d__8_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x415bcc0

void Utility_CoroutineWithData_<Run>d__8___ctor
               (Utility_CoroutineWithData__Run_d__8_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CoroutineWithData.<Run>d__8$$System.IDisposable.Dispose
// il2cpp: void Utility_CoroutineWithData__Run_d__8__System_IDisposable_Dispose (Utility_CoroutineWithData__Run_d__8_o* __this, const MethodInfo* method);
// 0x415bce0

void Utility_CoroutineWithData_<Run>d__8__System_IDisposable_Dispose
               (Utility_CoroutineWithData__Run_d__8_o *__this,MethodInfo *method)

{
  return;
}


// Utility.CoroutineWithData.<Run>d__8$$MoveNext
// il2cpp: bool Utility_CoroutineWithData__Run_d__8__MoveNext (Utility_CoroutineWithData__Run_d__8_o* __this, const MethodInfo* method);
// 0x415bcf0

bool_conflict
Utility_CoroutineWithData_<Run>d__8__MoveNext
          (Utility_CoroutineWithData__Run_d__8_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Utility_CoroutineWithData_o *pUVar3;
  System_Collections_IEnumerator_o *pSVar4;
  System_Collections_IEnumerator_c *pSVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  char cVar7;
  VirtualInvokeData *pVVar8;
  Il2CppObject *pIVar9;
  undefined8 uVar10;
  long lVar11;
  
  if (DAT_05704a2d == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704a2d = '\x01';
  }
  if (1 < (uint)(__this->fields).__1__state) {
    return 0;
  }
  pUVar3 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if ((pUVar3 != (Utility_CoroutineWithData_o *)0x0) &&
     (pSVar4 = (pUVar3->fields)._target, pSVar4 != (System_Collections_IEnumerator_o *)0x0)) {
    pSVar5 = pSVar4->klass;
    uVar1._0_1_ = (pSVar5->_2).rank;
    uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar6 = (pSVar5->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(long *)((long)&pIVar6->interfaceType + lVar11) == TypeInfo_IEnumerator) {
          pVVar8 = pSVar5->vtable + *(int *)((long)&pIVar6->offset + lVar11);
          goto LAB_0415bda1;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar11);
    }
    pVVar8 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar4,TypeInfo_IEnumerator,0);
LAB_0415bda1:
    cVar7 = (*pVVar8->methodPtr)(pSVar4,pVVar8->method);
    if (cVar7 == '\0') {
      *(undefined1 *)&(pUVar3->fields).Done = 1;
      return 0;
    }
    pSVar4 = (pUVar3->fields)._target;
    if (pSVar4 != (System_Collections_IEnumerator_o *)0x0) {
      pSVar5 = pSVar4->klass;
      uVar2._0_1_ = (pSVar5->_2).rank;
      uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar6 = (pSVar5->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar11) == TypeInfo_IEnumerator) {
            pVVar8 = pSVar5->vtable + (*(int *)((long)&pIVar6->offset + lVar11) + 1);
            goto LAB_0415be23;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar11);
      }
      pVVar8 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar4,TypeInfo_IEnumerator,1);
LAB_0415be23:
      pIVar9 = (Il2CppObject *)(*pVVar8->methodPtr)(pSVar4,pVVar8->method);
      (pUVar3->fields).Result = pIVar9;
      il2cpp_runtime_glue(&(pUVar3->fields).Result,pIVar9);
      (__this->fields).__2__current = (pUVar3->fields).Result;
      uVar10 = il2cpp_runtime_glue(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar10 >> 8),1);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CoroutineWithData.<Run>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CoroutineWithData__Run_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CoroutineWithData__Run_d__8_o* __this, const MethodInfo* method);
// 0x415be70

Il2CppObject *
Utility_CoroutineWithData_<Run>d__8__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Utility_CoroutineWithData__Run_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CoroutineWithData.<Run>d__8$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CoroutineWithData__Run_d__8__System_Collections_IEnumerator_Reset (Utility_CoroutineWithData__Run_d__8_o* __this, const MethodInfo* method);
// 0x415be80

void Utility_CoroutineWithData_<Run>d__8__System_Collections_IEnumerator_Reset
               (Utility_CoroutineWithData__Run_d__8_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// Utility.CoroutineWithData.<Run>d__8$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_CoroutineWithData__Run_d__8__System_Collections_IEnumerator_get_Current (Utility_CoroutineWithData__Run_d__8_o* __this, const MethodInfo* method);
// 0x415bec0

Il2CppObject *
Utility_CoroutineWithData_<Run>d__8__System_Collections_IEnumerator_get_Current
          (Utility_CoroutineWithData__Run_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CoroutineWithData$$get_Coroutine
// il2cpp: UnityEngine_Coroutine_o* Utility_CoroutineWithData__get_Coroutine (Utility_CoroutineWithData_o* __this, const MethodInfo* method);
// 0x415bb80

UnityEngine_Coroutine_o *
Utility_CoroutineWithData__get_Coroutine(Utility_CoroutineWithData_o *__this,MethodInfo *method)

{
  return (__this->fields)._Coroutine_k__BackingField;
}


// Utility.CoroutineWithData$$set_Coroutine
// il2cpp: void Utility_CoroutineWithData__set_Coroutine (Utility_CoroutineWithData_o* __this, UnityEngine_Coroutine_o* value, const MethodInfo* method);
// 0x415bb90

void Utility_CoroutineWithData__set_Coroutine
               (Utility_CoroutineWithData_o *__this,UnityEngine_Coroutine_o *value,
               MethodInfo *method)

{
  (__this->fields)._Coroutine_k__BackingField = value;
  il2cpp_runtime_glue(&__this->fields);
  return;
}


// Utility.CoroutineWithData$$.ctor
// il2cpp: void Utility_CoroutineWithData___ctor (Utility_CoroutineWithData_o* __this, UnityEngine_MonoBehaviour_o* owner, System_Collections_IEnumerator_o* target, const MethodInfo* method);
// 0x415bba0

void Utility_CoroutineWithData___ctor
               (Utility_CoroutineWithData_o *__this,UnityEngine_MonoBehaviour_o *owner,
               System_Collections_IEnumerator_o *target,MethodInfo *method)

{
  Il2CppObject *__this_00;
  UnityEngine_Coroutine_o *pUVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._target = target;
  il2cpp_runtime_glue(&(__this->fields)._target);
  if (DAT_05704a2c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Run_d__8);
    DAT_05704a2c = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Run_d__8);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    if (owner != (UnityEngine_MonoBehaviour_o *)0x0) {
      pUVar1 = UnityEngine_MonoBehaviour__StartCoroutine
                         (owner,(System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
      (__this->fields)._Coroutine_k__BackingField = pUVar1;
      il2cpp_runtime_glue(&__this->fields,pUVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CoroutineWithData$$Run
// il2cpp: System_Collections_IEnumerator_o* Utility_CoroutineWithData__Run (Utility_CoroutineWithData_o* __this, const MethodInfo* method);
// 0x415bc50

System_Collections_IEnumerator_o *
Utility_CoroutineWithData__Run(Utility_CoroutineWithData_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704a2c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Run_d__8);
    DAT_05704a2c = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Run_d__8);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


