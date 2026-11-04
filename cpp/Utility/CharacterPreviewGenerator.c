// Type: Utility.CharacterPreviewGenerator
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/CharacterPreviewGenerator.cs
// Prior real C# source: none
// --------------------------------

// Utility.CharacterPreviewGenerator.PreviewCameraData$$.ctor
// il2cpp: void Utility_CharacterPreviewGenerator_PreviewCameraData___ctor (Utility_CharacterPreviewGenerator_PreviewCameraData_o* __this, const MethodInfo* method);
// 0x18054c890

void
Utility_CharacterPreviewGenerator_PreviewCameraData___ctor(Utility_CharacterPreviewGenerator_PreviewCameraData_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$.ctor
// il2cpp: void Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24___ctor (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24___ctor(Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$System.IDisposable.Dispose
// il2cpp: void Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_IDisposable_Dispose (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, const MethodInfo* method);
// 0x180547020

void
Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_IDisposable_Dispose(Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, MethodInfo* method)

{
  return;
}


// Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$MoveNext
// il2cpp: bool Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__MoveNext (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, const MethodInfo* method);
// 0x18233f8a0

bool Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__MoveNext
               (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *__this,
               MethodInfo *method)

{
  float amplificationFactor;
  int iVar1;
  System_Action_o *pSVar2;
  System_Collections_Generic_Dictionary_string__Coroutine__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar3;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_02;
  
  if (Il2CppMethodInitialized_1843477fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_1843477fc = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    amplificationFactor = (__this->fields).delaySeconds;
    (__this->fields).__1__state = -1;
    __this_02 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor
              (__this_02,amplificationFactor,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_02;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_02);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    pSVar2 = (__this->fields).generateAction;
    (__this->fields).__1__state = -1;
    if (pSVar2 != (System_Action_o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
    }
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    __this_00 = TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_activeDebounceCoroutines;
    if (__this_00 == (System_Collections_Generic_Dictionary_string__Coroutine__o *)0x0) {
label_18233f9fd:
      ThrowNullReferenceException();
    }
    bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)(__this->fields).debounceKey,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_ContainsKey);
    if (bVar3) {
      if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
      }
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                  TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_activeDebounceCoroutines;
      if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_18233f9fd;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_01,(Il2CppObject *)(__this->fields).debounceKey,(Il2CppObject *)0x0,
                 (MethodInfo_147A7F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_set_Item);
    }
  }
  return false;
}


// Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_Collections_Generic_IEnumerator_System_Object__get_Current(Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_Collections_IEnumerator_Reset (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, const MethodInfo* method);
// 0x18233fa10

void Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_Collections_IEnumerator_Reset
               (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *__this,
               MethodInfo *method)

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
                  MethodInfo_Utility_CharacterPreviewGenerator_DebouncedPreviewCoroutine_d__24_System_Collections_IEnumerator
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_Collections_IEnumerator_get_Current (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_Collections_IEnumerator_get_Current(Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$.ctor
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21___ctor (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21___ctor(Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$System.IDisposable.Dispose
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_IDisposable_Dispose (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x180547020

void
Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_IDisposable_Dispose(Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, MethodInfo* method)

{
  return;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$MoveNext
// il2cpp: bool Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__MoveNext (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x18233fd00

bool Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__MoveNext
               (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o *__this,
               MethodInfo *method)

{
  bool isRebuild;
  int iVar1;
  UI_CharacterEditorHumanMenu_o *humanMenu;
  Utility_Util__WaitForFrames_d__17_o *__this_00;
  
  if (Il2CppMethodInitialized_1843477fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_1843477fd = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    if (Il2CppMethodInitialized_18434784d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util_WaitForFrames_d__17);
      Il2CppMethodInitialized_18434784d = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Util_WaitForFrames_d__17);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    (__this_00->fields).frames = 3;
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    humanMenu = (__this->fields).humanMenu;
    (__this->fields).__1__state = -1;
    isRebuild = (__this->fields).isRebuild;
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet(humanMenu,isRebuild,(MethodInfo *)0x0);
  }
  return false;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current(Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_Collections_IEnumerator_Reset (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x18233fe10

void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_Collections_IEnumerator_Reset
               (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o *__this,
               MethodInfo *method)

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
                  MethodInfo_Utility_CharacterPreviewGenerator_GeneratePreviewForHumanSetCoroutine_d__21_System_Collections_I
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_Collections_IEnumerator_get_Current (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_Collections_IEnumerator_get_Current(Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$.ctor
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22___ctor (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22___ctor(Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$System.IDisposable.Dispose
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_IDisposable_Dispose (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, const MethodInfo* method);
// 0x180547020

void
Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_IDisposable_Dispose(Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, MethodInfo* method)

{
  return;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$MoveNext
// il2cpp: bool Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__MoveNext (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, const MethodInfo* method);
// 0x18233fe50

bool Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__MoveNext
               (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o *__this,
               MethodInfo *method)

{
  bool isRebuild;
  int iVar1;
  UI_CharacterEditorTitanMenu_o *titanMenu;
  Utility_Util__WaitForFrames_d__17_o *__this_00;
  
  if (Il2CppMethodInitialized_1843477fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_1843477fe = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    if (Il2CppMethodInitialized_18434784d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util_WaitForFrames_d__17);
      Il2CppMethodInitialized_18434784d = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Util_WaitForFrames_d__17);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    (__this_00->fields).frames = 3;
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    titanMenu = (__this->fields).titanMenu;
    (__this->fields).__1__state = -1;
    isRebuild = (__this->fields).isRebuild;
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet(titanMenu,isRebuild,(MethodInfo *)0x0);
  }
  return false;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current(Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_Collections_IEnumerator_Reset (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, const MethodInfo* method);
// 0x18233ff60

void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_Collections_IEnumerator_Reset
               (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o *__this,
               MethodInfo *method)

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
                  MethodInfo_Utility_CharacterPreviewGenerator_GeneratePreviewForTitanSetCoroutine_d__22_System_Collections_I
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_Collections_IEnumerator_get_Current (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_Collections_IEnumerator_get_Current(Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$.ctor
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26___ctor (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26___ctor(Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$System.IDisposable.Dispose
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_IDisposable_Dispose (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, const MethodInfo* method);
// 0x180547020

void
Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_IDisposable_Dispose(Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, MethodInfo* method)

{
  return;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$MoveNext
// il2cpp: bool Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__MoveNext (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, const MethodInfo* method);
// 0x18233ffa0

bool Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__MoveNext
               (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o
                *__this,MethodInfo *method)

{
  bool isHuman;
  int iVar1;
  int32_t size;
  System_String_o *cameraId;
  UnityEngine_GameObject_o *character;
  System_String_o *fileName;
  UnityEngine_Transform_o *cameraParent;
  Utility_Util__WaitForFrames_d__17_o *__this_00;
  
  if (Il2CppMethodInitialized_1843477ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_1843477ff = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    if (Il2CppMethodInitialized_18434784d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util_WaitForFrames_d__17);
      Il2CppMethodInitialized_18434784d = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Util_WaitForFrames_d__17);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    (__this_00->fields).frames = 2;
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    cameraId = (__this->fields).cameraId;
    character = (__this->fields).character;
    fileName = (__this->fields).fileName;
    size = (__this->fields).size;
    isHuman = (__this->fields).isHuman;
    (__this->fields).__1__state = -1;
    cameraParent = (__this->fields).cameraParent;
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera
              (cameraId,character,fileName,size,isHuman,cameraParent,(MethodInfo *)0x0);
  }
  return false;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current(Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_Collections_IEnumerator_Reset (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, const MethodInfo* method);
// 0x182340100

void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_Collections_IEnumerator_Reset
               (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o
                *__this,MethodInfo *method)

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
                  MethodInfo_Utility_CharacterPreviewGenerator_GeneratePreviewWithPersistentCameraCoroutine_d__26_System_Coll
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_Collections_IEnumerator_get_Current (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_Collections_IEnumerator_get_Current(Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator$$CleanupOrphanedPreviews
// il2cpp: void Utility_CharacterPreviewGenerator__CleanupOrphanedPreviews (const MethodInfo* method);
// 0x18232fcf0

void Utility_CharacterPreviewGenerator__CleanupOrphanedPreviews(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843477e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    Il2CppMethodInitialized_1843477e6 = '\x01';
  }
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(true,(MethodInfo *)0x0);
  Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(false,(MethodInfo *)0x0);
  return;
}


// Utility.CharacterPreviewGenerator$$CleanupOrphanedPreviewsInFolder
// il2cpp: void Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder (bool isHuman, const MethodInfo* method);
// 0x18232f750
// eh: try 0x18232f9c0..0x18232fcd6 -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 41 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232fa6e: mov rdx, qword ptr [rip + 0x1d46a63]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x18232fa75: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18232fa7a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18232fa7f: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18232fa84: test rcx, rcx
// asm:   0x18232fa87: jne 0x18232fcb8
// asm:   0x18232fa8d: mov r14, qword ptr [rsp + 0x90]
// asm:   0x18232fa95: mov rdi, qword ptr [rsp + 0x98]
// asm:   0x18232fbdb: mov rdx, qword ptr [rip + 0x1d468f6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x18232fbe2: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18232fbe7: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18232fbec: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18232fbf1: test rcx, rcx
// asm:   0x18232fbf4: jne 0x18232fcd6
// asm:   0x18232fbfa: xor esi, esi
// asm:   0x18232fbfc: mov r14, qword ptr [rsp + 0x90]
// asm:   0x18232fc04: mov rdi, qword ptr [rsp + 0x98]
// asm:   0x18232fcb8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18232fcd6: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(bool isHuman,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar3;
  Settings_ListSetting_T__o *pSVar4;
  Settings_TitanCustomSettings_o *pSVar5;
  Settings_SetSettingsContainer_TitanCustomSet__o *pSVar6;
  bool bVar7;
  System_String_o *pSVar8;
  System_Collections_Generic_HashSet_string__o *__this;
  System_Collections_Generic_List_T__o *pSVar9;
  System_String_o *pSVar10;
  System_String_array *pSVar11;
  uint uVar12;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  undefined1 local_30 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_28;
  Il2CppObject *local_20;
  
  if (Il2CppMethodInitialized_1843477e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IListSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSets);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset*.png");
    Il2CppMethodInitialized_1843477e7 = '\x01';
  }
  local_30 = (undefined1  [8])0x0;
  pUStack_28 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_20 = (Il2CppObject *)0x0;
  pSVar8 = "Titans";
  if (isHuman) {
    pSVar8 = "Human";
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar10 = TypeInfo_Utility_FolderPaths->static_fields->CharacterPreviews;
  if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
  }
  pSVar8 = System_IO_Path__Combine(pSVar10,pSVar8,(MethodInfo *)0x0);
  bVar7 = System_IO_Directory__Exists(pSVar8,(MethodInfo *)0x0);
  if (bVar7) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
    System_Collections_Generic_HashSet_object____ctor
              ((System_Collections_Generic_HashSet_object__o *)__this,
               (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    if (isHuman) {
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
      if (((pSVar2 == (Settings_HumanCustomSettings_o *)0x0) ||
          (pSVar3 = (pSVar2->fields).CustomSets,
          pSVar3 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) ||
         (pSVar4 = (pSVar3->fields).Sets, pSVar4 == (Settings_ListSetting_T__o *)0x0)) goto label_18232fce2;
      pSVar9 = InterfaceInvoker0_Invoke
                         (2,(Il2CppClass *)TypeInfo_Settings_IListSetting,(Il2CppObject *)pSVar4);
      if (pSVar9 == (System_Collections_Generic_List_T__o *)0x0) goto label_18232fce2;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pSVar9,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
      local_30 = (undefined1  [8])local_48._0_8_;
      pUStack_28 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48._8_8_;
      local_20 = local_38;
      local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_48._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30;
      while( true ) {
        bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_30,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
        if (!bVar7) break;
        if (local_20 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
        if (((local_20->klass->_2).typeHierarchyDepth < bVar1) ||
           ((local_20->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
          il2cpp_codegen_raise_invalid_cast_exception(local_20);
        }
        if (local_20[4].klass == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar10 = System_String__Concat_1969e50
                            ("Preset",((local_20[4].klass)->_1).byval_arg.data,(MethodInfo *)0x0)
        ;
        if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)pSVar10,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30,
                 MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
    }
    else {
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
      if (((pSVar5 == (Settings_TitanCustomSettings_o *)0x0) ||
          (pSVar6 = (pSVar5->fields).TitanCustomSets,
          pSVar6 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) ||
         (pSVar4 = (pSVar6->fields).Sets, pSVar4 == (Settings_ListSetting_T__o *)0x0)) goto label_18232fce2;
      pSVar9 = InterfaceInvoker0_Invoke
                         (2,(Il2CppClass *)TypeInfo_Settings_IListSetting,(Il2CppObject *)pSVar4);
      if (pSVar9 == (System_Collections_Generic_List_T__o *)0x0) goto label_18232fce2;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,pSVar9,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
      local_30 = (undefined1  [8])local_48._0_8_;
      pUStack_28 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48._8_8_;
      local_20 = local_38;
      local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_48._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30;
      while( true ) {
        bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_30,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
        if (!bVar7) break;
        if (local_20 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        bVar1 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
        if (((local_20->klass->_2).typeHierarchyDepth < bVar1) ||
           ((local_20->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
          il2cpp_codegen_raise_invalid_cast_exception(local_20);
        }
        if (local_20[4].klass == (Il2CppClass *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar10 = System_String__Concat_1969e50
                            ("Preset",((local_20[4].klass)->_1).byval_arg.data,(MethodInfo *)0x0)
        ;
        if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)pSVar10,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30,
                 MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose);
    }
    uVar12 = 0;
    pSVar11 = System_IO_Directory__GetFiles(pSVar8,"Preset*.png",(MethodInfo *)0x0);
    if (pSVar11 == (System_String_array *)0x0) {
label_18232fce2:
      ThrowNullReferenceException();
    }
    for (; (int)uVar12 < (int)pSVar11->max_length; uVar12 = uVar12 + 1) {
      if ((uint)pSVar11->max_length <= uVar12) {
        ThrowIndexOutOfRangeException();
      }
      pSVar8 = pSVar11->m_Items[(int)uVar12];
      if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
      }
      pSVar10 = System_IO_Path__GetFileNameWithoutExtension(pSVar8,(MethodInfo *)0x0);
      if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_18232fce2;
      bVar7 = System_Collections_Generic_HashSet_object___Contains
                        ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)pSVar10,
                         (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      if (!bVar7) {
        System_IO_File__Delete(pSVar8,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Utility.CharacterPreviewGenerator$$SetLayerRecursively
// il2cpp: void Utility_CharacterPreviewGenerator__SetLayerRecursively (UnityEngine_GameObject_o* obj, int32_t newLayer, const MethodInfo* method);
// 0x182331ea0
// eh: try 0x182331f60..0x182331fee -> pad 0x183315930 catch Il2CppExceptionWrapper
// eh: try 0x182331fee..0x182332046 -> pad 0x180026a30 cleanup
// eh: try 0x182332046..0x1823320db -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18233200e: mov rdx, qword ptr [rip + 0x1d5282b]  ; TypeInfo_UnityEngine_Transform
// asm:   0x182332015: mov r9, qword ptr [rax]
// asm:   0x182332018: movzx eax, byte ptr [rdx + 0x130]
// asm:   0x18233201f: cmp byte ptr [r9 + 0x130], al
// asm:   0x182332026: jb 0x1823320c8
// asm:   0x18233209f: lea rcx, [rsp + 0x30]
// asm:   0x1823320a4: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x1823320a9: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1823320ae: test rcx, rcx
// asm:   0x1823320b1: jne 0x1823320db
// asm:   0x1823320db: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Utility_CharacterPreviewGenerator__SetLayerRecursively
               (UnityEngine_GameObject_o *obj,int32_t newLayer,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  UnityEngine_Transform_o *__this;
  Il2CppObject *pIVar5;
  void *pvVar6;
  VirtualInvokeData *pVVar7;
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *obj_00;
  ushort uVar8;
  
  if (Il2CppMethodInitialized_1843477e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_1843477e8 = '\x01';
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__set_layer(obj,newLayer,(MethodInfo *)0x0);
    __this = UnityEngine_GameObject__get_transform(obj,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Transform_o *)0x0) {
      pIVar5 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(__this,(MethodInfo *)0x0);
      do {
        if (pIVar5 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar6 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar5);
        if ((char)pvVar6 == '\0') {
          pIVar5 = il2cpp_vm_Object_IsInst(pIVar5,(Il2CppClass *)TypeInfo_System_IDisposable);
          if (pIVar5 != (Il2CppObject *)0x0) {
            InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar5);
          }
          return;
        }
        if (pIVar5 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar3 = pIVar5->klass;
        uVar2 = (pIVar3->_2).interface_offsets_count;
        if (uVar2 != 0) {
          uVar8 = 0;
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          do {
            if (pIVar4[uVar8].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar7 = pIVar3->vtable + (pIVar4[uVar8].offset + 1);
              goto label_182331fd9;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar2);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar5,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_182331fd9:
        __this_00 = (UnityEngine_Component_o *)(*pVVar7->methodPtr)(pIVar5,pVVar7->method);
        if (__this_00 == (UnityEngine_Component_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
        if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_00);
        }
        obj_00 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
        if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
        }
        Utility_CharacterPreviewGenerator__SetLayerRecursively(obj_00,newLayer,(MethodInfo *)0x0);
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// Utility.CharacterPreviewGenerator$$GetOrCreatePersistentCamera
// il2cpp: Utility_CharacterPreviewGenerator_PreviewCameraData_o* Utility_CharacterPreviewGenerator__GetOrCreatePersistentCamera (System_String_o* cameraId, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x182331160
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182331424: mov rax, rbx
// asm:   0x18233189b: mov r9, qword ptr [rip + 0x1db2a96]  ; MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_set_Ite
// asm:   0x1823318a2: mov r8, rdi
// asm:   0x1823318a5: mov rdx, r14
// asm:   0x1823318a8: call 0x18147a7f0  ; System_Collections_Generic_Dictionary_object__object___set_Item()
// asm:   0x1823318ad: mov rax, rdi
// asm:   0x1823318b0: jmp 0x182331427
// asm:   0x1823318b5: xor eax, eax
// asm:   0x1823318b7: jmp 0x182331427

Utility_CharacterPreviewGenerator_PreviewCameraData_o *
Utility_CharacterPreviewGenerator__GetOrCreatePersistentCamera
          (System_String_o *cameraId,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__CharacterPreviewGenerator_PreviewCameraData__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  UnityEngine_Camera_o *pUVar2;
  bool bVar3;
  int32_t value;
  Il2CppObject *pIVar4;
  Utility_CharacterPreviewGenerator_PreviewCameraData_o *pUVar5;
  UnityEngine_Object_o *pUVar6;
  System_String_o *pSVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Camera_o *pUVar9;
  UnityEngine_Color_o *pUVar10;
  UnityEngine_Object_o *x;
  UnityEngine_Skybox_o *__this_01;
  UnityEngine_Material_o *value_00;
  UnityEngine_RenderTexture_o *pUVar11;
  float fVar12;
  UnityEngine_SceneManagement_Scene_o local_res8 [2];
  UnityEngine_Color_Fields local_28;
  
  if (Il2CppMethodInitialized_1843477e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Skybox);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_Contain
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_Remove
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_get_Ite
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_set_Ite
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Camera);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Skybox);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Object_FindObjectOfType_Camera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator_PreviewCameraData);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RenderTexture);
    il2cpp_codegen_initialize_runtime_metadata(&"PersistentPreviewCamera_");
    il2cpp_codegen_initialize_runtime_metadata(&"DontDestroyOnLoad");
    Il2CppMethodInitialized_1843477e9 = '\x01';
  }
  local_res8[0].fields.m_Handle.fields.m_Value.fields.m_Data =
       (UnityEngine_SceneManagement_Scene_Fields)(UnityEngine_SceneManagement_SceneHandle_o)0x0;
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  __this = TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_persistentCameras;
  if (__this == (System_Collections_Generic_Dictionary_string__CharacterPreviewGenerator_PreviewCameraData__o
                 *)0x0) goto label_1823318bc;
  bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)cameraId,
                     (MethodInfo_1455450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_Contain
                    );
  if (bVar3) {
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_persistentCameras;
    if ((pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (pIVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar1,(Il2CppObject *)cameraId,
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_get_Ite
                           ), pIVar4 == (Il2CppObject *)0x0)) goto label_1823318bc;
    if (*(char *)&pIVar4[2].klass != '\0') {
      if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_persistentCameras;
      if ((pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (pIVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar1,(Il2CppObject *)cameraId,
                              (MethodInfo_147A5B0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_get_Ite
                             ), pIVar4 == (Il2CppObject *)0x0)) goto label_1823318bc;
      if (*(char *)((longlong)&pIVar4[2].klass + 1) == '\0') {
        if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_persistentCameras;
        if ((pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
           (pUVar5 = (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)
                     System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar1,(Il2CppObject *)cameraId,
                                (MethodInfo_147A5B0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_get_Ite
                               ), pUVar5 == (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)0x0))
        goto label_1823318bc;
        pUVar9 = (pUVar5->fields).Camera;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pUVar11 = (pUVar5->fields).RenderTexture;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) {
            pUVar9 = (pUVar5->fields).Camera;
            if (pUVar9 == (UnityEngine_Camera_o *)0x0) goto label_1823318bc;
            pUVar6 = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar3 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar3) {
              return pUVar5;
            }
          }
        }
        if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_persistentCameras;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1823318bc;
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar1,(Il2CppObject *)cameraId,
                   (MethodInfo_1470BF0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_Remove
                  );
      }
    }
  }
  pUVar5 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator_PreviewCameraData);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pUVar5,(MethodInfo *)0x0);
  pSVar7 = System_String__Concat_1969e50("PersistentPreviewCamera_",cameraId,(MethodInfo *)0x0);
  pUVar6 = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)pUVar6,pSVar7,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  UnityEngine_Object__DontDestroyOnLoad(pUVar6,(MethodInfo *)0x0);
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)parent,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if ((parent == (UnityEngine_Transform_o *)0x0) ||
       (pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent,(MethodInfo *)0x0),
       pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto label_1823318bc;
    local_res8[0] = UnityEngine_GameObject__get_scene(pUVar8,(MethodInfo *)0x0);
    pSVar7 = UnityEngine_SceneManagement_Scene__get_name(local_res8,(MethodInfo *)0x0);
    bVar3 = System_String__op_Equality(pSVar7,"DontDestroyOnLoad",(MethodInfo *)0x0);
    if (!bVar3) {
      pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent,(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_1823318bc;
      local_res8[0] = UnityEngine_GameObject__get_scene(pUVar8,(MethodInfo *)0x0);
      pSVar7 = UnityEngine_SceneManagement_Scene__get_name(local_res8,(MethodInfo *)0x0);
      if (pSVar7 != (System_String_o *)0x0) goto label_1823315a9;
    }
    if ((pUVar6 == (UnityEngine_Object_o *)0x0) ||
       (__this_00 = UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_Transform_o *)0x0)) goto label_1823318bc;
    UnityEngine_Transform__SetParent(__this_00,parent,(MethodInfo *)0x0);
  }
  else {
label_1823315a9:
    if (pUVar6 == (UnityEngine_Object_o *)0x0) goto label_1823318bc;
  }
  pUVar9 = UnityEngine_GameObject__AddComponent_object_
                     ((UnityEngine_GameObject_o *)pUVar6,
                      (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Camera);
  if (pUVar5 == (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)0x0) goto label_1823318bc;
  (pUVar5->fields).Camera = pUVar9;
  Il2CppCodeGenWriteBarrier(&(pUVar5->fields).Camera,pUVar9);
  pUVar9 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
  if (pUVar9 == (UnityEngine_Camera_o *)0x0) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pUVar9 = UnityEngine_Object__FindObjectOfType_object_
                       ((MethodInfo_745020 *)MethodInfo_UnityEngine_Object_FindObjectOfType_Camera);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (pUVar9 == (UnityEngine_Camera_o *)0x0) goto label_1823318bc;
    pUVar2 = (pUVar5->fields).Camera;
    value = UnityEngine_Camera__get_clearFlags(pUVar9,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Camera_o *)0x0) goto label_1823318bc;
    UnityEngine_Camera__set_clearFlags(pUVar2,value,(MethodInfo *)0x0);
    pUVar2 = (pUVar5->fields).Camera;
    pUVar10 = UnityEngine_Camera__get_backgroundColor
                        ((UnityEngine_Color_o *)&local_28,pUVar9,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Camera_o *)0x0) goto label_1823318bc;
    local_28.r = (pUVar10->fields).r;
    local_28.g = (pUVar10->fields).g;
    local_28.b = (pUVar10->fields).b;
    local_28.a = (pUVar10->fields).a;
    UnityEngine_Camera__set_backgroundColor(pUVar2,(UnityEngine_Color_o *)&local_28,(MethodInfo *)0x0);
    pUVar2 = (pUVar5->fields).Camera;
    fVar12 = UnityEngine_Camera__get_nearClipPlane(pUVar9,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Camera_o *)0x0) goto label_1823318bc;
    UnityEngine_Camera__set_nearClipPlane(pUVar2,fVar12,(MethodInfo *)0x0);
    pUVar2 = (pUVar5->fields).Camera;
    fVar12 = UnityEngine_Camera__get_farClipPlane(pUVar9,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Camera_o *)0x0) goto label_1823318bc;
    UnityEngine_Camera__set_farClipPlane(pUVar2,fVar12,(MethodInfo *)0x0);
    x = (UnityEngine_Object_o *)
        UnityEngine_Component__GetComponent_object_
                  ((UnityEngine_Component_o *)pUVar9,
                   (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Skybox);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      __this_01 = UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)pUVar6,
                             (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Skybox);
      if ((x == (UnityEngine_Object_o *)0x0) ||
         (value_00 = UnityEngine_Skybox__get_material((UnityEngine_Skybox_o *)x,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_Skybox_o *)0x0)) goto label_1823318bc;
      UnityEngine_Skybox__set_material(__this_01,value_00,(MethodInfo *)0x0);
    }
  }
  pUVar9 = (pUVar5->fields).Camera;
  if (pUVar9 != (UnityEngine_Camera_o *)0x0) {
    UnityEngine_Camera__set_fieldOfView(pUVar9,60.0,(MethodInfo *)0x0);
    pUVar9 = (pUVar5->fields).Camera;
    if (pUVar9 != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__set_orthographic(pUVar9,false,(MethodInfo *)0x0);
      pUVar9 = (pUVar5->fields).Camera;
      if (pUVar9 != (UnityEngine_Camera_o *)0x0) {
        UnityEngine_Camera__set_cullingMask(pUVar9,-1,(MethodInfo *)0x0);
        pUVar9 = (pUVar5->fields).Camera;
        if (pUVar9 != (UnityEngine_Camera_o *)0x0) {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar9,false,(MethodInfo *)0x0);
          pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RenderTexture);
          UnityEngine_RenderTexture___ctor_2ef25e0(pUVar11,0x80,0x80,0x10,(MethodInfo *)0x0);
          (pUVar5->fields).RenderTexture = pUVar11;
          Il2CppCodeGenWriteBarrier(&(pUVar5->fields).RenderTexture,pUVar11);
          pUVar11 = (pUVar5->fields).RenderTexture;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar3) {
            return (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)0x0;
          }
          pUVar11 = (pUVar5->fields).RenderTexture;
          if (pUVar11 != (UnityEngine_RenderTexture_o *)0x0) {
            UnityEngine_RenderTexture__set_antiAliasing(pUVar11,1,(MethodInfo *)0x0);
            pUVar11 = (pUVar5->fields).RenderTexture;
            if (pUVar11 != (UnityEngine_RenderTexture_o *)0x0) {
              UnityEngine_RenderTexture__Create(pUVar11,(MethodInfo *)0x0);
              pUVar9 = (pUVar5->fields).Camera;
              if (pUVar9 != (UnityEngine_Camera_o *)0x0) {
                UnityEngine_Camera__set_targetTexture(pUVar9,(pUVar5->fields).RenderTexture,(MethodInfo *)0x0)
                ;
                (pUVar5->fields).IsInitialized = true;
                (pUVar5->fields).IsCleanedUp = false;
                if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator)
                  ;
                }
                pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                         TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_persistentCameras;
                if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (pSVar1,(Il2CppObject *)cameraId,(Il2CppObject *)pUVar5,
                             (MethodInfo_147A7F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_set_Ite
                            );
                  return pUVar5;
                }
              }
            }
          }
        }
      }
    }
  }
label_1823318bc:
  ThrowNullReferenceException();
}


// Utility.CharacterPreviewGenerator$$PositionCameraForCharacter
// il2cpp: void Utility_CharacterPreviewGenerator__PositionCameraForCharacter (UnityEngine_Camera_o* camera, UnityEngine_GameObject_o* character, bool isHuman, const MethodInfo* method);
// 0x182331950

void Utility_CharacterPreviewGenerator__PositionCameraForCharacter
               (UnityEngine_Camera_o *camera,UnityEngine_GameObject_o *character,bool isHuman,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Vector3_o *pUVar5;
  float fVar6;
  UnityEngine_Vector3_o local_68 [8];
  
  if (isHuman) {
    fVar6 = 3.0;
  }
  else {
    fVar6 = 3.5;
  }
  if (character != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__get_transform(character,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = UnityEngine_Transform__get_position(local_68,pUVar4,(MethodInfo *)0x0);
      if (camera != (UnityEngine_Camera_o *)0x0) {
        fVar1 = (pUVar5->fields).x;
        fVar2 = (pUVar5->fields).y;
        fVar3 = (pUVar5->fields).z;
        pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)camera,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          local_68[0].fields.z = fVar6 + fVar3;
          local_68[0].fields.x = fVar1 + 0.0;
          local_68[0].fields.y = fVar2 + 1.23;
          UnityEngine_Transform__set_position(pUVar4,local_68,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)camera,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            local_68[0].fields.y = fVar2 + 1.18;
            local_68[0].fields.x = fVar1 + 0.0;
            local_68[0].fields.z = fVar3 + 0.0;
            UnityEngine_Transform__LookAt_2f599f0(pUVar4,local_68,(MethodInfo *)0x0);
            UnityEngine_Camera__set_fieldOfView(camera,20.0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.CharacterPreviewGenerator$$CapturePreviewWithCamera
// il2cpp: UnityEngine_Texture2D_o* Utility_CharacterPreviewGenerator__CapturePreviewWithCamera (Utility_CharacterPreviewGenerator_PreviewCameraData_o* cameraData, UnityEngine_GameObject_o* character, int32_t size, bool isHuman, const MethodInfo* method);
// 0x18232ef90
// eh: try 0x18232f1c5..0x18232f588 -> pad 0x183340510 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232f22b: nop dword ptr [rax + rax]
// asm:   0x18232f4e3: lea rcx, [rsp + 0x68]
// asm:   0x18232f4e8: call 0x182320230  ; il2cpp_runtime_helper_182320230()
// asm:   0x18232f4ed: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x18232f4f2: test rcx, rcx
// asm:   0x18232f4f5: jne 0x18232f588
// asm:   0x18232f4fb: mov rbx, qword ptr [rsp + 0x140]
// asm:   0x18232f588: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183340510: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340515: push rbp
// asm:   0x183340516: sub rsp, 0x30
// asm:   0x18334051a: mov rbp, rdx
// asm:   0x18334051d: mov rax, qword ptr [rbp + 0x98]
// asm:   0x183340524: mov rcx, qword ptr [rax]
// asm:   0x183340527: mov qword ptr [rbp + 0x60], rcx
// asm:   0x18334052b: movabs rax, 0
// asm:   0x183340535: add rsp, 0x30
// asm:   0x183340539: pop rbp
// asm:   0x18334053a: ret 

UnityEngine_Texture2D_o *
Utility_CharacterPreviewGenerator__CapturePreviewWithCamera
          (Utility_CharacterPreviewGenerator_PreviewCameraData_o *cameraData,
          UnityEngine_GameObject_o *character,int32_t size,bool isHuman,MethodInfo *method)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  UnityEngine_Renderer_o *__this;
  UnityEngine_RenderTexture_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  bool bVar8;
  int32_t iVar9;
  int32_t height;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Vector3_o *pUVar11;
  UnityEngine_Quaternion_o *pUVar12;
  System_Object_array *pSVar13;
  UnityEngine_RenderTexture_o *pUVar14;
  UnityEngine_Texture2D_o *__this_00;
  uint uVar15;
  UnityEngine_Camera_o *pUVar16;
  float fVar17;
  UnityEngine_GameObject_o *local_res10;
  UnityEngine_Rect_Fields local_108;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  UnityEngine_GameObject_o **local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  local_res10 = character;
  if (Il2CppMethodInitialized_1843477ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_1843477ea = '\x01';
  }
  local_f8 = 0;
  local_f0 = 0.0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_e8 = 0;
  local_e0 = 0.0;
  if (cameraData == (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)0x0) {
    pUVar16 = (UnityEngine_Camera_o *)0x0;
  }
  else {
    pUVar16 = (cameraData->fields).Camera;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    return (UnityEngine_Texture2D_o *)0x0;
  }
  if (cameraData != (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)0x0) {
    pUVar14 = (cameraData->fields).RenderTexture;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      return (UnityEngine_Texture2D_o *)0x0;
    }
    if ((local_res10 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar10 = UnityEngine_GameObject__get_transform(local_res10,(MethodInfo *)0x0),
       pUVar10 != (UnityEngine_Transform_o *)0x0)) {
      pUVar11 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)&local_108,pUVar10,(MethodInfo *)0x0);
      local_f8._0_4_ = (pUVar11->fields).x;
      local_f8._4_4_ = (pUVar11->fields).y;
      local_f0 = (pUVar11->fields).z;
      if ((local_res10 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar10 = UnityEngine_GameObject__get_transform(local_res10,(MethodInfo *)0x0),
         pUVar10 != (UnityEngine_Transform_o *)0x0)) {
        pUVar12 = UnityEngine_Transform__get_rotation
                            ((UnityEngine_Quaternion_o *)&local_108,pUVar10,(MethodInfo *)0x0);
        local_b0._0_4_ = (pUVar12->fields).x;
        local_b0._4_4_ = (pUVar12->fields).y;
        uStack_a8._0_4_ = (pUVar12->fields).z;
        uStack_a8._4_4_ = (pUVar12->fields).w;
        if ((local_res10 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar10 = UnityEngine_GameObject__get_transform(local_res10,(MethodInfo *)0x0),
           pUVar10 != (UnityEngine_Transform_o *)0x0)) {
          pUVar11 = UnityEngine_Transform__get_localScale
                              ((UnityEngine_Vector3_o *)&local_108,pUVar10,(MethodInfo *)0x0);
          pUVar7 = local_res10;
          local_e8._0_4_ = (pUVar11->fields).x;
          local_e8._4_4_ = (pUVar11->fields).y;
          local_e0 = (pUVar11->fields).z;
          local_d8 = 0;
          local_d0 = &local_res10;
          local_c8 = &local_f8;
          local_c0 = &local_b0;
          local_b8 = &local_e8;
          iVar9 = UnityEngine_LayerMask__NameToLayer("Default",(MethodInfo *)0x0);
          if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
          }
          Utility_CharacterPreviewGenerator__SetLayerRecursively(pUVar7,iVar9,(MethodInfo *)0x0);
          if (local_res10 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar13 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                              (local_res10,
                               (MethodInfo_6F5810 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
          uVar15 = 0;
          if (pSVar13 == (System_Object_array *)0x0) {
            ThrowNullReferenceException();
          }
          for (; pUVar7 = local_res10, uVar1 = (uint)pSVar13->max_length, (int)uVar15 < (int)uVar1;
              uVar15 = uVar15 + 1) {
            if (uVar1 <= uVar15) {
              ThrowIndexOutOfRangeException();
            }
            __this = (UnityEngine_Renderer_o *)pSVar13->m_Items[(int)uVar15];
            if (__this == (UnityEngine_Renderer_o *)0x0) {
              ThrowNullReferenceException();
            }
            UnityEngine_Renderer__set_enabled(__this,true,(MethodInfo *)0x0);
            bVar5 = (TypeInfo_UnityEngine_SkinnedMeshRenderer->_2).typeHierarchyDepth;
            if ((bVar5 <= (__this->klass->_2).typeHierarchyDepth) &&
               ((__this->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] ==
                (Il2CppClass *)TypeInfo_UnityEngine_SkinnedMeshRenderer)) {
              UnityEngine_SkinnedMeshRenderer__set_updateWhenOffscreen
                        ((UnityEngine_SkinnedMeshRenderer_o *)__this,true,(MethodInfo *)0x0);
            }
          }
          pUVar16 = (cameraData->fields).Camera;
          if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
          }
          if (isHuman) {
            fVar17 = 3.0;
          }
          else {
            fVar17 = 3.5;
          }
          if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar10 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
          if (pUVar10 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar11 = UnityEngine_Transform__get_position
                              ((UnityEngine_Vector3_o *)&local_108,pUVar10,(MethodInfo *)0x0);
          fVar2 = (pUVar11->fields).x;
          fVar3 = (pUVar11->fields).y;
          fVar4 = (pUVar11->fields).z;
          if (pUVar16 == (UnityEngine_Camera_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0)
          ;
          if (pUVar10 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          local_108.m_YMin = fVar3 + 1.23;
          local_108.m_XMin = fVar2 + 0.0;
          local_108.m_Width = fVar17 + fVar4;
          UnityEngine_Transform__set_position(pUVar10,(UnityEngine_Vector3_o *)&local_108,(MethodInfo *)0x0);
          pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar16,(MethodInfo *)0x0)
          ;
          if (pUVar10 == (UnityEngine_Transform_o *)0x0) {
            ThrowNullReferenceException();
          }
          local_108.m_YMin = fVar3 + 1.18;
          local_108.m_XMin = fVar2 + 0.0;
          local_108.m_Width = fVar4 + 0.0;
          UnityEngine_Transform__LookAt_2f599f0(pUVar10,(UnityEngine_Vector3_o *)&local_108,(MethodInfo *)0x0)
          ;
          UnityEngine_Camera__set_fieldOfView(pUVar16,20.0,(MethodInfo *)0x0);
          pUVar14 = UnityEngine_RenderTexture__get_active((MethodInfo *)0x0);
          pUVar16 = (cameraData->fields).Camera;
          if (pUVar16 == (UnityEngine_Camera_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_Camera__Render(pUVar16,(MethodInfo *)0x0);
          UnityEngine_RenderTexture__set_active((cameraData->fields).RenderTexture,(MethodInfo *)0x0);
          pUVar6 = (cameraData->fields).RenderTexture;
          if (pUVar6 == (UnityEngine_RenderTexture_o *)0x0) {
            ThrowNullReferenceException();
          }
          iVar9 = (*(pUVar6->klass->vtable)._5_get_width.methodPtr)
                            (pUVar6,(pUVar6->klass->vtable)._5_get_width.method);
          pUVar6 = (cameraData->fields).RenderTexture;
          if (pUVar6 == (UnityEngine_RenderTexture_o *)0x0) {
            ThrowNullReferenceException();
          }
          height = (*(pUVar6->klass->vtable)._7_get_height.methodPtr)
                             (pUVar6,(pUVar6->klass->vtable)._7_get_height.method);
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
          UnityEngine_Texture2D___ctor_2efc630(__this_00,iVar9,height,3,false,(MethodInfo *)0x0);
          local_108.m_Height = (float)height;
          if (__this_00 == (UnityEngine_Texture2D_o *)0x0) {
            ThrowNullReferenceException();
          }
          local_108.m_XMin = 0.0;
          local_108.m_YMin = 0.0;
          local_108.m_Width = (float)iVar9;
          UnityEngine_Texture2D__ReadPixels_2efaf30
                    (__this_00,(UnityEngine_Rect_o *)&local_108,0,0,(MethodInfo *)0x0);
          UnityEngine_Texture2D__Apply_2ef9fd0(__this_00,(MethodInfo *)0x0);
          UnityEngine_RenderTexture__set_active(pUVar14,(MethodInfo *)0x0);
          if (size != iVar9) {
            TextureScaler__ScaleBlocking(__this_00,size,size,(MethodInfo *)0x0);
          }
          il2cpp_runtime_helper_182320230(&local_d0);
          return __this_00;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.CharacterPreviewGenerator$$CleanupPersistentCamera
// il2cpp: void Utility_CharacterPreviewGenerator__CleanupPersistentCamera (System_String_o* cameraId, const MethodInfo* method);
// 0x18232fd40

void Utility_CharacterPreviewGenerator__CleanupPersistentCamera(System_String_o *cameraId,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__CharacterPreviewGenerator_PreviewCameraData__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppClass *x;
  bool bVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Object_o *pUVar4;
  
  if (Il2CppMethodInitialized_1843477eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_Contain
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_Remove
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_get_Ite
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843477eb = '\x01';
  }
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  __this = TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_persistentCameras;
  if (__this != (System_Collections_Generic_Dictionary_string__CharacterPreviewGenerator_PreviewCameraData__o
                 *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                       (Il2CppObject *)cameraId,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_Contain
                      );
    if (!bVar2) {
      return;
    }
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_persistentCameras;
    if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pIVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar1,(Il2CppObject *)cameraId,
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_get_Ite
                           ), pIVar3 != (Il2CppObject *)0x0)) {
      x = pIVar3[1].klass;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if (pIVar3[1].klass == (Il2CppClass *)0x0) goto label_18232ff74;
        UnityEngine_Camera__set_targetTexture
                  ((UnityEngine_Camera_o *)pIVar3[1].klass,(UnityEngine_RenderTexture_o *)0x0,
                   (MethodInfo *)0x0);
        if (pIVar3[1].klass == (Il2CppClass *)0x0) goto label_18232ff74;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pIVar3[1].klass,false,(MethodInfo *)0x0)
        ;
        if (pIVar3[1].klass == (Il2CppClass *)0x0) goto label_18232ff74;
        pUVar4 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pIVar3[1].klass,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__DestroyImmediate_2f1fb90(pUVar4,(MethodInfo *)0x0);
      }
      pUVar4 = pIVar3[1].monitor;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if (pIVar3[1].monitor == (UnityEngine_RenderTexture_o *)0x0) goto label_18232ff74;
        UnityEngine_RenderTexture__Release(pIVar3[1].monitor,(MethodInfo *)0x0);
        pUVar4 = pIVar3[1].monitor;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__DestroyImmediate_2f1fb90(pUVar4,(MethodInfo *)0x0);
      }
      *(undefined1 *)((longlong)&pIVar3[2].klass + 1) = 1;
      if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_persistentCameras;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar1,(Il2CppObject *)cameraId,
                   (MethodInfo_1470BF0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_Remove
                  );
        return;
      }
    }
  }
label_18232ff74:
  ThrowNullReferenceException();
}


// Utility.CharacterPreviewGenerator$$CleanupAllPersistentCameras
// il2cpp: void Utility_CharacterPreviewGenerator__CleanupAllPersistentCameras (const MethodInfo* method);
// 0x18232f5a0
// eh: try 0x18232f6d2..0x18232f70d -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232f71e: mov rdx, qword ptr [rip + 0x1d681f3]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x18232f725: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18232f72a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18232f72f: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18232f734: test rcx, rcx
// asm:   0x18232f737: jne 0x18232f744
// asm:   0x18232f744: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Utility_CharacterPreviewGenerator__CleanupAllPersistentCameras(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__CharacterPreviewGenerator_PreviewCameraData__o *__this;
  Il2CppObject *cameraId;
  bool bVar1;
  System_Collections_Generic_IEnumerable_TKey__o *collection;
  System_Collections_Generic_List_string__o *__this_00;
  undefined1 local_40 [16];
  System_String_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_1843477ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_get_Key
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_1843477ec = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  __this = TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_persistentCameras;
  if (__this != (System_Collections_Generic_Dictionary_string__CharacterPreviewGenerator_PreviewCameraData__o
                 *)0x0) {
    collection = System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                            (MethodInfo_13C6500 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_get_Key
                           );
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor_94fb10
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                 (System_Collections_Generic_List_T__o *)__this_00,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
      local_28.fields._index = local_40._8_4_;
      local_28.fields._version = local_40._12_4_;
      local_28.fields._current = (Il2CppObject *)local_30;
      local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_40._8_8_ = &local_28;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&local_28,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        cameraId = local_28.fields._current;
        if (!bVar1) break;
        if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
        }
        Utility_CharacterPreviewGenerator__CleanupPersistentCamera
                  ((System_String_o *)cameraId,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                 MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewWithPersistentCamera
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera (System_String_o* cameraId, UnityEngine_GameObject_o* character, System_String_o* fileName, int32_t size, bool isHuman, UnityEngine_Transform_o* cameraParent, const MethodInfo* method);
// 0x182330d20
// eh: try 0x182330e3f..0x1823310f3 -> pad 0x183320380 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 52 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182330f0a: jmp 0x1823310cc
// asm:   0x182330f0f: cmp byte ptr [rsp + 0x30], 0
// asm:   0x182330f14: je 0x182330f22
// asm:   0x182330f16: xor edx, edx
// asm:   0x182330f18: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x182330f1d: call 0x181bb0510  ; System_Threading_Monitor__Exit()
// asm:   0x182330f22: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x182330f27: test rcx, rcx
// asm:   0x182330f2a: jne 0x1823310e2
// asm:   0x182330f30: xor ebx, ebx
// asm:   0x182330f32: mov esi, dword ptr [rsp + 0xb8]
// asm:   0x182330f39: mov r14, qword ptr [rsp + 0xa8]
// asm:   0x182330f41: mov rdi, qword ptr [rsp + 0xa0]
// asm:   0x182330f49: mov qword ptr [rsp + 0x50], rbx
// asm:   0x182330f4e: lea rax, [rsp + 0x38]
// asm:   0x182330f53: mov qword ptr [rsp + 0x58], rax
// asm:   0x182330f58: lea rax, [rsp + 0x30]
// asm:   0x182330f5d: mov qword ptr [rsp + 0x60], rax
// asm:   0x182330f62: lea rax, [rsp + 0xb0]
// asm:   0x182330f6a: mov qword ptr [rsp + 0x68], rax
// asm:   0x182330f6f: mov rcx, qword ptr [rip + 0x1dad5ca]  ; TypeInfo_Utility_CharacterPreviewGenerator
// asm:   0x182330f76: cmp dword ptr [rcx + 0xe4], 0
// asm:   0x182330f7d: jne 0x182330f84
// asm:   0x1823310b8: lea rcx, [rsp + 0x58]
// asm:   0x1823310bd: call 0x182320300  ; il2cpp_runtime_helper_182320300()
// asm:   0x1823310c2: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x1823310c7: test rcx, rcx
// asm:   0x1823310ca: jne 0x1823310f3
// asm:   0x1823310e2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1823310f3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183320350: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320355: push rbp
// asm:   0x183320356: sub rsp, 0x30
// asm:   0x18332035a: mov rbp, rdx
// asm:   0x18332035d: mov rax, qword ptr [rbp + 0x48]
// asm:   0x183320361: mov rcx, qword ptr [rax]
// asm:   0x183320364: mov qword ptr [rbp + 0x50], rcx
// asm:   0x183320368: movabs rax, 0
// asm:   0x183320372: add rsp, 0x30
// asm:   0x183320376: pop rbp
// asm:   0x183320377: ret 
// asm:   0x183320380: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320385: push rbp
// asm:   0x183320386: sub rsp, 0x30
// asm:   0x18332038a: mov rbp, rdx
// asm:   0x18332038d: mov rax, qword ptr [rbp + 0x40]
// asm:   0x183320391: mov rcx, qword ptr [rax]
// asm:   0x183320394: mov qword ptr [rbp + 0x50], rcx
// asm:   0x183320398: movabs rax, 0
// asm:   0x1833203a2: add rsp, 0x30
// asm:   0x1833203a6: pop rbp
// asm:   0x1833203a7: ret 

void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera
               (System_String_o *cameraId,UnityEngine_GameObject_o *character,System_String_o *fileName,
               int32_t size,bool isHuman,UnityEngine_Transform_o *cameraParent,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  bool bVar2;
  Utility_CharacterPreviewGenerator_PreviewCameraData_o *cameraData;
  UnityEngine_Texture2D_o *texture;
  System_String_o *str3;
  System_String_o *pSVar3;
  System_String_o *local_res18;
  int32_t local_res20;
  Il2CppObject *local_68;
  System_Collections_Generic_HashSet_string__o *local_60 [3];
  undefined8 local_48;
  System_Collections_Generic_HashSet_string__o **local_40;
  System_Collections_Generic_HashSet_string__o **local_38;
  System_String_o **local_30;
  
  local_res18 = fileName;
  local_res20 = size;
  if (Il2CppMethodInitialized_1843477ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterPreview_");
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"_");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843477ed = '\x01';
  }
  local_60[0] = (System_Collections_Generic_HashSet_string__o *)0x0;
  local_68._0_1_ = 0;
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  local_60[0] = TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_currentlyGenerating;
  local_68._0_1_ = '\0';
  local_48 = 0;
  local_40 = (System_Collections_Generic_HashSet_string__o **)&local_68;
  local_38 = local_60;
  System_Threading_Monitor__Enter_1bb0480((Il2CppObject *)local_60[0],(bool *)&local_68,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)
           TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_currentlyGenerating;
  if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_HashSet_object___Contains
                    (pSVar1,(Il2CppObject *)local_res18,
                     (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
  if (bVar2) {
    if ((char)local_68 != '\0') {
      System_Threading_Monitor__Exit((Il2CppObject *)local_60[0],(MethodInfo *)0x0);
    }
  }
  else {
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_currentlyGenerating;
    if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_HashSet_object___Add
              (pSVar1,(Il2CppObject *)local_res18,
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    if ((char)local_68 != '\0') {
      System_Threading_Monitor__Exit((Il2CppObject *)local_60[0],(MethodInfo *)0x0);
    }
    local_48 = 0;
    local_40 = local_60;
    local_38 = (System_Collections_Generic_HashSet_string__o **)&local_68;
    local_30 = &local_res18;
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    cameraData = Utility_CharacterPreviewGenerator__GetOrCreatePersistentCamera
                           (cameraId,cameraParent,(MethodInfo *)0x0);
    texture = Utility_CharacterPreviewGenerator__CapturePreviewWithCamera
                        (cameraData,character,size,isHuman,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      il2cpp_runtime_helper_182320300(&local_40);
    }
    else {
      if (local_res18 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      str3 = System_String__Replace_1970e80
                       (local_res18,"Preset","",(MethodInfo *)0x0);
      pSVar3 = "Human";
      if (!isHuman) {
        pSVar3 = "Titans";
      }
      pSVar3 = System_String__Concat_1969590
                         ("CharacterPreview_",pSVar3,"_",str3,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      ApplicationManagers_ResourceManager__SetExternalTexture(pSVar3,texture,true,(MethodInfo *)0x0);
      if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
      }
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)
               TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_generatedPreviewKeys;
      if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_object___Add
                (pSVar1,(Il2CppObject *)pSVar3,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      il2cpp_runtime_helper_182320300(&local_40);
    }
  }
  return;
}


// Utility.CharacterPreviewGenerator$$SaveCachedPreviewsToDisk
// il2cpp: void Utility_CharacterPreviewGenerator__SaveCachedPreviewsToDisk (const MethodInfo* method);
// 0x182331ab0
// eh: try 0x182331c80..0x182331e8d -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182331c7f: nop 
// asm:   0x182331df3: mov rdx, qword ptr [rip + 0x1d6587e]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose
// asm:   0x182331dfa: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182331dff: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182331e04: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182331e09: test rcx, rcx
// asm:   0x182331e0c: jne 0x182331e8d
// asm:   0x182331e8d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Utility_CharacterPreviewGenerator__SaveCachedPreviewsToDisk(MethodInfo *method)

{
  System_Collections_Generic_HashSet_Vector2Int__o *__this;
  Il2CppObject *key;
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  UnityEngine_Texture2D_o *tex;
  System_String_array *source;
  System_Collections_Generic_IEnumerable_TSource__o *values;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_Byte_array *bytes;
  undefined1 local_70 [16];
  System_String_o *local_60;
  System_Collections_Generic_HashSet_Enumerator_T__o local_58;
  
  if (Il2CppMethodInitialized_1843477ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Skip_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"_");
    il2cpp_codegen_initialize_runtime_metadata(&"Titans");
    il2cpp_codegen_initialize_runtime_metadata(&".png");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset");
    Il2CppMethodInitialized_1843477ee = '\x01';
  }
  local_58.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar2 = TypeInfo_Utility_FolderPaths->static_fields->CharacterPreviews;
  if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
  }
  pSVar2 = System_IO_Path__Combine(pSVar2,"Human",(MethodInfo *)0x0);
  pSVar3 = System_IO_Path__Combine
                     (TypeInfo_Utility_FolderPaths->static_fields->CharacterPreviews,"Titans",
                      (MethodInfo *)0x0);
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  __this = (System_Collections_Generic_HashSet_Vector2Int__o *)
           TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_generatedPreviewKeys;
  if (__this != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_70,__this,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
    local_58.fields._set = (System_Collections_Generic_HashSet_T__o *)local_70._0_8_;
    local_58.fields._index = local_70._8_4_;
    local_58.fields._version = local_70._12_4_;
    local_58.fields._current = (Il2CppObject *)local_60;
    local_70._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_70._8_8_ = &local_58;
    while( true ) {
      do {
        bVar1 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (&local_58,
                           (MethodInfo_15381F0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext);
        key = local_58.fields._current;
        if (!bVar1) {
          System_Collections_Generic_HashSet_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_58,
                     MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose);
          if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
          }
          if (Il2CppMethodInitialized_1843477e6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
            Il2CppMethodInitialized_1843477e6 = '\x01';
          }
          if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
          }
          Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(true,(MethodInfo *)0x0);
          Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(false,(MethodInfo *)0x0);
          return;
        }
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        tex = ApplicationManagers_ResourceManager__GetExternalTexture
                        ((System_String_o *)key,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)tex,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while (!bVar1);
      if ((System_String_o *)key == (System_String_o *)0x0) break;
      source = System_String__Split((System_String_o *)key,0x5f,0,(MethodInfo *)0x0);
      if (source == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      if (2 < (int)source->max_length) {
        if ((uint)source->max_length < 2) {
          ThrowIndexOutOfRangeException();
        }
        bVar1 = System_String__op_Equality(source->m_Items[1],"Human",(MethodInfo *)0x0);
        values = System_Linq_Enumerable__Skip_object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)source,2,
                            (MethodInfo_6C73A0 *)MethodInfo_System_Linq_Enumerable_Skip_string);
        pSVar4 = System_String__Join_196ecd0
                           ("_",(System_Collections_Generic_IEnumerable_string__o *)values,
                            (MethodInfo *)0x0);
        pSVar5 = pSVar3;
        if (bVar1) {
          pSVar5 = pSVar2;
        }
        bVar1 = System_IO_Directory__Exists(pSVar5,(MethodInfo *)0x0);
        if (!bVar1) {
          System_IO_Directory__CreateDirectory(pSVar5,(MethodInfo *)0x0);
        }
        pSVar4 = System_String__Concat_1969b70
                           ("Preset",pSVar4,".png",(MethodInfo *)0x0);
        if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
        }
        pSVar5 = System_IO_Path__Combine(pSVar5,pSVar4,(MethodInfo *)0x0);
        bytes = UnityEngine_ImageConversion__EncodeToPNG(tex,(MethodInfo *)0x0);
        System_IO_File__WriteAllBytes(pSVar5,bytes,(MethodInfo *)0x0);
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Utility.CharacterPreviewGenerator$$ClearSessionGeneratedPreviews
// il2cpp: void Utility_CharacterPreviewGenerator__ClearSessionGeneratedPreviews (const MethodInfo* method);
// 0x18232ffc0
// eh: try 0x1823300c0..0x182330169 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18233017a: mov rdx, qword ptr [rip + 0x1d674f7]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose
// asm:   0x182330181: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182330186: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18233018b: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182330190: test rcx, rcx
// asm:   0x182330193: jne 0x1823301e6
// asm:   0x1823301e6: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Utility_CharacterPreviewGenerator__ClearSessionGeneratedPreviews(MethodInfo *method)

{
  System_Collections_Generic_HashSet_Vector2Int__o *__this;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_00;
  System_String_o *key;
  bool bVar1;
  UnityEngine_Texture2D_o *x;
  undefined1 local_40 [16];
  System_String_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  System_String_o *local_18;
  
  if (Il2CppMethodInitialized_1843477ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_1843477ef = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (System_String_o *)0x0;
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  __this = (System_Collections_Generic_HashSet_Vector2Int__o *)
           TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_generatedPreviewKeys;
  if (__this != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_40,__this,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_28,
                         (MethodInfo_15381F0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext);
      key = local_18;
      if (!bVar1) break;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      x = ApplicationManagers_ResourceManager__GetExternalTexture(key,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__DestroyImmediate_2f1fb90((UnityEngine_Object_o *)x,(MethodInfo *)0x0);
      }
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      ApplicationManagers_ResourceManager__RemoveExternalTexture(key,(MethodInfo *)0x0);
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose);
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    __this_00 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_generatedPreviewKeys;
    if (__this_00 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
      System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                (__this_00,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Utility.CharacterPreviewGenerator$$ClearNonPersistentPreviews
// il2cpp: void Utility_CharacterPreviewGenerator__ClearNonPersistentPreviews (const MethodInfo* method);
// 0x18232ff80

void Utility_CharacterPreviewGenerator__ClearNonPersistentPreviews(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843477f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_1843477f0 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  ApplicationManagers_ResourceManager__ClearNonPersistentTextures((MethodInfo *)0x0);
  return;
}


// Utility.CharacterPreviewGenerator$$GetCacheInfo
// il2cpp: void Utility_CharacterPreviewGenerator__GetCacheInfo (int32_t* totalCached, int32_t* persistent, const MethodInfo* method);
// 0x182331100

void Utility_CharacterPreviewGenerator__GetCacheInfo
               (int32_t *totalCached,int32_t *persistent,MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_1843477f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_1843477f1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  iVar1 = ApplicationManagers_ResourceManager__GetExternalTextureCacheCount((MethodInfo *)0x0);
  *totalCached = iVar1;
  iVar1 = ApplicationManagers_ResourceManager__GetPersistentTextureCacheCount((MethodInfo *)0x0);
  *persistent = iVar1;
  return;
}


// Utility.CharacterPreviewGenerator$$CaptureCurrentCharacterPreview
// il2cpp: void Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview (bool isHuman, const MethodInfo* method);
// 0x18232ebe0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232ecbb: mov ebx, esi
// asm:   0x18232ecbd: jmp 0x18232ecf2
// asm:   0x18232ed96: mov rdi, rsi
// asm:   0x18232ed99: jmp 0x18232edce
// asm:   0x18232eeba: mov rdi, rsi
// asm:   0x18232eebd: jmp 0x18232eef2

void Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview(bool isHuman,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_HashSet_string__o *pSVar2;
  Settings_HumanCustomSettings_o *pSVar3;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this;
  Settings_StringSetting_o *pSVar4;
  Settings_TitanCustomSettings_o *pSVar5;
  Settings_SetSettingsContainer_TitanCustomSet__o *__this_00;
  bool bVar6;
  Settings_BaseSetSetting_o *pSVar7;
  UnityEngine_GameObject_o *character;
  System_String_o *fileName;
  System_String_o *cameraId;
  Settings_BaseSetSetting_o *x;
  Settings_BaseSetSetting_o *pSVar8;
  
  if (Il2CppMethodInitialized_1843477f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"TitanPreview");
    il2cpp_codegen_initialize_runtime_metadata(&"HumanPreview");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset");
    Il2CppMethodInitialized_1843477f2 = '\x01';
  }
  pSVar8 = (Settings_BaseSetSetting_o *)0x0;
  pSVar7 = (Settings_BaseSetSetting_o *)
           TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  x = pSVar8;
  if (pSVar7 != (Settings_BaseSetSetting_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
    if (((((GameManagers_BaseGameManager_c *)pSVar7->klass)->_2).typeHierarchyDepth < bVar1) ||
       (x = pSVar7,
       (((GameManagers_BaseGameManager_c *)pSVar7->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
       (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pSVar7);
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  if (x != (Settings_BaseSetSetting_o *)0x0) {
    if (isHuman) {
      pSVar2 = (x->fields).FoundSettings;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pSVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar6) {
        return;
      }
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
      if ((pSVar3 != (Settings_HumanCustomSettings_o *)0x0) &&
         (__this = (pSVar3->fields).CustomSets,
         __this != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) {
        pSVar7 = Settings_SetSettingsContainer_object___GetSelectedSet
                           ((Settings_SetSettingsContainer_T__o *)__this,
                            (MethodInfo_C8EAF0 *)
                            MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
        if (pSVar7 != (Settings_BaseSetSetting_o *)0x0) {
          bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
          if (((pSVar7->klass->_2).typeHierarchyDepth < bVar1) ||
             (pSVar8 = pSVar7,
             (pSVar7->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
             (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar7);
          }
        }
        pSVar2 = (x->fields).FoundSettings;
        if (((pSVar2 != (System_Collections_Generic_HashSet_string__o *)0x0) &&
            (character = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pSVar2,(MethodInfo *)0x0),
            pSVar8 != (Settings_BaseSetSetting_o *)0x0)) &&
           (pSVar4 = (pSVar8->fields).UniqueId, pSVar4 != (Settings_StringSetting_o *)0x0)) {
          fileName = System_String__Concat_1969e50
                               ("Preset",(pSVar4->fields)._value,(MethodInfo *)0x0);
          if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
          }
          bVar6 = true;
          cameraId = "HumanPreview";
label_18232ee47:
          Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera
                    (cameraId,character,fileName,0x80,bVar6,(UnityEngine_Transform_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pSVar4 = (x->fields).Name;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pSVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar6) {
        return;
      }
      pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
      if ((pSVar5 != (Settings_TitanCustomSettings_o *)0x0) &&
         (__this_00 = (pSVar5->fields).TitanCustomSets,
         __this_00 != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) {
        pSVar7 = Settings_SetSettingsContainer_object___GetSelectedSet
                           ((Settings_SetSettingsContainer_T__o *)__this_00,
                            (MethodInfo_C8EAF0 *)
                            MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
        if (pSVar7 != (Settings_BaseSetSetting_o *)0x0) {
          bVar1 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
          if (((pSVar7->klass->_2).typeHierarchyDepth < bVar1) ||
             (pSVar8 = pSVar7,
             (pSVar7->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
             (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar7);
          }
        }
        pSVar4 = (x->fields).Name;
        if (((pSVar4 != (Settings_StringSetting_o *)0x0) &&
            (character = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pSVar4,(MethodInfo *)0x0),
            pSVar8 != (Settings_BaseSetSetting_o *)0x0)) &&
           (pSVar4 = (pSVar8->fields).UniqueId, pSVar4 != (Settings_StringSetting_o *)0x0)) {
          fileName = System_String__Concat_1969e50
                               ("Preset",(pSVar4->fields)._value,(MethodInfo *)0x0);
          if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
          }
          bVar6 = false;
          cameraId = "TitanPreview";
          goto label_18232ee47;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.CharacterPreviewGenerator$$InitializePreviewSystem
// il2cpp: void Utility_CharacterPreviewGenerator__InitializePreviewSystem (const MethodInfo* method);
// 0x1823318d0

void Utility_CharacterPreviewGenerator__InitializePreviewSystem(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843477f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    Il2CppMethodInitialized_1843477f3 = '\x01';
  }
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  if (Il2CppMethodInitialized_1843477e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    Il2CppMethodInitialized_1843477e6 = '\x01';
  }
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(true,(MethodInfo *)0x0);
  Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(false,(MethodInfo *)0x0);
  return;
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewForHumanSet
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet (UI_CharacterEditorHumanMenu_o* humanMenu, bool isRebuild, const MethodInfo* method);
// 0x182330310
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182330640: mov rcx, qword ptr [rip + 0x1d67059]  ; "HumanPreview"
// asm:   0x182330647: mov r9d, 0x80
// asm:   0x18233064d: mov qword ptr [rsp + 0x30], 0
// asm:   0x182330656: mov r8, rdi
// asm:   0x182330659: mov qword ptr [rsp + 0x28], rbx
// asm:   0x18233065e: mov rdx, rsi
// asm:   0x182330661: mov byte ptr [rsp + 0x20], 1
// asm:   0x182330666: call 0x182330d20  ; Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera()
// asm:   0x18233066b: jmp 0x1823305a4

void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet
               (UI_CharacterEditorHumanMenu_o *humanMenu,bool isRebuild,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this;
  GameManagers_BaseGameManager_o *pGVar3;
  GameManagers_BaseGameManager_c *__this_00;
  Settings_IntSetting_o *pSVar4;
  Characters_HumanSetup_o *__this_01;
  Settings_StringSetting_o *pSVar5;
  bool bVar6;
  Settings_HumanCustomSet_o *customSet;
  Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o *routine;
  UnityEngine_GameObject_o *character;
  System_String_o *fileName;
  UnityEngine_Transform_o *cameraParent;
  int32_t weapon;
  
  if (Il2CppMethodInitialized_1843477f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"HumanPreview");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset");
    Il2CppMethodInitialized_1843477f4 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
     (__this = (pSVar2->fields).CustomSets, __this != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0))
  {
    customSet = (Settings_HumanCustomSet_o *)
                Settings_SetSettingsContainer_object___GetSelectedSet
                          ((Settings_SetSettingsContainer_T__o *)__this,
                           (MethodInfo_C8EAF0 *)
                           MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    if (customSet != (Settings_HumanCustomSet_o *)0x0) {
      bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
      if (((customSet->klass->_2).typeHierarchyDepth < bVar1) ||
         ((customSet->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(customSet);
      }
    }
    pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar3 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
      if (((pGVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(pGVar3);
      }
      __this_00 = (*(uint64_t *)((char *)pGVar3 + 0x28));
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)humanMenu,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar6) {
        if ((humanMenu == (UI_CharacterEditorHumanMenu_o *)0x0) ||
           (pSVar4 = (humanMenu->fields).Weapon, pSVar4 == (Settings_IntSetting_o *)0x0)) goto label_182330670;
        weapon = (pSVar4->fields)._value;
      }
      else {
        weapon = 0;
      }
      if (isRebuild) {
        if ((__this_00 == (GameManagers_BaseGameManager_c *)0x0) ||
           (__this_01 = *(Characters_HumanSetup_o **)&(__this_00->_1).this_arg.bits,
           __this_01 == (Characters_HumanSetup_o *)0x0)) goto label_182330670;
        Characters_HumanSetup__Load(__this_01,customSet,weapon,false,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)humanMenu,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar6) {
          if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
          }
          if (Il2CppMethodInitialized_1843477f5 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Utility_CharacterPreviewGenerator_GeneratePreviewForHumanSetCoroutine_d__21);
            Il2CppMethodInitialized_1843477f5 = '\x01';
          }
          routine = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_Utility_CharacterPreviewGenerator_GeneratePreviewForHumanSetCoroutine_d__21
                              );
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
          (routine->fields).__1__state = 0;
          (routine->fields).humanMenu = humanMenu;
          Il2CppCodeGenWriteBarrier(&(routine->fields).humanMenu,humanMenu);
          (routine->fields).isRebuild = false;
          if (humanMenu != (UI_CharacterEditorHumanMenu_o *)0x0) {
            UnityEngine_MonoBehaviour__StartCoroutine_Auto
                      ((UnityEngine_MonoBehaviour_o *)humanMenu,(System_Collections_IEnumerator_o *)routine,
                       (MethodInfo *)0x0);
            return;
          }
          goto label_182330670;
        }
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)humanMenu,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar6) {
        return;
      }
      if ((((__this_00 != (GameManagers_BaseGameManager_c *)0x0) &&
           (character = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
           customSet != (Settings_HumanCustomSet_o *)0x0)) &&
          (pSVar5 = (customSet->fields).UniqueId, pSVar5 != (Settings_StringSetting_o *)0x0)) &&
         (fileName = System_String__Concat_1969e50
                               ("Preset",(pSVar5->fields)._value,(MethodInfo *)0x0),
         humanMenu != (UI_CharacterEditorHumanMenu_o *)0x0)) {
        cameraParent = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)humanMenu,(MethodInfo *)0x0);
        if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
        }
        Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera
                  ("HumanPreview",character,fileName,0x80,true,cameraParent,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_182330670:
  ThrowNullReferenceException();
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewForHumanSetCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine (UI_CharacterEditorHumanMenu_o* humanMenu, bool isRebuild, const MethodInfo* method);
// 0x182330290

System_Collections_IEnumerator_o *
Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine
          (UI_CharacterEditorHumanMenu_o *humanMenu,bool isRebuild,MethodInfo *method)

{
  Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o *__this;
  
  if (Il2CppMethodInitialized_1843477f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Utility_CharacterPreviewGenerator_GeneratePreviewForHumanSetCoroutine_d__21);
    Il2CppMethodInitialized_1843477f5 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Utility_CharacterPreviewGenerator_GeneratePreviewForHumanSetCoroutine_d__21);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).humanMenu = humanMenu;
  Il2CppCodeGenWriteBarrier(&(__this->fields).humanMenu,humanMenu);
  (__this->fields).isRebuild = isRebuild;
  return (System_Collections_IEnumerator_o *)__this;
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewForTitanSetCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine (UI_CharacterEditorTitanMenu_o* titanMenu, bool isRebuild, const MethodInfo* method);
// 0x182330690

System_Collections_IEnumerator_o *
Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine
          (UI_CharacterEditorTitanMenu_o *titanMenu,bool isRebuild,MethodInfo *method)

{
  Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o *__this;
  
  if (Il2CppMethodInitialized_1843477f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Utility_CharacterPreviewGenerator_GeneratePreviewForTitanSetCoroutine_d__22);
    Il2CppMethodInitialized_1843477f6 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Utility_CharacterPreviewGenerator_GeneratePreviewForTitanSetCoroutine_d__22);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).titanMenu = titanMenu;
  Il2CppCodeGenWriteBarrier(&(__this->fields).titanMenu,titanMenu);
  (__this->fields).isRebuild = isRebuild;
  return (System_Collections_IEnumerator_o *)__this;
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewWithDebounce
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewWithDebounce (UnityEngine_MonoBehaviour_o* coroutineRunner, System_String_o* debounceKey, System_Action_o* generateAction, float delaySeconds, const MethodInfo* method);
// 0x182330a30

void Utility_CharacterPreviewGenerator__GeneratePreviewWithDebounce
               (UnityEngine_MonoBehaviour_o *coroutineRunner,System_String_o *debounceKey,
               System_Action_o *generateAction,float delaySeconds,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Coroutine__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  UnityEngine_Coroutine_o *pUVar3;
  Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *routine;
  
  if (Il2CppMethodInitialized_1843477f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_set_Item);
    Il2CppMethodInitialized_1843477f7 = '\x01';
  }
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  __this = TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_activeDebounceCoroutines;
  if (__this == (System_Collections_Generic_Dictionary_string__Coroutine__o *)0x0) goto label_182330c5c;
  bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                     (Il2CppObject *)debounceKey,
                     (MethodInfo_1455450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_ContainsKey);
  if (bVar2) {
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_activeDebounceCoroutines;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182330c5c;
    pUVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar1,(Il2CppObject *)debounceKey,
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_get_Item);
    if (pUVar3 != (UnityEngine_Coroutine_o *)0x0) {
      if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_activeDebounceCoroutines;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182330c5c;
      pUVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)debounceKey,
                          (MethodInfo_147A5B0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_get_Item);
      if (coroutineRunner == (UnityEngine_MonoBehaviour_o *)0x0) goto label_182330c5c;
      UnityEngine_MonoBehaviour__StopCoroutine_2f1d820(coroutineRunner,pUVar3,(MethodInfo *)0x0);
    }
  }
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_activeDebounceCoroutines;
  if (Il2CppMethodInitialized_1843477f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Utility_CharacterPreviewGenerator_DebouncedPreviewCoroutine_d__24);
    Il2CppMethodInitialized_1843477f8 = '\x01';
  }
  routine = il2cpp_codegen_object_new
                      ((Il2CppClass *)
                       TypeInfo_Utility_CharacterPreviewGenerator_DebouncedPreviewCoroutine_d__24);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
  (routine->fields).__1__state = 0;
  (routine->fields).debounceKey = debounceKey;
  Il2CppCodeGenWriteBarrier(&(routine->fields).debounceKey,debounceKey);
  (routine->fields).generateAction = generateAction;
  Il2CppCodeGenWriteBarrier(&(routine->fields).generateAction,generateAction);
  (routine->fields).delaySeconds = delaySeconds;
  if (coroutineRunner != (UnityEngine_MonoBehaviour_o *)0x0) {
    pUVar3 = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                       (coroutineRunner,(System_Collections_IEnumerator_o *)routine,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,(Il2CppObject *)debounceKey,(Il2CppObject *)pUVar3,
                 (MethodInfo_147A7F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_set_Item);
      return;
    }
  }
label_182330c5c:
  ThrowNullReferenceException();
}


// Utility.CharacterPreviewGenerator$$DebouncedPreviewCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine (System_String_o* debounceKey, System_Action_o* generateAction, float delaySeconds, const MethodInfo* method);
// 0x1823301f0

System_Collections_IEnumerator_o *
Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine
          (System_String_o *debounceKey,System_Action_o *generateAction,float delaySeconds,MethodInfo *method)

{
  Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *__this;
  
  if (Il2CppMethodInitialized_1843477f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Utility_CharacterPreviewGenerator_DebouncedPreviewCoroutine_d__24);
    Il2CppMethodInitialized_1843477f8 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Utility_CharacterPreviewGenerator_DebouncedPreviewCoroutine_d__24);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).debounceKey = debounceKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields).debounceKey,debounceKey);
  (__this->fields).generateAction = generateAction;
  Il2CppCodeGenWriteBarrier(&(__this->fields).generateAction,generateAction);
  (__this->fields).delaySeconds = delaySeconds;
  return (System_Collections_IEnumerator_o *)__this;
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewForTitanSet
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet (UI_CharacterEditorTitanMenu_o* titanMenu, bool isRebuild, const MethodInfo* method);
// 0x182330710
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823309df: mov rcx, qword ptr [rip + 0x1d44382]  ; "TitanPreview"
// asm:   0x1823309e6: mov r9d, 0x80
// asm:   0x1823309ec: mov qword ptr [rsp + 0x30], 0
// asm:   0x1823309f5: mov r8, rsi
// asm:   0x1823309f8: mov qword ptr [rsp + 0x28], rbx
// asm:   0x1823309fd: mov rdx, rbp
// asm:   0x182330a00: mov byte ptr [rsp + 0x20], 0
// asm:   0x182330a05: call 0x182330d20  ; Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera()
// asm:   0x182330a0a: jmp 0x182330943

void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet
               (UI_CharacterEditorTitanMenu_o *titanMenu,bool isRebuild,MethodInfo *method)

{
  byte bVar1;
  Settings_TitanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_TitanCustomSet__o *__this;
  GameManagers_BaseGameManager_o *pGVar3;
  UnityEngine_Component_o *__this_00;
  Settings_StringSetting_o *pSVar4;
  bool bVar5;
  Settings_TitanCustomSet_o *set;
  Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o *routine;
  UnityEngine_GameObject_o *character;
  System_String_o *fileName;
  UnityEngine_Transform_o *cameraParent;
  
  if (Il2CppMethodInitialized_1843477f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"TitanPreview");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset");
    Il2CppMethodInitialized_1843477f9 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
  if ((pSVar2 != (Settings_TitanCustomSettings_o *)0x0) &&
     (__this = (pSVar2->fields).TitanCustomSets,
     __this != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) {
    set = (Settings_TitanCustomSet_o *)
          Settings_SetSettingsContainer_object___GetSelectedSet
                    ((Settings_SetSettingsContainer_T__o *)__this,
                     (MethodInfo_C8EAF0 *)
                     MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
    if (set != (Settings_TitanCustomSet_o *)0x0) {
      bVar1 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
      if (((set->klass->_2).typeHierarchyDepth < bVar1) ||
         ((set->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(set);
      }
    }
    pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pGVar3 != (GameManagers_BaseGameManager_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
      if (((pGVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(pGVar3);
      }
      __this_00 = (*(uint64_t *)((char *)pGVar3 + 0x30));
      if (isRebuild) {
        if ((__this_00 == (UnityEngine_Component_o *)0x0) ||
           ((*(uint64_t *)((char *)__this_00 + 0x30)) == (UnityEngine_Component_c *)0x0)) goto label_182330a0f;
        Characters_BasicTitanSetup__Load
                  ((Characters_BasicTitanSetup_o *)(*(uint64_t *)((char *)__this_00 + 0x30)),set,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)titanMenu,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
          }
          if (Il2CppMethodInitialized_1843477f6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Utility_CharacterPreviewGenerator_GeneratePreviewForTitanSetCoroutine_d__22);
            Il2CppMethodInitialized_1843477f6 = '\x01';
          }
          routine = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_Utility_CharacterPreviewGenerator_GeneratePreviewForTitanSetCoroutine_d__22
                              );
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
          (routine->fields).__1__state = 0;
          (routine->fields).titanMenu = titanMenu;
          Il2CppCodeGenWriteBarrier(&(routine->fields).titanMenu,titanMenu);
          (routine->fields).isRebuild = false;
          if (titanMenu != (UI_CharacterEditorTitanMenu_o *)0x0) {
            UnityEngine_MonoBehaviour__StartCoroutine_Auto
                      ((UnityEngine_MonoBehaviour_o *)titanMenu,(System_Collections_IEnumerator_o *)routine,
                       (MethodInfo *)0x0);
            return;
          }
          goto label_182330a0f;
        }
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)titanMenu,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar5) {
        return;
      }
      if ((((__this_00 != (UnityEngine_Component_o *)0x0) &&
           (character = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0),
           set != (Settings_TitanCustomSet_o *)0x0)) &&
          (pSVar4 = (set->fields).UniqueId, pSVar4 != (Settings_StringSetting_o *)0x0)) &&
         (fileName = System_String__Concat_1969e50
                               ("Preset",(pSVar4->fields)._value,(MethodInfo *)0x0),
         titanMenu != (UI_CharacterEditorTitanMenu_o *)0x0)) {
        cameraParent = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)titanMenu,(MethodInfo *)0x0);
        if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
        }
        Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera
                  ("TitanPreview",character,fileName,0x80,false,cameraParent,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_182330a0f:
  ThrowNullReferenceException();
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewWithPersistentCameraCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine (System_String_o* cameraId, UnityEngine_GameObject_o* character, System_String_o* fileName, int32_t size, bool isHuman, UnityEngine_Transform_o* cameraParent, const MethodInfo* method);
// 0x182330c70

System_Collections_IEnumerator_o *
Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine
          (System_String_o *cameraId,UnityEngine_GameObject_o *character,System_String_o *fileName,
          int32_t size,bool isHuman,UnityEngine_Transform_o *cameraParent,MethodInfo *method)

{
  Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o *__this;
  
  if (Il2CppMethodInitialized_1843477fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Utility_CharacterPreviewGenerator_GeneratePreviewWithPersistentCameraCoroutine_d__26)
    ;
    Il2CppMethodInitialized_1843477fa = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Utility_CharacterPreviewGenerator_GeneratePreviewWithPersistentCameraCoroutine_d__26
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).cameraId = cameraId;
  Il2CppCodeGenWriteBarrier(&(__this->fields).cameraId,cameraId);
  (__this->fields).character = character;
  Il2CppCodeGenWriteBarrier(&(__this->fields).character,character);
  (__this->fields).fileName = fileName;
  Il2CppCodeGenWriteBarrier(&(__this->fields).fileName,fileName);
  (__this->fields).isHuman = isHuman;
  (__this->fields).cameraParent = cameraParent;
  (__this->fields).size = size;
  Il2CppCodeGenWriteBarrier(&(__this->fields).cameraParent,cameraParent);
  return (System_Collections_IEnumerator_o *)__this;
}


// Utility.CharacterPreviewGenerator$$.cctor
// il2cpp: void Utility_CharacterPreviewGenerator___cctor (const MethodInfo* method);
// 0x1823320f0

void Utility_CharacterPreviewGenerator___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *pSVar1;
  System_Collections_Generic_Dictionary_string__CharacterPreviewGenerator_PreviewCameraData__o *__this;
  System_Collections_Generic_Dictionary_string__Coroutine__o *__this_00;
  
  if (Il2CppMethodInitialized_1843477fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Coroutine);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    Il2CppMethodInitialized_1843477fb = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar1,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_currentlyGenerating = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_currentlyGenerating,pSVar1);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData
                     );
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_ctor
            );
  TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_persistentCameras = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_persistentCameras,__this);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Coroutine);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_ctor);
  TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_activeDebounceCoroutines = __this_00;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_activeDebounceCoroutines,__this_00);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar1,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_generatedPreviewKeys = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_generatedPreviewKeys,pSVar1);
  return;
}


