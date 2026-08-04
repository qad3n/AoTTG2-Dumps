// Type: Utility.CoroutineWithData
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/CoroutineWithData.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/CoroutineWithData.cs
// --------------------------------

// Utility.CoroutineWithData.<Run>d__8$$.ctor
// il2cpp: void Utility_CoroutineWithData__Run_d__8___ctor (Utility_CoroutineWithData__Run_d__8_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x448c620

void Utility_CoroutineWithData__Run_d__8___ctor
               (Utility_CoroutineWithData__Run_d__8_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CoroutineWithData.<Run>d__8$$System.IDisposable.Dispose
// il2cpp: void Utility_CoroutineWithData__Run_d__8__System_IDisposable_Dispose (Utility_CoroutineWithData__Run_d__8_o* __this, const MethodInfo* method);
// 0x448c640

void Utility_CoroutineWithData__Run_d__8__System_IDisposable_Dispose
               (Utility_CoroutineWithData__Run_d__8_o *__this,MethodInfo *method)

{
  return;
}


// Utility.CoroutineWithData.<Run>d__8$$MoveNext
// il2cpp: bool Utility_CoroutineWithData__Run_d__8__MoveNext (Utility_CoroutineWithData__Run_d__8_o* __this, const MethodInfo* method);
// 0x448c650

bool_conflict
Utility_CoroutineWithData__Run_d__8__MoveNext
          (Utility_CoroutineWithData__Run_d__8_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Utility_CoroutineWithData_o *pUVar3;
  Utility_CoroutineWithData__Run_d__8_c *pUVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_Collections_IEnumerator_o *pSVar6;
  System_Collections_IEnumerator_c *pSVar7;
  char cVar8;
  VirtualInvokeData *pVVar9;
  Il2CppObject *pIVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  Utility_CoroutineWithData__Run_d__8_o *pUVar14;
  
  plVar12 = (long *)__this;
  if (g_data_057ae8e4 == '\0') {
    plVar12 = &TypeInfo_IEnumerator;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae8e4 = '\x01';
  }
  if (1 < (uint)(__this->fields).__1__state) {
    return 0;
  }
  pUVar3 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if ((pUVar3 != (Utility_CoroutineWithData_o *)0x0) &&
     (pUVar14 = (Utility_CoroutineWithData__Run_d__8_o *)(pUVar3->fields)._target,
     pUVar14 != (Utility_CoroutineWithData__Run_d__8_o *)0x0)) {
    pUVar4 = pUVar14->klass;
    uVar1._0_1_ = (pUVar4->_2).rank;
    uVar1._1_1_ = (pUVar4->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar5 = (pUVar4->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IEnumerator) {
          pVVar9 = &(pUVar4->vtable)._0_Equals + *(int *)((long)&pIVar5->offset + lVar13);
          goto label_0448c701;
        }
        lVar13 = lVar13 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar13);
    }
    pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pUVar14,TypeInfo_IEnumerator,0);
label_0448c701:
    cVar8 = (*pVVar9->methodPtr)(pUVar14,pVVar9->method);
    if (cVar8 == '\0') {
      *(undefined1 *)&(pUVar3->fields).Done = 1;
      return 0;
    }
    pSVar6 = (pUVar3->fields)._target;
    plVar12 = (long *)pUVar14;
    if (pSVar6 != (System_Collections_IEnumerator_o *)0x0) {
      pSVar7 = pSVar6->klass;
      uVar2._0_1_ = (pSVar7->_2).rank;
      uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar5 = (pSVar7->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IEnumerator) {
            pVVar9 = pSVar7->vtable + (*(int *)((long)&pIVar5->offset + lVar13) + 1);
            goto label_0448c783;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar13);
      }
      pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar6,TypeInfo_IEnumerator,1);
label_0448c783:
      pIVar10 = (Il2CppObject *)(*pVVar9->methodPtr)(pSVar6,pVVar9->method);
      (pUVar3->fields).Result = pIVar10;
      il2cpp_runtime_helper_022b4080(&(pUVar3->fields).Result,pIVar10);
      (__this->fields).__2__current = (pUVar3->fields).Result;
      uVar11 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar11 >> 8),1);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(((Utility_CoroutineWithData__Run_d__8_o *)plVar12)->fields).__2__current;
}


// Utility.CoroutineWithData.<Run>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CoroutineWithData__Run_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CoroutineWithData__Run_d__8_o* __this, const MethodInfo* method);
// 0x448c7d0

Il2CppObject *
Utility_CoroutineWithData__Run_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Utility_CoroutineWithData__Run_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CoroutineWithData.<Run>d__8$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CoroutineWithData__Run_d__8__System_Collections_IEnumerator_Reset (Utility_CoroutineWithData__Run_d__8_o* __this, const MethodInfo* method);
// 0x448c7e0

void Utility_CoroutineWithData__Run_d__8__System_Collections_IEnumerator_Reset
               (Utility_CoroutineWithData__Run_d__8_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Utility.CoroutineWithData.<Run>d__8$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_CoroutineWithData__Run_d__8__System_Collections_IEnumerator_get_Current (Utility_CoroutineWithData__Run_d__8_o* __this, const MethodInfo* method);
// 0x448c820

Il2CppObject *
Utility_CoroutineWithData__Run_d__8__System_Collections_IEnumerator_get_Current
          (Utility_CoroutineWithData__Run_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CoroutineWithData$$get_Coroutine
// il2cpp: UnityEngine_Coroutine_o* Utility_CoroutineWithData__get_Coroutine (Utility_CoroutineWithData_o* __this, const MethodInfo* method);
// 0x448c4e0

UnityEngine_Coroutine_o *
Utility_CoroutineWithData__get_Coroutine(Utility_CoroutineWithData_o *__this,MethodInfo *method)

{
  return (__this->fields)._Coroutine_k__BackingField;
}


// Utility.CoroutineWithData$$set_Coroutine
// il2cpp: void Utility_CoroutineWithData__set_Coroutine (Utility_CoroutineWithData_o* __this, UnityEngine_Coroutine_o* value, const MethodInfo* method);
// 0x448c4f0

void Utility_CoroutineWithData__set_Coroutine
               (Utility_CoroutineWithData_o *__this,UnityEngine_Coroutine_o *value,MethodInfo *method)

{
  (__this->fields)._Coroutine_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


// Utility.CoroutineWithData$$.ctor
// il2cpp: void Utility_CoroutineWithData___ctor (Utility_CoroutineWithData_o* __this, UnityEngine_MonoBehaviour_o* owner, System_Collections_IEnumerator_o* target, const MethodInfo* method);
// 0x448c500

void Utility_CoroutineWithData___ctor
               (Utility_CoroutineWithData_o *__this,UnityEngine_MonoBehaviour_o *owner,
               System_Collections_IEnumerator_o *target,MethodInfo *method)

{
  Il2CppClass *__this_00;
  UnityEngine_Coroutine_o *pUVar1;
  Il2CppObject *__this_01;
  undefined4 uVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *__this_02;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._target = target;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._target);
  if (g_data_057ae8e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Run_d__8);
    g_data_057ae8e3 = '\x01';
  }
  __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Run_d__8);
  pIVar3 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->_1).name = 0;
  if (__this_00 != (Il2CppClass *)0x0) {
    pIVar3 = (Il2CppClass *)&(__this_00->_1).byval_arg;
    (__this_00->_1).byval_arg.data = __this;
    il2cpp_runtime_helper_022b4080();
    if (owner != (UnityEngine_MonoBehaviour_o *)0x0) {
      pUVar1 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         (owner,(System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
      (__this->fields)._Coroutine_k__BackingField = pUVar1;
      il2cpp_runtime_helper_022b4080(&__this->fields,pUVar1);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Run_d__8);
    g_data_057ae8e3 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Run_d__8);
  uVar2 = 0;
  __this_02 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = pIVar3;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar3);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar2;
  return;
}


// Utility.CoroutineWithData$$Run
// il2cpp: System_Collections_IEnumerator_o* Utility_CoroutineWithData__Run (Utility_CoroutineWithData_o* __this, const MethodInfo* method);
// 0x448c5b0

System_Collections_IEnumerator_o *
Utility_CoroutineWithData__Run(Utility_CoroutineWithData_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae8e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Run_d__8);
    g_data_057ae8e3 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Run_d__8);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


