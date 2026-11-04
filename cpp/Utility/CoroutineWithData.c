// Type: Utility.CoroutineWithData
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/CoroutineWithData.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/CoroutineWithData.cs
// --------------------------------

// Utility.CoroutineWithData.<Run>d__8$$.ctor
// il2cpp: void Utility_CoroutineWithData__Run_d__8___ctor (Utility_CoroutineWithData__Run_d__8_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Utility_CoroutineWithData__Run_d__8___ctor(Utility_CoroutineWithData__Run_d__8_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CoroutineWithData.<Run>d__8$$System.IDisposable.Dispose
// il2cpp: void Utility_CoroutineWithData__Run_d__8__System_IDisposable_Dispose (Utility_CoroutineWithData__Run_d__8_o* __this, const MethodInfo* method);
// 0x180547020

void
Utility_CoroutineWithData__Run_d__8__System_IDisposable_Dispose(Utility_CoroutineWithData__Run_d__8_o* __this, MethodInfo* method)

{
  return;
}


// Utility.CoroutineWithData.<Run>d__8$$MoveNext
// il2cpp: bool Utility_CoroutineWithData__Run_d__8__MoveNext (Utility_CoroutineWithData__Run_d__8_o* __this, const MethodInfo* method);
// 0x182340140

bool Utility_CoroutineWithData__Run_d__8__MoveNext
               (Utility_CoroutineWithData__Run_d__8_o *__this,MethodInfo *method)

{
  Utility_CoroutineWithData_o *pUVar1;
  void *pvVar2;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_184347816 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    Il2CppMethodInitialized_184347816 = '\x01';
  }
  if (1 < (uint)(__this->fields).__1__state) {
    return false;
  }
  pUVar1 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if ((pUVar1 != (Utility_CoroutineWithData_o *)0x0) &&
     (pIVar3 = (Il2CppObject *)(pUVar1->fields)._target, pIVar3 != (Il2CppObject *)0x0)) {
    pvVar2 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar3);
    if ((char)pvVar2 == '\0') {
      (pUVar1->fields).Done = true;
      return false;
    }
    pIVar3 = (Il2CppObject *)(pUVar1->fields)._target;
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar3 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar3);
      (pUVar1->fields).Result = pIVar3;
      Il2CppCodeGenWriteBarrier(&(pUVar1->fields).Result,pIVar3);
      pIVar3 = (pUVar1->fields).Result;
      (__this->fields).__2__current = pIVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar3);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Utility.CoroutineWithData.<Run>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CoroutineWithData__Run_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CoroutineWithData__Run_d__8_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Utility_CoroutineWithData__Run_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current(Utility_CoroutineWithData__Run_d__8_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Utility.CoroutineWithData.<Run>d__8$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CoroutineWithData__Run_d__8__System_Collections_IEnumerator_Reset (Utility_CoroutineWithData__Run_d__8_o* __this, const MethodInfo* method);
// 0x182340220

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
// 0x180573e90

Il2CppObject*
Utility_CoroutineWithData__Run_d__8__System_Collections_IEnumerator_get_Current(Utility_CoroutineWithData__Run_d__8_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Utility.CoroutineWithData$$get_Coroutine
// il2cpp: UnityEngine_Coroutine_o* Utility_CoroutineWithData__get_Coroutine (Utility_CoroutineWithData_o* __this, const MethodInfo* method);
// 0x1808fb3a0

UnityEngine_Coroutine_o*
Utility_CoroutineWithData__get_Coroutine(Utility_CoroutineWithData_o* __this, MethodInfo* method)

{
  return (__this->fields)._Coroutine_k__BackingField;
}


// Utility.CoroutineWithData$$set_Coroutine
// il2cpp: void Utility_CoroutineWithData__set_Coroutine (Utility_CoroutineWithData_o* __this, UnityEngine_Coroutine_o* value, const MethodInfo* method);
// 0x180b8ac00

void
Utility_CoroutineWithData__set_Coroutine(Utility_CoroutineWithData_o* __this, UnityEngine_Coroutine_o* value, MethodInfo* method)

{
  (__this->fields)._Coroutine_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Coroutine_k__BackingField,value);
  return;
}


// Utility.CoroutineWithData$$.ctor
// il2cpp: void Utility_CoroutineWithData___ctor (Utility_CoroutineWithData_o* __this, UnityEngine_MonoBehaviour_o* owner, System_Collections_IEnumerator_o* target, const MethodInfo* method);
// 0x1823329d0

void Utility_CoroutineWithData___ctor
               (Utility_CoroutineWithData_o *__this,UnityEngine_MonoBehaviour_o *owner,
               System_Collections_IEnumerator_o *target,MethodInfo *method)

{
  Utility_CoroutineWithData__Run_d__8_o *routine;
  UnityEngine_Coroutine_o *value;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._target = target;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._target,target);
  if (Il2CppMethodInitialized_184347815 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CoroutineWithData_Run_d__8);
    Il2CppMethodInitialized_184347815 = '\x01';
  }
  routine = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CoroutineWithData_Run_d__8);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
  (routine->fields).__1__state = 0;
  (routine->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
  if (owner != (UnityEngine_MonoBehaviour_o *)0x0) {
    value = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                      (owner,(System_Collections_IEnumerator_o *)routine,(MethodInfo *)0x0);
    (__this->fields)._Coroutine_k__BackingField = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Coroutine_k__BackingField,value);
    return;
  }
  ThrowNullReferenceException();
}


// Utility.CoroutineWithData$$Run
// il2cpp: System_Collections_IEnumerator_o* Utility_CoroutineWithData__Run (Utility_CoroutineWithData_o* __this, const MethodInfo* method);
// 0x182332960

System_Collections_IEnumerator_o *
Utility_CoroutineWithData__Run(Utility_CoroutineWithData_o *__this,MethodInfo *method)

{
  Utility_CoroutineWithData__Run_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_184347815 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CoroutineWithData_Run_d__8);
    Il2CppMethodInitialized_184347815 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_CoroutineWithData_Run_d__8);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


