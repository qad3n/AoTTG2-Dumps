// Type: Utility.CharacterPreviewGenerator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility/CharacterPreviewGenerator.cs
// Prior source: NEW in this update
// --------------------------------

// Utility.CharacterPreviewGenerator.PreviewCameraData$$.ctor
// il2cpp: void Utility_CharacterPreviewGenerator_PreviewCameraData___ctor (Utility_CharacterPreviewGenerator_PreviewCameraData_o* __this, const MethodInfo* method);
// 0x41551b0

void Utility_CharacterPreviewGenerator_PreviewCameraData___ctor
               (Utility_CharacterPreviewGenerator_PreviewCameraData_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$.ctor
// il2cpp: void Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24___ctor (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x41576d0

void Utility_CharacterPreviewGenerator_<DebouncedPreviewCoroutine>d__24___ctor
               (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$System.IDisposable.Dispose
// il2cpp: void Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_IDisposable_Dispose (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, const MethodInfo* method);
// 0x4157c80

void Utility_CharacterPreviewGenerator_<DebouncedPreviewCoroutine>d__24__System_IDisposable_Dispose
               (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *__this,
               MethodInfo *method)

{
  return;
}


// Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$MoveNext
// il2cpp: bool Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__MoveNext (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, const MethodInfo* method);
// 0x4157c90

bool_conflict
Utility_CharacterPreviewGenerator_<DebouncedPreviewCoroutine>d__24__MoveNext
          (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *__this,
          MethodInfo *method)

{
  float seconds;
  int iVar1;
  System_Action_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  bool_conflict bVar4;
  UnityEngine_WaitForSeconds_o *__this_00;
  
  if (DAT_05704a13 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_05704a13 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).delaySeconds;
    __this_00 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    il2cpp_runtime_glue(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
  }
  (__this->fields).__1__state = -1;
  pSVar2 = (__this->fields).generateAction;
  if (pSVar2 != (System_Action_o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
  }
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x10);
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar4 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar3,(Il2CppObject *)(__this->fields).debounceKey,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 == '\0') {
      return 0;
    }
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x10);
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (pSVar3,(Il2CppObject *)(__this->fields).debounceKey,(Il2CppObject *)0x0,
                 MethodInfo_Void_set_Item);
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, const MethodInfo* method);
// 0x4157df0

Il2CppObject *
Utility_CharacterPreviewGenerator_<DebouncedPreviewCoroutine>d__24__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_Collections_IEnumerator_Reset (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, const MethodInfo* method);
// 0x4157e00

void Utility_CharacterPreviewGenerator_<DebouncedPreviewCoroutine>d__24__System_Collections_IEnumerator_Reset
               (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *__this,
               MethodInfo *method)

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


// Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_Collections_IEnumerator_get_Current (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, const MethodInfo* method);
// 0x4157e40

Il2CppObject *
Utility_CharacterPreviewGenerator_<DebouncedPreviewCoroutine>d__24__System_Collections_IEnumerator_get_Current
          (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$.ctor
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21___ctor (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4157320

void Utility_CharacterPreviewGenerator_<GeneratePreviewForHumanSetCoroutine>d__21___ctor
               (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o
                *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$System.IDisposable.Dispose
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_IDisposable_Dispose (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x4157e50

void Utility_CharacterPreviewGenerator_<GeneratePreviewForHumanSetCoroutine>d__21__System_IDisposable_Dispose
               (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o
                *__this,MethodInfo *method)

{
  return;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$MoveNext
// il2cpp: bool Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__MoveNext (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x4157e60

bool_conflict
Utility_CharacterPreviewGenerator_<GeneratePreviewForHumanSetCoroutine>d__21__MoveNext
          (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o *__this,
          MethodInfo *method)

{
  int iVar1;
  UI_CharacterEditorHumanMenu_o *humanMenu;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05704a14 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704a14 = '\x01';
    in_RDX = extraout_RDX;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    humanMenu = (__this->fields).humanMenu;
    bVar2 = (__this->fields).isRebuild;
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_init_class();
      in_RDX = extraout_RDX_00;
    }
    Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet
              (humanMenu,(uint)(byte)bVar2,in_RDX);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar3 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar3;
    uVar4 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar3);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
  }
  return 0;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x4157f30

Il2CppObject *
Utility_CharacterPreviewGenerator_<GeneratePreviewForHumanSetCoroutine>d__21__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_Collections_IEnumerator_Reset (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x4157f40

void Utility_CharacterPreviewGenerator_<GeneratePreviewForHumanSetCoroutine>d__21__System_Collections_IEnumerator_Reset
               (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o
                *__this,MethodInfo *method)

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


// Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_Collections_IEnumerator_get_Current (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x4157f80

Il2CppObject *
Utility_CharacterPreviewGenerator_<GeneratePreviewForHumanSetCoroutine>d__21__System_Collections_IEnumerator_get_Current
          (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$.ctor
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22___ctor (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x41573c0

void Utility_CharacterPreviewGenerator_<GeneratePreviewForTitanSetCoroutine>d__22___ctor
               (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o
                *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$System.IDisposable.Dispose
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_IDisposable_Dispose (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, const MethodInfo* method);
// 0x4157f90

void Utility_CharacterPreviewGenerator_<GeneratePreviewForTitanSetCoroutine>d__22__System_IDisposable_Dispose
               (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o
                *__this,MethodInfo *method)

{
  return;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$MoveNext
// il2cpp: bool Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__MoveNext (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, const MethodInfo* method);
// 0x4157fa0

bool_conflict
Utility_CharacterPreviewGenerator_<GeneratePreviewForTitanSetCoroutine>d__22__MoveNext
          (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o *__this,
          MethodInfo *method)

{
  int iVar1;
  UI_CharacterEditorTitanMenu_o *titanMenu;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05704a15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704a15 = '\x01';
    in_RDX = extraout_RDX;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    titanMenu = (__this->fields).titanMenu;
    bVar2 = (__this->fields).isRebuild;
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_init_class();
      in_RDX = extraout_RDX_00;
    }
    Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet
              (titanMenu,(uint)(byte)bVar2,in_RDX);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar3 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar3;
    uVar4 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar3);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
  }
  return 0;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, const MethodInfo* method);
// 0x4158070

Il2CppObject *
Utility_CharacterPreviewGenerator_<GeneratePreviewForTitanSetCoroutine>d__22__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_Collections_IEnumerator_Reset (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, const MethodInfo* method);
// 0x4158080

void Utility_CharacterPreviewGenerator_<GeneratePreviewForTitanSetCoroutine>d__22__System_Collections_IEnumerator_Reset
               (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o
                *__this,MethodInfo *method)

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


// Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_Collections_IEnumerator_get_Current (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, const MethodInfo* method);
// 0x41580c0

Il2CppObject *
Utility_CharacterPreviewGenerator_<GeneratePreviewForTitanSetCoroutine>d__22__System_Collections_IEnumerator_get_Current
          (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$.ctor
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26___ctor (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4157ae0

void Utility_CharacterPreviewGenerator_<GeneratePreviewWithPersistentCameraCoroutine>d__26___ctor
               (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o
                *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$System.IDisposable.Dispose
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_IDisposable_Dispose (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, const MethodInfo* method);
// 0x41580d0

void Utility_CharacterPreviewGenerator_<GeneratePreviewWithPersistentCameraCoroutine>d__26__System_IDisposable_Dispose
               (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o
                *__this,MethodInfo *method)

{
  return;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$MoveNext
// il2cpp: bool Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__MoveNext (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, const MethodInfo* method);
// 0x41580e0

bool_conflict
Utility_CharacterPreviewGenerator_<GeneratePreviewWithPersistentCameraCoroutine>d__26__MoveNext
          (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o
           *__this,MethodInfo *method)

{
  int iVar1;
  int32_t size;
  System_String_o *cameraId;
  UnityEngine_GameObject_o *character;
  System_String_o *fileName;
  UnityEngine_Transform_o *cameraParent;
  bool_conflict bVar2;
  MethodInfo *in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uVar4;
  
  if (DAT_05704a16 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05704a16 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    cameraId = (__this->fields).cameraId;
    character = (__this->fields).character;
    fileName = (__this->fields).fileName;
    size = (__this->fields).size;
    bVar2 = (__this->fields).isHuman;
    cameraParent = (__this->fields).cameraParent;
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera
              (cameraId,character,fileName,size,(uint)(byte)bVar2,cameraParent,in_RAX);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar3 = (Il2CppObject *)Utility_Util__WaitForFrames(2,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar3;
    uVar4 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar3);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
  }
  return 0;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, const MethodInfo* method);
// 0x41581d0

Il2CppObject *
Utility_CharacterPreviewGenerator_<GeneratePreviewWithPersistentCameraCoroutine>d__26__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o
           *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_Collections_IEnumerator_Reset (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, const MethodInfo* method);
// 0x41581e0

void Utility_CharacterPreviewGenerator_<GeneratePreviewWithPersistentCameraCoroutine>d__26__System_Collections_IEnumerator_Reset
               (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o
                *__this,MethodInfo *method)

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


// Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_Collections_IEnumerator_get_Current (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, const MethodInfo* method);
// 0x4158220

Il2CppObject *
Utility_CharacterPreviewGenerator_<GeneratePreviewWithPersistentCameraCoroutine>d__26__System_Collections_IEnumerator_get_Current
          (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o
           *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator$$CleanupOrphanedPreviews
// il2cpp: void Utility_CharacterPreviewGenerator__CleanupOrphanedPreviews (const MethodInfo* method);
// 0x4153db0

void Utility_CharacterPreviewGenerator__CleanupOrphanedPreviews(MethodInfo *method)

{
  MethodInfo *in_RSI;
  
  if (DAT_057049fd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    DAT_057049fd = '\x01';
  }
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(1,in_RSI);
  Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(0,in_RSI);
  return;
}


// Utility.CharacterPreviewGenerator$$CleanupOrphanedPreviewsInFolder
// il2cpp: void Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder (bool isHuman, const MethodInfo* method);
// 0x4153e00

void Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder
               (bool_conflict isHuman,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar5;
  int iVar6;
  undefined8 *puVar7;
  System_String_o *pSVar8;
  System_Collections_Generic_HashSet_object__o *__this_04;
  System_Collections_Generic_List_object__o *pSVar9;
  System_String_o *pSVar10;
  System_String_array *pSVar11;
  ulong uVar12;
  long lVar13;
  undefined8 in_stack_ffffffffffffff88;
  System_String_o *in_stack_ffffffffffffff90;
  System_Collections_Generic_List_Enumerator_T__c *pSVar14;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (DAT_057049fe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_IListSetting);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn);
    il2cpp_init_method_metadata(&TypeInfo_Path);
    il2cpp_init_method_metadata(&MethodInfo_IListSetting_GetSets);
    il2cpp_init_method_metadata(&MethodInfo_IListSetting_GetSets);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TitanCustomSet);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"Human");
    il2cpp_init_method_metadata(&"Titans");
    il2cpp_init_method_metadata(&"Preset");
    il2cpp_init_method_metadata(&"Preset*.png");
    DAT_057049fe = '\x01';
  }
  if ((char)isHuman == '\0') {
    puVar7 = &"Titans";
  }
  else {
    puVar7 = &"Human";
  }
  pSVar8 = (System_String_o *)*puVar7;
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar10 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x80);
  if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar8 = System_IO_Path__Combine(pSVar10,pSVar8,(MethodInfo *)0x0);
  bVar5 = System_IO_Directory__Exists(pSVar8,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    __this_04 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
    System_Collections_Generic_HashSet<object>___ctor(__this_04,MethodInfo_HashSet_1_System_String);
    if ((char)isHuman == '\0') {
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
      if (((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) ||
         (plVar4 = *(long **)(lVar3 + 0x28), plVar4 == (long *)0x0)) goto LAB_0415452e;
      lVar3 = *plVar4;
      if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
        lVar13 = 0;
        do {
          if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar13) == TypeInfo_IListSetting) {
            puVar7 = (undefined8 *)
                     ((long)(*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar13) + 2) * 0x10 + lVar3 +
                     0x138);
            goto LAB_04154349;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar13);
      }
      puVar7 = (undefined8 *)il2cpp_runtime_glue(plVar4,TypeInfo_IListSetting,2);
LAB_04154349:
      pSVar9 = (System_Collections_Generic_List_object__o *)(*(code *)*puVar7)(plVar4,puVar7[1]);
      if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0415452e;
      System_Collections_Generic_List<object>__GetEnumerator(&local_48,pSVar9,MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn);
      if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        __this_02.fields._8_8_ = in_stack_ffffffffffffff90;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
        __this_02.fields._current = (Il2CppObject *)local_48.fields._list;
        bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
        pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
        if ((char)bVar5 != '\0') {
          if (local_48.fields._current != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
            if ((bVar1 <= ((local_48.fields._current)->klass->_2).naturalAligment) &&
               (((local_48.fields._current)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                TypeInfo_TitanCustomSet)) {
              if (local_48.fields._current[3].klass != (Il2CppClass *)0x0) {
                System_String__Concat
                          ("Preset",
                           (System_String_o *)((local_48.fields._current[3].klass)->_1).namespaze,
                           (MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
LAB_0415459f:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
LAB_041545a4:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume();
          }
LAB_04154567:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else {
        pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
        while (__this_01.fields._8_8_ = pSVar8,
              __this_01.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88,
              __this_01.fields._current = (Il2CppObject *)pSVar14,
              bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
              in_stack_ffffffffffffff90 = pSVar8, (char)bVar5 != '\0') {
          if (local_48.fields._current == (Il2CppObject *)0x0) goto LAB_04154567;
          bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
          if ((((local_48.fields._current)->klass->_2).naturalAligment < bVar1) ||
             (((local_48.fields._current)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              TypeInfo_TitanCustomSet)) goto LAB_041545a4;
          if (local_48.fields._current[3].klass == (Il2CppClass *)0x0) goto LAB_0415459f;
          pSVar10 = System_String__Concat
                              ("Preset",
                               (System_String_o *)
                               ((local_48.fields._current[3].klass)->_1).namespaze,(MethodInfo *)0x0
                              );
          System_Collections_Generic_HashSet<object>__Add
                    (__this_04,(Il2CppObject *)pSVar10,MethodInfo_Boolean_Add);
        }
      }
    }
    else {
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
      if (((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) ||
         (plVar4 = *(long **)(lVar3 + 0x28), plVar4 == (long *)0x0)) goto LAB_0415452e;
      lVar3 = *plVar4;
      if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
        lVar13 = 0;
        do {
          if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar13) == TypeInfo_IListSetting) {
            puVar7 = (undefined8 *)
                     ((long)(*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar13) + 2) * 0x10 + lVar3 +
                     0x138);
            goto LAB_04154079;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar13);
      }
      puVar7 = (undefined8 *)il2cpp_runtime_glue(plVar4,TypeInfo_IListSetting,2);
LAB_04154079:
      pSVar9 = (System_Collections_Generic_List_object__o *)(*(code *)*puVar7)(plVar4,puVar7[1]);
      if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_0415452e;
      System_Collections_Generic_List<object>__GetEnumerator(&local_48,pSVar9,MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn);
      if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        __this_00.fields._8_8_ = in_stack_ffffffffffffff90;
        __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
        __this_00.fields._current = (Il2CppObject *)local_48.fields._list;
        bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
        pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
        if ((char)bVar5 != '\0') {
          if (local_48.fields._current != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
            if ((bVar1 <= ((local_48.fields._current)->klass->_2).naturalAligment) &&
               (((local_48.fields._current)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                TypeInfo_HumanCustomSet)) {
              if (local_48.fields._current[3].klass != (Il2CppClass *)0x0) {
                System_String__Concat
                          ("Preset",
                           (System_String_o *)((local_48.fields._current[3].klass)->_1).namespaze,
                           (MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
LAB_041541ce:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
LAB_041541d3:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume();
          }
LAB_04154196:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else {
        pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
        while (__this.fields._8_8_ = pSVar8,
              __this.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88,
              __this.fields._current = (Il2CppObject *)pSVar14,
              bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
              in_stack_ffffffffffffff90 = pSVar8, (char)bVar5 != '\0') {
          if (local_48.fields._current == (Il2CppObject *)0x0) goto LAB_04154196;
          bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
          if ((((local_48.fields._current)->klass->_2).naturalAligment < bVar1) ||
             (((local_48.fields._current)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              TypeInfo_HumanCustomSet)) goto LAB_041541d3;
          if (local_48.fields._current[3].klass == (Il2CppClass *)0x0) goto LAB_041541ce;
          pSVar10 = System_String__Concat
                              ("Preset",
                               (System_String_o *)
                               ((local_48.fields._current[3].klass)->_1).namespaze,(MethodInfo *)0x0
                              );
          System_Collections_Generic_HashSet<object>__Add
                    (__this_04,(Il2CppObject *)pSVar10,MethodInfo_Boolean_Add);
        }
      }
    }
    __this_03.fields._8_8_ = in_stack_ffffffffffffff90;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
    __this_03.fields._current = (Il2CppObject *)pSVar14;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
    pSVar11 = System_IO_Directory__GetFiles(pSVar8,"Preset*.png",(MethodInfo *)0x0);
    if (pSVar11 == (System_String_array *)0x0) {
LAB_0415452e:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar6 = (int)pSVar11->max_length;
    if (__this_04 == (System_Collections_Generic_HashSet_object__o *)0x0) {
      if (0 < iVar6) {
        pSVar8 = pSVar11->m_Items[0];
        if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
          il2cpp_init_class();
        }
        System_IO_Path__GetFileNameWithoutExtension(pSVar8,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else if (0 < iVar6) {
      uVar12 = 0;
      if ((pSVar11->max_length & 0xffffffff) != 0) {
        do {
          pSVar8 = pSVar11->m_Items[uVar12];
          if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = System_IO_Path__GetFileNameWithoutExtension(pSVar8,(MethodInfo *)0x0);
          bVar5 = System_Collections_Generic_HashSet<object>__Contains
                            (__this_04,(Il2CppObject *)pSVar10,MethodInfo_Boolean_Contains);
          if ((char)bVar5 == '\0') {
            System_IO_File__Delete(pSVar8,(MethodInfo *)0x0);
          }
          uVar12 = uVar12 + 1;
          uVar2 = (uint)pSVar11->max_length;
          if ((long)(int)uVar2 <= (long)uVar12) {
            return;
          }
        } while (uVar12 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Utility.CharacterPreviewGenerator$$SetLayerRecursively
// il2cpp: void Utility_CharacterPreviewGenerator__SetLayerRecursively (UnityEngine_GameObject_o* obj, int32_t newLayer, const MethodInfo* method);
// 0x41546e0

/* WARNING: Removing unreachable block (ram,0x04154981) */

void Utility_CharacterPreviewGenerator__SetLayerRecursively
               (UnityEngine_GameObject_o *obj,int32_t newLayer,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  char cVar6;
  UnityEngine_Transform_o *__this;
  System_Collections_IEnumerator_o *pSVar7;
  VirtualInvokeData *pVVar8;
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *obj_00;
  long *plVar9;
  undefined8 *puVar10;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  long lVar11;
  long lVar12;
  
  if (DAT_057049ff == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_Transform);
    DAT_057049ff = '\x01';
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__set_layer(obj,newLayer,(MethodInfo *)0x0);
    __this = UnityEngine_GameObject__get_transform(obj,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Transform_o *)0x0) {
      pSVar7 = UnityEngine_Transform__GetEnumerator(__this,(MethodInfo *)0x0);
      if (pSVar7 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      do {
        pSVar4 = pSVar7->klass;
        uVar2._0_1_ = (pSVar4->_2).rank;
        uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar5 = (pSVar4->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(long *)((long)&pIVar5->interfaceType + lVar11) == TypeInfo_IEnumerator) {
              pVVar8 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar11);
              goto LAB_041547f3;
            }
            lVar11 = lVar11 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar11);
        }
        pVVar8 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar7,TypeInfo_IEnumerator,0);
LAB_041547f3:
        cVar6 = (*pVVar8->methodPtr)(pSVar7,pVVar8->method);
        if (cVar6 == '\0') {
          plVar9 = (long *)il2cpp_runtime_glue(pSVar7,TypeInfo_IDisposable);
          if (plVar9 == (long *)0x0) {
            return;
          }
          lVar11 = *plVar9;
          if ((ulong)*(ushort *)(lVar11 + 0x12e) == 0) goto LAB_0415492f;
          lVar12 = 0;
          goto LAB_04154920;
        }
        pSVar4 = pSVar7->klass;
        uVar3._0_1_ = (pSVar4->_2).rank;
        uVar3._1_1_ = (pSVar4->_2).minimumAlignment;
        if ((ulong)uVar3 != 0) {
          pIVar5 = (pSVar4->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(long *)((long)&pIVar5->interfaceType + lVar11) == TypeInfo_IEnumerator) {
              pVVar8 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar11) + 1);
              goto LAB_04154878;
            }
            lVar11 = lVar11 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar11);
        }
        pVVar8 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar7,TypeInfo_IEnumerator,1);
LAB_04154878:
        __this_00 = (UnityEngine_Component_o *)(*pVVar8->methodPtr)(pSVar7,pVVar8->method);
        if (__this_00 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar1 = (TypeInfo_Transform->_2).naturalAligment;
        if (((__this_00->klass->_2).naturalAligment < bVar1) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Transform)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(__this_00);
        }
        obj_00 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
        method_00 = extraout_RDX;
        if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
          il2cpp_init_class();
          method_00 = extraout_RDX_00;
        }
        Utility_CharacterPreviewGenerator__SetLayerRecursively(obj_00,newLayer,method_00);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
  while (lVar12 = lVar12 + 0x10, (ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12) {
LAB_04154920:
    if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
      puVar10 = (undefined8 *)
                (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
      goto LAB_0415494d;
    }
  }
LAB_0415492f:
  puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IDisposable,0);
LAB_0415494d:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return;
}


// Utility.CharacterPreviewGenerator$$GetOrCreatePersistentCamera
// il2cpp: Utility_CharacterPreviewGenerator_PreviewCameraData_o* Utility_CharacterPreviewGenerator__GetOrCreatePersistentCamera (System_String_o* cameraId, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x4154a80

Utility_CharacterPreviewGenerator_PreviewCameraData_o *
Utility_CharacterPreviewGenerator__GetOrCreatePersistentCamera
          (System_String_o *cameraId,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Utility_CharacterPreviewGenerator_PreviewCameraData_Fields *pUVar1;
  int iVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  UnityEngine_Camera_o *pUVar4;
  bool_conflict bVar5;
  int32_t value;
  Il2CppObject *pIVar6;
  Utility_CharacterPreviewGenerator_PreviewCameraData_o *pUVar7;
  UnityEngine_Object_o *pUVar8;
  System_String_o *pSVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_Transform_o *__this;
  UnityEngine_Camera_o *pUVar11;
  UnityEngine_Object_o *x;
  UnityEngine_Skybox_o *__this_00;
  UnityEngine_Material_o *value_00;
  UnityEngine_RenderTexture_o *pUVar12;
  UnityEngine_RenderTexture_o **ppUVar13;
  float fVar14;
  UnityEngine_Color_o value_01;
  UnityEngine_SceneManagement_Scene_Fields local_40 [2];
  System_String_o *local_38;
  
  if (DAT_05704a00 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&MethodInfo_Skybox_GetComponent_Skybox);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_CharacterPreviewGenerator_PreviewCameraData_get);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Camera_AddComponent_Camera);
    il2cpp_init_method_metadata(&MethodInfo_Skybox_AddComponent_Skybox);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_Camera_FindObjectOfType_Camera);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PreviewCameraData);
    il2cpp_init_method_metadata(&TypeInfo_RenderTexture);
    il2cpp_init_method_metadata(&"PersistentPreviewCamera_");
    il2cpp_init_method_metadata(&"DontDestroyOnLoad");
    DAT_05704a00 = '\x01';
  }
  local_40[0].m_Handle = 0;
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8);
  if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_041551ab;
  bVar5 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                    (pSVar3,(Il2CppObject *)cameraId,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar5 != '\0') {
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8);
    if ((pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (pIVar6 = System_Collections_Generic_Dictionary<object__object>__get_Item
                           (pSVar3,(Il2CppObject *)cameraId,MethodInfo_CharacterPreviewGenerator_PreviewCameraData_get),
       pIVar6 == (Il2CppObject *)0x0)) goto LAB_041551ab;
    if (*(char *)&pIVar6[2].klass != '\0') {
      if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8);
      if ((pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (pIVar6 = System_Collections_Generic_Dictionary<object__object>__get_Item
                             (pSVar3,(Il2CppObject *)cameraId,MethodInfo_CharacterPreviewGenerator_PreviewCameraData_get),
         pIVar6 == (Il2CppObject *)0x0)) goto LAB_041551ab;
      if (*(char *)((long)&pIVar6[2].klass + 1) == '\0') {
        if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8);
        if ((pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
           (pUVar7 = (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)
                     System_Collections_Generic_Dictionary<object__object>__get_Item
                               (pSVar3,(Il2CppObject *)cameraId,MethodInfo_CharacterPreviewGenerator_PreviewCameraData_get),
           pUVar7 == (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)0x0))
        goto LAB_041551ab;
        pUVar11 = (pUVar7->fields).Camera;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          pUVar12 = (pUVar7->fields).RenderTexture;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pUVar11 = (pUVar7->fields).Camera;
            if (pUVar11 == (UnityEngine_Camera_o *)0x0) goto LAB_041551ab;
            pUVar8 = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar5 = UnityEngine_Object__op_Inequality
                              (pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar5 != '\0') {
              return pUVar7;
            }
          }
        }
        if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8);
        if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_041551ab;
        System_Collections_Generic_Dictionary<object__object>__Remove
                  (pSVar3,(Il2CppObject *)cameraId,MethodInfo_Boolean_Remove);
      }
    }
  }
  pUVar7 = (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)il2cpp_runtime_glue(TypeInfo_PreviewCameraData)
  ;
  System_Object___ctor((Il2CppObject *)pUVar7,(MethodInfo *)0x0);
  local_38 = cameraId;
  pSVar9 = System_String__Concat("PersistentPreviewCamera_",cameraId,(MethodInfo *)0x0);
  pUVar8 = (UnityEngine_Object_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)pUVar8,pSVar9,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Object__DontDestroyOnLoad(pUVar8,(MethodInfo *)0x0);
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)parent,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
LAB_04154e61:
    if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_041551ab;
  }
  else {
    if ((parent == (UnityEngine_Transform_o *)0x0) ||
       (pUVar10 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)parent,(MethodInfo *)0x0),
       pUVar10 == (UnityEngine_GameObject_o *)0x0)) goto LAB_041551ab;
    local_40[0].m_Handle = (int32_t)UnityEngine_GameObject__get_scene(pUVar10,(MethodInfo *)0x0);
    pSVar9 = UnityEngine_SceneManagement_Scene__get_name
                       ((UnityEngine_SceneManagement_Scene_Fields)(int32_t)local_40,
                        (MethodInfo *)0x0);
    bVar5 = System_String__op_Equality(pSVar9,"DontDestroyOnLoad",(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      pUVar10 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)parent,(MethodInfo *)0x0);
      if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto LAB_041551ab;
      local_40[0].m_Handle = (int32_t)UnityEngine_GameObject__get_scene(pUVar10,(MethodInfo *)0x0);
      pSVar9 = UnityEngine_SceneManagement_Scene__get_name
                         ((UnityEngine_SceneManagement_Scene_Fields)(int32_t)local_40,
                          (MethodInfo *)0x0);
      if (pSVar9 != (System_String_o *)0x0) goto LAB_04154e61;
    }
    if ((pUVar8 == (UnityEngine_Object_o *)0x0) ||
       (__this = UnityEngine_GameObject__get_transform
                           ((UnityEngine_GameObject_o *)pUVar8,(MethodInfo *)0x0),
       __this == (UnityEngine_Transform_o *)0x0)) goto LAB_041551ab;
    UnityEngine_Transform__SetParent(__this,parent,(MethodInfo *)0x0);
  }
  pUVar11 = (UnityEngine_Camera_o *)
            UnityEngine_GameObject__AddComponent<object>
                      ((UnityEngine_GameObject_o *)pUVar8,MethodInfo_Camera_AddComponent_Camera);
  if (pUVar7 == (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)0x0) goto LAB_041551ab;
  pUVar1 = &pUVar7->fields;
  (pUVar7->fields).Camera = pUVar11;
  il2cpp_runtime_glue();
  pUVar11 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
  if (pUVar11 == (UnityEngine_Camera_o *)0x0) {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar11 = (UnityEngine_Camera_o *)UnityEngine_Object__FindObjectOfType<object>(MethodInfo_Camera_FindObjectOfType_Camera);
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (pUVar11 == (UnityEngine_Camera_o *)0x0) goto LAB_041551ab;
    pUVar4 = pUVar1->Camera;
    value = UnityEngine_Camera__get_clearFlags(pUVar11,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Camera_o *)0x0) goto LAB_041551ab;
    UnityEngine_Camera__set_clearFlags(pUVar4,value,(MethodInfo *)0x0);
    pUVar4 = pUVar1->Camera;
    value_01 = UnityEngine_Camera__get_backgroundColor(pUVar11,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Camera_o *)0x0) goto LAB_041551ab;
    UnityEngine_Camera__set_backgroundColor(pUVar4,value_01,(MethodInfo *)0x0);
    pUVar4 = pUVar1->Camera;
    fVar14 = UnityEngine_Camera__get_nearClipPlane(pUVar11,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Camera_o *)0x0) goto LAB_041551ab;
    UnityEngine_Camera__set_nearClipPlane(pUVar4,fVar14,(MethodInfo *)0x0);
    pUVar4 = pUVar1->Camera;
    fVar14 = UnityEngine_Camera__get_farClipPlane(pUVar11,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Camera_o *)0x0) goto LAB_041551ab;
    UnityEngine_Camera__set_farClipPlane(pUVar4,fVar14,(MethodInfo *)0x0);
    x = (UnityEngine_Object_o *)
        UnityEngine_Component__GetComponent<object>((UnityEngine_Component_o *)pUVar11,MethodInfo_Skybox_GetComponent_Skybox)
    ;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      __this_00 = (UnityEngine_Skybox_o *)
                  UnityEngine_GameObject__AddComponent<object>
                            ((UnityEngine_GameObject_o *)pUVar8,MethodInfo_Skybox_AddComponent_Skybox);
      if ((x == (UnityEngine_Object_o *)0x0) ||
         (value_00 = UnityEngine_Skybox__get_material((UnityEngine_Skybox_o *)x,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_Skybox_o *)0x0)) goto LAB_041551ab;
      UnityEngine_Skybox__set_material(__this_00,value_00,(MethodInfo *)0x0);
    }
  }
  if (pUVar1->Camera != (UnityEngine_Camera_o *)0x0) {
    UnityEngine_Camera__set_fieldOfView(pUVar1->Camera,60.0,(MethodInfo *)0x0);
    if (pUVar1->Camera != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__set_orthographic(pUVar1->Camera,0,(MethodInfo *)0x0);
      if (pUVar1->Camera != (UnityEngine_Camera_o *)0x0) {
        UnityEngine_Camera__set_cullingMask(pUVar1->Camera,-1,(MethodInfo *)0x0);
        if (pUVar1->Camera != (UnityEngine_Camera_o *)0x0) {
          UnityEngine_Behaviour__set_enabled
                    ((UnityEngine_Behaviour_o *)pUVar1->Camera,0,(MethodInfo *)0x0);
          pUVar12 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_glue(TypeInfo_RenderTexture);
          UnityEngine_RenderTexture___ctor(pUVar12,0x80,0x80,0x10,(MethodInfo *)0x0);
          ppUVar13 = &(pUVar7->fields).RenderTexture;
          (pUVar7->fields).RenderTexture = pUVar12;
          il2cpp_runtime_glue(ppUVar13);
          pUVar12 = (pUVar7->fields).RenderTexture;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar5 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            return (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)0x0;
          }
          if (*ppUVar13 != (UnityEngine_RenderTexture_o *)0x0) {
            UnityEngine_RenderTexture__set_antiAliasing(*ppUVar13,1,(MethodInfo *)0x0);
            if (*ppUVar13 != (UnityEngine_RenderTexture_o *)0x0) {
              UnityEngine_RenderTexture__Create(*ppUVar13,(MethodInfo *)0x0);
              pSVar9 = local_38;
              if (pUVar1->Camera != (UnityEngine_Camera_o *)0x0) {
                UnityEngine_Camera__set_targetTexture
                          (pUVar1->Camera,(pUVar7->fields).RenderTexture,(MethodInfo *)0x0);
                *(undefined2 *)&(pUVar7->fields).IsInitialized = 1;
                if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                          (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8);
                if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  System_Collections_Generic_Dictionary<object__object>__set_Item
                            (pSVar3,(Il2CppObject *)pSVar9,(Il2CppObject *)pUVar7,MethodInfo_Void_set_Item);
                  return pUVar7;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_041551ab:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CharacterPreviewGenerator$$PositionCameraForCharacter
// il2cpp: void Utility_CharacterPreviewGenerator__PositionCameraForCharacter (UnityEngine_Camera_o* camera, UnityEngine_GameObject_o* character, bool isHuman, const MethodInfo* method);
// 0x41551c0

void Utility_CharacterPreviewGenerator__PositionCameraForCharacter
               (UnityEngine_Camera_o *camera,UnityEngine_GameObject_o *character,
               bool_conflict isHuman,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o value;
  float local_30;
  float local_28;
  float fStack_24;
  
  if (isHuman == 0) {
    local_30 = 3.5;
  }
  else {
    local_30 = 3.0;
  }
  if ((character != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar1 = UnityEngine_GameObject__get_transform(character,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_Transform_o *)0x0)) {
    UVar2 = UnityEngine_Transform__get_position(pUVar1,(MethodInfo *)0x0);
    if ((camera != (UnityEngine_Camera_o *)0x0) &&
       (pUVar1 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)camera,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_Transform_o *)0x0)) {
      local_28 = UVar2.fields.x;
      fStack_24 = UVar2.fields.y;
      value.fields.x = local_28 + 0.0;
      value.fields.z = local_30 + UVar2.fields.z;
      value.fields.y = fStack_24 + 1.23;
      UnityEngine_Transform__set_position(pUVar1,value,(MethodInfo *)0x0);
      pUVar1 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)camera,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        UVar2.fields.z = UVar2.fields.z + 0.0;
        UVar2.fields.y = fStack_24 + 1.18;
        UVar2.fields.x = value.fields.x;
        UnityEngine_Transform__LookAt(pUVar1,UVar2,(MethodInfo *)0x0);
        UnityEngine_Camera__set_fieldOfView(camera,20.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CharacterPreviewGenerator$$CapturePreviewWithCamera
// il2cpp: UnityEngine_Texture2D_o* Utility_CharacterPreviewGenerator__CapturePreviewWithCamera (Utility_CharacterPreviewGenerator_PreviewCameraData_o* cameraData, UnityEngine_GameObject_o* character, int32_t size, bool isHuman, const MethodInfo* method);
// 0x41552e0

UnityEngine_Texture2D_o *
Utility_CharacterPreviewGenerator__CapturePreviewWithCamera
          (Utility_CharacterPreviewGenerator_PreviewCameraData_o *cameraData,
          UnityEngine_GameObject_o *character,int32_t size,bool_conflict isHuman,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Renderer_o *__this;
  UnityEngine_RenderTexture_o *pUVar2;
  undefined1 auVar3 [16];
  UnityEngine_GameObject_o *character_00;
  bool_conflict bVar4;
  int32_t newLayer;
  int iVar5;
  int height;
  UnityEngine_Transform_o *pUVar6;
  System_Object_array *pSVar7;
  UnityEngine_RenderTexture_o *pUVar8;
  UnityEngine_Texture2D_o *__this_00;
  undefined4 in_register_0000000c;
  UnityEngine_Renderer_c *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  uint uVar9;
  UnityEngine_Camera_o *pUVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_GameObject_o *local_a0;
  int32_t local_94;
  undefined8 local_90;
  float local_88;
  undefined8 local_80;
  float local_78;
  undefined8 local_70;
  UnityEngine_GameObject_o **local_68;
  undefined8 *local_60;
  UnityEngine_Quaternion_Fields *local_58;
  undefined8 *local_50;
  UnityEngine_Quaternion_Fields local_48;
  
  method_00 = (UnityEngine_Renderer_c *)CONCAT44(in_register_0000000c,isHuman);
  local_a0 = character;
  local_94 = size;
  if (DAT_05704a01 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SkinnedMeshRenderer);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&"Default");
    DAT_05704a01 = '\x01';
  }
  local_78 = 0.0;
  local_80 = 0;
  local_48 = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  local_88 = 0.0;
  local_90 = 0;
  if (cameraData == (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)0x0) {
    pUVar10 = (UnityEngine_Camera_o *)0x0;
    iVar5 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar10 = (cameraData->fields).Camera;
    iVar5 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar5 == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return (UnityEngine_Texture2D_o *)0x0;
  }
  if (cameraData != (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)0x0) {
    pUVar8 = (cameraData->fields).RenderTexture;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      return (UnityEngine_Texture2D_o *)0x0;
    }
    if ((character != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar6 = UnityEngine_GameObject__get_transform(character,(MethodInfo *)0x0),
       pUVar6 != (UnityEngine_Transform_o *)0x0)) {
      UVar11 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
      local_78 = UVar11.fields.z;
      local_80 = UVar11.fields._0_8_;
      pUVar6 = UnityEngine_GameObject__get_transform(character,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
        local_48 = (UnityEngine_Quaternion_Fields)
                   UnityEngine_Transform__get_rotation(pUVar6,(MethodInfo *)0x0);
        pUVar6 = UnityEngine_GameObject__get_transform(character,(MethodInfo *)0x0);
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          UVar11 = UnityEngine_Transform__get_localScale(pUVar6,(MethodInfo *)0x0);
          local_88 = UVar11.fields.z;
          local_90 = UVar11.fields._0_8_;
          local_70 = 0;
          local_68 = &local_a0;
          local_60 = &local_80;
          local_58 = &local_48;
          local_50 = &local_90;
          newLayer = UnityEngine_LayerMask__NameToLayer("Default",(MethodInfo *)0x0);
          method_01 = extraout_RDX;
          if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
            il2cpp_init_class();
            method_01 = extraout_RDX_00;
          }
          Utility_CharacterPreviewGenerator__SetLayerRecursively(character,newLayer,method_01);
          if (local_a0 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar7 = UnityEngine_GameObject__GetComponentsInChildren<object>(local_a0,MethodInfo_Renderer___GetComponentsInChildren_Renderer);
          if (pSVar7 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          iVar5 = (int)pSVar7->max_length;
          if (iVar5 < 1) {
LAB_041555a6:
            character_00 = local_a0;
            pUVar10 = (cameraData->fields).Camera;
            if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
              il2cpp_init_class();
            }
            Utility_CharacterPreviewGenerator__PositionCameraForCharacter
                      (pUVar10,character_00,isHuman & 0xff,(MethodInfo *)method_00);
            pUVar8 = UnityEngine_RenderTexture__get_active((MethodInfo *)0x0);
            pUVar10 = (cameraData->fields).Camera;
            if (pUVar10 == (UnityEngine_Camera_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            UnityEngine_Camera__Render(pUVar10,(MethodInfo *)0x0);
            UnityEngine_RenderTexture__set_active
                      ((cameraData->fields).RenderTexture,(MethodInfo *)0x0);
            pUVar2 = (cameraData->fields).RenderTexture;
            if (pUVar2 == (UnityEngine_RenderTexture_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            iVar5 = (*(pUVar2->klass->vtable)._5_get_width.methodPtr)
                              (pUVar2,(pUVar2->klass->vtable)._5_get_width.method);
            pUVar2 = (cameraData->fields).RenderTexture;
            if (pUVar2 != (UnityEngine_RenderTexture_o *)0x0) {
              height = (*(pUVar2->klass->vtable)._7_get_height.methodPtr)
                                 (pUVar2,(pUVar2->klass->vtable)._7_get_height.method);
              __this_00 = (UnityEngine_Texture2D_o *)il2cpp_runtime_glue(TypeInfo_Texture2D);
              UnityEngine_Texture2D___ctor(__this_00,iVar5,height,3,0,(MethodInfo *)0x0);
              if (__this_00 != (UnityEngine_Texture2D_o *)0x0) {
                auVar3._4_4_ = (float)height;
                auVar3._0_4_ = (float)iVar5;
                auVar3._8_8_ = 0;
                UnityEngine_Texture2D__ReadPixels
                          (__this_00,(UnityEngine_Rect_o)(auVar3 << 0x40),0,0,(MethodInfo *)0x0);
                UnityEngine_Texture2D__Apply(__this_00,(MethodInfo *)0x0);
                UnityEngine_RenderTexture__set_active(pUVar8,(MethodInfo *)0x0);
                if (iVar5 != local_94) {
                  TextureScaler__ScaleBlocking(__this_00,local_94,local_94,(MethodInfo *)0x0);
                }
                il2cpp_glue_021e0e00(&local_70);
                return __this_00;
              }
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar9 = 0;
          if (iVar5 != 0) {
            do {
              __this = (UnityEngine_Renderer_o *)pSVar7->m_Items[(int)uVar9];
              if (__this == (UnityEngine_Renderer_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              UnityEngine_Renderer__set_enabled(__this,1,(MethodInfo *)0x0);
              method_00 = __this->klass;
              if ((*(byte *)(TypeInfo_SkinnedMeshRenderer + 0x130) <= (method_00->_2).naturalAligment) &&
                 (method_00 = (UnityEngine_Renderer_c *)(method_00->_2).typeHierarchy,
                 *(long *)((long)method_00 + (ulong)*(byte *)(TypeInfo_SkinnedMeshRenderer + 0x130) * 8 + -8) ==
                 TypeInfo_SkinnedMeshRenderer)) {
                UnityEngine_SkinnedMeshRenderer__set_updateWhenOffscreen
                          ((UnityEngine_SkinnedMeshRenderer_o *)__this,1,(MethodInfo *)0x0);
              }
              uVar9 = uVar9 + 1;
              uVar1 = (uint)pSVar7->max_length;
              if ((int)uVar1 <= (int)uVar9) goto LAB_041555a6;
            } while (uVar9 < uVar1);
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CharacterPreviewGenerator$$CleanupPersistentCamera
// il2cpp: void Utility_CharacterPreviewGenerator__CleanupPersistentCamera (System_String_o* cameraId, const MethodInfo* method);
// 0x4155850

void Utility_CharacterPreviewGenerator__CleanupPersistentCamera
               (System_String_o *cameraId,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppClass *x;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Object_o *pUVar4;
  
  if (DAT_05704a02 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_CharacterPreviewGenerator_PreviewCameraData_get);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704a02 = '\x01';
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) goto LAB_041558e5;
LAB_04155879:
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) != 0) goto LAB_04155879;
LAB_041558e5:
    il2cpp_init_class();
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8);
  }
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar1,(Il2CppObject *)cameraId,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8);
    if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pIVar3 = System_Collections_Generic_Dictionary<object__object>__get_Item
                           (pSVar1,(Il2CppObject *)cameraId,MethodInfo_CharacterPreviewGenerator_PreviewCameraData_get),
       pIVar3 != (Il2CppObject *)0x0)) {
      x = pIVar3[1].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (pIVar3[1].klass == (Il2CppClass *)0x0) goto LAB_04155a96;
        UnityEngine_Camera__set_targetTexture
                  ((UnityEngine_Camera_o *)pIVar3[1].klass,(UnityEngine_RenderTexture_o *)0x0,
                   (MethodInfo *)0x0);
        if (pIVar3[1].klass == (Il2CppClass *)0x0) goto LAB_04155a96;
        UnityEngine_Behaviour__set_enabled
                  ((UnityEngine_Behaviour_o *)pIVar3[1].klass,0,(MethodInfo *)0x0);
        if (pIVar3[1].klass == (Il2CppClass *)0x0) goto LAB_04155a96;
        pUVar4 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pIVar3[1].klass,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__DestroyImmediate(pUVar4,(MethodInfo *)0x0);
      }
      pUVar4 = pIVar3[1].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (pIVar3[1].monitor == (UnityEngine_RenderTexture_o *)0x0) goto LAB_04155a96;
        UnityEngine_RenderTexture__Release(pIVar3[1].monitor,(MethodInfo *)0x0);
        pUVar4 = pIVar3[1].monitor;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__DestroyImmediate(pUVar4,(MethodInfo *)0x0);
      }
      *(undefined1 *)((long)&pIVar3[2].klass + 1) = 1;
      if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__Remove
                  (pSVar1,(Il2CppObject *)cameraId,MethodInfo_Boolean_Remove);
        return;
      }
    }
  }
LAB_04155a96:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CharacterPreviewGenerator$$CleanupAllPersistentCameras
// il2cpp: void Utility_CharacterPreviewGenerator__CleanupAllPersistentCameras (const MethodInfo* method);
// 0x4155aa0

void Utility_CharacterPreviewGenerator__CleanupAllPersistentCameras(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar1;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *collection;
  System_Collections_Generic_List_object__o *__this_02;
  MethodInfo *method_00;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  System_String_o *cameraId;
  System_String_o *pSVar4;
  
  if (DAT_05704a03 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05704a03 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  cameraId = (System_String_o *)0x0;
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    collection = System_Collections_Generic_Dictionary<object__object>__get_Keys
                           (__this,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
    System_Collections_Generic_List<object>___ctor
              (__this_02,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_System_String);
    if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 __this_02,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
      while( true ) {
        __this_00.fields._8_8_ = pIVar3;
        __this_00.fields._list = pSVar2;
        __this_00.fields._current = (Il2CppObject *)cameraId;
        method_00 = MethodInfo_Boolean_MoveNext;
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
        if ((char)bVar1 == '\0') break;
        pSVar4 = cameraId;
        if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Utility_CharacterPreviewGenerator__CleanupPersistentCamera(cameraId,method_00);
        cameraId = pSVar4;
      }
      __this_01.fields._8_8_ = pIVar3;
      __this_01.fields._list = pSVar2;
      __this_01.fields._current = (Il2CppObject *)cameraId;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewWithPersistentCamera
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera (System_String_o* cameraId, UnityEngine_GameObject_o* character, System_String_o* fileName, int32_t size, bool isHuman, UnityEngine_Transform_o* cameraParent, const MethodInfo* method);
// 0x4155c90

/* WARNING: Removing unreachable block (ram,0x04155fdc) */

void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera
               (System_String_o *cameraId,UnityEngine_GameObject_o *character,
               System_String_o *fileName,int32_t size,bool_conflict isHuman,
               UnityEngine_Transform_o *cameraParent,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  bool_conflict bVar1;
  Utility_CharacterPreviewGenerator_PreviewCameraData_o *cameraData;
  UnityEngine_Texture2D_o *texture;
  System_String_o *pSVar2;
  undefined8 *puVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  undefined4 in_register_00000084;
  MethodInfo *method_01;
  uint uVar4;
  uint uVar5;
  char local_79 [9];
  Il2CppObject *local_70;
  System_String_o *local_68;
  int32_t local_60;
  uint local_5c;
  UnityEngine_GameObject_o *local_58;
  undefined8 local_50;
  Il2CppObject **local_48;
  bool_conflict *local_40;
  System_String_o **local_38;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_00000084,isHuman);
  local_68 = fileName;
  local_60 = size;
  local_58 = character;
  if (DAT_05704a04 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&"CharacterPreview_");
    il2cpp_init_method_metadata(&"Human");
    il2cpp_init_method_metadata(&"_");
    il2cpp_init_method_metadata(&"Titans");
    il2cpp_init_method_metadata(&"Preset");
    il2cpp_init_method_metadata(&"");
    DAT_05704a04 = '\x01';
  }
  local_70 = (Il2CppObject *)0x0;
  local_79[0] = 0;
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  local_70 = (Il2CppObject *)**(undefined8 **)(TypeInfo_CharacterPreviewGenerator + 0xb8);
  local_79[0] = '\0';
  local_5c = isHuman;
  System_Threading_Monitor__Enter(local_70,(bool_conflict *)local_79,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(TypeInfo_CharacterPreviewGenerator + 0xb8) ==
      (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = System_Collections_Generic_HashSet<object>__Contains
                    ((System_Collections_Generic_HashSet_object__o *)
                     **(undefined8 **)(TypeInfo_CharacterPreviewGenerator + 0xb8),(Il2CppObject *)local_68,MethodInfo_Boolean_Contains);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(TypeInfo_CharacterPreviewGenerator + 0xb8) ==
        (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_HashSet<object>__Add
              ((System_Collections_Generic_HashSet_object__o *)
               **(undefined8 **)(TypeInfo_CharacterPreviewGenerator + 0xb8),(Il2CppObject *)local_68,MethodInfo_Boolean_Add);
    uVar5 = 4;
    uVar4 = 4;
    method_00 = extraout_RDX_00;
  }
  else {
    uVar5 = 3;
    uVar4 = 3;
    method_00 = extraout_RDX;
  }
  if (local_79[0] != '\0') {
    System_Threading_Monitor__Exit(local_70,(MethodInfo *)0x0);
    method_00 = extraout_RDX_01;
    uVar4 = uVar5;
  }
  if ((uVar4 | 4) == 4) {
    local_50 = 0;
    local_48 = &local_70;
    local_38 = &local_68;
    local_40 = (bool_conflict *)local_79;
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_init_class();
      method_00 = extraout_RDX_02;
    }
    cameraData = Utility_CharacterPreviewGenerator__GetOrCreatePersistentCamera
                           (cameraId,cameraParent,method_00);
    uVar4 = local_5c;
    texture = Utility_CharacterPreviewGenerator__CapturePreviewWithCamera
                        (cameraData,local_58,local_60,local_5c & 0xff,method_01);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if ((char)bVar1 == '\0') {
      if (local_68 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar2 = System_String__Replace(local_68,"Preset","",(MethodInfo *)0x0);
      if ((char)uVar4 == '\0') {
        puVar3 = &"Titans";
      }
      else {
        puVar3 = &"Human";
      }
      pSVar2 = System_String__Concat
                         ("CharacterPreview_",(System_String_o *)*puVar3,"_",pSVar2,
                          (MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      ApplicationManagers_ResourceManager__SetExternalTexture(pSVar2,texture,1,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this = *(System_Collections_Generic_HashSet_object__o **)
                (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x18);
      if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_HashSet<object>__Add(__this,(Il2CppObject *)pSVar2,MethodInfo_Boolean_Add);
    }
    il2cpp_glue_021e0eb0(&local_50);
  }
  return;
}


// Utility.CharacterPreviewGenerator$$SaveCachedPreviewsToDisk
// il2cpp: void Utility_CharacterPreviewGenerator__SaveCachedPreviewsToDisk (const MethodInfo* method);
// 0x4156190

void Utility_CharacterPreviewGenerator__SaveCachedPreviewsToDisk(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  UnityEngine_Texture2D_o *tex;
  System_String_array *source;
  System_Collections_Generic_IEnumerable_TSource__o *values;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_Byte_array *bytes;
  MethodInfo *method_00;
  System_Collections_Generic_HashSet_T__o *pSVar7;
  Il2CppRGCTXData *pIVar8;
  _union_329995 key;
  _union_329995 _Var9;
  undefined1 local_48 [16];
  _union_329995 local_38;
  
  if (DAT_05704a05 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Skip_String);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_System_String__GetEnumer);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Path);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&"Human");
    il2cpp_init_method_metadata(&"_");
    il2cpp_init_method_metadata(&"Titans");
    il2cpp_init_method_metadata(&".png");
    il2cpp_init_method_metadata(&"Preset");
    DAT_05704a05 = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x80);
  if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = System_IO_Path__Combine(pSVar3,"Human",(MethodInfo *)0x0);
  pSVar4 = System_IO_Path__Combine
                     (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x80),"Titans",
                      (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x18)
  ;
  if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_HashSet<object>__GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,__this,MethodInfo_HashSet_1_T__Enumerator_System_String__GetEnumer);
  pSVar7 = (System_Collections_Generic_HashSet_T__o *)local_48._0_8_;
  pIVar8 = (Il2CppRGCTXData *)local_48._8_8_;
  while( true ) {
    do {
      key = local_38;
      __this_00.fields._8_8_ = pIVar8;
      __this_00.fields._set = pSVar7;
      __this_00.fields._current = key.genericMethod;
      bVar2 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185890 *)&stack0xffffffffffffff88);
      if ((char)bVar2 == '\0') {
        __this_01.fields._8_8_ = pIVar8;
        __this_01.fields._set = pSVar7;
        __this_01.fields._current = key.genericMethod;
        method_00 = MethodInfo_Void_Dispose;
        System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                  (__this_01,(MethodInfo_3185880 *)&stack0xffffffffffffff88);
        if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057049fd == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
          DAT_057049fd = '\x01';
          iVar1 = *(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
        }
        Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(1,method_00);
        Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(0,method_00);
        return;
      }
      _Var9 = key;
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      tex = ApplicationManagers_ResourceManager__GetExternalTexture
                      (key.genericMethod,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)tex,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      local_38 = _Var9;
    } while ((char)bVar2 == '\0');
    if (key.genericMethod == (System_String_o *)0x0) break;
    source = System_String__Split(key.genericMethod,0x5f,0,(MethodInfo *)0x0);
    if (source == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    local_38 = _Var9;
    if (2 < (int)source->max_length) {
      bVar2 = System_String__op_Equality(source->m_Items[1],"Human",(MethodInfo *)0x0);
      values = System_Linq_Enumerable__Skip<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,2,MethodInfo_IEnumerable_1_System_String__Skip_String
                         );
      pSVar5 = System_String__Join("_",
                                   (System_Collections_Generic_IEnumerable_string__o *)values,
                                   (MethodInfo *)0x0);
      pSVar6 = pSVar4;
      if ((char)bVar2 != '\0') {
        pSVar6 = pSVar3;
      }
      bVar2 = System_IO_Directory__Exists(pSVar6,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        System_IO_Directory__CreateDirectory(pSVar6,(MethodInfo *)0x0);
      }
      pSVar5 = System_String__Concat("Preset",pSVar5,".png",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar6 = System_IO_Path__Combine(pSVar6,pSVar5,(MethodInfo *)0x0);
      bytes = UnityEngine_ImageConversion__EncodeToPNG(tex,(MethodInfo *)0x0);
      System_IO_File__WriteAllBytes(pSVar6,bytes,(MethodInfo *)0x0);
      local_38 = _Var9;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CharacterPreviewGenerator$$ClearSessionGeneratedPreviews
// il2cpp: void Utility_CharacterPreviewGenerator__ClearSessionGeneratedPreviews (const MethodInfo* method);
// 0x4156760

void Utility_CharacterPreviewGenerator__ClearSessionGeneratedPreviews(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_HashSet_Enumerator_T__o __this;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  bool_conflict bVar2;
  UnityEngine_Texture2D_o *x;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar3;
  Il2CppType *pIVar4;
  System_String_o *key;
  System_String_o *pSVar5;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (DAT_05704a06 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_System_String__GetEnumer);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    DAT_05704a06 = '\x01';
  }
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x18)
  ;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,pSVar1,MethodInfo_HashSet_1_T__Enumerator_System_String__GetEnumer);
    pSVar3 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_48._0_8_;
    pIVar4 = (Il2CppType *)local_48._8_8_;
    key = local_38;
    while( true ) {
      __this.fields._8_8_ = pIVar4;
      __this.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar3;
      __this.fields._current = (Il2CppObject *)key;
      bVar2 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                        (__this,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
      if ((char)bVar2 == '\0') break;
      pSVar5 = key;
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      x = ApplicationManagers_ResourceManager__GetExternalTexture(key,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__DestroyImmediate((UnityEngine_Object_o *)x,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      ApplicationManagers_ResourceManager__RemoveExternalTexture(key,(MethodInfo *)0x0);
      key = pSVar5;
    }
    __this_00.fields._8_8_ = pIVar4;
    __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar3;
    __this_00.fields._current = (Il2CppObject *)key;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_00,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = *(System_Collections_Generic_HashSet_object__o **)
              (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x18);
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet<object>__Clear(pSVar1,MethodInfo_Void_Clear);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CharacterPreviewGenerator$$ClearNonPersistentPreviews
// il2cpp: void Utility_CharacterPreviewGenerator__ClearNonPersistentPreviews (const MethodInfo* method);
// 0x4156a20

void Utility_CharacterPreviewGenerator__ClearNonPersistentPreviews(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704a07 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    DAT_05704a07 = '\x01';
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  if (iVar1 != 0) {
    ApplicationManagers_ResourceManager__ClearNonPersistentTextures((MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  ApplicationManagers_ResourceManager__ClearNonPersistentTextures((MethodInfo *)0x0);
  return;
}


// Utility.CharacterPreviewGenerator$$GetCacheInfo
// il2cpp: void Utility_CharacterPreviewGenerator__GetCacheInfo (int32_t* totalCached, int32_t* persistent, const MethodInfo* method);
// 0x4156a80

void Utility_CharacterPreviewGenerator__GetCacheInfo
               (int32_t *totalCached,int32_t *persistent,MethodInfo *method)

{
  int32_t iVar1;
  
  if (DAT_05704a08 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    DAT_05704a08 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar1 = ApplicationManagers_ResourceManager__GetExternalTextureCacheCount((MethodInfo *)0x0);
  *totalCached = iVar1;
  iVar1 = ApplicationManagers_ResourceManager__GetPersistentTextureCacheCount((MethodInfo *)0x0);
  *persistent = iVar1;
  return;
}


// Utility.CharacterPreviewGenerator$$CaptureCurrentCharacterPreview
// il2cpp: void Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview (bool isHuman, const MethodInfo* method);
// 0x4156ae0

void Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview
               (bool_conflict isHuman,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *x_00;
  long lVar2;
  Settings_SetSettingsContainer_T__o *pSVar3;
  UnityEngine_Component_o *__this;
  Settings_StringSetting_o *pSVar4;
  UnityEngine_Object_c *x_01;
  bool_conflict bVar5;
  Settings_BaseSetSetting_o *pSVar6;
  UnityEngine_GameObject_o *character;
  System_String_o *fileName;
  System_String_o *cameraId;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (DAT_05704a09 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TitanCustomSet);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"TitanPreview");
    il2cpp_init_method_metadata(&"HumanPreview");
    il2cpp_init_method_metadata(&"Preset");
    DAT_05704a09 = '\x01';
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (x != (UnityEngine_Object_o *)0x0) {
    bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
    if (((x->klass->_2).naturalAligment < bVar1) ||
       ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CharacterEditorGameManager)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(x);
    }
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if ((char)isHuman == '\0') {
      if (x == (UnityEngine_Object_o *)0x0) goto LAB_04156e64;
      x_01 = x[2].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
      ;
      if ((char)bVar5 == '\0') {
        return;
      }
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
      if ((lVar2 == 0) ||
         (pSVar3 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
         pSVar3 == (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_04156e64;
      pSVar6 = Settings_SetSettingsContainer<object>__GetSelectedSet(pSVar3,MethodInfo_BaseSetSetting_GetSelectedSet);
      if (pSVar6 != (Settings_BaseSetSetting_o *)0x0) {
        bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
        if (((pSVar6->klass->_2).naturalAligment < bVar1) ||
           ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_TitanCustomSet)) goto LAB_04156e71;
      }
      if ((x[2].klass == (UnityEngine_Object_c *)0x0) ||
         ((character = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)x[2].klass,(MethodInfo *)0x0),
          pSVar6 == (Settings_BaseSetSetting_o *)0x0 ||
          (pSVar4 = (pSVar6->fields).UniqueId, pSVar4 == (Settings_StringSetting_o *)0x0))))
      goto LAB_04156e64;
      fileName = System_String__Concat("Preset",(pSVar4->fields)._value,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = 0;
      cameraId = "TitanPreview";
    }
    else {
      if (x == (UnityEngine_Object_o *)0x0) {
LAB_04156e64:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      x_00 = (UnityEngine_Object_o *)x[1].fields.m_CachedPtr;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        return;
      }
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
      if ((lVar2 == 0) ||
         (pSVar3 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
         pSVar3 == (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_04156e64;
      pSVar6 = Settings_SetSettingsContainer<object>__GetSelectedSet(pSVar3,MethodInfo_BaseSetSetting_GetSelectedSet);
      if (pSVar6 != (Settings_BaseSetSetting_o *)0x0) {
        bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
        if (((pSVar6->klass->_2).naturalAligment < bVar1) ||
           ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) {
LAB_04156e71:
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pSVar6);
        }
      }
      __this = (UnityEngine_Component_o *)x[1].fields.m_CachedPtr;
      if (((__this == (UnityEngine_Component_o *)0x0) ||
          (character = UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0),
          pSVar6 == (Settings_BaseSetSetting_o *)0x0)) ||
         (pSVar4 = (pSVar6->fields).UniqueId, pSVar4 == (Settings_StringSetting_o *)0x0))
      goto LAB_04156e64;
      fileName = System_String__Concat("Preset",(pSVar4->fields)._value,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = 1;
      cameraId = "HumanPreview";
    }
    Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera
              (cameraId,character,fileName,0x80,bVar5,(UnityEngine_Transform_o *)0x0,
               in_stack_ffffffffffffffd8);
  }
  return;
}


// Utility.CharacterPreviewGenerator$$InitializePreviewSystem
// il2cpp: void Utility_CharacterPreviewGenerator__InitializePreviewSystem (const MethodInfo* method);
// 0x4156e80

void Utility_CharacterPreviewGenerator__InitializePreviewSystem(MethodInfo *method)

{
  int iVar1;
  MethodInfo *in_RSI;
  
  if (DAT_05704a0a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    DAT_05704a0a = '\x01';
    iVar1 = *(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_057049fd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    DAT_057049fd = '\x01';
    iVar1 = *(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(1,in_RSI);
  Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(0,in_RSI);
  return;
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewForHumanSet
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet (UI_CharacterEditorHumanMenu_o* humanMenu, bool isRebuild, const MethodInfo* method);
// 0x4156f20

void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet
               (UI_CharacterEditorHumanMenu_o *humanMenu,bool_conflict isRebuild,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_SetSettingsContainer_T__o *__this;
  Settings_BoolSetting_o *__this_00;
  Settings_IntSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  bool_conflict bVar5;
  MethodInfo *in_RAX;
  Settings_HumanCustomSet_o *customSet;
  Il2CppObject *__this_01;
  UnityEngine_GameObject_o *character;
  System_String_o *fileName;
  UnityEngine_Transform_o *cameraParent;
  int32_t weapon;
  Settings_HumanCustomSet_o *pSVar6;
  
  if (DAT_05704a0b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"HumanPreview");
    il2cpp_init_method_metadata(&"Preset");
    DAT_05704a0b = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar2 != 0) &&
     (__this = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
     __this != (Settings_SetSettingsContainer_T__o *)0x0)) {
    customSet = (Settings_HumanCustomSet_o *)
                Settings_SetSettingsContainer<object>__GetSelectedSet(__this,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (customSet != (Settings_HumanCustomSet_o *)0x0) {
      bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      pSVar6 = customSet;
      if (((customSet->klass->_2).naturalAligment < bVar1) ||
         ((customSet->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet))
      goto LAB_04157292;
    }
    pSVar6 = *(Settings_HumanCustomSet_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pSVar6 != (Settings_HumanCustomSet_o *)0x0) {
      bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
      if (((pSVar6->klass->_2).naturalAligment < bVar1) ||
         ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CharacterEditorGameManager)) {
LAB_04157292:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar6);
      }
      __this_00 = (pSVar6->fields).Preset;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      weapon = 0;
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)humanMenu,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if ((humanMenu == (UI_CharacterEditorHumanMenu_o *)0x0) ||
           (pSVar3 = (humanMenu->fields).Weapon, pSVar3 == (Settings_IntSetting_o *)0x0))
        goto LAB_0415728a;
        weapon = (pSVar3->fields)._value;
      }
      if ((char)isRebuild != '\0') {
        if ((__this_00 == (Settings_BoolSetting_o *)0x0) ||
           (__this_00[2].monitor == (Characters_HumanSetup_o *)0x0)) goto LAB_0415728a;
        Characters_HumanSetup__Load(__this_00[2].monitor,customSet,weapon,0,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)humanMenu,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05704a0c == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_GeneratePreviewForHumanSetCoroutine_d__21);
            DAT_05704a0c = '\x01';
          }
          __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GeneratePreviewForHumanSetCoroutine_d__21);
          System_Object___ctor(__this_01,(MethodInfo *)0x0);
          *(undefined4 *)&__this_01[1].klass = 0;
          if (__this_01 != (Il2CppObject *)0x0) {
            __this_01[2].klass = (Il2CppClass *)humanMenu;
            il2cpp_runtime_glue(__this_01 + 2,humanMenu);
            *(undefined1 *)&__this_01[2].monitor = 0;
            if (humanMenu != (UI_CharacterEditorHumanMenu_o *)0x0) {
              UnityEngine_MonoBehaviour__StartCoroutine
                        ((UnityEngine_MonoBehaviour_o *)humanMenu,
                         (System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
              return;
            }
          }
          goto LAB_0415728a;
        }
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)humanMenu,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if ((((__this_00 == (Settings_BoolSetting_o *)0x0) ||
             (character = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
             customSet == (Settings_HumanCustomSet_o *)0x0)) ||
            (pSVar4 = (customSet->fields).UniqueId, pSVar4 == (Settings_StringSetting_o *)0x0)) ||
           (fileName = System_String__Concat("Preset",(pSVar4->fields)._value,(MethodInfo *)0x0)
           , humanMenu == (UI_CharacterEditorHumanMenu_o *)0x0)) goto LAB_0415728a;
        cameraParent = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)humanMenu,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera
                  ("HumanPreview",character,fileName,0x80,1,cameraParent,in_RAX);
      }
      return;
    }
  }
LAB_0415728a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewForHumanSetCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine (UI_CharacterEditorHumanMenu_o* humanMenu, bool isRebuild, const MethodInfo* method);
// 0x41572a0

System_Collections_IEnumerator_o *
Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine
          (UI_CharacterEditorHumanMenu_o *humanMenu,bool_conflict isRebuild,MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704a0c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GeneratePreviewForHumanSetCoroutine_d__21);
    DAT_05704a0c = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GeneratePreviewForHumanSetCoroutine_d__21);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[2].klass = (Il2CppClass *)humanMenu;
    il2cpp_runtime_glue(__this + 2,humanMenu);
    *(char *)&__this[2].monitor = (char)isRebuild;
    return (System_Collections_IEnumerator_o *)__this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewForTitanSetCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine (UI_CharacterEditorTitanMenu_o* titanMenu, bool isRebuild, const MethodInfo* method);
// 0x4157340

System_Collections_IEnumerator_o *
Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine
          (UI_CharacterEditorTitanMenu_o *titanMenu,bool_conflict isRebuild,MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704a0d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GeneratePreviewForTitanSetCoroutine_d__22);
    DAT_05704a0d = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GeneratePreviewForTitanSetCoroutine_d__22);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[2].klass = (Il2CppClass *)titanMenu;
    il2cpp_runtime_glue(__this + 2,titanMenu);
    *(char *)&__this[2].monitor = (char)isRebuild;
    return (System_Collections_IEnumerator_o *)__this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewWithDebounce
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewWithDebounce (UnityEngine_MonoBehaviour_o* coroutineRunner, System_String_o* debounceKey, System_Action_o* generateAction, float delaySeconds, const MethodInfo* method);
// 0x41573e0

void Utility_CharacterPreviewGenerator__GeneratePreviewWithDebounce
               (UnityEngine_MonoBehaviour_o *coroutineRunner,System_String_o *debounceKey,
               System_Action_o *generateAction,float delaySeconds,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Coroutine_o *pUVar4;
  
  if (DAT_05704a0e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Coroutine_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_05704a0e = '\x01';
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) goto LAB_04157477;
LAB_04157418:
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x10);
  }
  else {
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) != 0) goto LAB_04157418;
LAB_04157477:
    il2cpp_init_class();
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x10);
  }
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar1,(Il2CppObject *)debounceKey,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 != '\0') {
      if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x10);
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_04157629;
      pIVar3 = System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar1,(Il2CppObject *)debounceKey,MethodInfo_Coroutine_get_Item);
      if (pIVar3 != (Il2CppObject *)0x0) {
        if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x10);
        if ((pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
           (pUVar4 = (UnityEngine_Coroutine_o *)
                     System_Collections_Generic_Dictionary<object__object>__get_Item
                               (pSVar1,(Il2CppObject *)debounceKey,MethodInfo_Coroutine_get_Item),
           coroutineRunner == (UnityEngine_MonoBehaviour_o *)0x0)) goto LAB_04157629;
        UnityEngine_MonoBehaviour__StopCoroutine(coroutineRunner,pUVar4,(MethodInfo *)0x0);
      }
    }
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_init_class();
      pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x10);
    }
    else {
      pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x10);
    }
    if (DAT_05704a0f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_DebouncedPreviewCoroutine_d__24);
      DAT_05704a0f = '\x01';
    }
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_DebouncedPreviewCoroutine_d__24);
    System_Object___ctor(pIVar3,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar3[1].klass = 0;
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar3[3].klass = (Il2CppClass *)debounceKey;
      il2cpp_runtime_glue(pIVar3 + 3,debounceKey);
      pIVar3[2].monitor = generateAction;
      il2cpp_runtime_glue(&pIVar3[2].monitor,generateAction);
      *(float *)&pIVar3[2].klass = delaySeconds;
      if ((coroutineRunner != (UnityEngine_MonoBehaviour_o *)0x0) &&
         (pUVar4 = UnityEngine_MonoBehaviour__StartCoroutine
                             (coroutineRunner,(System_Collections_IEnumerator_o *)pIVar3,
                              (MethodInfo *)0x0),
         pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (pSVar1,(Il2CppObject *)debounceKey,(Il2CppObject *)pUVar4,MethodInfo_Void_set_Item);
        return;
      }
    }
  }
LAB_04157629:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CharacterPreviewGenerator$$DebouncedPreviewCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine (System_String_o* debounceKey, System_Action_o* generateAction, float delaySeconds, const MethodInfo* method);
// 0x4157630

System_Collections_IEnumerator_o *
Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine
          (System_String_o *debounceKey,System_Action_o *generateAction,float delaySeconds,
          MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704a0f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebouncedPreviewCoroutine_d__24);
    DAT_05704a0f = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_DebouncedPreviewCoroutine_d__24);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[3].klass = (Il2CppClass *)debounceKey;
    il2cpp_runtime_glue(__this + 3,debounceKey);
    __this[2].monitor = generateAction;
    il2cpp_runtime_glue(&__this[2].monitor,generateAction);
    *(float *)&__this[2].klass = delaySeconds;
    return (System_Collections_IEnumerator_o *)__this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewForTitanSet
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet (UI_CharacterEditorTitanMenu_o* titanMenu, bool isRebuild, const MethodInfo* method);
// 0x41576f0

void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet
               (UI_CharacterEditorTitanMenu_o *titanMenu,bool_conflict isRebuild,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_SetSettingsContainer_T__o *__this;
  Settings_StringSetting_o *pSVar3;
  bool_conflict bVar4;
  MethodInfo *in_RAX;
  Settings_TitanCustomSet_o *set;
  Il2CppObject *__this_00;
  UnityEngine_GameObject_o *character;
  System_String_o *fileName;
  UnityEngine_Transform_o *cameraParent;
  Settings_TitanCustomSet_o *pSVar5;
  
  if (DAT_05704a10 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TitanCustomSet);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"TitanPreview");
    il2cpp_init_method_metadata(&"Preset");
    DAT_05704a10 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
  if ((lVar2 != 0) &&
     (__this = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
     __this != (Settings_SetSettingsContainer_T__o *)0x0)) {
    set = (Settings_TitanCustomSet_o *)
          Settings_SetSettingsContainer<object>__GetSelectedSet(__this,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (set != (Settings_TitanCustomSet_o *)0x0) {
      bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
      pSVar5 = set;
      if (((set->klass->_2).naturalAligment < bVar1) ||
         ((set->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_TitanCustomSet)) goto LAB_041579fe;
    }
    pSVar5 = *(Settings_TitanCustomSet_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pSVar5 != (Settings_TitanCustomSet_o *)0x0) {
      bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
      if (((pSVar5->klass->_2).naturalAligment < bVar1) ||
         ((pSVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CharacterEditorGameManager)) {
LAB_041579fe:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar5);
      }
      pSVar3 = (pSVar5->fields).UniqueId;
      if ((char)isRebuild != '\0') {
        if ((pSVar3 == (Settings_StringSetting_o *)0x0) ||
           (pSVar3[1].monitor == (Characters_BasicTitanSetup_o *)0x0)) goto LAB_041579f6;
        Characters_BasicTitanSetup__Load(pSVar3[1].monitor,set,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)titanMenu,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05704a0d == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_GeneratePreviewForTitanSetCoroutine_d__22);
            DAT_05704a0d = '\x01';
          }
          __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GeneratePreviewForTitanSetCoroutine_d__22);
          System_Object___ctor(__this_00,(MethodInfo *)0x0);
          *(undefined4 *)&__this_00[1].klass = 0;
          if (__this_00 != (Il2CppObject *)0x0) {
            __this_00[2].klass = (Il2CppClass *)titanMenu;
            il2cpp_runtime_glue(__this_00 + 2,titanMenu);
            *(undefined1 *)&__this_00[2].monitor = 0;
            if (titanMenu != (UI_CharacterEditorTitanMenu_o *)0x0) {
              UnityEngine_MonoBehaviour__StartCoroutine
                        ((UnityEngine_MonoBehaviour_o *)titanMenu,
                         (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
              return;
            }
          }
          goto LAB_041579f6;
        }
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)titanMenu,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if ((((pSVar3 == (Settings_StringSetting_o *)0x0) ||
             (character = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0),
             set == (Settings_TitanCustomSet_o *)0x0)) ||
            (pSVar3 = (set->fields).UniqueId, pSVar3 == (Settings_StringSetting_o *)0x0)) ||
           (fileName = System_String__Concat("Preset",(pSVar3->fields)._value,(MethodInfo *)0x0)
           , titanMenu == (UI_CharacterEditorTitanMenu_o *)0x0)) goto LAB_041579f6;
        cameraParent = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)titanMenu,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera
                  ("TitanPreview",character,fileName,0x80,0,cameraParent,in_RAX);
      }
      return;
    }
  }
LAB_041579f6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewWithPersistentCameraCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine (System_String_o* cameraId, UnityEngine_GameObject_o* character, System_String_o* fileName, int32_t size, bool isHuman, UnityEngine_Transform_o* cameraParent, const MethodInfo* method);
// 0x4157a10

System_Collections_IEnumerator_o *
Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine
          (System_String_o *cameraId,UnityEngine_GameObject_o *character,System_String_o *fileName,
          int32_t size,bool_conflict isHuman,UnityEngine_Transform_o *cameraParent,
          MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704a11 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GeneratePreviewWithPersistentCameraCoroutine_d);
    DAT_05704a11 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GeneratePreviewWithPersistentCameraCoroutine_d);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[2].klass = (Il2CppClass *)cameraId;
    il2cpp_runtime_glue(__this + 2,cameraId);
    __this[2].monitor = character;
    il2cpp_runtime_glue(&__this[2].monitor,character);
    __this[3].klass = (Il2CppClass *)fileName;
    il2cpp_runtime_glue(__this + 3,fileName);
    *(int32_t *)&__this[3].monitor = size;
    *(char *)((long)&__this[3].monitor + 4) = (char)isHuman;
    __this[4].klass = (Il2CppClass *)cameraParent;
    il2cpp_runtime_glue(__this + 4,cameraParent);
    return (System_Collections_IEnumerator_o *)__this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.CharacterPreviewGenerator$$.cctor
// il2cpp: void Utility_CharacterPreviewGenerator___cctor (const MethodInfo* method);
// 0x4157b00

void Utility_CharacterPreviewGenerator___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  
  if (DAT_05704a12 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_Coroutine);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Utility_CharacterPrev);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Coroutine);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__PreviewCameraData);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    DAT_05704a12 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(pSVar2,MethodInfo_HashSet_1_System_String);
  **(undefined8 **)(TypeInfo_CharacterPreviewGenerator + 0xb8) = pSVar2;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CharacterPreviewGenerator + 0xb8),pSVar2);
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__PreviewCameraData);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar3,MethodInfo_Dictionary_2_System_String_Utility_CharacterPrev);
  lVar1 = *(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 8) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 8,pSVar3);
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__Coroutine);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar3,MethodInfo_Dictionary_2_System_String_UnityEngine_Coroutine);
  lVar1 = *(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x10) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x10,pSVar3);
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(pSVar2,MethodInfo_HashSet_1_System_String);
  lVar1 = *(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar1 + 0x18) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x18,pSVar2);
  return;
}


