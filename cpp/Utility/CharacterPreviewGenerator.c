// Type: Utility.CharacterPreviewGenerator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Utility/CharacterPreviewGenerator.cs
// Prior real C# source: none
// --------------------------------

// Utility.CharacterPreviewGenerator.PreviewCameraData$$.ctor
// il2cpp: void Utility_CharacterPreviewGenerator_PreviewCameraData___ctor (Utility_CharacterPreviewGenerator_PreviewCameraData_o* __this, const MethodInfo* method);
// 0x5de6fb0

void Utility_CharacterPreviewGenerator_PreviewCameraData___ctor
               (Utility_CharacterPreviewGenerator_PreviewCameraData_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$.ctor
// il2cpp: void Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24___ctor (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5de6fc0

void Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24___ctor
               (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$System.IDisposable.Dispose
// il2cpp: void Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_IDisposable_Dispose (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, const MethodInfo* method);
// 0x5de6fe0

void Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_IDisposable_Dispose
               (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *__this,
               MethodInfo *method)

{
  return;
}


// Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$MoveNext
// il2cpp: bool Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__MoveNext (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, const MethodInfo* method);
// 0x5de6ff0

bool Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__MoveNext
               (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *__this,
               MethodInfo *method)

{
  float seconds;
  int iVar1;
  System_Action_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  bool bVar4;
  UnityEngine_WaitForSeconds_o *__this_00;
  
  if (Il2CppMethodInitialized_075482a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_075482a8 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).delaySeconds;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    pSVar2 = (__this->fields).generateAction;
    if (pSVar2 != (System_Action_o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
    }
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_activeDebounceCoroutines;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05de714d:
      ThrowNullReferenceException();
    }
    bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar3,(Il2CppObject *)(__this->fields).debounceKey,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_ContainsKey);
    if (bVar4) {
      if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_activeDebounceCoroutines;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05de714d;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar3,(Il2CppObject *)(__this->fields).debounceKey,(Il2CppObject *)0x0,
                 (MethodInfo_4AAD4C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_set_Item);
    }
  }
  return iVar1 == 0;
}


// Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, const MethodInfo* method);
// 0x5de7160

Il2CppObject *
Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_Collections_IEnumerator_Reset (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, const MethodInfo* method);
// 0x5de7170

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
// 0x5de71b0

Il2CppObject *
Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_Collections_IEnumerator_get_Current
          (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$.ctor
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21___ctor (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5de71c0

void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21___ctor
               (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$System.IDisposable.Dispose
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_IDisposable_Dispose (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x5de71e0

void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_IDisposable_Dispose
               (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o *__this,
               MethodInfo *method)

{
  return;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$MoveNext
// il2cpp: bool Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__MoveNext (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x5de71f0

bool Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__MoveNext
               (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o *__this,
               MethodInfo *method)

{
  bool isRebuild;
  int iVar1;
  UI_CharacterEditorHumanMenu_o *humanMenu;
  Utility_Util__WaitForFrames_d__17_o *__this_00;
  
  if (Il2CppMethodInitialized_075482a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075482a9 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    if (Il2CppMethodInitialized_075482fb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util_WaitForFrames_d__17);
      Il2CppMethodInitialized_075482fb = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Util_WaitForFrames_d__17);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    (__this_00->fields).frames = 3;
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    humanMenu = (__this->fields).humanMenu;
    isRebuild = (__this->fields).isRebuild;
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet(humanMenu,isRebuild,(MethodInfo *)0x0);
  }
  return iVar1 == 0;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x5de7360

Il2CppObject *
Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_Collections_IEnumerator_Reset (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x5de7370

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
// 0x5de73b0

Il2CppObject *
Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_Collections_IEnumerator_get_Current
          (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$.ctor
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22___ctor (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5de73c0

void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22___ctor
               (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$System.IDisposable.Dispose
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_IDisposable_Dispose (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, const MethodInfo* method);
// 0x5de73e0

void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_IDisposable_Dispose
               (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o *__this,
               MethodInfo *method)

{
  return;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$MoveNext
// il2cpp: bool Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__MoveNext (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, const MethodInfo* method);
// 0x5de73f0

bool Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__MoveNext
               (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o *__this,
               MethodInfo *method)

{
  bool isRebuild;
  int iVar1;
  UI_CharacterEditorTitanMenu_o *titanMenu;
  Utility_Util__WaitForFrames_d__17_o *__this_00;
  
  if (Il2CppMethodInitialized_075482aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075482aa = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    if (Il2CppMethodInitialized_075482fb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util_WaitForFrames_d__17);
      Il2CppMethodInitialized_075482fb = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Util_WaitForFrames_d__17);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    (__this_00->fields).frames = 3;
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    titanMenu = (__this->fields).titanMenu;
    isRebuild = (__this->fields).isRebuild;
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet(titanMenu,isRebuild,(MethodInfo *)0x0);
  }
  return iVar1 == 0;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, const MethodInfo* method);
// 0x5de7500

Il2CppObject *
Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_Collections_IEnumerator_Reset (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, const MethodInfo* method);
// 0x5de7510

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
// 0x5de7550

Il2CppObject *
Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_Collections_IEnumerator_get_Current
          (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$.ctor
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26___ctor (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5de7560

void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26___ctor
               (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o
                *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$System.IDisposable.Dispose
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_IDisposable_Dispose (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, const MethodInfo* method);
// 0x5de7580

void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_IDisposable_Dispose
               (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o
                *__this,MethodInfo *method)

{
  return;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$MoveNext
// il2cpp: bool Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__MoveNext (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, const MethodInfo* method);
// 0x5de7590

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
  
  if (Il2CppMethodInitialized_075482ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075482ab = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    if (Il2CppMethodInitialized_075482fb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util_WaitForFrames_d__17);
      Il2CppMethodInitialized_075482fb = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Util_WaitForFrames_d__17);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).__1__state = 0;
    (__this_00->fields).frames = 2;
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    cameraId = (__this->fields).cameraId;
    character = (__this->fields).character;
    fileName = (__this->fields).fileName;
    size = (__this->fields).size;
    isHuman = (__this->fields).isHuman;
    cameraParent = (__this->fields).cameraParent;
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera
              (cameraId,character,fileName,size,isHuman,cameraParent,(MethodInfo *)0x0);
  }
  return iVar1 == 0;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, const MethodInfo* method);
// 0x5de76d0

Il2CppObject *
Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_Collections_IEnumerator_Reset (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, const MethodInfo* method);
// 0x5de76e0

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
// 0x5de7720

Il2CppObject *
Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_Collections_IEnumerator_get_Current
          (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator$$CleanupOrphanedPreviews
// il2cpp: void Utility_CharacterPreviewGenerator__CleanupOrphanedPreviews (const MethodInfo* method);
// 0x5de33b0
// eh: try 0x5de33e4..0x5de3482 -> pad 0x5de3400 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5de34fd..0x5de3523 -> pad 0x5de3523 (+1 call sites) cleanup
// eh: try 0x5de3528..0x5de352d -> pad 0x5de3535 catch (...) [compiler noexcept guard]
// asm: 78 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de3400: mov r15, rdx
// asm:   0x5de3403: mov rbx, rax
// asm:   0x5de3406: cmp r15d, 1
// asm:   0x5de340a: jne 0x5de352d
// asm:   0x5de3410: mov rdi, rbx
// asm:   0x5de3413: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5de3418: mov r14, rax
// asm:   0x5de341b: mov rbx, qword ptr [rax]
// asm:   0x5de341e: lea rdi, [rip + 0x1494c9b]  ; TypeInfo_System_Exception
// asm:   0x5de3425: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5de342a: test rbx, rbx
// asm:   0x5de342d: je 0x5de3502
// asm:   0x5de3433: mov rcx, qword ptr [rbx]
// asm:   0x5de3436: movzx edx, byte ptr [rax + 0x130]
// asm:   0x5de343d: cmp byte ptr [rcx + 0x130], dl
// asm:   0x5de3443: jb 0x5de3502
// asm:   0x5de3449: mov rcx, qword ptr [rcx + 0xc8]
// asm:   0x5de3450: cmp qword ptr [rcx + rdx*8 - 8], rax
// asm:   0x5de3455: jne 0x5de3502
// asm:   0x5de345b: lea rdi, [rip + 0x149ae76]  ; TypeInfo_Utility_Util
// asm:   0x5de3462: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5de3467: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5de346e: jne 0x5de3478
// asm:   0x5de3470: mov rdi, rax
// asm:   0x5de3473: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5de3478: mov rdi, rbx
// asm:   0x5de347b: xor esi, esi
// asm:   0x5de347d: call 0x5dee0e0  ; Utility_Util__IsFileAccessError()
// asm:   0x5de3482: test al, al
// asm:   0x5de3484: je 0x5de3502
// asm:   0x5de3486: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5de348b: mov rax, qword ptr [rbx]
// asm:   0x5de348e: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5de3495: mov rdi, rbx
// asm:   0x5de3498: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5de349e: mov rbx, rax
// asm:   0x5de34a1: lea rdi, [rip + 0x14f8618]  ; "Failed to clean up character previews: "
// asm:   0x5de34a8: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5de34ad: mov rdi, rax
// asm:   0x5de34b0: mov rsi, rbx
// asm:   0x5de34b3: xor edx, edx
// asm:   0x5de34b5: call 0x53f0320  ; System_String__Concat()
// asm:   0x5de34ba: mov rbx, rax
// asm:   0x5de34bd: lea rdi, [rip + 0x1494184]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5de34c4: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5de34c9: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5de34d0: jne 0x5de34da
// asm:   0x5de34d2: mov rdi, rax
// asm:   0x5de34d5: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5de34da: mov rdi, rbx
// asm:   0x5de34dd: xor esi, esi
// asm:   0x5de34df: pop rbx
// asm:   0x5de34e0: pop r14
// asm:   0x5de34e2: pop r15
// asm:   0x5de34e4: jmp 0x69c5270  ; UnityEngine_Debug__LogWarning()
// asm:   0x5de34e9: jmp 0x5de34ed
// asm:   0x5de34eb: jmp 0x5de34ed
// asm:   0x5de34ed: mov rbx, rax
// asm:   0x5de34f0: cmp edx, r15d
// asm:   0x5de34f3: jne 0x5de3528
// asm:   0x5de34f5: mov rdi, rbx
// asm:   0x5de34f8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5de34fd: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5de3502: mov edi, 8
// asm:   0x5de3507: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5de350c: mov rcx, qword ptr [r14]
// asm:   0x5de350f: mov qword ptr [rax], rcx
// asm:   0x5de3512: lea rsi, [rip + 0x1049fe7]
// asm:   0x5de3519: mov rdi, rax
// asm:   0x5de351c: xor edx, edx
// asm:   0x5de351e: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5de3523: jmp 0x5de3525
// asm:   0x5de3525: mov rbx, rax
// asm:   0x5de3528: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5de352d: mov rdi, rbx
// asm:   0x5de3530: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5de3535: mov rdi, rax
// asm:   0x5de3538: call 0x2ab61e0  ; __clang_call_terminate()

void Utility_CharacterPreviewGenerator__CleanupOrphanedPreviews(MethodInfo *method)

{
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_07548291 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    Il2CppMethodInitialized_07548291 = '\x01';
  }
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(true,in_RSI);
  Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(false,in_RSI);
  return;
}


// Utility.CharacterPreviewGenerator$$CleanupOrphanedPreviewsInFolder
// il2cpp: void Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder (bool isHuman, const MethodInfo* method);
// 0x5de3540
// eh: try 0x5de3833..0x5de3921 -> pad 0x5de392f (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5de394d..0x5de3952 -> pad 0x5de3c6e cleanup
// eh: try 0x5de3a83..0x5de3c6e -> pad 0x5de3c8b (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5de3c71..0x5de3c7b -> pad 0x5de3ce2 catch (...) [compiler noexcept guard]
// eh: try 0x5de3ca5..0x5de3caa -> pad 0x5de3ccd cleanup
// eh: try 0x5de3cd0..0x5de3cda -> pad 0x5de3ce2 catch (...) [compiler noexcept guard]
// asm: 71 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de377f: nop 
// asm:   0x5de380f: lea rbx, [rip + 0x14a9f9a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext
// asm:   0x5de3816: mov rbp, rsp
// asm:   0x5de3819: lea r12, [rip + 0x1495500]  ; TypeInfo_Settings_HumanCustomSet
// asm:   0x5de3820: lea r14, [rip + 0x15022e1]  ; "Preset"
// asm:   0x5de3827: lea r13, [rip + 0x14adeea]  ; MethodInfo_System_Collections_Generic_HashSet_string_Add
// asm:   0x5de382e: nop 
// asm:   0x5de3921: jmp 0x5de3931
// asm:   0x5de3923: jmp 0x5de3931
// asm:   0x5de3925: jmp 0x5de3931
// asm:   0x5de3927: jmp 0x5de3931
// asm:   0x5de3929: jmp 0x5de3931
// asm:   0x5de392b: jmp 0x5de3931
// asm:   0x5de392d: jmp 0x5de3931
// asm:   0x5de392f: jmp 0x5de3931
// asm:   0x5de3931: mov rbp, rax
// asm:   0x5de3934: cmp edx, 1
// asm:   0x5de3937: jne 0x5de3c71
// asm:   0x5de393d: mov rdi, rbp
// asm:   0x5de3940: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5de3945: mov rbx, qword ptr [rax]
// asm:   0x5de3948: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5de394d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5de3952: lea rax, [rip + 0x14a9e4f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x5de3959: mov rsi, qword ptr [rax]
// asm:   0x5de395c: mov rdi, rsp
// asm:   0x5de395f: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5de3964: test rbx, rbx
// asm:   0x5de3967: jne 0x5de3cc5
// asm:   0x5de39cc: nop dword ptr [rax]
// asm:   0x5de3a5f: lea r14, [rip + 0x14a9d4a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext
// asm:   0x5de3a66: mov rbp, rsp
// asm:   0x5de3a69: lea r12, [rip + 0x149a098]  ; TypeInfo_Settings_TitanCustomSet
// asm:   0x5de3a70: lea r13, [rip + 0x1502091]  ; "Preset"
// asm:   0x5de3a77: lea rbx, [rip + 0x14adc9a]  ; MethodInfo_System_Collections_Generic_HashSet_string_Add
// asm:   0x5de3a7e: nop 
// asm:   0x5de3c6e: mov rbp, rax
// asm:   0x5de3c71: lea rdi, [rsp + 0x18]
// asm:   0x5de3c76: call 0x2fdedd0  ; il2cpp_runtime_helper_02fdedd0()
// asm:   0x5de3c7b: jmp 0x5de3cda
// asm:   0x5de3c7d: jmp 0x5de3c8d
// asm:   0x5de3c7f: jmp 0x5de3c8d
// asm:   0x5de3c81: jmp 0x5de3c8d
// asm:   0x5de3c83: jmp 0x5de3c8d
// asm:   0x5de3c85: jmp 0x5de3c8d
// asm:   0x5de3c87: jmp 0x5de3c8d
// asm:   0x5de3c89: jmp 0x5de3c8d
// asm:   0x5de3c8b: jmp 0x5de3c8d
// asm:   0x5de3c8d: mov rbp, rax
// asm:   0x5de3c90: cmp edx, 1
// asm:   0x5de3c93: jne 0x5de3cd0
// asm:   0x5de3c95: mov rdi, rbp
// asm:   0x5de3c98: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5de3c9d: mov rbx, qword ptr [rax]
// asm:   0x5de3ca0: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5de3ca5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5de3caa: lea rax, [rip + 0x14a9af7]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
// asm:   0x5de3cb1: mov rsi, qword ptr [rax]
// asm:   0x5de3cb4: mov rdi, rsp
// asm:   0x5de3cb7: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5de3cbc: test rbx, rbx
// asm:   0x5de3cbf: je 0x5de3b25
// asm:   0x5de3cc5: mov rdi, rbx
// asm:   0x5de3cc8: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5de3ccd: mov rbp, rax
// asm:   0x5de3cd0: lea rdi, [rsp + 0x18]
// asm:   0x5de3cd5: call 0x2fdee00  ; il2cpp_runtime_helper_02fdee00()
// asm:   0x5de3cda: mov rdi, rbp
// asm:   0x5de3cdd: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5de3ce2: mov rdi, rax
// asm:   0x5de3ce5: call 0x2ab61e0  ; __clang_call_terminate()

void Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(bool isHuman,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  Settings_HumanCustomSettings_o *pSVar3;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar4;
  Settings_ListSetting_T__o *pSVar5;
  Il2CppClass *pIVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  Settings_TitanCustomSettings_o *pSVar8;
  Settings_SetSettingsContainer_TitanCustomSet__o *pSVar9;
  bool bVar10;
  int iVar11;
  System_String_o **ppSVar12;
  System_String_o *pSVar13;
  System_Collections_Generic_HashSet_string__o *__this;
  VirtualInvokeData *pVVar14;
  System_Collections_Generic_List_object__o *pSVar15;
  System_String_array *pSVar16;
  ulong uVar17;
  System_String_o *pSVar18;
  ulong uVar19;
  long lVar20;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  Il2CppObject *local_58;
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07548292 == '\0') {
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
    Il2CppMethodInitialized_07548292 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (Il2CppObject *)0x0;
  if (isHuman) {
    ppSVar12 = &"Human";
  }
  else {
    ppSVar12 = &"Titans";
  }
  pSVar13 = *ppSVar12;
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar18 = TypeInfo_Utility_FolderPaths->static_fields->CharacterPreviews;
  if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
  }
  pSVar13 = System_IO_Path__Combine(pSVar18,pSVar13,(MethodInfo *)0x0);
  bVar10 = System_IO_Directory__Exists(pSVar13,(MethodInfo *)0x0);
  if (bVar10) {
    local_38 = pSVar13;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
    System_Collections_Generic_HashSet_object____ctor
              ((System_Collections_Generic_HashSet_object__o *)__this,
               (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    if (isHuman) {
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
      if (((pSVar3 == (Settings_HumanCustomSettings_o *)0x0) ||
          (pSVar4 = (pSVar3->fields).CustomSets,
          pSVar4 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) ||
         (pSVar5 = (pSVar4->fields).Sets, pSVar5 == (Settings_ListSetting_T__o *)0x0)) goto label_05de3bde;
      pIVar6 = (Il2CppClass *)pSVar5->klass;
      uVar17 = (ulong)(pIVar6->_2).interface_offsets_count;
      if (uVar17 != 0) {
        pIVar7 = (pIVar6->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(Settings_IListSetting_c **)((long)&pIVar7->interfaceType + lVar20) ==
              TypeInfo_Settings_IListSetting) {
            pVVar14 = pIVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar20) + 2);
            goto label_05de37b9;
          }
          lVar20 = lVar20 + 0x10;
        } while (uVar17 * 0x10 != lVar20);
      }
      pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                          ((Il2CppObject *)pSVar5,(Il2CppClass *)TypeInfo_Settings_IListSetting,2);
label_05de37b9:
      pSVar15 = (System_Collections_Generic_List_object__o *)
                (*pVVar14->methodPtr)((Il2CppObject *)pSVar5,pVVar14->method);
      if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto label_05de3bde;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_50,pSVar15,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
      local_58 = local_40;
      local_68 = (undefined1  [8])local_50._0_8_;
      puStack_60 = (undefined1 *)local_50._8_8_;
      local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_50._8_8_ = local_68;
      if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
        local_50._8_8_ = local_68;
        bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                            (MethodInfo_4C45C50 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
        if (bVar10) {
          if (local_58 != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
            if ((bVar1 <= (local_58->klass->_2).typeHierarchyDepth) &&
               ((local_58->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
              if (local_58[4].klass != (Il2CppClass *)0x0) {
                System_String__Concat_52f0320
                          ("Preset",((local_58[4].klass)->_1).byval_arg.data,(MethodInfo *)0x0);
                ThrowNullReferenceException();
              }
label_05de38fd:
              ThrowNullReferenceException();
            }
label_05de3902:
            il2cpp_codegen_raise_invalid_cast_exception();
          }
label_05de38c5:
          ThrowNullReferenceException();
        }
      }
      else {
        while (bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                                   (MethodInfo_4C45C50 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext)
              , bVar10) {
          if (local_58 == (Il2CppObject *)0x0) goto label_05de38c5;
          bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
          if (((local_58->klass->_2).typeHierarchyDepth < bVar1) ||
             ((local_58->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) goto label_05de3902;
          if (local_58[4].klass == (Il2CppClass *)0x0) goto label_05de38fd;
          pSVar13 = System_String__Concat_52f0320
                              ("Preset",((local_58[4].klass)->_1).byval_arg.data,
                               (MethodInfo *)0x0);
          System_Collections_Generic_HashSet_object___Add
                    ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)pSVar13,
                     (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        }
      }
    }
    else {
      pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
      if (((pSVar8 == (Settings_TitanCustomSettings_o *)0x0) ||
          (pSVar9 = (pSVar8->fields).TitanCustomSets,
          pSVar9 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) ||
         (pSVar5 = (pSVar9->fields).Sets, pSVar5 == (Settings_ListSetting_T__o *)0x0)) goto label_05de3bde;
      pIVar6 = (Il2CppClass *)pSVar5->klass;
      uVar17 = (ulong)(pIVar6->_2).interface_offsets_count;
      if (uVar17 != 0) {
        pIVar7 = (pIVar6->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(Settings_IListSetting_c **)((long)&pIVar7->interfaceType + lVar20) ==
              TypeInfo_Settings_IListSetting) {
            pVVar14 = pIVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar20) + 2);
            goto label_05de3a09;
          }
          lVar20 = lVar20 + 0x10;
        } while (uVar17 * 0x10 != lVar20);
      }
      pVVar14 = GetInterfaceInvokeDataFromVTableSlowPath
                          ((Il2CppObject *)pSVar5,(Il2CppClass *)TypeInfo_Settings_IListSetting,2);
label_05de3a09:
      pSVar15 = (System_Collections_Generic_List_object__o *)
                (*pVVar14->methodPtr)((Il2CppObject *)pSVar5,pVVar14->method);
      if (pSVar15 == (System_Collections_Generic_List_object__o *)0x0) goto label_05de3bde;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_50,pSVar15,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_BaseSetting_GetEnumerator);
      local_58 = local_40;
      local_68 = (undefined1  [8])local_50._0_8_;
      puStack_60 = (undefined1 *)local_50._8_8_;
      local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_50._8_8_ = local_68;
      if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
        local_50._8_8_ = local_68;
        bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                            (MethodInfo_4C45C50 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext);
        if (bVar10) {
          if (local_58 != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
            if ((bVar1 <= (local_58->klass->_2).typeHierarchyDepth) &&
               ((local_58->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) {
              if (local_58[4].klass != (Il2CppClass *)0x0) {
                System_String__Concat_52f0320
                          ("Preset",((local_58[4].klass)->_1).byval_arg.data,(MethodInfo *)0x0);
                ThrowNullReferenceException();
              }
label_05de3c4a:
              ThrowNullReferenceException();
            }
label_05de3c4f:
            il2cpp_codegen_raise_invalid_cast_exception();
          }
label_05de3c12:
          ThrowNullReferenceException();
        }
      }
      else {
        while (bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                  ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                                   (MethodInfo_4C45C50 *)
                                   MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_MoveNext)
              , bVar10) {
          if (local_58 == (Il2CppObject *)0x0) goto label_05de3c12;
          bVar1 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
          if (((local_58->klass->_2).typeHierarchyDepth < bVar1) ||
             ((local_58->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) goto label_05de3c4f;
          if (local_58[4].klass == (Il2CppClass *)0x0) goto label_05de3c4a;
          pSVar13 = System_String__Concat_52f0320
                              ("Preset",((local_58[4].klass)->_1).byval_arg.data,
                               (MethodInfo *)0x0);
          System_Collections_Generic_HashSet_object___Add
                    ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)pSVar13,
                     (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose
              );
    pSVar16 = System_IO_Directory__GetFiles(local_38,"Preset*.png",(MethodInfo *)0x0);
    if (pSVar16 == (System_String_array *)0x0) {
label_05de3bde:
      ThrowNullReferenceException();
    }
    iVar11 = (int)pSVar16->max_length;
    if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
      if (0 < iVar11) {
        pSVar13 = pSVar16->m_Items[0];
        if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
        }
        System_IO_Path__GetFileNameWithoutExtension(pSVar13,(MethodInfo *)0x0);
        ThrowNullReferenceException();
      }
    }
    else if (0 < iVar11) {
      uVar17 = pSVar16->max_length & 0xffffffff;
      uVar19 = 0;
      do {
        if (uVar17 <= uVar19) {
          ThrowIndexOutOfRangeException();
        }
        pSVar13 = pSVar16->m_Items[uVar19];
        if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
        }
        pSVar18 = System_IO_Path__GetFileNameWithoutExtension(pSVar13,(MethodInfo *)0x0);
        bVar10 = System_Collections_Generic_HashSet_object___Contains
                           ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)pSVar18,
                            (MethodInfo_4FB3720 *)
                            MethodInfo_System_Collections_Generic_HashSet_string_Contains);
        if (!bVar10) {
          System_IO_File__Delete(pSVar13,(MethodInfo *)0x0);
        }
        uVar19 = uVar19 + 1;
        uVar2 = (uint)pSVar16->max_length;
        uVar17 = (ulong)uVar2;
      } while ((long)uVar19 < (long)(int)uVar2);
    }
  }
  return;
}


// Utility.CharacterPreviewGenerator$$SetLayerRecursively
// il2cpp: void Utility_CharacterPreviewGenerator__SetLayerRecursively (UnityEngine_GameObject_o* obj, int32_t newLayer, const MethodInfo* method);
// 0x5de3cf0
// eh: try 0x5de3dc0..0x5de3f38 -> pad 0x5de3f43 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5de3f65..0x5de3f6a -> pad 0x5de4002 cleanup
// eh: try 0x5de4005..0x5de400f -> pad 0x5de4017 catch (...) [compiler noexcept guard]
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de3f3d: jmp 0x5de3f49
// asm:   0x5de3f3f: jmp 0x5de3f49
// asm:   0x5de3f41: jmp 0x5de3f49
// asm:   0x5de3f43: jmp 0x5de3f49
// asm:   0x5de3f45: jmp 0x5de3f49
// asm:   0x5de3f47: jmp 0x5de3f49
// asm:   0x5de3f49: mov rbx, rax
// asm:   0x5de3f4c: cmp edx, 1
// asm:   0x5de3f4f: jne 0x5de4005
// asm:   0x5de3f55: mov rdi, rbx
// asm:   0x5de3f58: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5de3f5d: mov r14, qword ptr [rax]
// asm:   0x5de3f60: mov qword ptr [rsp + 0x10], r14
// asm:   0x5de3f65: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5de3ffa: mov rdi, r14
// asm:   0x5de3ffd: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5de4002: mov rbx, rax
// asm:   0x5de4005: lea rdi, [rsp + 0x10]
// asm:   0x5de400a: call 0x2fdee30  ; il2cpp_runtime_helper_02fdee30()
// asm:   0x5de400f: mov rdi, rbx
// asm:   0x5de4012: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5de4017: mov rdi, rax
// asm:   0x5de401a: call 0x2ab61e0  ; __clang_call_terminate()

void Utility_CharacterPreviewGenerator__SetLayerRecursively
               (UnityEngine_GameObject_o *obj,int32_t newLayer,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  UnityEngine_Transform_o *__this;
  VirtualInvokeData *pVVar5;
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *obj_00;
  Il2CppObject *pIVar6;
  ulong uVar7;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  long lVar8;
  Il2CppObject *local_58;
  Il2CppObject *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_07548293 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_07548293 = '\x01';
  }
  local_50 = (Il2CppObject *)0x0;
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__set_layer(obj,newLayer,(MethodInfo *)0x0);
    __this = UnityEngine_GameObject__get_transform(obj,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Transform_o *)0x0) {
      local_58 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(__this,(MethodInfo *)0x0);
      local_40 = (undefined1 *)&local_58;
      local_48 = 0;
      local_38 = &local_50;
      do {
        pIVar6 = local_58;
        if (local_58 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = local_58->klass;
        uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar7 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar8 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar8) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
              goto label_05de3e33;
            }
            lVar8 = lVar8 + 0x10;
          } while (uVar7 * 0x10 != lVar8);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05de3e33:
        bVar4 = (*pVVar5->methodPtr)(pIVar6,pVVar5->method);
        pIVar6 = local_58;
        if (!bVar4) {
          pIVar6 = il2cpp_vm_Object_IsInst(local_58,(Il2CppClass *)TypeInfo_System_IDisposable);
          if (pIVar6 == (Il2CppObject *)0x0) {
            return;
          }
          pIVar2 = pIVar6->klass;
          uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
          local_50 = pIVar6;
          if (uVar7 == 0) goto label_05de3fbf;
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar8 = 0;
          goto label_05de3fb0;
        }
        if (local_58 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = local_58->klass;
        uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar7 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar8 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar8) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar5 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar8) + 1);
              goto label_05de3ec7;
            }
            lVar8 = lVar8 + 0x10;
          } while (uVar7 * 0x10 != lVar8);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05de3ec7:
        __this_00 = (UnityEngine_Component_o *)(*pVVar5->methodPtr)(pIVar6,pVVar5->method);
        if (__this_00 == (UnityEngine_Component_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
        if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_00);
        }
        obj_00 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
        method_00 = extraout_RDX;
        if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
          method_00 = extraout_RDX_00;
        }
        Utility_CharacterPreviewGenerator__SetLayerRecursively(obj_00,newLayer,method_00);
      } while( true );
    }
  }
  ThrowNullReferenceException();
  while (lVar8 = lVar8 + 0x10, uVar7 * 0x10 != lVar8) {
label_05de3fb0:
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar8) == TypeInfo_System_IDisposable) {
      pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
      goto label_05de3fdd;
    }
  }
label_05de3fbf:
  pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar6,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05de3fdd:
  (*pVVar5->methodPtr)(pIVar6,pVVar5->method);
  return;
}


// Utility.CharacterPreviewGenerator$$GetOrCreatePersistentCamera
// il2cpp: Utility_CharacterPreviewGenerator_PreviewCameraData_o* Utility_CharacterPreviewGenerator__GetOrCreatePersistentCamera (System_String_o* cameraId, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x5de4020
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de4406: jmp 0x5de474b

Utility_CharacterPreviewGenerator_PreviewCameraData_o *
Utility_CharacterPreviewGenerator__GetOrCreatePersistentCamera
          (System_String_o *cameraId,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Utility_CharacterPreviewGenerator_PreviewCameraData_Fields *targetAddress;
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  UnityEngine_Camera_o *pUVar3;
  bool bVar4;
  int32_t value;
  Il2CppObject *pIVar5;
  Utility_CharacterPreviewGenerator_PreviewCameraData_o *pUVar6;
  UnityEngine_Object_o *pUVar7;
  System_String_o *pSVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Transform_o *__this;
  UnityEngine_Camera_o *pUVar10;
  UnityEngine_Object_o *x;
  UnityEngine_Skybox_o *__this_00;
  UnityEngine_Material_o *value_00;
  UnityEngine_RenderTexture_o *pUVar11;
  UnityEngine_RenderTexture_o **targetAddress_00;
  float fVar12;
  UnityEngine_Color_o value_01;
  UnityEngine_SceneManagement_Scene_o local_40 [2];
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07548294 == '\0') {
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
    Il2CppMethodInitialized_07548294 = '\x01';
  }
  local_40[0].fields.m_Handle.fields.m_Value.fields.m_Data =
       (UnityEngine_SceneManagement_Scene_Fields)(UnityEngine_SceneManagement_SceneHandle_o)0x0;
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_persistentCameras;
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05de474b;
  bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar2,(Il2CppObject *)cameraId,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_Contain
                    );
  if (bVar4) {
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_persistentCameras;
    if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (pIVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar2,(Il2CppObject *)cameraId,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_get_Ite
                           ), pIVar5 == (Il2CppObject *)0x0)) goto label_05de474b;
    if (*(char *)&pIVar5[2].klass != '\0') {
      if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_persistentCameras;
      if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (pIVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar2,(Il2CppObject *)cameraId,
                              (MethodInfo_4AAD450 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_get_Ite
                             ), pIVar5 == (Il2CppObject *)0x0)) goto label_05de474b;
      if (*(char *)((long)&pIVar5[2].klass + 1) == '\0') {
        if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
        }
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_persistentCameras;
        if ((pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
           (pUVar6 = (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)
                     System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar2,(Il2CppObject *)cameraId,
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_get_Ite
                               ), pUVar6 == (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)0x0))
        goto label_05de474b;
        pUVar10 = (pUVar6->fields).Camera;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          pUVar11 = (pUVar6->fields).RenderTexture;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar4) {
            pUVar10 = (pUVar6->fields).Camera;
            if (pUVar10 == (UnityEngine_Camera_o *)0x0) goto label_05de474b;
            pUVar7 = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar10,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar4 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar4) {
              return pUVar6;
            }
          }
        }
        if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
        }
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_persistentCameras;
        if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05de474b;
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar2,(Il2CppObject *)cameraId,
                   (MethodInfo_4AAED10 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_Remove
                  );
      }
    }
  }
  pUVar6 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator_PreviewCameraData);
  Utility_CharacterPreviewGenerator_PreviewCameraData___ctor(pUVar6,(MethodInfo *)0x0);
  local_38 = cameraId;
  pSVar8 = System_String__Concat_52f0320("PersistentPreviewCamera_",cameraId,(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_Object_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)pUVar7,pSVar8,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  UnityEngine_Object__DontDestroyOnLoad(pUVar7,(MethodInfo *)0x0);
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)parent,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if ((parent == (UnityEngine_Transform_o *)0x0) ||
       (pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent,(MethodInfo *)0x0),
       pUVar9 == (UnityEngine_GameObject_o *)0x0)) goto label_05de474b;
    local_40[0] = UnityEngine_GameObject__get_scene(pUVar9,(MethodInfo *)0x0);
    pSVar8 = UnityEngine_SceneManagement_Scene__get_name(local_40,(MethodInfo *)0x0);
    bVar4 = System_String__op_Equality(pSVar8,"DontDestroyOnLoad",(MethodInfo *)0x0);
    if (!bVar4) {
      pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent,(MethodInfo *)0x0);
      if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_05de474b;
      local_40[0] = UnityEngine_GameObject__get_scene(pUVar9,(MethodInfo *)0x0);
      pSVar8 = UnityEngine_SceneManagement_Scene__get_name(local_40,(MethodInfo *)0x0);
      if (pSVar8 != (System_String_o *)0x0) goto label_05de4401;
    }
    if ((pUVar7 == (UnityEngine_Object_o *)0x0) ||
       (__this = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar7,(MethodInfo *)0x0),
       __this == (UnityEngine_Transform_o *)0x0)) goto label_05de474b;
    UnityEngine_Transform__SetParent(__this,parent,(MethodInfo *)0x0);
  }
  else {
label_05de4401:
    if (pUVar7 == (UnityEngine_Object_o *)0x0) goto label_05de474b;
  }
  pUVar10 = UnityEngine_GameObject__AddComponent_object_
                      ((UnityEngine_GameObject_o *)pUVar7,
                       (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Camera);
  if (pUVar6 == (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)0x0) goto label_05de474b;
  targetAddress = &pUVar6->fields;
  (pUVar6->fields).Camera = pUVar10;
  Il2CppCodeGenWriteBarrier(&targetAddress->Camera);
  pUVar10 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
  if (pUVar10 == (UnityEngine_Camera_o *)0x0) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pUVar10 = UnityEngine_Object__FindObjectOfType_object_
                        ((MethodInfo_35A3D50 *)MethodInfo_UnityEngine_Object_FindObjectOfType_Camera);
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (pUVar10 == (UnityEngine_Camera_o *)0x0) goto label_05de474b;
    pUVar3 = targetAddress->Camera;
    value = UnityEngine_Camera__get_clearFlags(pUVar10,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_05de474b;
    UnityEngine_Camera__set_clearFlags(pUVar3,value,(MethodInfo *)0x0);
    pUVar3 = targetAddress->Camera;
    value_01 = UnityEngine_Camera__get_backgroundColor(pUVar10,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_05de474b;
    UnityEngine_Camera__set_backgroundColor(pUVar3,value_01,(MethodInfo *)0x0);
    pUVar3 = targetAddress->Camera;
    fVar12 = UnityEngine_Camera__get_nearClipPlane(pUVar10,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_05de474b;
    UnityEngine_Camera__set_nearClipPlane(pUVar3,fVar12,(MethodInfo *)0x0);
    pUVar3 = targetAddress->Camera;
    fVar12 = UnityEngine_Camera__get_farClipPlane(pUVar10,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_05de474b;
    UnityEngine_Camera__set_farClipPlane(pUVar3,fVar12,(MethodInfo *)0x0);
    x = (UnityEngine_Object_o *)
        UnityEngine_Component__GetComponent_object_
                  ((UnityEngine_Component_o *)pUVar10,
                   (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Skybox);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      __this_00 = UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)pUVar7,
                             (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Skybox);
      if ((x == (UnityEngine_Object_o *)0x0) ||
         (value_00 = UnityEngine_Skybox__get_material((UnityEngine_Skybox_o *)x,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_Skybox_o *)0x0)) goto label_05de474b;
      UnityEngine_Skybox__set_material(__this_00,value_00,(MethodInfo *)0x0);
    }
  }
  if (targetAddress->Camera != (UnityEngine_Camera_o *)0x0) {
    UnityEngine_Camera__set_fieldOfView(targetAddress->Camera,60.0,(MethodInfo *)0x0);
    if (targetAddress->Camera != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__set_orthographic(targetAddress->Camera,false,(MethodInfo *)0x0);
      if (targetAddress->Camera != (UnityEngine_Camera_o *)0x0) {
        UnityEngine_Camera__set_cullingMask(targetAddress->Camera,-1,(MethodInfo *)0x0);
        if (targetAddress->Camera != (UnityEngine_Camera_o *)0x0) {
          UnityEngine_Behaviour__set_enabled
                    ((UnityEngine_Behaviour_o *)targetAddress->Camera,false,(MethodInfo *)0x0);
          pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RenderTexture);
          UnityEngine_RenderTexture___ctor_68f83b0(pUVar11,0x80,0x80,0x10,(MethodInfo *)0x0);
          targetAddress_00 = &(pUVar6->fields).RenderTexture;
          (pUVar6->fields).RenderTexture = pUVar11;
          Il2CppCodeGenWriteBarrier(targetAddress_00);
          pUVar11 = (pUVar6->fields).RenderTexture;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar4) {
            return (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)0x0;
          }
          if (*targetAddress_00 != (UnityEngine_RenderTexture_o *)0x0) {
            UnityEngine_RenderTexture__set_antiAliasing(*targetAddress_00,1,(MethodInfo *)0x0);
            if (*targetAddress_00 != (UnityEngine_RenderTexture_o *)0x0) {
              UnityEngine_RenderTexture__Create(*targetAddress_00,(MethodInfo *)0x0);
              pSVar8 = local_38;
              if (targetAddress->Camera != (UnityEngine_Camera_o *)0x0) {
                UnityEngine_Camera__set_targetTexture
                          (targetAddress->Camera,(pUVar6->fields).RenderTexture,(MethodInfo *)0x0);
                (pUVar6->fields).IsInitialized = true;
                (pUVar6->fields).IsCleanedUp = false;
                if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator)
                  ;
                }
                pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                         TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_persistentCameras;
                if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (pSVar2,(Il2CppObject *)pSVar8,(Il2CppObject *)pUVar6,
                             (MethodInfo_4AAD4C0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_set_Ite
                            );
                  return pUVar6;
                }
              }
            }
          }
        }
      }
    }
  }
label_05de474b:
  ThrowNullReferenceException();
}


// Utility.CharacterPreviewGenerator$$PositionCameraForCharacter
// il2cpp: void Utility_CharacterPreviewGenerator__PositionCameraForCharacter (UnityEngine_Camera_o* camera, UnityEngine_GameObject_o* character, bool isHuman, const MethodInfo* method);
// 0x5de4750

void Utility_CharacterPreviewGenerator__PositionCameraForCharacter
               (UnityEngine_Camera_o *camera,UnityEngine_GameObject_o *character,bool isHuman,
               MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  undefined3 in_register_00000011;
  float fVar2;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o value;
  float local_28;
  float fStack_24;
  
  if (CONCAT31(in_register_00000011,isHuman) == 0) {
    fVar2 = 3.5;
  }
  else {
    fVar2 = 3.0;
  }
  if (character != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(character,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      UVar3 = UnityEngine_Transform__get_position(pUVar1,(MethodInfo *)0x0);
      if (camera != (UnityEngine_Camera_o *)0x0) {
        pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)camera,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          local_28 = UVar3.fields.x;
          fStack_24 = UVar3.fields.y;
          value.fields.z = fVar2 + UVar3.fields.z;
          value.fields.y = fStack_24 + 1.23;
          value.fields.x = local_28 + 0.0;
          UnityEngine_Transform__set_position(pUVar1,value,(MethodInfo *)0x0);
          pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)camera,(MethodInfo *)0x0);
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            UVar3.fields.z = UVar3.fields.z + 0.0;
            UVar3.fields.y = fStack_24 + 1.18;
            UVar3.fields.x = local_28 + 0.0;
            UnityEngine_Transform__LookAt_692e330(pUVar1,UVar3,(MethodInfo *)0x0);
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
// 0x5de4860
// eh: try 0x5de4a03..0x5de4c58 -> pad 0x5de4c76 (+21 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5de4c96..0x5de4c9b -> pad 0x5de4ca2 cleanup
// eh: try 0x5de4ca5..0x5de4caf -> pad 0x5de4cb7 catch (...) [compiler noexcept guard]
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de4af0: jmp 0x5de48f8
// asm:   0x5de4c58: jmp 0x5de4c7e
// asm:   0x5de4c5a: jmp 0x5de4c7e
// asm:   0x5de4c5c: jmp 0x5de4c7e
// asm:   0x5de4c5e: jmp 0x5de4c7e
// asm:   0x5de4c60: jmp 0x5de4c7e
// asm:   0x5de4c62: jmp 0x5de4c7e
// asm:   0x5de4c64: jmp 0x5de4c7e
// asm:   0x5de4c66: jmp 0x5de4c7e
// asm:   0x5de4c68: jmp 0x5de4c7e
// asm:   0x5de4c6a: jmp 0x5de4c7e
// asm:   0x5de4c6c: jmp 0x5de4c7e
// asm:   0x5de4c6e: jmp 0x5de4c7e
// asm:   0x5de4c70: jmp 0x5de4c7e
// asm:   0x5de4c72: jmp 0x5de4c7e
// asm:   0x5de4c74: jmp 0x5de4c7e
// asm:   0x5de4c76: jmp 0x5de4c7e
// asm:   0x5de4c78: jmp 0x5de4c7e
// asm:   0x5de4c7a: jmp 0x5de4c7e
// asm:   0x5de4c7c: jmp 0x5de4c7e
// asm:   0x5de4c7e: mov rbx, rax
// asm:   0x5de4c81: cmp edx, 1
// asm:   0x5de4c84: jne 0x5de4ca5
// asm:   0x5de4c86: mov rdi, rbx
// asm:   0x5de4c89: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5de4c8e: mov rax, qword ptr [rax]
// asm:   0x5de4c91: mov qword ptr [rsp + 0x30], rax
// asm:   0x5de4c96: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5de4c9b: xor ebx, ebx
// asm:   0x5de4c9d: jmp 0x5de4c0f
// asm:   0x5de4ca2: mov rbx, rax
// asm:   0x5de4ca5: lea rdi, [rsp + 0x30]
// asm:   0x5de4caa: call 0x2fdeed0  ; il2cpp_runtime_helper_02fdeed0()
// asm:   0x5de4caf: mov rdi, rbx
// asm:   0x5de4cb2: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5de4cb7: mov rdi, rax
// asm:   0x5de4cba: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_Texture2D_o *
Utility_CharacterPreviewGenerator__CapturePreviewWithCamera
          (Utility_CharacterPreviewGenerator_PreviewCameraData_o *cameraData,
          UnityEngine_GameObject_o *character,int32_t size,bool isHuman,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UnityEngine_Renderer_o *__this;
  UnityEngine_RenderTexture_o *pUVar3;
  undefined1 auVar4 [16];
  UnityEngine_GameObject_o *character_00;
  bool bVar5;
  int32_t iVar6;
  uint uVar7;
  int32_t height;
  UnityEngine_Transform_o *pUVar8;
  System_Object_array *pSVar9;
  UnityEngine_RenderTexture_o *pUVar10;
  UnityEngine_Texture2D_o *__this_00;
  undefined7 in_register_00000009;
  UnityEngine_Renderer_c *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  uint uVar11;
  UnityEngine_Camera_o *pUVar12;
  UnityEngine_GameObject_o *local_98;
  int32_t local_8c;
  UnityEngine_Vector3_o local_88;
  UnityEngine_Vector3_o local_78;
  undefined8 local_68;
  undefined1 *local_60;
  UnityEngine_Vector3_o *local_58;
  UnityEngine_Quaternion_o *local_50;
  UnityEngine_Vector3_o *local_48;
  UnityEngine_Quaternion_o local_40;
  
  method_00 = (UnityEngine_Renderer_c *)CONCAT71(in_register_00000009,isHuman);
  local_98 = character;
  local_8c = size;
  if (Il2CppMethodInitialized_07548295 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_07548295 = '\x01';
  }
  if (cameraData == (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)0x0) {
    pUVar12 = (UnityEngine_Camera_o *)0x0;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    pUVar12 = (cameraData->fields).Camera;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return (UnityEngine_Texture2D_o *)0x0;
  }
  if (cameraData != (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)0x0) {
    pUVar10 = (cameraData->fields).RenderTexture;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      return (UnityEngine_Texture2D_o *)0x0;
    }
    if ((character != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar8 = UnityEngine_GameObject__get_transform(character,(MethodInfo *)0x0),
       pUVar8 != (UnityEngine_Transform_o *)0x0)) {
      local_78 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
      pUVar8 = UnityEngine_GameObject__get_transform(character,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
        local_40 = UnityEngine_Transform__get_rotation(pUVar8,(MethodInfo *)0x0);
        pUVar8 = UnityEngine_GameObject__get_transform(character,(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          local_88 = UnityEngine_Transform__get_localScale(pUVar8,(MethodInfo *)0x0);
          local_60 = (undefined1 *)&local_98;
          local_68 = 0;
          local_58 = &local_78;
          local_50 = &local_40;
          local_48 = &local_88;
          iVar6 = UnityEngine_LayerMask__NameToLayer("Default",(MethodInfo *)0x0);
          method_01 = extraout_RDX;
          if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
            method_01 = extraout_RDX_00;
          }
          Utility_CharacterPreviewGenerator__SetLayerRecursively(character,iVar6,method_01);
          if (local_98 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar9 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                             (local_98,(MethodInfo_353C030 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
          if (pSVar9 == (System_Object_array *)0x0) {
            ThrowNullReferenceException();
          }
          uVar7 = (uint)pSVar9->max_length;
          if (0 < (int)uVar7) {
            uVar11 = 0;
            do {
              if (uVar7 <= uVar11) {
                ThrowIndexOutOfRangeException();
              }
              __this = (UnityEngine_Renderer_o *)pSVar9->m_Items[(int)uVar11];
              if (__this == (UnityEngine_Renderer_o *)0x0) {
                ThrowNullReferenceException();
              }
              UnityEngine_Renderer__set_enabled(__this,true,(MethodInfo *)0x0);
              method_00 = __this->klass;
              bVar1 = (TypeInfo_UnityEngine_SkinnedMeshRenderer->_2).typeHierarchyDepth;
              if ((bVar1 <= (method_00->_2).typeHierarchyDepth) &&
                 (method_00 = (UnityEngine_Renderer_c *)(method_00->_2).typeHierarchy,
                 *(UnityEngine_SkinnedMeshRenderer_c **)((long)method_00 + (ulong)bVar1 * 8 + -8) ==
                 TypeInfo_UnityEngine_SkinnedMeshRenderer)) {
                UnityEngine_SkinnedMeshRenderer__set_updateWhenOffscreen
                          ((UnityEngine_SkinnedMeshRenderer_o *)__this,true,(MethodInfo *)0x0);
              }
              uVar11 = uVar11 + 1;
              uVar7 = (uint)pSVar9->max_length;
            } while ((int)uVar11 < (int)uVar7);
          }
          character_00 = local_98;
          pUVar12 = (cameraData->fields).Camera;
          if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
          }
          Utility_CharacterPreviewGenerator__PositionCameraForCharacter
                    (pUVar12,character_00,isHuman,(MethodInfo *)method_00);
          pUVar10 = UnityEngine_RenderTexture__get_active((MethodInfo *)0x0);
          pUVar12 = (cameraData->fields).Camera;
          if (pUVar12 == (UnityEngine_Camera_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_Camera__Render(pUVar12,(MethodInfo *)0x0);
          UnityEngine_RenderTexture__set_active((cameraData->fields).RenderTexture,(MethodInfo *)0x0);
          pUVar3 = (cameraData->fields).RenderTexture;
          if (pUVar3 == (UnityEngine_RenderTexture_o *)0x0) {
            ThrowNullReferenceException();
          }
          iVar6 = (*(pUVar3->klass->vtable)._5_get_width.methodPtr)
                            (pUVar3,(pUVar3->klass->vtable)._5_get_width.method);
          pUVar3 = (cameraData->fields).RenderTexture;
          if (pUVar3 == (UnityEngine_RenderTexture_o *)0x0) {
            ThrowNullReferenceException();
          }
          height = (*(pUVar3->klass->vtable)._7_get_height.methodPtr)
                             (pUVar3,(pUVar3->klass->vtable)._7_get_height.method);
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
          UnityEngine_Texture2D___ctor_68efe30(__this_00,iVar6,height,3,false,(MethodInfo *)0x0);
          if (__this_00 == (UnityEngine_Texture2D_o *)0x0) {
            ThrowNullReferenceException();
          }
          auVar4._4_4_ = (float)height;
          auVar4._0_4_ = (float)iVar6;
          auVar4._8_8_ = 0;
          UnityEngine_Texture2D__ReadPixels_68f0830
                    (__this_00,(UnityEngine_Rect_o)(auVar4 << 0x40),0,0,(MethodInfo *)0x0);
          UnityEngine_Texture2D__Apply_68f05d0(__this_00,(MethodInfo *)0x0);
          UnityEngine_RenderTexture__set_active(pUVar10,(MethodInfo *)0x0);
          if (iVar6 != local_8c) {
            TextureScaler__ScaleBlocking(__this_00,local_8c,local_8c,(MethodInfo *)0x0);
          }
          il2cpp_runtime_helper_02fdeed0(&local_68);
          return __this_00;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.CharacterPreviewGenerator$$CleanupPersistentCamera
// il2cpp: void Utility_CharacterPreviewGenerator__CleanupPersistentCamera (System_String_o* cameraId, const MethodInfo* method);
// 0x5de4cc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de4cf9: jmp 0x5de4f06

void Utility_CharacterPreviewGenerator__CleanupPersistentCamera(System_String_o *cameraId,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppClass *x;
  bool bVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Object_o *pUVar4;
  
  if (Il2CppMethodInitialized_07548296 == '\0') {
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
    Il2CppMethodInitialized_07548296 = '\x01';
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) goto label_05de4d55;
label_05de4ce9:
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_persistentCameras;
  }
  else {
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor != 0) goto label_05de4ce9;
label_05de4d55:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_persistentCameras;
  }
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)cameraId,
                       (MethodInfo_4AAD6F0 *)
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
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_get_Ite
                           ), pIVar3 != (Il2CppObject *)0x0)) {
      x = pIVar3[1].klass;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if (pIVar3[1].klass == (Il2CppClass *)0x0) goto label_05de4f06;
        UnityEngine_Camera__set_targetTexture
                  ((UnityEngine_Camera_o *)pIVar3[1].klass,(UnityEngine_RenderTexture_o *)0x0,
                   (MethodInfo *)0x0);
        if (pIVar3[1].klass == (Il2CppClass *)0x0) goto label_05de4f06;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pIVar3[1].klass,false,(MethodInfo *)0x0)
        ;
        if (pIVar3[1].klass == (Il2CppClass *)0x0) goto label_05de4f06;
        pUVar4 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pIVar3[1].klass,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__DestroyImmediate_6921750(pUVar4,(MethodInfo *)0x0);
      }
      pUVar4 = pIVar3[1].monitor;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if (pIVar3[1].monitor == (UnityEngine_RenderTexture_o *)0x0) goto label_05de4f06;
        UnityEngine_RenderTexture__Release(pIVar3[1].monitor,(MethodInfo *)0x0);
        pUVar4 = pIVar3[1].monitor;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__DestroyImmediate_6921750(pUVar4,(MethodInfo *)0x0);
      }
      *(undefined1 *)((long)&pIVar3[2].klass + 1) = 1;
      if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_persistentCameras;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar1,(Il2CppObject *)cameraId,
                   (MethodInfo_4AAED10 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_Remove
                  );
        return;
      }
    }
  }
label_05de4f06:
  ThrowNullReferenceException();
}


// Utility.CharacterPreviewGenerator$$CleanupAllPersistentCameras
// il2cpp: void Utility_CharacterPreviewGenerator__CleanupAllPersistentCameras (const MethodInfo* method);
// 0x5de4f10
// eh: try 0x5de5040..0x5de506e -> pad 0x5de5095 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5de50ad..0x5de50b2 -> pad 0x5de50d1 cleanup
// eh: try 0x5de50d4..0x5de50de -> pad 0x5de50e6 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de5093: jmp 0x5de5095
// asm:   0x5de5095: mov rbx, rax
// asm:   0x5de5098: cmp edx, 1
// asm:   0x5de509b: jne 0x5de50d4
// asm:   0x5de509d: mov rdi, rbx
// asm:   0x5de50a0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5de50a5: mov rbx, qword ptr [rax]
// asm:   0x5de50a8: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5de50ad: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5de50b2: lea rax, [rip + 0x14a9a3f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5de50b9: mov rsi, qword ptr [rax]
// asm:   0x5de50bc: mov rdi, rsp
// asm:   0x5de50bf: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5de50c4: test rbx, rbx
// asm:   0x5de50c7: je 0x5de5082
// asm:   0x5de50c9: mov rdi, rbx
// asm:   0x5de50cc: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5de50d1: mov rbx, rax
// asm:   0x5de50d4: lea rdi, [rsp + 0x18]
// asm:   0x5de50d9: call 0x2fdef80  ; il2cpp_runtime_helper_02fdef80()
// asm:   0x5de50de: mov rdi, rbx
// asm:   0x5de50e1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5de50e6: mov rdi, rax
// asm:   0x5de50e9: call 0x2ab61e0  ; __clang_call_terminate()

void Utility_CharacterPreviewGenerator__CleanupAllPersistentCameras(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppObject *cameraId;
  bool bVar1;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *collection;
  System_Collections_Generic_List_string__o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (Il2CppMethodInitialized_07548297 == '\0') {
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
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_07548297 = '\x01';
  }
  SStack_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_persistentCameras;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    collection = System_Collections_Generic_Dictionary_object__object___get_Keys
                           (__this,(MethodInfo_4AAD0F0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_get_Key
                           );
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor_395ca70
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)collection,
               (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                (&SStack_48,(System_Collections_Generic_List_object__o *)__this_00,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      uStack_30 = 0;
      puStack_28 = (undefined1 *)&SStack_48;
      while( true ) {
        method_00 = MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext;
        bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        cameraId = SStack_48.fields._current;
        if (!bVar1) break;
        if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
        }
        Utility_CharacterPreviewGenerator__CleanupPersistentCamera((System_String_o *)cameraId,method_00);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewWithPersistentCamera
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera (System_String_o* cameraId, UnityEngine_GameObject_o* character, System_String_o* fileName, int32_t size, bool isHuman, UnityEngine_Transform_o* cameraParent, const MethodInfo* method);
// 0x5de50f0
// eh: try 0x5de5210..0x5de5457 -> pad 0x5de54a3 (+16 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5de5489..0x5de548e -> pad 0x5de5490 cleanup
// eh: try 0x5de5493..0x5de549d -> pad 0x5de54dd catch (...) [compiler noexcept guard]
// eh: try 0x5de54be..0x5de54c3 -> pad 0x5de54c8 cleanup
// eh: try 0x5de54cb..0x5de54d5 -> pad 0x5de54dd catch (...) [compiler noexcept guard]
// asm: 47 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de543b: mov rdi, r14
// asm:   0x5de543e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5de5457: jmp 0x5de54a3
// asm:   0x5de5459: jmp 0x5de5471
// asm:   0x5de545b: jmp 0x5de5471
// asm:   0x5de545d: jmp 0x5de5471
// asm:   0x5de545f: jmp 0x5de5471
// asm:   0x5de5461: jmp 0x5de5471
// asm:   0x5de5463: jmp 0x5de5471
// asm:   0x5de5465: jmp 0x5de5471
// asm:   0x5de5467: jmp 0x5de54a3
// asm:   0x5de5469: jmp 0x5de54a3
// asm:   0x5de546b: jmp 0x5de5471
// asm:   0x5de546d: jmp 0x5de5471
// asm:   0x5de546f: jmp 0x5de5471
// asm:   0x5de5471: mov r14, rax
// asm:   0x5de5474: cmp edx, 1
// asm:   0x5de5477: jne 0x5de5493
// asm:   0x5de5479: mov rdi, r14
// asm:   0x5de547c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5de5481: mov rax, qword ptr [rax]
// asm:   0x5de5484: mov qword ptr [rsp + 0x28], rax
// asm:   0x5de5489: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5de548e: jmp 0x5de5422
// asm:   0x5de5490: mov r14, rax
// asm:   0x5de5493: lea rdi, [rsp + 0x28]
// asm:   0x5de5498: call 0x2fdefe0  ; il2cpp_runtime_helper_02fdefe0()
// asm:   0x5de549d: jmp 0x5de54d5
// asm:   0x5de549f: jmp 0x5de54a3
// asm:   0x5de54a1: jmp 0x5de54a3
// asm:   0x5de54a3: mov r14, rax
// asm:   0x5de54a6: cmp edx, 1
// asm:   0x5de54a9: jne 0x5de54cb
// asm:   0x5de54ab: mov rdi, r14
// asm:   0x5de54ae: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5de54b3: mov r14, qword ptr [rax]
// asm:   0x5de54b6: mov qword ptr [rsp + 0x28], r14
// asm:   0x5de54bb: xor r13d, r13d
// asm:   0x5de54be: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5de54c3: jmp 0x5de52b3
// asm:   0x5de54c8: mov r14, rax
// asm:   0x5de54cb: lea rdi, [rsp + 0x28]
// asm:   0x5de54d0: call 0x2fdefb0  ; il2cpp_runtime_helper_02fdefb0()
// asm:   0x5de54d5: mov rdi, r14
// asm:   0x5de54d8: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5de54dd: mov rdi, rax
// asm:   0x5de54e0: call 0x2ab61e0  ; __clang_call_terminate()

void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera
               (System_String_o *cameraId,UnityEngine_GameObject_o *character,System_String_o *fileName,
               int32_t size,bool isHuman,UnityEngine_Transform_o *cameraParent,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  bool bVar2;
  bool bVar3;
  Utility_CharacterPreviewGenerator_PreviewCameraData_o *cameraData;
  UnityEngine_Texture2D_o *texture;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar6;
  undefined7 in_register_00000081;
  MethodInfo *method_00;
  long lVar7;
  bool local_79;
  System_String_o *local_78;
  System_Collections_Generic_HashSet_string__o *local_70;
  int32_t local_68;
  undefined4 local_64;
  undefined8 local_60;
  System_Collections_Generic_HashSet_string__o **local_58;
  System_Collections_Generic_HashSet_string__o **local_50;
  System_String_o **local_48;
  UnityEngine_GameObject_o *local_40;
  UnityEngine_Transform_o *local_38;
  
  pMVar6 = (MethodInfo *)CONCAT71(in_register_00000081,isHuman);
  method_00 = pMVar6;
  local_78 = fileName;
  local_68 = size;
  local_40 = character;
  if (Il2CppMethodInitialized_07548298 == '\0') {
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
    Il2CppMethodInitialized_07548298 = '\x01';
  }
  local_70 = (System_Collections_Generic_HashSet_string__o *)0x0;
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  local_70 = TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_currentlyGenerating;
  local_79 = false;
  local_60 = 0;
  local_64 = SUB84(pMVar6,0);
  local_58 = (System_Collections_Generic_HashSet_string__o **)&local_79;
  local_50 = &local_70;
  local_38 = cameraParent;
  System_Threading_Monitor__Enter_552d580((Il2CppObject *)local_70,&local_79,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)
           TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_currentlyGenerating;
  if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_HashSet_object___Contains
                    (pSVar1,(Il2CppObject *)local_78,
                     (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
  if (bVar2) {
    lVar7 = 3;
    pMVar6 = extraout_RDX;
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
              (pSVar1,(Il2CppObject *)local_78,
               (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    lVar7 = 0;
    pMVar6 = extraout_RDX_00;
  }
  if (local_79 != false) {
    System_Threading_Monitor__Exit((Il2CppObject *)local_70,(MethodInfo *)0x0);
    pMVar6 = extraout_RDX_01;
  }
  if (lVar7 == 0) {
    local_60 = 0;
    local_48 = &local_78;
    local_58 = &local_70;
    local_50 = (System_Collections_Generic_HashSet_string__o **)&local_79;
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
      pMVar6 = extraout_RDX_02;
    }
    cameraData = Utility_CharacterPreviewGenerator__GetOrCreatePersistentCamera(cameraId,local_38,pMVar6);
    bVar2 = SUB41(local_64,0);
    texture = Utility_CharacterPreviewGenerator__CapturePreviewWithCamera
                        (cameraData,local_40,local_68,bVar2,method_00);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      if (local_78 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar4 = System_String__Replace_5304550
                         (local_78,"Preset","",(MethodInfo *)0x0);
      if (bVar2 == false) {
        ppSVar5 = &"Titans";
      }
      else {
        ppSVar5 = &"Human";
      }
      pSVar4 = System_String__Concat_5302810
                         ("CharacterPreview_",*ppSVar5,"_",pSVar4,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      ApplicationManagers_ResourceManager__SetExternalTexture(pSVar4,texture,true,(MethodInfo *)0x0);
      if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
      }
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)
               TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_generatedPreviewKeys;
      if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_object___Add
                (pSVar1,(Il2CppObject *)pSVar4,
                 (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    }
    il2cpp_runtime_helper_02fdefe0(&local_60);
  }
  return;
}


// Utility.CharacterPreviewGenerator$$SaveCachedPreviewsToDisk
// il2cpp: void Utility_CharacterPreviewGenerator__SaveCachedPreviewsToDisk (const MethodInfo* method);
// 0x5de54f0
// eh: try 0x5de566d..0x5de58e3 -> pad 0x5de5897 (+20 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5de58ee..0x5de58f8 -> pad 0x5de5a46 catch (...) [compiler noexcept guard]
// eh: try 0x5de590f..0x5de5973 -> pad 0x5de59f8 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5de5a0e..0x5de5a34 -> pad 0x5de5a34 (+1 call sites) cleanup
// eh: try 0x5de5a39..0x5de5a3e -> pad 0x5de5a46 catch (...) [compiler noexcept guard]
// asm: 117 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de56cf: nop 
// asm:   0x5de588f: mov rdi, r14
// asm:   0x5de5892: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5de5897: jmp 0x5de589d
// asm:   0x5de5899: jmp 0x5de589d
// asm:   0x5de589b: jmp 0x5de589d
// asm:   0x5de589d: mov rbx, rdx
// asm:   0x5de58a0: mov r14, rax
// asm:   0x5de58a3: jmp 0x5de58f8
// asm:   0x5de58a5: jmp 0x5de58c1
// asm:   0x5de58a7: jmp 0x5de58c1
// asm:   0x5de58a9: jmp 0x5de58c1
// asm:   0x5de58ab: jmp 0x5de58c1
// asm:   0x5de58ad: jmp 0x5de58c1
// asm:   0x5de58af: jmp 0x5de58c1
// asm:   0x5de58b1: jmp 0x5de58c1
// asm:   0x5de58b3: jmp 0x5de58c1
// asm:   0x5de58b5: jmp 0x5de58c1
// asm:   0x5de58b7: jmp 0x5de58c1
// asm:   0x5de58b9: jmp 0x5de58c1
// asm:   0x5de58bb: jmp 0x5de58c1
// asm:   0x5de58bd: jmp 0x5de58c1
// asm:   0x5de58bf: jmp 0x5de58c1
// asm:   0x5de58c1: mov rbx, rdx
// asm:   0x5de58c4: mov r14, rax
// asm:   0x5de58c7: cmp ebx, 1
// asm:   0x5de58ca: jne 0x5de58ee
// asm:   0x5de58cc: mov rdi, r14
// asm:   0x5de58cf: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5de58d4: mov r14, qword ptr [rax]
// asm:   0x5de58d7: mov qword ptr [rsp + 0x20], r14
// asm:   0x5de58dc: xor ebx, ebx
// asm:   0x5de58de: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5de58e3: jmp 0x5de5833
// asm:   0x5de58e8: mov rbx, rdx
// asm:   0x5de58eb: mov r14, rax
// asm:   0x5de58ee: lea rdi, [rsp + 0x20]
// asm:   0x5de58f3: call 0x2fdf100  ; il2cpp_runtime_helper_02fdf100()
// asm:   0x5de58f8: cmp ebx, 1
// asm:   0x5de58fb: jne 0x5de5a3e
// asm:   0x5de5901: mov rdi, r14
// asm:   0x5de5904: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5de5909: mov r15, rax
// asm:   0x5de590c: mov rbx, qword ptr [rax]
// asm:   0x5de590f: lea rdi, [rip + 0x14927aa]  ; TypeInfo_System_Exception
// asm:   0x5de5916: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5de591b: test rbx, rbx
// asm:   0x5de591e: je 0x5de5a13
// asm:   0x5de5924: mov rcx, qword ptr [rbx]
// asm:   0x5de5927: movzx edx, byte ptr [rax + 0x130]
// asm:   0x5de592e: cmp byte ptr [rcx + 0x130], dl
// asm:   0x5de5934: jb 0x5de5a13
// asm:   0x5de593a: mov rcx, qword ptr [rcx + 0xc8]
// asm:   0x5de5941: cmp qword ptr [rcx + rdx*8 - 8], rax
// asm:   0x5de5946: jne 0x5de5a13
// asm:   0x5de594c: lea rdi, [rip + 0x1498985]  ; TypeInfo_Utility_Util
// asm:   0x5de5953: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5de5958: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5de595f: jne 0x5de5969
// asm:   0x5de5961: mov rdi, rax
// asm:   0x5de5964: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5de5969: mov rdi, rbx
// asm:   0x5de596c: xor esi, esi
// asm:   0x5de596e: call 0x5dee0e0  ; Utility_Util__IsFileAccessError()
// asm:   0x5de5973: test al, al
// asm:   0x5de5975: je 0x5de5a13
// asm:   0x5de597b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5de5980: mov rax, qword ptr [rbx]
// asm:   0x5de5983: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5de598a: mov rdi, rbx
// asm:   0x5de598d: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5de5993: mov rbx, rax
// asm:   0x5de5996: lea rdi, [rip + 0x14f632b]  ; "Failed to save character previews: "
// asm:   0x5de599d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5de59a2: mov rdi, rax
// asm:   0x5de59a5: mov rsi, rbx
// asm:   0x5de59a8: xor edx, edx
// asm:   0x5de59aa: call 0x53f0320  ; System_String__Concat()
// asm:   0x5de59af: mov rbx, rax
// asm:   0x5de59b2: lea rdi, [rip + 0x1491c8f]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5de59b9: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5de59be: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5de59c5: jne 0x5de59cf
// asm:   0x5de59c7: mov rdi, rax
// asm:   0x5de59ca: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5de59cf: mov rdi, rbx
// asm:   0x5de59d2: xor esi, esi
// asm:   0x5de59d4: call 0x69c5270  ; UnityEngine_Debug__LogWarning()
// asm:   0x5de59d9: lea rbp, [rip + 0x1490b88]  ; TypeInfo_Utility_CharacterPreviewGenerator
// asm:   0x5de59e0: mov rdi, qword ptr [rbp]
// asm:   0x5de59e4: cmp dword ptr [rdi + 0xe4], 0
// asm:   0x5de59eb: jne 0x5de586c
// asm:   0x5de59f1: jmp 0x5de5867
// asm:   0x5de59f6: jmp 0x5de59fa
// asm:   0x5de59f8: jmp 0x5de59fa
// asm:   0x5de59fa: mov r14, rax
// asm:   0x5de59fd: mov eax, 1
// asm:   0x5de5a02: cmp edx, eax
// asm:   0x5de5a04: jne 0x5de5a39
// asm:   0x5de5a06: mov rdi, r14
// asm:   0x5de5a09: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5de5a0e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5de5a13: mov edi, 8
// asm:   0x5de5a18: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5de5a1d: mov rcx, qword ptr [r15]
// asm:   0x5de5a20: mov qword ptr [rax], rcx
// asm:   0x5de5a23: lea rsi, [rip + 0x1047ad6]
// asm:   0x5de5a2a: mov rdi, rax
// asm:   0x5de5a2d: xor edx, edx
// asm:   0x5de5a2f: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5de5a34: jmp 0x5de5a36
// asm:   0x5de5a36: mov r14, rax
// asm:   0x5de5a39: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5de5a3e: mov rdi, r14
// asm:   0x5de5a41: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5de5a46: mov rdi, rax
// asm:   0x5de5a49: call 0x2ab61e0  ; __clang_call_terminate()

void Utility_CharacterPreviewGenerator__SaveCachedPreviewsToDisk(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  Il2CppObject *key;
  bool bVar1;
  UnityEngine_Texture2D_o *tex;
  System_String_array *source;
  System_Collections_Generic_IEnumerable_TSource__o *values;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_Byte_array *bytes;
  Utility_CharacterPreviewGenerator_c *method_00;
  System_Collections_Generic_HashSet_Enumerator_T__o local_78;
  undefined1 local_58 [16];
  System_String_o *local_48;
  System_String_o *local_40;
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07548299 == '\0') {
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
    Il2CppMethodInitialized_07548299 = '\x01';
  }
  local_78.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar3 = TypeInfo_Utility_FolderPaths->static_fields->CharacterPreviews;
  if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
  }
  local_38 = System_IO_Path__Combine(pSVar3,"Human",(MethodInfo *)0x0);
  local_40 = System_IO_Path__Combine
                       (TypeInfo_Utility_FolderPaths->static_fields->CharacterPreviews,"Titans",
                        (MethodInfo *)0x0);
  if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
  }
  __this = (System_Collections_Generic_HashSet_object__o *)
           TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_generatedPreviewKeys;
  if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_58,__this,
             (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
  local_78.fields._current = (Il2CppObject *)local_48;
  local_78.fields._set = (System_Collections_Generic_HashSet_T__o *)local_58._0_8_;
  local_78.fields._index = local_58._8_4_;
  local_78.fields._version = local_58._12_4_;
  local_58._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_58._8_8_ = &local_78;
  while( true ) {
    do {
      bVar1 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (&local_78,
                         (MethodInfo_4C456D0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext);
      key = local_78.fields._current;
      if (!bVar1) {
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  (&local_78,
                   (MethodInfo_4C456C0 *)
                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose);
        method_00 = TypeInfo_Utility_CharacterPreviewGenerator;
        if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
        }
        Utility_CharacterPreviewGenerator__CleanupOrphanedPreviews((MethodInfo *)method_00);
        return;
      }
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      tex = ApplicationManagers_ResourceManager__GetExternalTexture((System_String_o *)key,(MethodInfo *)0x0);
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
      bVar1 = System_String__op_Equality(source->m_Items[1],"Human",(MethodInfo *)0x0);
      values = System_Linq_Enumerable__Skip_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,2,
                          (MethodInfo_34FD7B0 *)MethodInfo_System_Linq_Enumerable_Skip_string);
      pSVar2 = System_String__Join_5303350
                         ("_",(System_Collections_Generic_IEnumerable_string__o *)values,
                          (MethodInfo *)0x0);
      pSVar3 = local_40;
      if (bVar1) {
        pSVar3 = local_38;
      }
      System_IO_Directory__CreateDirectory(pSVar3,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat_5301f10
                         ("Preset",pSVar2,".png",(MethodInfo *)0x0);
      if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
      }
      pSVar3 = System_IO_Path__Combine(pSVar3,pSVar2,(MethodInfo *)0x0);
      bytes = UnityEngine_ImageConversion__EncodeToPNG(tex,(MethodInfo *)0x0);
      System_IO_File__WriteAllBytes(pSVar3,bytes,(MethodInfo *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// Utility.CharacterPreviewGenerator$$ClearSessionGeneratedPreviews
// il2cpp: void Utility_CharacterPreviewGenerator__ClearSessionGeneratedPreviews (const MethodInfo* method);
// 0x5de5a50
// eh: try 0x5de5b90..0x5de5c35 -> pad 0x5de5ca2 (+8 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5de5cc9..0x5de5cce -> pad 0x5de5cf3 cleanup
// eh: try 0x5de5cf6..0x5de5d00 -> pad 0x5de5d08 catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de5a92: jmp 0x5de5c99
// asm:   0x5de5c9e: jmp 0x5de5caa
// asm:   0x5de5ca0: jmp 0x5de5caa
// asm:   0x5de5ca2: jmp 0x5de5caa
// asm:   0x5de5ca4: jmp 0x5de5caa
// asm:   0x5de5ca6: jmp 0x5de5caa
// asm:   0x5de5ca8: jmp 0x5de5caa
// asm:   0x5de5caa: mov rbx, rax
// asm:   0x5de5cad: cmp edx, 1
// asm:   0x5de5cb0: lea rbp, [rip + 0x14908b1]  ; TypeInfo_Utility_CharacterPreviewGenerator
// asm:   0x5de5cb7: jne 0x5de5cf6
// asm:   0x5de5cb9: mov rdi, rbx
// asm:   0x5de5cbc: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5de5cc1: mov rbx, qword ptr [rax]
// asm:   0x5de5cc4: mov qword ptr [rsp + 8], rbx
// asm:   0x5de5cc9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5de5cce: lea rax, [rip + 0x14a8e0b]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose
// asm:   0x5de5cd5: mov rsi, qword ptr [rax]
// asm:   0x5de5cd8: lea rdi, [rsp + 0x20]
// asm:   0x5de5cdd: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5de5ce2: test rbx, rbx
// asm:   0x5de5ce5: je 0x5de5c55
// asm:   0x5de5ceb: mov rdi, rbx
// asm:   0x5de5cee: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5de5cf3: mov rbx, rax
// asm:   0x5de5cf6: lea rdi, [rsp + 8]
// asm:   0x5de5cfb: call 0x2fdf130  ; il2cpp_runtime_helper_02fdf130()
// asm:   0x5de5d00: mov rdi, rbx
// asm:   0x5de5d03: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5de5d08: mov rdi, rax
// asm:   0x5de5d0b: call 0x2ab61e0  ; __clang_call_terminate()

void Utility_CharacterPreviewGenerator__ClearSessionGeneratedPreviews(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_String_o *key;
  bool bVar3;
  UnityEngine_Texture2D_o *x;
  undefined1 local_60 [16];
  System_String_o *local_50;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_0754829a == '\0') {
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
    Il2CppMethodInitialized_0754829a = '\x01';
    uVar1 = (TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    pSVar2 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_generatedPreviewKeys;
  }
  else {
    pSVar2 = *(System_Collections_Generic_HashSet_object__o **)
              ((long)((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator)->static_fields + 0x18);
  }
  if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,pSVar2,
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
    local_38 = local_50;
    local_48._0_8_ = local_60._0_8_;
    local_48._8_8_ = local_60._8_8_;
    local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_60._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_48;
    while (bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                             ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                              (MethodInfo_4C456D0 *)
                              MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext),
          key = local_38, bVar3) {
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      x = ApplicationManagers_ResourceManager__GetExternalTexture(key,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__DestroyImmediate_6921750((UnityEngine_Object_o *)x,(MethodInfo *)0x0);
      }
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      ApplicationManagers_ResourceManager__RemoveExternalTexture(key,(MethodInfo *)0x0);
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
               (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose);
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    }
    pSVar2 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_generatedPreviewKeys;
    if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Clear
                (pSVar2,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Utility.CharacterPreviewGenerator$$ClearNonPersistentPreviews
// il2cpp: void Utility_CharacterPreviewGenerator__ClearNonPersistentPreviews (const MethodInfo* method);
// 0x5de5d10

void Utility_CharacterPreviewGenerator__ClearNonPersistentPreviews(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754829b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_0754829b = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    ApplicationManagers_ResourceManager__ClearNonPersistentTextures((MethodInfo *)0x0);
    return;
  }
  ApplicationManagers_ResourceManager__ClearNonPersistentTextures((MethodInfo *)0x0);
  return;
}


// Utility.CharacterPreviewGenerator$$GetCacheInfo
// il2cpp: void Utility_CharacterPreviewGenerator__GetCacheInfo (int32_t* totalCached, int32_t* persistent, const MethodInfo* method);
// 0x5de5d70

void Utility_CharacterPreviewGenerator__GetCacheInfo
               (int32_t *totalCached,int32_t *persistent,MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_0754829c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    Il2CppMethodInitialized_0754829c = '\x01';
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
// 0x5de5dd0

void Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview(bool isHuman,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *x;
  Settings_HumanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this;
  Settings_StringSetting_o *pSVar3;
  UnityEngine_Object_o *x_00;
  Settings_TitanCustomSettings_o *pSVar4;
  Settings_SetSettingsContainer_TitanCustomSet__o *__this_00;
  bool bVar5;
  Settings_BaseSetSetting_o *pSVar6;
  UnityEngine_GameObject_o *character;
  System_String_o *fileName;
  System_String_o *cameraId;
  GameManagers_BaseGameManager_c *pGVar7;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (Il2CppMethodInitialized_0754829d == '\0') {
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
    Il2CppMethodInitialized_0754829d = '\x01';
  }
  x = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (x != (GameManagers_BaseGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
    if (((x->klass->_2).typeHierarchyDepth < bVar1) ||
       ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(x);
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  if (isHuman) {
    if (x == (GameManagers_BaseGameManager_o *)0x0) goto label_05de6171;
    pGVar7 = (*(uint64_t *)((char *)x + 0x28));
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) {
      return;
    }
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
    if ((pSVar2 == (Settings_HumanCustomSettings_o *)0x0) ||
       (__this = (pSVar2->fields).CustomSets, __this == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0
       )) goto label_05de6171;
    pSVar6 = Settings_SetSettingsContainer_object___GetSelectedSet
                       ((Settings_SetSettingsContainer_T__o *)__this,
                        (MethodInfo_40477A0 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    if (pSVar6 != (Settings_BaseSetSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
      if (((pSVar6->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
label_05de615a:
        il2cpp_codegen_raise_invalid_cast_exception(pSVar6);
      }
      if ((*(uint64_t *)((char *)x + 0x28)) != (GameManagers_BaseGameManager_c *)0x0) {
        character = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)(*(uint64_t *)((char *)x + 0x28)),(MethodInfo *)0x0);
        pSVar3 = (pSVar6->fields).UniqueId;
        if (pSVar3 != (Settings_StringSetting_o *)0x0) {
          fileName = System_String__Concat_52f0320
                               ("Preset",(pSVar3->fields)._value,(MethodInfo *)0x0);
          if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
          }
          bVar5 = true;
          cameraId = "HumanPreview";
label_05de6141:
          Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera
                    (cameraId,character,fileName,0x80,bVar5,(UnityEngine_Transform_o *)0x0,
                     in_stack_ffffffffffffffd8);
          return;
        }
      }
      goto label_05de6171;
    }
    pGVar7 = (*(uint64_t *)((char *)x + 0x28));
  }
  else {
    if (x == (GameManagers_BaseGameManager_o *)0x0) goto label_05de6171;
    x_00 = (*(uint64_t *)((char *)x + 0x30));
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) {
      return;
    }
    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
    if ((pSVar4 == (Settings_TitanCustomSettings_o *)0x0) ||
       (__this_00 = (pSVar4->fields).TitanCustomSets,
       __this_00 == (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) goto label_05de6171;
    pSVar6 = Settings_SetSettingsContainer_object___GetSelectedSet
                       ((Settings_SetSettingsContainer_T__o *)__this_00,
                        (MethodInfo_40477A0 *)
                        MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
    if (pSVar6 != (Settings_BaseSetSetting_o *)0x0) {
      bVar1 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
      if (((pSVar6->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)) goto label_05de615a;
      if ((*(uint64_t *)((char *)x + 0x30)) != (UnityEngine_Component_o *)0x0) {
        character = UnityEngine_Component__get_gameObject((*(uint64_t *)((char *)x + 0x30)),(MethodInfo *)0x0);
        pSVar3 = (pSVar6->fields).UniqueId;
        if (pSVar3 != (Settings_StringSetting_o *)0x0) {
          fileName = System_String__Concat_52f0320
                               ("Preset",(pSVar3->fields)._value,(MethodInfo *)0x0);
          if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
          }
          bVar5 = false;
          cameraId = "TitanPreview";
          goto label_05de6141;
        }
      }
      goto label_05de6171;
    }
    pGVar7 = (*(uint64_t *)((char *)x + 0x30));
  }
  if (pGVar7 != (GameManagers_BaseGameManager_c *)0x0) {
    UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pGVar7,(MethodInfo *)0x0);
    ThrowNullReferenceException();
  }
label_05de6171:
  ThrowNullReferenceException();
}


// Utility.CharacterPreviewGenerator$$InitializePreviewSystem
// il2cpp: void Utility_CharacterPreviewGenerator__InitializePreviewSystem (const MethodInfo* method);
// 0x5de6190

void Utility_CharacterPreviewGenerator__InitializePreviewSystem(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754829e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    Il2CppMethodInitialized_0754829e = '\x01';
    uVar1 = (TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator;
  }
  else {
    uVar1 = (TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator;
  }
  TypeInfo_Utility_CharacterPreviewGenerator = (Utility_CharacterPreviewGenerator_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    Utility_CharacterPreviewGenerator__CleanupOrphanedPreviews((MethodInfo *)klass);
    return;
  }
  Utility_CharacterPreviewGenerator__CleanupOrphanedPreviews((MethodInfo *)klass);
  return;
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewForHumanSet
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet (UI_CharacterEditorHumanMenu_o* humanMenu, bool isRebuild, const MethodInfo* method);
// 0x5de61f0

void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet
               (UI_CharacterEditorHumanMenu_o *humanMenu,bool isRebuild,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_HumanCustomSet__o *__this;
  System_Collections_Generic_HashSet_string__o *__this_00;
  Settings_IntSetting_o *pSVar3;
  Characters_HumanSetup_o *__this_01;
  Settings_StringSetting_o *pSVar4;
  bool bVar5;
  MethodInfo *in_RAX;
  Settings_HumanCustomSet_o *customSet;
  Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o *__this_02;
  UnityEngine_GameObject_o *character;
  System_String_o *fileName;
  UnityEngine_Transform_o *cameraParent;
  int32_t weapon;
  Settings_HumanCustomSet_o *pSVar6;
  
  if (Il2CppMethodInitialized_0754829f == '\0') {
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
    Il2CppMethodInitialized_0754829f = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if ((pSVar2 != (Settings_HumanCustomSettings_o *)0x0) &&
     (__this = (pSVar2->fields).CustomSets, __this != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0))
  {
    customSet = (Settings_HumanCustomSet_o *)
                Settings_SetSettingsContainer_object___GetSelectedSet
                          ((Settings_SetSettingsContainer_T__o *)__this,
                           (MethodInfo_40477A0 *)
                           MethodInfo_Settings_SetSettingsContainer_HumanCustomSet_GetSelectedSet);
    if (customSet != (Settings_HumanCustomSet_o *)0x0) {
      bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
      if (((customSet->klass->_2).typeHierarchyDepth < bVar1) ||
         ((customSet->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
        pSVar6 = customSet;
        goto label_05de655d;
      }
    }
    pSVar6 = (Settings_HumanCustomSet_o *)
             TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pSVar6 != (Settings_HumanCustomSet_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
      if (((((GameManagers_BaseGameManager_c *)pSVar6->klass)->_2).typeHierarchyDepth < bVar1) ||
         ((((GameManagers_BaseGameManager_c *)pSVar6->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
label_05de655d:
        il2cpp_codegen_raise_invalid_cast_exception(pSVar6);
      }
      __this_00 = (pSVar6->fields).FoundSettings;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      weapon = 0;
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)humanMenu,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((humanMenu == (UI_CharacterEditorHumanMenu_o *)0x0) ||
           (pSVar3 = (humanMenu->fields).Weapon, pSVar3 == (Settings_IntSetting_o *)0x0)) goto label_05de6555;
        weapon = (pSVar3->fields)._value;
      }
      if (isRebuild) {
        if ((__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) ||
           (__this_01 = *(Characters_HumanSetup_o **)&(__this_00->fields)._version,
           __this_01 == (Characters_HumanSetup_o *)0x0)) goto label_05de6555;
        Characters_HumanSetup__Load(__this_01,customSet,weapon,false,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)humanMenu,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
          }
          if (Il2CppMethodInitialized_075482a0 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Utility_CharacterPreviewGenerator_GeneratePreviewForHumanSetCoroutine_d__21);
            Il2CppMethodInitialized_075482a0 = '\x01';
          }
          __this_02 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_Utility_CharacterPreviewGenerator_GeneratePreviewForHumanSetCoroutine_d__21
                                );
          Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21___ctor
                    (__this_02,0,(MethodInfo *)0x0);
          if (__this_02 !=
              (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o *)0x0) {
            (__this_02->fields).humanMenu = humanMenu;
            Il2CppCodeGenWriteBarrier(&(__this_02->fields).humanMenu);
            (__this_02->fields).isRebuild = false;
            if (humanMenu != (UI_CharacterEditorHumanMenu_o *)0x0) {
              UnityEngine_MonoBehaviour__StartCoroutine_691c390
                        ((UnityEngine_MonoBehaviour_o *)humanMenu,
                         (System_Collections_IEnumerator_o *)__this_02,(MethodInfo *)0x0);
              return;
            }
          }
          goto label_05de6555;
        }
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)humanMenu,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar5) {
        return;
      }
      if ((((__this_00 != (System_Collections_Generic_HashSet_string__o *)0x0) &&
           (character = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
           customSet != (Settings_HumanCustomSet_o *)0x0)) &&
          (pSVar4 = (customSet->fields).UniqueId, pSVar4 != (Settings_StringSetting_o *)0x0)) &&
         (fileName = System_String__Concat_52f0320
                               ("Preset",(pSVar4->fields)._value,(MethodInfo *)0x0),
         humanMenu != (UI_CharacterEditorHumanMenu_o *)0x0)) {
        cameraParent = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)humanMenu,(MethodInfo *)0x0);
        if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
        }
        Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera
                  ("HumanPreview",character,fileName,0x80,true,cameraParent,in_RAX);
        return;
      }
    }
  }
label_05de6555:
  ThrowNullReferenceException();
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewForHumanSetCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine (UI_CharacterEditorHumanMenu_o* humanMenu, bool isRebuild, const MethodInfo* method);
// 0x5de6570

System_Collections_IEnumerator_o *
Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine
          (UI_CharacterEditorHumanMenu_o *humanMenu,bool isRebuild,MethodInfo *method)

{
  Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o *__this;
  
  if (Il2CppMethodInitialized_075482a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Utility_CharacterPreviewGenerator_GeneratePreviewForHumanSetCoroutine_d__21);
    Il2CppMethodInitialized_075482a0 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Utility_CharacterPreviewGenerator_GeneratePreviewForHumanSetCoroutine_d__21);
  Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21___ctor
            (__this,0,(MethodInfo *)0x0);
  if (__this == (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).humanMenu = humanMenu;
  Il2CppCodeGenWriteBarrier(&(__this->fields).humanMenu);
  (__this->fields).isRebuild = isRebuild;
  return (System_Collections_IEnumerator_o *)__this;
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewForTitanSetCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine (UI_CharacterEditorTitanMenu_o* titanMenu, bool isRebuild, const MethodInfo* method);
// 0x5de65e0

System_Collections_IEnumerator_o *
Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine
          (UI_CharacterEditorTitanMenu_o *titanMenu,bool isRebuild,MethodInfo *method)

{
  Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o *__this;
  
  if (Il2CppMethodInitialized_075482a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Utility_CharacterPreviewGenerator_GeneratePreviewForTitanSetCoroutine_d__22);
    Il2CppMethodInitialized_075482a1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Utility_CharacterPreviewGenerator_GeneratePreviewForTitanSetCoroutine_d__22);
  Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22___ctor
            (__this,0,(MethodInfo *)0x0);
  if (__this == (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).titanMenu = titanMenu;
  Il2CppCodeGenWriteBarrier(&(__this->fields).titanMenu);
  (__this->fields).isRebuild = isRebuild;
  return (System_Collections_IEnumerator_o *)__this;
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewWithDebounce
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewWithDebounce (UnityEngine_MonoBehaviour_o* coroutineRunner, System_String_o* debounceKey, System_Action_o* generateAction, float delaySeconds, const MethodInfo* method);
// 0x5de6650
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de6698: jmp 0x5de6894
// asm:   0x5de688f: jmp 0x5de67de

void Utility_CharacterPreviewGenerator__GeneratePreviewWithDebounce
               (UnityEngine_MonoBehaviour_o *coroutineRunner,System_String_o *debounceKey,
               System_Action_o *generateAction,float delaySeconds,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  UnityEngine_Coroutine_o *pUVar3;
  Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *__this;
  
  if (Il2CppMethodInitialized_075482a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_CharacterPreviewGenerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_set_Item);
    Il2CppMethodInitialized_075482a2 = '\x01';
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) goto label_05de66e7;
label_05de6688:
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_activeDebounceCoroutines;
  }
  else {
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor != 0) goto label_05de6688;
label_05de66e7:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_activeDebounceCoroutines;
  }
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)debounceKey,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_ContainsKey);
    if (bVar2) {
      if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_activeDebounceCoroutines;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05de6894;
      pUVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)debounceKey,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_get_Item);
      if (pUVar3 != (UnityEngine_Coroutine_o *)0x0) {
        if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_activeDebounceCoroutines;
        if ((pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
           (pUVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar1,(Il2CppObject *)debounceKey,
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_get_Item),
           coroutineRunner == (UnityEngine_MonoBehaviour_o *)0x0)) goto label_05de6894;
        UnityEngine_MonoBehaviour__StopCoroutine_691c6e0(coroutineRunner,pUVar3,(MethodInfo *)0x0);
      }
    }
    if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_activeDebounceCoroutines;
    }
    else {
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_activeDebounceCoroutines;
    }
    if (Il2CppMethodInitialized_075482a3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Utility_CharacterPreviewGenerator_DebouncedPreviewCoroutine_d__24);
      Il2CppMethodInitialized_075482a3 = '\x01';
    }
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_Utility_CharacterPreviewGenerator_DebouncedPreviewCoroutine_d__24);
    Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24___ctor(__this,0,(MethodInfo *)0x0);
    if (__this != (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *)0x0) {
      (__this->fields).debounceKey = debounceKey;
      Il2CppCodeGenWriteBarrier(&(__this->fields).debounceKey);
      (__this->fields).generateAction = generateAction;
      Il2CppCodeGenWriteBarrier(&(__this->fields).generateAction);
      (__this->fields).delaySeconds = delaySeconds;
      if ((coroutineRunner != (UnityEngine_MonoBehaviour_o *)0x0) &&
         (pUVar3 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                             (coroutineRunner,(System_Collections_IEnumerator_o *)__this,(MethodInfo *)0x0),
         pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)debounceKey,(Il2CppObject *)pUVar3,
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_set_Item);
        return;
      }
    }
  }
label_05de6894:
  ThrowNullReferenceException();
}


// Utility.CharacterPreviewGenerator$$DebouncedPreviewCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine (System_String_o* debounceKey, System_Action_o* generateAction, float delaySeconds, const MethodInfo* method);
// 0x5de68a0

System_Collections_IEnumerator_o *
Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine
          (System_String_o *debounceKey,System_Action_o *generateAction,float delaySeconds,MethodInfo *method)

{
  Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *__this;
  
  if (Il2CppMethodInitialized_075482a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Utility_CharacterPreviewGenerator_DebouncedPreviewCoroutine_d__24);
    Il2CppMethodInitialized_075482a3 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Utility_CharacterPreviewGenerator_DebouncedPreviewCoroutine_d__24);
  Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24___ctor(__this,0,(MethodInfo *)0x0);
  if (__this == (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).debounceKey = debounceKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields).debounceKey);
  (__this->fields).generateAction = generateAction;
  Il2CppCodeGenWriteBarrier(&(__this->fields).generateAction);
  (__this->fields).delaySeconds = delaySeconds;
  return (System_Collections_IEnumerator_o *)__this;
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewForTitanSet
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet (UI_CharacterEditorTitanMenu_o* titanMenu, bool isRebuild, const MethodInfo* method);
// 0x5de6940

void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet
               (UI_CharacterEditorTitanMenu_o *titanMenu,bool isRebuild,MethodInfo *method)

{
  byte bVar1;
  Settings_TitanCustomSettings_o *pSVar2;
  Settings_SetSettingsContainer_TitanCustomSet__o *__this;
  Settings_StringSetting_o *pSVar3;
  bool bVar4;
  MethodInfo *in_RAX;
  Settings_TitanCustomSet_o *set;
  Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o *__this_00;
  UnityEngine_GameObject_o *character;
  System_String_o *fileName;
  UnityEngine_Transform_o *cameraParent;
  Settings_TitanCustomSet_o *pSVar5;
  
  if (Il2CppMethodInitialized_075482a4 == '\0') {
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
    Il2CppMethodInitialized_075482a4 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings;
  if ((pSVar2 != (Settings_TitanCustomSettings_o *)0x0) &&
     (__this = (pSVar2->fields).TitanCustomSets,
     __this != (Settings_SetSettingsContainer_TitanCustomSet__o *)0x0)) {
    set = (Settings_TitanCustomSet_o *)
          Settings_SetSettingsContainer_object___GetSelectedSet
                    ((Settings_SetSettingsContainer_T__o *)__this,
                     (MethodInfo_40477A0 *)
                     MethodInfo_Settings_SetSettingsContainer_TitanCustomSet_GetSelectedSet);
    if (set != (Settings_TitanCustomSet_o *)0x0) {
      bVar1 = (TypeInfo_Settings_TitanCustomSet->_2).typeHierarchyDepth;
      if (((set->klass->_2).typeHierarchyDepth < bVar1) ||
         ((set->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_TitanCustomSet)
         ) {
        pSVar5 = set;
        goto label_05de6c49;
      }
    }
    pSVar5 = (Settings_TitanCustomSet_o *)
             TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
    if (pSVar5 != (Settings_TitanCustomSet_o *)0x0) {
      bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
      if (((((GameManagers_BaseGameManager_c *)pSVar5->klass)->_2).typeHierarchyDepth < bVar1) ||
         ((((GameManagers_BaseGameManager_c *)pSVar5->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
label_05de6c49:
        il2cpp_codegen_raise_invalid_cast_exception(pSVar5);
      }
      pSVar3 = (pSVar5->fields).Name;
      if (isRebuild) {
        if ((pSVar3 == (Settings_StringSetting_o *)0x0) ||
           ((*(uint64_t *)((char *)pSVar3 + 0x30)) == (Settings_StringSetting_c *)0x0)) goto label_05de6c41;
        Characters_BasicTitanSetup__Load
                  ((Characters_BasicTitanSetup_o *)(*(uint64_t *)((char *)pSVar3 + 0x30)),set,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)titanMenu,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
          }
          if (Il2CppMethodInitialized_075482a1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Utility_CharacterPreviewGenerator_GeneratePreviewForTitanSetCoroutine_d__22);
            Il2CppMethodInitialized_075482a1 = '\x01';
          }
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_Utility_CharacterPreviewGenerator_GeneratePreviewForTitanSetCoroutine_d__22
                                );
          Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22___ctor
                    (__this_00,0,(MethodInfo *)0x0);
          if (__this_00 !=
              (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o *)0x0) {
            (__this_00->fields).titanMenu = titanMenu;
            Il2CppCodeGenWriteBarrier(&(__this_00->fields).titanMenu);
            (__this_00->fields).isRebuild = false;
            if (titanMenu != (UI_CharacterEditorTitanMenu_o *)0x0) {
              UnityEngine_MonoBehaviour__StartCoroutine_691c390
                        ((UnityEngine_MonoBehaviour_o *)titanMenu,
                         (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
              return;
            }
          }
          goto label_05de6c41;
        }
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)titanMenu,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        return;
      }
      if ((((pSVar3 != (Settings_StringSetting_o *)0x0) &&
           (character = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0),
           set != (Settings_TitanCustomSet_o *)0x0)) &&
          (pSVar3 = (set->fields).UniqueId, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
         (fileName = System_String__Concat_52f0320
                               ("Preset",(pSVar3->fields)._value,(MethodInfo *)0x0),
         titanMenu != (UI_CharacterEditorTitanMenu_o *)0x0)) {
        cameraParent = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)titanMenu,(MethodInfo *)0x0);
        if ((TypeInfo_Utility_CharacterPreviewGenerator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_CharacterPreviewGenerator);
        }
        Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera
                  ("TitanPreview",character,fileName,0x80,false,cameraParent,in_RAX);
        return;
      }
    }
  }
label_05de6c41:
  ThrowNullReferenceException();
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewWithPersistentCameraCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine (System_String_o* cameraId, UnityEngine_GameObject_o* character, System_String_o* fileName, int32_t size, bool isHuman, UnityEngine_Transform_o* cameraParent, const MethodInfo* method);
// 0x5de6c50

System_Collections_IEnumerator_o *
Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine
          (System_String_o *cameraId,UnityEngine_GameObject_o *character,System_String_o *fileName,
          int32_t size,bool isHuman,UnityEngine_Transform_o *cameraParent,MethodInfo *method)

{
  Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o *__this;
  
  if (Il2CppMethodInitialized_075482a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Utility_CharacterPreviewGenerator_GeneratePreviewWithPersistentCameraCoroutine_d__26)
    ;
    Il2CppMethodInitialized_075482a5 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Utility_CharacterPreviewGenerator_GeneratePreviewWithPersistentCameraCoroutine_d__26
                     );
  Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26___ctor
            (__this,0,(MethodInfo *)0x0);
  if (__this == (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o *)0x0
     ) {
    ThrowNullReferenceException();
  }
  (__this->fields).cameraId = cameraId;
  Il2CppCodeGenWriteBarrier(&(__this->fields).cameraId);
  (__this->fields).character = character;
  Il2CppCodeGenWriteBarrier(&(__this->fields).character);
  (__this->fields).fileName = fileName;
  Il2CppCodeGenWriteBarrier(&(__this->fields).fileName);
  (__this->fields).size = size;
  (__this->fields).isHuman = isHuman;
  (__this->fields).cameraParent = cameraParent;
  Il2CppCodeGenWriteBarrier(&(__this->fields).cameraParent);
  return (System_Collections_IEnumerator_o *)__this;
}


// Utility.CharacterPreviewGenerator$$.cctor
// il2cpp: void Utility_CharacterPreviewGenerator___cctor (const MethodInfo* method);
// 0x5de6d20

void Utility_CharacterPreviewGenerator___cctor(MethodInfo *method)

{
  Utility_CharacterPreviewGenerator_StaticFields *pUVar1;
  System_Collections_Generic_HashSet_string__o *pSVar2;
  System_Collections_Generic_Dictionary_string__CharacterPreviewGenerator_PreviewCameraData__o *__this;
  System_Collections_Generic_Dictionary_string__Coroutine__o *__this_00;
  
  if (Il2CppMethodInitialized_075482a6 == '\0') {
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
    Il2CppMethodInitialized_075482a6 = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar2,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_currentlyGenerating = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_CharacterPreviewGenerator->static_fields->_currentlyGenerating);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData
                     );
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_CharacterPreviewGenerator_PreviewCameraData_ctor
            );
  pUVar1 = TypeInfo_Utility_CharacterPreviewGenerator->static_fields;
  pUVar1->_persistentCameras = __this;
  Il2CppCodeGenWriteBarrier(&pUVar1->_persistentCameras);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Coroutine);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Coroutine_ctor);
  pUVar1 = TypeInfo_Utility_CharacterPreviewGenerator->static_fields;
  pUVar1->_activeDebounceCoroutines = __this_00;
  Il2CppCodeGenWriteBarrier(&pUVar1->_activeDebounceCoroutines);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar2,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  pUVar1 = TypeInfo_Utility_CharacterPreviewGenerator->static_fields;
  pUVar1->_generatedPreviewKeys = pSVar2;
  Il2CppCodeGenWriteBarrier(&pUVar1->_generatedPreviewKeys);
  return;
}


