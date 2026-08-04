// Type: Utility.CharacterPreviewGenerator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/CharacterPreviewGenerator.cs
// Prior real C# source: none
// --------------------------------

// Utility.CharacterPreviewGenerator.PreviewCameraData$$.ctor
// il2cpp: void Utility_CharacterPreviewGenerator_PreviewCameraData___ctor (Utility_CharacterPreviewGenerator_PreviewCameraData_o* __this, const MethodInfo* method);
// 0x4485ad0

void Utility_CharacterPreviewGenerator_PreviewCameraData___ctor
               (Utility_CharacterPreviewGenerator_PreviewCameraData_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$.ctor
// il2cpp: void Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24___ctor (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4487ff0

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
// 0x44885a0

void Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_IDisposable_Dispose
               (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *__this,
               MethodInfo *method)

{
  return;
}


// Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$MoveNext
// il2cpp: bool Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__MoveNext (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, const MethodInfo* method);
// 0x44885b0

bool_conflict
Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__MoveNext
          (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *__this,MethodInfo *method)

{
  float seconds;
  int iVar1;
  System_Action_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  bool_conflict bVar4;
  UnityEngine_WaitForSeconds_o *__this_00;
  long lVar5;
  
  if (g_data_057ae8ca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForSeconds);
    g_data_057ae8ca = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).delaySeconds;
    __this_00 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
  }
  (__this->fields).__1__state = -1;
  pSVar2 = (__this->fields).generateAction;
  if (pSVar2 != (System_Action_o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
  }
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x10);
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar3,(Il2CppObject *)(__this->fields).debounceKey,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 == '\0') {
      return 0;
    }
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x10);
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar3,(Il2CppObject *)(__this->fields).debounceKey,(Il2CppObject *)0x0,MethodInfo_Void_set_Item);
      return 0;
    }
  }
  lVar5 = 0;
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)*(undefined8 *)(lVar5 + 0x18);
}


// Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, const MethodInfo* method);
// 0x4488710

Il2CppObject *
Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_Collections_IEnumerator_Reset (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, const MethodInfo* method);
// 0x4488720

void Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_Collections_IEnumerator_Reset
               (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *__this,
               MethodInfo *method)

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


// Utility.CharacterPreviewGenerator.<DebouncedPreviewCoroutine>d__24$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_Collections_IEnumerator_get_Current (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o* __this, const MethodInfo* method);
// 0x4488760

Il2CppObject *
Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24__System_Collections_IEnumerator_get_Current
          (Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine_d__24_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$.ctor
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21___ctor (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4487c40

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
// 0x4488770

void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_IDisposable_Dispose
               (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o *__this,
               MethodInfo *method)

{
  return;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$MoveNext
// il2cpp: bool Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__MoveNext (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x4488780

bool_conflict
Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__MoveNext
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
  
  if (g_data_057ae8cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae8cb = '\x01';
    in_RDX = extraout_RDX;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    humanMenu = (__this->fields).humanMenu;
    bVar2 = (__this->fields).isRebuild;
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_RDX = extraout_RDX_00;
    }
    Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet(humanMenu,(uint)(byte)bVar2,in_RDX);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar3 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar3;
    uVar4 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar3);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
  }
  return 0;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x4488850

Il2CppObject *
Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_Collections_IEnumerator_Reset (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x4488860

void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_Collections_IEnumerator_Reset
               (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o *__this,
               MethodInfo *method)

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


// Utility.CharacterPreviewGenerator.<GeneratePreviewForHumanSetCoroutine>d__21$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_Collections_IEnumerator_get_Current (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o* __this, const MethodInfo* method);
// 0x44888a0

Il2CppObject *
Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21__System_Collections_IEnumerator_get_Current
          (Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine_d__21_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$.ctor
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22___ctor (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4487ce0

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
// 0x44888b0

void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_IDisposable_Dispose
               (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o *__this,
               MethodInfo *method)

{
  return;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$MoveNext
// il2cpp: bool Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__MoveNext (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, const MethodInfo* method);
// 0x44888c0

bool_conflict
Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__MoveNext
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
  
  if (g_data_057ae8cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae8cc = '\x01';
    in_RDX = extraout_RDX;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    titanMenu = (__this->fields).titanMenu;
    bVar2 = (__this->fields).isRebuild;
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_RDX = extraout_RDX_00;
    }
    Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet(titanMenu,(uint)(byte)bVar2,in_RDX);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar3 = (Il2CppObject *)Utility_Util__WaitForFrames(3,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar3;
    uVar4 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar3);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
  }
  return 0;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, const MethodInfo* method);
// 0x4488990

Il2CppObject *
Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_Collections_IEnumerator_Reset (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, const MethodInfo* method);
// 0x44889a0

void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_Collections_IEnumerator_Reset
               (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o *__this,
               MethodInfo *method)

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


// Utility.CharacterPreviewGenerator.<GeneratePreviewForTitanSetCoroutine>d__22$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_Collections_IEnumerator_get_Current (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o* __this, const MethodInfo* method);
// 0x44889e0

Il2CppObject *
Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22__System_Collections_IEnumerator_get_Current
          (Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine_d__22_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$.ctor
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26___ctor (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4488400

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
// 0x44889f0

void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_IDisposable_Dispose
               (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o
                *__this,MethodInfo *method)

{
  return;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$MoveNext
// il2cpp: bool Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__MoveNext (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, const MethodInfo* method);
// 0x4488a00

bool_conflict
Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__MoveNext
          (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o *__this,
          MethodInfo *method)

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
  
  if (g_data_057ae8cd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057ae8cd = '\x01';
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
      il2cpp_runtime_helper_02337ed0();
    }
    Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera
              (cameraId,character,fileName,size,(uint)(byte)bVar2,cameraParent,in_RAX);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar3 = (Il2CppObject *)Utility_Util__WaitForFrames(2,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar3;
    uVar4 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar3);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
  }
  return 0;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, const MethodInfo* method);
// 0x4488af0

Il2CppObject *
Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_Collections_IEnumerator_Reset (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, const MethodInfo* method);
// 0x4488b00

void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_Collections_IEnumerator_Reset
               (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o
                *__this,MethodInfo *method)

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


// Utility.CharacterPreviewGenerator.<GeneratePreviewWithPersistentCameraCoroutine>d__26$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_Collections_IEnumerator_get_Current (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o* __this, const MethodInfo* method);
// 0x4488b40

Il2CppObject *
Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26__System_Collections_IEnumerator_get_Current
          (Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine_d__26_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.CharacterPreviewGenerator$$CleanupOrphanedPreviews
// il2cpp: void Utility_CharacterPreviewGenerator__CleanupOrphanedPreviews (const MethodInfo* method);
// 0x44846d0

void Utility_CharacterPreviewGenerator__CleanupOrphanedPreviews(MethodInfo *method)

{
  MethodInfo *in_RSI;
  
  if (g_data_057ae8b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    g_data_057ae8b4 = '\x01';
  }
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(1,in_RSI);
  Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(0,in_RSI);
  return;
}


// Utility.CharacterPreviewGenerator$$CleanupOrphanedPreviewsInFolder
// il2cpp: void Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder (bool isHuman, const MethodInfo* method);
// 0x4484720

void Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder
               (bool_conflict isHuman,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  bool_conflict bVar4;
  int iVar5;
  undefined8 *puVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_HashSet_object__o *__this_07;
  System_Collections_Generic_List_object__o *pSVar8;
  System_String_o *pSVar9;
  Il2CppClass *pIVar10;
  long *plVar11;
  System_String_array *pSVar12;
  ulong uVar13;
  long lVar14;
  Il2CppObject *pIVar15;
  System_String_array *unaff_R14;
  undefined8 *puVar16;
  undefined1 auVar17 [12];
  undefined8 in_stack_ffffffffffffff88;
  System_String_o *in_stack_ffffffffffffff90;
  System_Collections_Generic_List_Enumerator_T__c *pSVar18;
  Il2CppObject *local_58;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  puVar16 = (undefined8 *)(ulong)(uint)isHuman;
  if (g_data_057ae8b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IListSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Path);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IListSetting_GetSets);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IListSetting_GetSets);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"Titans");
    il2cpp_runtime_helper_023445d0(&"Preset");
    il2cpp_runtime_helper_023445d0(&"Preset*.png");
    g_data_057ae8b5 = '\x01';
  }
  pSVar18 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  local_58 = (Il2CppObject *)0x0;
  if ((char)isHuman == '\0') {
    puVar6 = &"Titans";
  }
  else {
    puVar6 = &"Human";
  }
  pSVar7 = (System_String_o *)*puVar6;
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x80);
  if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = System_IO_Path__Combine(pSVar9,pSVar7,(MethodInfo *)0x0);
  bVar4 = System_IO_Directory__Exists(pSVar7,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  __this_07 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this_07,MethodInfo_HashSet_1_System_String);
  if ((char)isHuman == '\0') {
label_04484bc4:
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
    if (((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) ||
       (plVar11 = *(long **)(lVar3 + 0x28), plVar11 == (long *)0x0)) {
label_04484e4e:
      pSVar12 = unaff_R14;
      il2cpp_runtime_helper_022b2c90();
label_04484e53:
      pSVar7 = pSVar12->m_Items[0];
      if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      System_IO_Path__GetFileNameWithoutExtension(pSVar7,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      lVar3 = *plVar11;
      if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar14) == TypeInfo_IListSetting) {
            puVar6 = (undefined8 *)
                     ((long)(*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar14) + 2) * 0x10 + lVar3 + 0x138);
            goto label_04484c69;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar14);
      }
      puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IListSetting,2);
label_04484c69:
      pSVar8 = (System_Collections_Generic_List_object__o *)(*(code *)*puVar6)(plVar11);
      if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) goto label_04484e4e;
      System_Collections_Generic_List_object___GetEnumerator(&local_48,pSVar8,MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
      local_58 = local_48.fields._current;
      if (__this_07 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        unaff_R14 = (System_String_array *)&MethodInfo_Boolean_MoveNext;
        puVar16 = &TypeInfo_TitanCustomSet;
        pSVar18 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
        while (__this_02.fields._8_8_ = pSVar7,
              __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88,
              __this_02.fields._current = (Il2CppObject *)pSVar18,
              bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
              in_stack_ffffffffffffff90 = pSVar7, (char)bVar4 != '\0') {
          if (local_48.fields._current == (Il2CppObject *)0x0) goto label_04484e87;
          bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
          if ((((local_48.fields._current)->klass->_2).naturalAligment < bVar1) ||
             (((local_48.fields._current)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_TitanCustomSet))
          goto label_04484ec4;
          if (local_48.fields._current[3].klass == (Il2CppClass *)0x0) goto label_04484ebf;
          pSVar9 = System_String__Concat_3ae5ba0
                             ("Preset",
                              (System_String_o *)((local_48.fields._current[3].klass)->_1).namespaze,
                              (MethodInfo *)0x0);
          System_Collections_Generic_HashSet_object___Add(__this_07,(Il2CppObject *)pSVar9,MethodInfo_Boolean_Add);
        }
label_04484d81:
        __this_04.fields._8_8_ = in_stack_ffffffffffffff90;
        __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
        __this_04.fields._current = (Il2CppObject *)pSVar18;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        pSVar12 = System_IO_Directory__GetFiles(pSVar7,"Preset*.png",(MethodInfo *)0x0);
        if (pSVar12 == (System_String_array *)0x0) goto label_04484e4e;
        iVar5 = (int)pSVar12->max_length;
        if (__this_07 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          if (iVar5 < 1) {
            return;
          }
          uVar13 = 0;
          puVar16 = &MethodInfo_Boolean_Contains;
          if ((pSVar12->max_length & 0xffffffff) != 0) {
            do {
              pSVar7 = pSVar12->m_Items[uVar13];
              if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar9 = System_IO_Path__GetFileNameWithoutExtension(pSVar7,(MethodInfo *)0x0);
              bVar4 = System_Collections_Generic_HashSet_object___Contains
                                (__this_07,(Il2CppObject *)pSVar9,MethodInfo_Boolean_Contains);
              if ((char)bVar4 == '\0') {
                System_IO_File__Delete(pSVar7,(MethodInfo *)0x0);
              }
              uVar13 = uVar13 + 1;
              uVar2 = (uint)pSVar12->max_length;
              if ((long)(int)uVar2 <= (long)uVar13) {
                return;
              }
            } while (uVar13 < uVar2);
          }
          il2cpp_runtime_helper_022b2ca0();
          unaff_R14 = pSVar12;
          goto label_04484e4e;
        }
        if (iVar5 < 1) {
          return;
        }
        goto label_04484e53;
      }
      __this_03.fields._8_8_ = in_stack_ffffffffffffff90;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
      __this_03.fields._current = (Il2CppObject *)local_48.fields._list;
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      pSVar18 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
      if ((char)bVar4 == '\0') goto label_04484d81;
    }
    if (local_58 == (Il2CppObject *)0x0) {
label_04484e87:
      il2cpp_runtime_helper_022b2c90();
    }
    bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
    if (((local_58->klass->_2).naturalAligment < bVar1) ||
       ((local_58->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_TitanCustomSet)) {
label_04484ec4:
      pIVar10 = (Il2CppClass *)il2cpp_runtime_helper_022b2fd0();
    }
    else {
      pIVar10 = local_58[3].klass;
      if (pIVar10 == (Il2CppClass *)0x0) {
label_04484ebf:
        il2cpp_runtime_helper_022b2c90();
        goto label_04484ec4;
      }
    }
    System_String__Concat_3ae5ba0("Preset",(System_String_o *)(pIVar10->_1).namespaze,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
    if (((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) ||
       (plVar11 = *(long **)(lVar3 + 0x28), plVar11 == (long *)0x0)) goto label_04484e4e;
    lVar3 = *plVar11;
    if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
      lVar14 = 0;
      do {
        if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar14) == TypeInfo_IListSetting) {
          puVar6 = (undefined8 *)
                   ((long)(*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar14) + 2) * 0x10 + lVar3 + 0x138);
          goto label_04484999;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar14);
    }
    puVar6 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IListSetting,2);
label_04484999:
    pSVar8 = (System_Collections_Generic_List_object__o *)(*(code *)*puVar6)(plVar11);
    if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) goto label_04484e4e;
    System_Collections_Generic_List_object___GetEnumerator(&local_48,pSVar8,MethodInfo_List_1_T_Enumerator_Settings_BaseSetting_GetEnumerator);
    pIVar15 = local_48.fields._current;
    local_58 = local_48.fields._current;
    pSVar18 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
    if (__this_07 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      puVar16 = &TypeInfo_HumanCustomSet;
      unaff_R14 = (System_String_array *)&"Preset";
      while (__this.fields._8_8_ = pSVar7,
            __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88,
            __this.fields._current = (Il2CppObject *)pSVar18,
            bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
            in_stack_ffffffffffffff90 = pSVar7, (char)bVar4 != '\0') {
        if (pIVar15 == (Il2CppObject *)0x0) goto label_04484ab6;
        bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
        if (((pIVar15->klass->_2).naturalAligment < bVar1) ||
           ((pIVar15->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) goto label_04484af3;
        if (pIVar15[3].klass == (Il2CppClass *)0x0) goto label_04484aee;
        pSVar9 = System_String__Concat_3ae5ba0
                           ("Preset",(System_String_o *)((pIVar15[3].klass)->_1).namespaze,
                            (MethodInfo *)0x0);
        System_Collections_Generic_HashSet_object___Add(__this_07,(Il2CppObject *)pSVar9,MethodInfo_Boolean_Add);
      }
      goto label_04484d81;
    }
    __this_00.fields._8_8_ = in_stack_ffffffffffffff90;
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
    __this_00.fields._current = (Il2CppObject *)local_48.fields._list;
    bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
    if ((char)bVar4 == '\0') goto label_04484d81;
    if (pIVar15 == (Il2CppObject *)0x0) {
label_04484ab6:
      il2cpp_runtime_helper_022b2c90();
    }
    bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    if (((pIVar15->klass->_2).naturalAligment < bVar1) ||
       ((pIVar15->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) {
label_04484af3:
      pIVar10 = (Il2CppClass *)il2cpp_runtime_helper_022b2fd0();
    }
    else {
      pIVar10 = pIVar15[3].klass;
      if (pIVar10 == (Il2CppClass *)0x0) {
label_04484aee:
        il2cpp_runtime_helper_022b2c90();
        goto label_04484af3;
      }
    }
    System_String__Concat_3ae5ba0("Preset",(System_String_o *)(pIVar10->_1).namespaze,(MethodInfo *)0x0);
    auVar17 = il2cpp_runtime_helper_022b2c90();
    puVar16 = auVar17._0_8_;
    if (auVar17._8_4_ == 1) {
      plVar11 = (long *)__cxa_begin_catch(puVar16);
      lVar3 = *plVar11;
      __cxa_end_catch();
      __this_01.fields._8_8_ = pSVar7;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
      __this_01.fields._current = (Il2CppObject *)pSVar18;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      in_stack_ffffffffffffff90 = pSVar7;
      if (lVar3 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar3);
        __this_06.fields._8_8_ = pSVar7;
        __this_06.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
        __this_06.fields._current = (Il2CppObject *)pSVar18;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        goto label_04484fe0;
      }
      goto label_04484bc4;
    }
  }
  __this_05.fields._8_8_ = pSVar7;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
  __this_05.fields._current = (Il2CppObject *)pSVar18;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
label_04484fe0:
  _Unwind_Resume(puVar16);
}


// Utility.CharacterPreviewGenerator$$SetLayerRecursively
// il2cpp: void Utility_CharacterPreviewGenerator__SetLayerRecursively (UnityEngine_GameObject_o* obj, int32_t newLayer, const MethodInfo* method);
// 0x4485000

void Utility_CharacterPreviewGenerator__SetLayerRecursively
               (UnityEngine_GameObject_o *obj,int32_t newLayer,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  char cVar8;
  UnityEngine_Transform_o *__this;
  VirtualInvokeData *pVVar9;
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *pUVar10;
  undefined8 *puVar11;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  long lVar12;
  long *unaff_R14;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [12];
  
  if (g_data_057ae8b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Transform);
    g_data_057ae8b6 = '\x01';
  }
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__set_layer(obj,newLayer,(MethodInfo *)0x0);
    __this = UnityEngine_GameObject__get_transform(obj,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Transform_o *)0x0) {
      obj = (UnityEngine_GameObject_o *)UnityEngine_Transform__GetEnumerator(__this,(MethodInfo *)0x0);
      if (obj != (UnityEngine_GameObject_o *)0x0) {
        unaff_R14 = &TypeInfo_CharacterPreviewGenerator;
        do {
          pSVar6 = (System_Collections_IEnumerator_c *)obj->klass;
          uVar2._0_1_ = (pSVar6->_2).rank;
          uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar12 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar12) == TypeInfo_IEnumerator) {
                pVVar9 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar12);
                goto label_04485113;
              }
              lVar12 = lVar12 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar12);
          }
          pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(obj,TypeInfo_IEnumerator,0);
label_04485113:
          cVar8 = (*pVVar9->methodPtr)(obj,pVVar9->method);
          if (cVar8 == '\0') {
            unaff_R14 = (long *)0x0;
            goto label_04485200;
          }
          pSVar6 = (System_Collections_IEnumerator_c *)obj->klass;
          uVar3._0_1_ = (pSVar6->_2).rank;
          uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
          if ((ulong)uVar3 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar12 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar12) == TypeInfo_IEnumerator) {
                pVVar9 = pSVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar12) + 1);
                goto label_04485198;
              }
              lVar12 = lVar12 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar12);
          }
          pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(obj,TypeInfo_IEnumerator,1);
label_04485198:
          __this_00 = (UnityEngine_Component_o *)(*pVVar9->methodPtr)(obj,pVVar9->method);
          if (__this_00 == (UnityEngine_Component_o *)0x0) goto label_04485292;
          bVar1 = (TypeInfo_Transform->_2).naturalAligment;
          if (((__this_00->klass->_2).naturalAligment < bVar1) ||
             ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Transform)) goto label_0448528a;
          pUVar10 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
          method_00 = extraout_RDX;
          if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            method_00 = extraout_RDX_00;
          }
          Utility_CharacterPreviewGenerator__SetLayerRecursively(pUVar10,newLayer,method_00);
        } while( true );
      }
      goto label_0448529c;
    }
  }
  goto label_04485297;
label_0448528a:
  il2cpp_runtime_helper_022b2fd0(__this_00);
label_04485292:
  il2cpp_runtime_helper_022b2c90();
label_04485297:
  il2cpp_runtime_helper_022b2c90();
label_0448529c:
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    auVar15 = il2cpp_runtime_helper_022fefe0(unaff_R14);
    if (auVar15._8_4_ != 1) break;
    puVar11 = (undefined8 *)__cxa_begin_catch(auVar15._0_8_);
    unaff_R14 = (long *)*puVar11;
    __cxa_end_catch();
label_04485200:
    pUVar10 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023051f0(obj,TypeInfo_IDisposable);
    if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
      pSVar6 = (System_Collections_IEnumerator_c *)pUVar10->klass;
      uVar4._0_1_ = (pSVar6->_2).rank;
      uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar12) == TypeInfo_IDisposable) {
            pVVar9 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar12);
            goto label_0448526d;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar12);
      }
      pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pUVar10,TypeInfo_IDisposable,0);
label_0448526d:
      (*pVVar9->methodPtr)(pUVar10,pVVar9->method);
      obj = pUVar10;
    }
    if (unaff_R14 == (long *)0x0) {
      return;
    }
  }
  lVar12 = auVar15._0_8_;
  lVar14 = 0;
  do {
    lVar13 = lVar12;
    obj = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023051f0(obj,TypeInfo_IDisposable);
    if (obj != (UnityEngine_GameObject_o *)0x0) {
      pSVar6 = (System_Collections_IEnumerator_c *)obj->klass;
      uVar5._0_1_ = (pSVar6->_2).rank;
      uVar5._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar12) == TypeInfo_IDisposable) {
            pVVar9 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar12);
            goto label_0448536d;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar12);
      }
      pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(obj,TypeInfo_IDisposable,0);
label_0448536d:
      (*pVVar9->methodPtr)(obj,pVVar9->method);
    }
    if (lVar14 == 0) {
      _Unwind_Resume(lVar13);
    }
    lVar12 = il2cpp_runtime_helper_022fefe0(lVar14);
    lVar14 = lVar13;
  } while( true );
}


// Utility.CharacterPreviewGenerator$$GetOrCreatePersistentCamera
// il2cpp: Utility_CharacterPreviewGenerator_PreviewCameraData_o* Utility_CharacterPreviewGenerator__GetOrCreatePersistentCamera (System_String_o* cameraId, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x44853a0

Utility_CharacterPreviewGenerator_PreviewCameraData_o *
Utility_CharacterPreviewGenerator__GetOrCreatePersistentCamera
          (System_String_o *cameraId,UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Utility_CharacterPreviewGenerator_PreviewCameraData_Fields *pUVar1;
  int iVar2;
  bool_conflict bVar3;
  int32_t value;
  Il2CppObject *pIVar4;
  Utility_CharacterPreviewGenerator_PreviewCameraData_o *pUVar5;
  UnityEngine_Object_o *x;
  System_String_o *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  UnityEngine_GameObject_o *pUVar8;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Camera_o *pUVar9;
  System_Collections_Generic_Dictionary_object__object__o *pSVar10;
  UnityEngine_Skybox_o *__this_01;
  UnityEngine_Material_o *value_00;
  UnityEngine_RenderTexture_o *pUVar11;
  Utility_CharacterPreviewGenerator_PreviewCameraData_o *extraout_RAX;
  UnityEngine_RenderTexture_o **ppUVar12;
  float fVar13;
  UnityEngine_Color_o value_01;
  UnityEngine_SceneManagement_Scene_o local_40;
  System_String_o *local_38;
  
  if (g_data_057ae8b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Skybox_GetComponent_Skybox);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterPreviewGenerator_PreviewCameraData_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_AddComponent_Camera);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Skybox_AddComponent_Skybox);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Camera_FindObjectOfType_Camera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PreviewCameraData);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenderTexture);
    il2cpp_runtime_helper_023445d0(&"PersistentPreviewCamera_");
    il2cpp_runtime_helper_023445d0(&"DontDestroyOnLoad");
    g_data_057ae8b7 = '\x01';
  }
  local_40.fields.m_Handle = (UnityEngine_SceneManagement_Scene_Fields)0;
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8);
  __this = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04485acb;
  bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar7,(Il2CppObject *)cameraId,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8)
    ;
    if ((__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (pIVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (__this,(Il2CppObject *)cameraId,MethodInfo_CharacterPreviewGenerator_PreviewCameraData_get_Item), pIVar4 == (Il2CppObject *)0x0))
    goto label_04485acb;
    if (*(char *)&pIVar4[2].klass != '\0') {
      if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8);
      if ((__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (pIVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (__this,(Il2CppObject *)cameraId,MethodInfo_CharacterPreviewGenerator_PreviewCameraData_get_Item), pIVar4 == (Il2CppObject *)0x0))
      goto label_04485acb;
      if (*(char *)((long)&pIVar4[2].klass + 1) == '\0') {
        if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8);
        if ((__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
           (pUVar5 = (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)
                     System_Collections_Generic_Dictionary_object__object___get_Item
                               (__this,(Il2CppObject *)cameraId,MethodInfo_CharacterPreviewGenerator_PreviewCameraData_get_Item),
           pUVar5 == (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)0x0)) goto label_04485acb;
        pUVar9 = (pUVar5->fields).Camera;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          pUVar11 = (pUVar5->fields).RenderTexture;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            pUVar9 = (pUVar5->fields).Camera;
            __this = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
            if (pUVar9 == (UnityEngine_Camera_o *)0x0) goto label_04485acb;
            x = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              return pUVar5;
            }
          }
        }
        if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8);
        __this = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
        if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04485acb;
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar7,(Il2CppObject *)cameraId,MethodInfo_Boolean_Remove);
      }
    }
  }
  pUVar5 = (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PreviewCameraData);
  System_Object___ctor((Il2CppObject *)pUVar5,(MethodInfo *)0x0);
  local_38 = cameraId;
  pSVar6 = System_String__Concat_3ae5ba0("PersistentPreviewCamera_",cameraId,(MethodInfo *)0x0);
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor((UnityEngine_GameObject_o *)pSVar7,pSVar6,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)pSVar7,(MethodInfo *)0x0);
  __this = (System_Collections_Generic_Dictionary_object__object__o *)parent;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)parent,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_04485781:
    if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04485acb;
  }
  else {
    if ((parent == (UnityEngine_Transform_o *)0x0) ||
       (__this = (System_Collections_Generic_Dictionary_object__object__o *)parent,
       pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent,(MethodInfo *)0x0),
       pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto label_04485acb;
    local_40 = UnityEngine_GameObject__get_scene(pUVar8,(MethodInfo *)0x0);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             UnityEngine_SceneManagement_Scene__get_name
                       ((UnityEngine_SceneManagement_Scene_Fields)(int32_t)&stack0xffffffffffffffc0,
                        (MethodInfo *)0x0);
    bVar3 = System_String__op_Equality((System_String_o *)__this,"DontDestroyOnLoad",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      __this = (System_Collections_Generic_Dictionary_object__object__o *)parent;
      pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)parent,(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_04485acb;
      local_40 = UnityEngine_GameObject__get_scene(pUVar8,(MethodInfo *)0x0);
      __this = (System_Collections_Generic_Dictionary_object__object__o *)&stack0xffffffffffffffc0;
      pSVar6 = UnityEngine_SceneManagement_Scene__get_name
                         ((UnityEngine_SceneManagement_Scene_Fields)(int32_t)__this,(MethodInfo *)0x0);
      if (pSVar6 != (System_String_o *)0x0) goto label_04485781;
    }
    if ((pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (__this = pSVar7,
       __this_00 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pSVar7,(MethodInfo *)0x0)
       , __this_00 == (UnityEngine_Transform_o *)0x0)) goto label_04485acb;
    UnityEngine_Transform__SetParent(__this_00,parent,(MethodInfo *)0x0);
  }
  __this = pSVar7;
  pUVar9 = (UnityEngine_Camera_o *)
           UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pSVar7,MethodInfo_Camera_AddComponent_Camera);
  if (pUVar5 == (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)0x0) goto label_04485acb;
  pUVar1 = &pUVar5->fields;
  (pUVar5->fields).Camera = pUVar9;
  il2cpp_runtime_helper_022b4080();
  pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)
            UnityEngine_Camera__get_main((MethodInfo *)0x0);
  if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)
              UnityEngine_Object__FindObjectOfType_object_(MethodInfo_Camera_FindObjectOfType_Camera);
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = pSVar10;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04485acb;
    pUVar9 = pUVar1->Camera;
    __this = pSVar10;
    value = UnityEngine_Camera__get_clearFlags((UnityEngine_Camera_o *)pSVar10,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Camera_o *)0x0) goto label_04485acb;
    UnityEngine_Camera__set_clearFlags(pUVar9,value,(MethodInfo *)0x0);
    pUVar9 = pUVar1->Camera;
    __this = pSVar10;
    value_01 = UnityEngine_Camera__get_backgroundColor((UnityEngine_Camera_o *)pSVar10,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Camera_o *)0x0) goto label_04485acb;
    UnityEngine_Camera__set_backgroundColor(pUVar9,value_01,(MethodInfo *)0x0);
    pUVar9 = pUVar1->Camera;
    __this = pSVar10;
    fVar13 = UnityEngine_Camera__get_nearClipPlane((UnityEngine_Camera_o *)pSVar10,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Camera_o *)0x0) goto label_04485acb;
    UnityEngine_Camera__set_nearClipPlane(pUVar9,fVar13,(MethodInfo *)0x0);
    pUVar9 = pUVar1->Camera;
    __this = pSVar10;
    fVar13 = UnityEngine_Camera__get_farClipPlane((UnityEngine_Camera_o *)pSVar10,(MethodInfo *)0x0);
    if (pUVar9 == (UnityEngine_Camera_o *)0x0) goto label_04485acb;
    UnityEngine_Camera__set_farClipPlane(pUVar9,fVar13,(MethodInfo *)0x0);
    pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pSVar10,MethodInfo_Skybox_GetComponent_Skybox);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pSVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      __this_01 = (UnityEngine_Skybox_o *)
                  UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)pSVar7,MethodInfo_Skybox_AddComponent_Skybox);
      __this = pSVar7;
      if ((pSVar10 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
         (value_00 = UnityEngine_Skybox__get_material((UnityEngine_Skybox_o *)pSVar10,(MethodInfo *)0x0),
         __this = pSVar10, __this_01 == (UnityEngine_Skybox_o *)0x0)) goto label_04485acb;
      UnityEngine_Skybox__set_material(__this_01,value_00,(MethodInfo *)0x0);
    }
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  if (pUVar1->Camera != (UnityEngine_Camera_o *)0x0) {
    UnityEngine_Camera__set_fieldOfView(pUVar1->Camera,60.0,(MethodInfo *)0x0);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
    if (pUVar1->Camera != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__set_orthographic(pUVar1->Camera,0,(MethodInfo *)0x0);
      __this = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
      if (pUVar1->Camera != (UnityEngine_Camera_o *)0x0) {
        UnityEngine_Camera__set_cullingMask(pUVar1->Camera,-1,(MethodInfo *)0x0);
        __this = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
        if (pUVar1->Camera != (UnityEngine_Camera_o *)0x0) {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pUVar1->Camera,0,(MethodInfo *)0x0);
          pUVar11 = (UnityEngine_RenderTexture_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RenderTexture);
          UnityEngine_RenderTexture___ctor_4de1430(pUVar11,0x80,0x80,0x10,(MethodInfo *)0x0);
          ppUVar12 = &(pUVar5->fields).RenderTexture;
          (pUVar5->fields).RenderTexture = pUVar11;
          il2cpp_runtime_helper_022b4080(ppUVar12);
          pUVar11 = (pUVar5->fields).RenderTexture;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar3 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            return (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)0x0;
          }
          __this = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
          if (*ppUVar12 != (UnityEngine_RenderTexture_o *)0x0) {
            UnityEngine_RenderTexture__set_antiAliasing(*ppUVar12,1,(MethodInfo *)0x0);
            __this = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
            if (*ppUVar12 != (UnityEngine_RenderTexture_o *)0x0) {
              UnityEngine_RenderTexture__Create(*ppUVar12,(MethodInfo *)0x0);
              pSVar6 = local_38;
              __this = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
              if (pUVar1->Camera != (UnityEngine_Camera_o *)0x0) {
                UnityEngine_Camera__set_targetTexture
                          (pUVar1->Camera,(pUVar5->fields).RenderTexture,(MethodInfo *)0x0);
                *(undefined2 *)&(pUVar5->fields).IsInitialized = 1;
                if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
                          (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8);
                __this = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
                if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (pSVar7,(Il2CppObject *)pSVar6,(Il2CppObject *)pUVar5,MethodInfo_Void_set_Item);
                  return pUVar5;
                }
              }
            }
          }
        }
      }
    }
  }
label_04485acb:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Utility.CharacterPreviewGenerator$$PositionCameraForCharacter
// il2cpp: void Utility_CharacterPreviewGenerator__PositionCameraForCharacter (UnityEngine_Camera_o* camera, UnityEngine_GameObject_o* character, bool isHuman, const MethodInfo* method);
// 0x4485ae0

void Utility_CharacterPreviewGenerator__PositionCameraForCharacter
               (UnityEngine_Camera_o *camera,UnityEngine_GameObject_o *character,bool_conflict isHuman,
               MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Transform_c *pUVar2;
  UnityEngine_Renderer_o *__this;
  UnityEngine_Camera_o *pUVar3;
  void *pvVar4;
  undefined1 auVar5 [16];
  bool_conflict bVar6;
  int32_t newLayer;
  int iVar7;
  int height;
  UnityEngine_Transform_o *pUVar8;
  System_Object_array *pSVar9;
  UnityEngine_RenderTexture_o *value;
  UnityEngine_Texture2D_o *__this_00;
  undefined8 *puVar10;
  UnityEngine_Renderer_c *method_00;
  int extraout_EDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  uint uVar11;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_Transform_o *pUVar13;
  undefined1 auVar14 [12];
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_GameObject_o *pUStack_d8;
  int iStack_cc;
  undefined8 uStack_c8;
  float fStack_c0;
  undefined8 uStack_b8;
  float fStack_b0;
  undefined8 uStack_a8;
  UnityEngine_GameObject_o **ppUStack_a0;
  undefined8 *puStack_98;
  UnityEngine_Quaternion_Fields *pUStack_90;
  undefined8 *puStack_88;
  UnityEngine_Quaternion_Fields UStack_80;
  UnityEngine_Camera_o *pUStack_68;
  float local_30;
  float local_28;
  float fStack_24;
  
  if (isHuman == 0) {
    local_30 = 3.5;
  }
  else {
    local_30 = 3.0;
  }
  pUVar12 = (UnityEngine_GameObject_o *)0x0;
  pUVar13 = (UnityEngine_Transform_o *)camera;
  if (character != (UnityEngine_GameObject_o *)0x0) {
    pUVar12 = (UnityEngine_GameObject_o *)0x0;
    pUVar8 = UnityEngine_GameObject__get_transform(character,(MethodInfo *)0x0);
    pUVar13 = (UnityEngine_Transform_o *)character;
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      pUVar12 = (UnityEngine_GameObject_o *)0x0;
      UVar15 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
      pUVar13 = pUVar8;
      if (camera != (UnityEngine_Camera_o *)0x0) {
        pUVar12 = (UnityEngine_GameObject_o *)0x0;
        pUVar13 = (UnityEngine_Transform_o *)camera;
        pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)camera,(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          local_28 = UVar15.fields.x;
          fStack_24 = UVar15.fields.y;
          value_00.fields.x = local_28 + 0.0;
          value_00.fields.z = local_30 + UVar15.fields.z;
          value_00.fields.y = fStack_24 + 1.23;
          UnityEngine_Transform__set_position(pUVar8,value_00,(MethodInfo *)0x0);
          pUVar12 = (UnityEngine_GameObject_o *)0x0;
          pUVar13 = (UnityEngine_Transform_o *)camera;
          pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)camera,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            UVar15.fields.z = UVar15.fields.z + 0.0;
            UVar15.fields.y = fStack_24 + 1.18;
            UVar15.fields.x = value_00.fields.x;
            UnityEngine_Transform__LookAt_4e0aa40(pUVar8,UVar15,(MethodInfo *)0x0);
            UnityEngine_Camera__set_fieldOfView(camera,20.0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = (UnityEngine_Renderer_c *)method;
  pUStack_d8 = pUVar12;
  iStack_cc = extraout_EDX;
  pUStack_68 = camera;
  if (g_data_057ae8b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SkinnedMeshRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"Default");
    g_data_057ae8b8 = '\x01';
  }
  fStack_b0 = 0.0;
  uStack_b8 = 0;
  UStack_80 = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  fStack_c0 = 0.0;
  uStack_c8 = 0;
  if (pUVar13 == (UnityEngine_Transform_o *)0x0) {
    x = (UnityEngine_Object_o *)0x0;
    iVar7 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    x = (UnityEngine_Object_o *)(pUVar13->fields).m_CachedPtr;
    iVar7 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar7 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  if (pUVar13 == (UnityEngine_Transform_o *)0x0) {
label_04486002:
    il2cpp_runtime_helper_022b2c90();
label_04486007:
    il2cpp_runtime_helper_022b2c90();
label_0448600c:
    il2cpp_runtime_helper_022b2c90();
label_04486011:
    il2cpp_runtime_helper_022b2c90();
label_04486016:
    il2cpp_runtime_helper_022b2c90();
label_0448601b:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar2 = pUVar13[1].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    if ((pUVar12 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar8 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0),
       pUVar8 == (UnityEngine_Transform_o *)0x0)) goto label_04486002;
    UVar15 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
    fStack_b0 = UVar15.fields.z;
    uStack_b8 = UVar15.fields._0_8_;
    pUVar8 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04486002;
    UStack_80 = (UnityEngine_Quaternion_Fields)UnityEngine_Transform__get_rotation(pUVar8,(MethodInfo *)0x0);
    pUVar8 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04486002;
    UVar15 = UnityEngine_Transform__get_localScale(pUVar8,(MethodInfo *)0x0);
    fStack_c0 = UVar15.fields.z;
    uStack_c8 = UVar15.fields._0_8_;
    uStack_a8 = 0;
    ppUStack_a0 = &pUStack_d8;
    puStack_98 = &uStack_b8;
    pUStack_90 = &UStack_80;
    puStack_88 = &uStack_c8;
    newLayer = UnityEngine_LayerMask__NameToLayer("Default",(MethodInfo *)0x0);
    method_01 = extraout_RDX;
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      method_01 = extraout_RDX_00;
    }
    Utility_CharacterPreviewGenerator__SetLayerRecursively(pUVar12,newLayer,method_01);
    if (pUStack_d8 == (UnityEngine_GameObject_o *)0x0) goto label_04486007;
    pSVar9 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00(pUStack_d8,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    if (pSVar9 == (System_Object_array *)0x0) goto label_0448600c;
    iVar7 = (int)pSVar9->max_length;
    if (0 < iVar7) {
      uVar11 = 0;
      if (iVar7 != 0) {
        do {
          __this = (UnityEngine_Renderer_o *)pSVar9->m_Items[(int)uVar11];
          if (__this == (UnityEngine_Renderer_o *)0x0) goto label_04485ffd;
          UnityEngine_Renderer__set_enabled(__this,1,(MethodInfo *)0x0);
          method_00 = __this->klass;
          if ((*(byte *)(TypeInfo_SkinnedMeshRenderer + 0x130) <= (method_00->_2).naturalAligment) &&
             (method_00 = (UnityEngine_Renderer_c *)(method_00->_2).typeHierarchy,
             *(long *)((long)method_00 + (ulong)*(byte *)(TypeInfo_SkinnedMeshRenderer + 0x130) * 8 + -8) == TypeInfo_SkinnedMeshRenderer)) {
            UnityEngine_SkinnedMeshRenderer__set_updateWhenOffscreen
                      ((UnityEngine_SkinnedMeshRenderer_o *)__this,1,(MethodInfo *)0x0);
          }
          uVar11 = uVar11 + 1;
          uVar1 = (uint)pSVar9->max_length;
          if ((int)uVar1 <= (int)uVar11) goto label_04485ec6;
        } while (uVar11 < uVar1);
      }
      il2cpp_runtime_helper_022b2ca0();
label_04485ffd:
      il2cpp_runtime_helper_022b2c90();
      goto label_04486002;
    }
label_04485ec6:
    pUVar12 = pUStack_d8;
    pUVar3 = (UnityEngine_Camera_o *)(pUVar13->fields).m_CachedPtr;
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Utility_CharacterPreviewGenerator__PositionCameraForCharacter
              (pUVar3,pUVar12,(uint)method & 0xff,(MethodInfo *)method_00);
    value = UnityEngine_RenderTexture__get_active((MethodInfo *)0x0);
    pUVar3 = (UnityEngine_Camera_o *)(pUVar13->fields).m_CachedPtr;
    if (pUVar3 == (UnityEngine_Camera_o *)0x0) goto label_04486011;
    UnityEngine_Camera__Render(pUVar3,(MethodInfo *)0x0);
    UnityEngine_RenderTexture__set_active((UnityEngine_RenderTexture_o *)pUVar13[1].klass,(MethodInfo *)0x0);
    pUVar2 = pUVar13[1].klass;
    if (pUVar2 == (UnityEngine_Transform_c *)0x0) goto label_04486016;
    pvVar4 = (pUVar2->_1).image;
    iVar7 = (**(code **)((long)pvVar4 + 0x188))(pUVar2,*(undefined8 *)((long)pvVar4 + 400));
    pUVar2 = pUVar13[1].klass;
    if (pUVar2 == (UnityEngine_Transform_c *)0x0) goto label_0448601b;
    pvVar4 = (pUVar2->_1).image;
    height = (**(code **)((long)pvVar4 + 0x1a8))(pUVar2,*(undefined8 *)((long)pvVar4 + 0x1b0));
    __this_00 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
    UnityEngine_Texture2D___ctor_4dd9130(__this_00,iVar7,height,3,0,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Texture2D_o *)0x0) {
      auVar5._4_4_ = (float)height;
      auVar5._0_4_ = (float)iVar7;
      auVar5._8_8_ = 0;
      UnityEngine_Texture2D__ReadPixels_4dd9b70
                (__this_00,(UnityEngine_Rect_o)(auVar5 << 0x40),0,0,(MethodInfo *)0x0);
      UnityEngine_Texture2D__Apply_4dd97c0(__this_00,(MethodInfo *)0x0);
      UnityEngine_RenderTexture__set_active(value,(MethodInfo *)0x0);
      if (iVar7 != iStack_cc) {
        TextureScaler__ScaleBlocking(__this_00,iStack_cc,iStack_cc,(MethodInfo *)0x0);
      }
      goto label_04485fdc;
    }
  }
  auVar14 = il2cpp_runtime_helper_022b2c90();
  if (auVar14._8_4_ != 1) {
    il2cpp_runtime_helper_02235580(&uStack_a8);
    _Unwind_Resume(auVar14._0_8_);
  }
  puVar10 = (undefined8 *)__cxa_begin_catch(auVar14._0_8_);
  uStack_a8 = *puVar10;
  __cxa_end_catch();
label_04485fdc:
  il2cpp_runtime_helper_02235580(&uStack_a8);
  return;
}


// Utility.CharacterPreviewGenerator$$CapturePreviewWithCamera
// il2cpp: UnityEngine_Texture2D_o* Utility_CharacterPreviewGenerator__CapturePreviewWithCamera (Utility_CharacterPreviewGenerator_PreviewCameraData_o* cameraData, UnityEngine_GameObject_o* character, int32_t size, bool isHuman, const MethodInfo* method);
// 0x4485c00

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
  undefined8 *puVar9;
  undefined4 in_register_0000000c;
  UnityEngine_Renderer_c *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  uint uVar10;
  UnityEngine_Camera_o *pUVar11;
  undefined1 auVar12 [12];
  UnityEngine_Vector3_o UVar13;
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
  if (g_data_057ae8b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SkinnedMeshRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"Default");
    g_data_057ae8b8 = '\x01';
  }
  local_78 = 0.0;
  local_80 = 0;
  local_48 = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  local_88 = 0.0;
  local_90 = 0;
  if (cameraData == (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)0x0) {
    pUVar11 = (UnityEngine_Camera_o *)0x0;
    iVar5 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar11 = (cameraData->fields).Camera;
    iVar5 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar5 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return (UnityEngine_Texture2D_o *)0x0;
  }
  if (cameraData == (Utility_CharacterPreviewGenerator_PreviewCameraData_o *)0x0) {
label_04486002:
    il2cpp_runtime_helper_022b2c90();
label_04486007:
    il2cpp_runtime_helper_022b2c90();
label_0448600c:
    il2cpp_runtime_helper_022b2c90();
label_04486011:
    il2cpp_runtime_helper_022b2c90();
label_04486016:
    il2cpp_runtime_helper_022b2c90();
label_0448601b:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar8 = (cameraData->fields).RenderTexture;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return (UnityEngine_Texture2D_o *)0x0;
    }
    if ((character == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar6 = UnityEngine_GameObject__get_transform(character,(MethodInfo *)0x0),
       pUVar6 == (UnityEngine_Transform_o *)0x0)) goto label_04486002;
    UVar13 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
    local_78 = UVar13.fields.z;
    local_80 = UVar13.fields._0_8_;
    pUVar6 = UnityEngine_GameObject__get_transform(character,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_04486002;
    local_48 = (UnityEngine_Quaternion_Fields)UnityEngine_Transform__get_rotation(pUVar6,(MethodInfo *)0x0);
    pUVar6 = UnityEngine_GameObject__get_transform(character,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_04486002;
    UVar13 = UnityEngine_Transform__get_localScale(pUVar6,(MethodInfo *)0x0);
    local_88 = UVar13.fields.z;
    local_90 = UVar13.fields._0_8_;
    local_70 = 0;
    local_68 = &local_a0;
    local_60 = &local_80;
    local_58 = &local_48;
    local_50 = &local_90;
    newLayer = UnityEngine_LayerMask__NameToLayer("Default",(MethodInfo *)0x0);
    method_01 = extraout_RDX;
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      method_01 = extraout_RDX_00;
    }
    Utility_CharacterPreviewGenerator__SetLayerRecursively(character,newLayer,method_01);
    if (local_a0 == (UnityEngine_GameObject_o *)0x0) goto label_04486007;
    pSVar7 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00(local_a0,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    if (pSVar7 == (System_Object_array *)0x0) goto label_0448600c;
    iVar5 = (int)pSVar7->max_length;
    if (0 < iVar5) {
      uVar10 = 0;
      if (iVar5 != 0) {
        do {
          __this = (UnityEngine_Renderer_o *)pSVar7->m_Items[(int)uVar10];
          if (__this == (UnityEngine_Renderer_o *)0x0) goto label_04485ffd;
          UnityEngine_Renderer__set_enabled(__this,1,(MethodInfo *)0x0);
          method_00 = __this->klass;
          if ((*(byte *)(TypeInfo_SkinnedMeshRenderer + 0x130) <= (method_00->_2).naturalAligment) &&
             (method_00 = (UnityEngine_Renderer_c *)(method_00->_2).typeHierarchy,
             *(long *)((long)method_00 + (ulong)*(byte *)(TypeInfo_SkinnedMeshRenderer + 0x130) * 8 + -8) == TypeInfo_SkinnedMeshRenderer)) {
            UnityEngine_SkinnedMeshRenderer__set_updateWhenOffscreen
                      ((UnityEngine_SkinnedMeshRenderer_o *)__this,1,(MethodInfo *)0x0);
          }
          uVar10 = uVar10 + 1;
          uVar1 = (uint)pSVar7->max_length;
          if ((int)uVar1 <= (int)uVar10) goto label_04485ec6;
        } while (uVar10 < uVar1);
      }
      il2cpp_runtime_helper_022b2ca0();
label_04485ffd:
      il2cpp_runtime_helper_022b2c90();
      goto label_04486002;
    }
label_04485ec6:
    character_00 = local_a0;
    pUVar11 = (cameraData->fields).Camera;
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Utility_CharacterPreviewGenerator__PositionCameraForCharacter
              (pUVar11,character_00,isHuman & 0xff,(MethodInfo *)method_00);
    pUVar8 = UnityEngine_RenderTexture__get_active((MethodInfo *)0x0);
    pUVar11 = (cameraData->fields).Camera;
    if (pUVar11 == (UnityEngine_Camera_o *)0x0) goto label_04486011;
    UnityEngine_Camera__Render(pUVar11,(MethodInfo *)0x0);
    UnityEngine_RenderTexture__set_active((cameraData->fields).RenderTexture,(MethodInfo *)0x0);
    pUVar2 = (cameraData->fields).RenderTexture;
    if (pUVar2 == (UnityEngine_RenderTexture_o *)0x0) goto label_04486016;
    iVar5 = (*(pUVar2->klass->vtable)._5_get_width.methodPtr)
                      (pUVar2,(pUVar2->klass->vtable)._5_get_width.method);
    pUVar2 = (cameraData->fields).RenderTexture;
    if (pUVar2 == (UnityEngine_RenderTexture_o *)0x0) goto label_0448601b;
    height = (*(pUVar2->klass->vtable)._7_get_height.methodPtr)
                       (pUVar2,(pUVar2->klass->vtable)._7_get_height.method);
    __this_00 = (UnityEngine_Texture2D_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
    UnityEngine_Texture2D___ctor_4dd9130(__this_00,iVar5,height,3,0,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Texture2D_o *)0x0) {
      auVar3._4_4_ = (float)height;
      auVar3._0_4_ = (float)iVar5;
      auVar3._8_8_ = 0;
      UnityEngine_Texture2D__ReadPixels_4dd9b70
                (__this_00,(UnityEngine_Rect_o)(auVar3 << 0x40),0,0,(MethodInfo *)0x0);
      UnityEngine_Texture2D__Apply_4dd97c0(__this_00,(MethodInfo *)0x0);
      UnityEngine_RenderTexture__set_active(pUVar8,(MethodInfo *)0x0);
      if (iVar5 != local_94) {
        TextureScaler__ScaleBlocking(__this_00,local_94,local_94,(MethodInfo *)0x0);
      }
      goto label_04485fdc;
    }
  }
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ != 1) {
    il2cpp_runtime_helper_02235580(&local_70);
    _Unwind_Resume(auVar12._0_8_);
  }
  puVar9 = (undefined8 *)__cxa_begin_catch(auVar12._0_8_);
  local_70 = *puVar9;
  __cxa_end_catch();
  __this_00 = (UnityEngine_Texture2D_o *)0x0;
label_04485fdc:
  il2cpp_runtime_helper_02235580(&local_70);
  return __this_00;
}


// Utility.CharacterPreviewGenerator$$CleanupPersistentCamera
// il2cpp: void Utility_CharacterPreviewGenerator__CleanupPersistentCamera (System_String_o* cameraId, const MethodInfo* method);
// 0x4486170

void Utility_CharacterPreviewGenerator__CleanupPersistentCamera(System_String_o *cameraId,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppClass *x;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  UnityEngine_Object_o *pUVar5;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *collection;
  System_Collections_Generic_List_object__o *__this_03;
  long *plVar6;
  MethodInfo *method_00;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_T__o *pSVar8;
  Il2CppMethodPointer pIVar9;
  System_String_o *cameraId_00;
  System_String_o *pSVar10;
  
  if (g_data_057ae8b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterPreviewGenerator_PreviewCameraData_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae8b9 = '\x01';
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) goto label_04486205;
label_04486199:
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8)
    ;
  }
  else {
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) != 0) goto label_04486199;
label_04486205:
    il2cpp_runtime_helper_02337ed0();
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8)
    ;
  }
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)cameraId,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8)
    ;
    if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pIVar4 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar1,(Il2CppObject *)cameraId,MethodInfo_CharacterPreviewGenerator_PreviewCameraData_get_Item), pIVar4 != (Il2CppObject *)0x0)) {
      x = pIVar4[1].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        if (pIVar4[1].klass == (Il2CppClass *)0x0) goto label_044863b6;
        UnityEngine_Camera__set_targetTexture
                  ((UnityEngine_Camera_o *)pIVar4[1].klass,(UnityEngine_RenderTexture_o *)0x0,
                   (MethodInfo *)0x0);
        if (pIVar4[1].klass == (Il2CppClass *)0x0) goto label_044863b6;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pIVar4[1].klass,0,(MethodInfo *)0x0);
        if (pIVar4[1].klass == (Il2CppClass *)0x0) goto label_044863b6;
        pUVar5 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pIVar4[1].klass,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__DestroyImmediate_4e01e00(pUVar5,(MethodInfo *)0x0);
      }
      pUVar5 = pIVar4[1].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        if (pIVar4[1].monitor == (UnityEngine_RenderTexture_o *)0x0) goto label_044863b6;
        UnityEngine_RenderTexture__Release(pIVar4[1].monitor,(MethodInfo *)0x0);
        pUVar5 = pIVar4[1].monitor;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__DestroyImmediate_4e01e00(pUVar5,(MethodInfo *)0x0);
      }
      *(undefined1 *)((long)&pIVar4[2].klass + 1) = 1;
      if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar1,(Il2CppObject *)cameraId,MethodInfo_Boolean_Remove);
        return;
      }
    }
  }
label_044863b6:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uti);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae8ba = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  cameraId_00 = (System_String_o *)0x0;
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    collection = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar1,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uti);
    __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor_362ba10
              (__this_03,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_System_String);
    if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,__this_03,
                 MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      while (__this.fields._8_8_ = pIVar9, __this.fields._list = pSVar8,
            __this.fields._current = (Il2CppObject *)cameraId_00, method_00 = MethodInfo_Boolean_MoveNext,
            bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa0), (char)bVar3 != '\0') {
        pSVar10 = cameraId_00;
        if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Utility_CharacterPreviewGenerator__CleanupPersistentCamera(cameraId_00,method_00);
        cameraId_00 = pSVar10;
      }
      __this_00.fields._8_8_ = pIVar9;
      __this_00.fields._list = pSVar8;
      __this_00.fields._current = (Il2CppObject *)cameraId_00;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_00,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
      return;
    }
  }
  auVar7 = il2cpp_runtime_helper_022b2c90();
  if (auVar7._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar2 = *plVar6;
    __cxa_end_catch();
    __this_01.fields._8_8_ = pIVar9;
    __this_01.fields._list = pSVar8;
    __this_01.fields._current = (Il2CppObject *)cameraId_00;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_02.fields._8_8_ = pIVar9;
  __this_02.fields._list = pSVar8;
  __this_02.fields._current = (Il2CppObject *)cameraId_00;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
  _Unwind_Resume(auVar7._0_8_);
}


// Utility.CharacterPreviewGenerator$$CleanupAllPersistentCameras
// il2cpp: void Utility_CharacterPreviewGenerator__CleanupAllPersistentCameras (const MethodInfo* method);
// 0x44863c0

void Utility_CharacterPreviewGenerator__CleanupAllPersistentCameras(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *collection;
  System_Collections_Generic_List_object__o *__this_04;
  long *plVar3;
  MethodInfo *method_00;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  System_String_o *cameraId;
  System_String_o *pSVar7;
  
  if (g_data_057ae8ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uti);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae8ba = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  cameraId = (System_String_o *)0x0;
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 8);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    collection = System_Collections_Generic_Dictionary_object__object___get_Keys(__this,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uti);
    __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor_362ba10
              (__this_04,(System_Collections_Generic_IEnumerable_T__o *)collection,MethodInfo_List_1_System_String);
    if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,__this_04,
                 MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      while (__this_00.fields._8_8_ = pIVar6, __this_00.fields._list = pSVar5,
            __this_00.fields._current = (Il2CppObject *)cameraId, method_00 = MethodInfo_Boolean_MoveNext,
            bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8), (char)bVar2 != '\0')
      {
        pSVar7 = cameraId;
        if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Utility_CharacterPreviewGenerator__CleanupPersistentCamera(cameraId,method_00);
        cameraId = pSVar7;
      }
      __this_01.fields._8_8_ = pIVar6;
      __this_01.fields._list = pSVar5;
      __this_01.fields._current = (Il2CppObject *)cameraId;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
      return;
    }
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar6;
    __this_02.fields._list = pSVar5;
    __this_02.fields._current = (Il2CppObject *)cameraId;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_03.fields._8_8_ = pIVar6;
  __this_03.fields._list = pSVar5;
  __this_03.fields._current = (Il2CppObject *)cameraId;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar4._0_8_);
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewWithPersistentCamera
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera (System_String_o* cameraId, UnityEngine_GameObject_o* character, System_String_o* fileName, int32_t size, bool isHuman, UnityEngine_Transform_o* cameraParent, const MethodInfo* method);
// 0x44865b0

void Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera
               (System_String_o *cameraId,UnityEngine_GameObject_o *character,System_String_o *fileName,
               int32_t size,bool_conflict isHuman,UnityEngine_Transform_o *cameraParent,MethodInfo *method)

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
  undefined1 auVar6 [12];
  char local_79;
  undefined8 local_78;
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
  if (g_data_057ae8bb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&"CharacterPreview_");
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"_");
    il2cpp_runtime_helper_023445d0(&"Titans");
    il2cpp_runtime_helper_023445d0(&"Preset");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae8bb = '\x01';
  }
  local_70 = (Il2CppObject *)0x0;
  local_79 = 0;
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  local_70 = (Il2CppObject *)**(undefined8 **)(TypeInfo_CharacterPreviewGenerator + 0xb8);
  local_79 = '\0';
  local_5c = isHuman;
  System_Threading_Monitor__Enter_3d2a1a0(local_70,(bool_conflict *)&local_79,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(TypeInfo_CharacterPreviewGenerator + 0xb8) ==
      (System_Collections_Generic_HashSet_object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_04486909:
    il2cpp_runtime_helper_022b2c90();
label_0448690e:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = System_Collections_Generic_HashSet_object___Contains
                      ((System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(TypeInfo_CharacterPreviewGenerator + 0xb8),
                       (Il2CppObject *)local_68,MethodInfo_Boolean_Contains);
    if ((char)bVar1 == '\0') {
      if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(TypeInfo_CharacterPreviewGenerator + 0xb8) ==
          (System_Collections_Generic_HashSet_object__o *)0x0) goto label_04486909;
      System_Collections_Generic_HashSet_object___Add
                ((System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(TypeInfo_CharacterPreviewGenerator + 0xb8),
                 (Il2CppObject *)local_68,MethodInfo_Boolean_Add);
      uVar5 = 4;
      uVar4 = 4;
      method_00 = extraout_RDX_00;
    }
    else {
      uVar5 = 3;
      uVar4 = 3;
      method_00 = extraout_RDX;
    }
    if (local_79 != '\0') {
      System_Threading_Monitor__Exit(local_70,(MethodInfo *)0x0);
      method_00 = extraout_RDX_01;
      uVar4 = uVar5;
    }
    if ((uVar4 | 4) != 4) {
      return;
    }
    local_50 = 0;
    local_48 = &local_70;
    local_38 = &local_68;
    local_40 = (bool_conflict *)&local_79;
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      method_00 = extraout_RDX_02;
    }
    cameraData = Utility_CharacterPreviewGenerator__GetOrCreatePersistentCamera
                           (cameraId,cameraParent,method_00);
    uVar4 = local_5c;
    texture = Utility_CharacterPreviewGenerator__CapturePreviewWithCamera
                        (cameraData,local_58,local_60,local_5c & 0xff,method_01);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') goto label_044868e3;
    if (local_68 == (System_String_o *)0x0) goto label_0448690e;
    pSVar2 = System_String__Replace_3af9030(local_68,"Preset","",(MethodInfo *)0x0);
    if ((char)uVar4 == '\0') {
      puVar3 = &"Titans";
    }
    else {
      puVar3 = &"Human";
    }
    pSVar2 = System_String__Concat_3af7470
                       ("CharacterPreview_",(System_String_o *)*puVar3,"_",pSVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_ResourceManager__SetExternalTexture(pSVar2,texture,1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x18);
    if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Add(__this,(Il2CppObject *)pSVar2,MethodInfo_Boolean_Add);
      goto label_044868e3;
    }
  }
  auVar6 = il2cpp_runtime_helper_022b2c90();
  local_78 = auVar6._0_8_;
  if (auVar6._8_4_ != 1) {
    il2cpp_runtime_helper_02235630(&local_50);
    _Unwind_Resume(local_78);
  }
  puVar3 = (undefined8 *)__cxa_begin_catch(local_78);
  local_50 = *puVar3;
  __cxa_end_catch();
label_044868e3:
  il2cpp_runtime_helper_02235630(&local_50);
  return;
}


// Utility.CharacterPreviewGenerator$$SaveCachedPreviewsToDisk
// il2cpp: void Utility_CharacterPreviewGenerator__SaveCachedPreviewsToDisk (const MethodInfo* method);
// 0x4486ab0

void Utility_CharacterPreviewGenerator__SaveCachedPreviewsToDisk(MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  long lVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  UnityEngine_Texture2D_o *tex;
  System_String_array *source;
  System_Collections_Generic_IEnumerable_TSource__o *values;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_Byte_array *bytes;
  long *plVar8;
  MethodInfo *method_00;
  undefined1 auVar9 [12];
  System_Collections_Generic_HashSet_T__o *pSVar10;
  Il2CppRGCTXData *pIVar11;
  _union_332950 _Var12;
  _union_332950 key;
  undefined1 local_48 [16];
  _union_332950 local_38;
  
  if (g_data_057ae8bc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Skip_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Path);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"_");
    il2cpp_runtime_helper_023445d0(&"Titans");
    il2cpp_runtime_helper_023445d0(&".png");
    il2cpp_runtime_helper_023445d0(&"Preset");
    g_data_057ae8bc = '\x01';
  }
  pSVar10 = (System_Collections_Generic_HashSet_T__o *)0x0;
  pIVar11 = (Il2CppRGCTXData *)0x0;
  _Var12.genericMethod = (System_String_o *)0x0;
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x80);
  if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = System_IO_Path__Combine(pSVar4,"Human",(MethodInfo *)0x0);
  pSVar5 = System_IO_Path__Combine
                     (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x80),"Titans",
                      (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x18);
  if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) {
label_04486e9a:
    auVar9 = il2cpp_runtime_helper_022b2c90();
    if (auVar9._8_4_ == 1) {
      plVar8 = (long *)__cxa_begin_catch(auVar9._0_8_);
      lVar2 = *plVar8;
      __cxa_end_catch();
      __this_02.fields._8_8_ = pIVar11;
      __this_02.fields._set = pSVar10;
      __this_02.fields._current = _Var12.genericMethod;
      method_00 = MethodInfo_Void_Dispose;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff88);
      if (lVar2 == 0) goto label_04486e18;
      il2cpp_runtime_helper_022fefe0(lVar2);
    }
    __this_03.fields._8_8_ = pIVar11;
    __this_03.fields._set = pSVar10;
    __this_03.fields._current = _Var12.genericMethod;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff88);
    _Unwind_Resume(auVar9._0_8_);
  }
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,__this,MethodInfo_HashSet_1_T_Enumerator_System_String_GetEnumerator);
  pSVar10 = (System_Collections_Generic_HashSet_T__o *)local_48._0_8_;
  pIVar11 = (Il2CppRGCTXData *)local_48._8_8_;
label_04486c90:
  key = local_38;
  __this_00.fields._8_8_ = pIVar11;
  __this_00.fields._set = pSVar10;
  __this_00.fields._current = key.genericMethod;
  bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                    (__this_00,(MethodInfo_3219C40 *)&stack0xffffffffffffff88);
  if ((char)bVar3 != '\0') {
    _Var12 = key;
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    tex = ApplicationManagers_ResourceManager__GetExternalTexture(key.genericMethod,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)tex,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    local_38 = _Var12;
    if ((char)bVar3 != '\0') {
      if (key.genericMethod == (System_String_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
      }
      else {
        source = System_String__Split(key.genericMethod,0x5f,0,(MethodInfo *)0x0);
        if (source != (System_String_array *)0x0) {
          local_38 = _Var12;
          if (2 < (int)source->max_length) {
            bVar3 = System_String__op_Equality(source->m_Items[1],"Human",(MethodInfo *)0x0);
            values = System_Linq_Enumerable__Skip_object_
                               ((System_Collections_Generic_IEnumerable_TSource__o *)source,2,MethodInfo_IEnumerable_1_System_String_Skip_String);
            pSVar6 = System_String__Join_3af7e00
                               ("_",(System_Collections_Generic_IEnumerable_string__o *)values,
                                (MethodInfo *)0x0);
            pSVar7 = pSVar5;
            if ((char)bVar3 != '\0') {
              pSVar7 = pSVar4;
            }
            bVar3 = System_IO_Directory__Exists(pSVar7,(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') {
              System_IO_Directory__CreateDirectory(pSVar7,(MethodInfo *)0x0);
            }
            pSVar6 = System_String__Concat_3af7150("Preset",pSVar6,".png",(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Path + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar7 = System_IO_Path__Combine(pSVar7,pSVar6,(MethodInfo *)0x0);
            bytes = UnityEngine_ImageConversion__EncodeToPNG(tex,(MethodInfo *)0x0);
            System_IO_File__WriteAllBytes(pSVar7,bytes,(MethodInfo *)0x0);
            local_38 = _Var12;
          }
          goto label_04486c90;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      goto label_04486e9a;
    }
    goto label_04486c90;
  }
  __this_01.fields._8_8_ = pIVar11;
  __this_01.fields._set = pSVar10;
  __this_01.fields._current = key.genericMethod;
  method_00 = MethodInfo_Void_Dispose;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_01,(MethodInfo_3219C30 *)&stack0xffffffffffffff88);
label_04486e18:
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ae8b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    g_data_057ae8b4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(1,method_00);
  Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(0,method_00);
  return;
}


// Utility.CharacterPreviewGenerator$$ClearSessionGeneratedPreviews
// il2cpp: void Utility_CharacterPreviewGenerator__ClearSessionGeneratedPreviews (const MethodInfo* method);
// 0x4487080

void Utility_CharacterPreviewGenerator__ClearSessionGeneratedPreviews(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  bool_conflict bVar3;
  UnityEngine_Texture2D_o *x;
  long *plVar4;
  undefined1 auVar5 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar6;
  Il2CppType *pIVar7;
  System_String_o *key;
  System_String_o *pSVar8;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (g_data_057ae8bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    g_data_057ae8bd = '\x01';
  }
  pSVar6 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar7 = (Il2CppType *)0x0;
  key = (System_String_o *)0x0;
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x18);
  if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_04487287;
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,pSVar1,MethodInfo_HashSet_1_T_Enumerator_System_String_GetEnumerator);
  pSVar6 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_48._0_8_;
  pIVar7 = (Il2CppType *)local_48._8_8_;
  key = local_38;
  while (__this.fields._8_8_ = pIVar7, __this.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar6,
        __this.fields._current = (Il2CppObject *)key,
        bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (__this,(MethodInfo_3219C40 *)&stack0xffffffffffffff98), (char)bVar3 != '\0') {
    pSVar8 = key;
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    x = ApplicationManagers_ResourceManager__GetExternalTexture(key,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)x,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_ResourceManager__RemoveExternalTexture(key,(MethodInfo *)0x0);
    key = pSVar8;
  }
  __this_00.fields._8_8_ = pIVar7;
  __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar6;
  __this_00.fields._current = (Il2CppObject *)key;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_00,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
  do {
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar1 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x18);
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Clear(pSVar1,MethodInfo_Void_Clear);
      return;
    }
label_04487287:
    auVar5 = il2cpp_runtime_helper_022b2c90();
    if (auVar5._8_4_ != 1) goto label_0448730a;
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_01.fields._8_8_ = pIVar7;
    __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar6;
    __this_01.fields._current = (Il2CppObject *)key;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_01,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
  } while (lVar2 == 0);
  il2cpp_runtime_helper_022fefe0(lVar2);
label_0448730a:
  __this_02.fields._8_8_ = pIVar7;
  __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar6;
  __this_02.fields._current = (Il2CppObject *)key;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar5._0_8_);
}


// Utility.CharacterPreviewGenerator$$ClearNonPersistentPreviews
// il2cpp: void Utility_CharacterPreviewGenerator__ClearNonPersistentPreviews (const MethodInfo* method);
// 0x4487340

void Utility_CharacterPreviewGenerator__ClearNonPersistentPreviews(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae8be == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    g_data_057ae8be = '\x01';
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ResourceManager + 0xe4);
  }
  if (iVar1 != 0) {
    ApplicationManagers_ResourceManager__ClearNonPersistentTextures((MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  ApplicationManagers_ResourceManager__ClearNonPersistentTextures((MethodInfo *)0x0);
  return;
}


// Utility.CharacterPreviewGenerator$$GetCacheInfo
// il2cpp: void Utility_CharacterPreviewGenerator__GetCacheInfo (int32_t* totalCached, int32_t* persistent, const MethodInfo* method);
// 0x44873a0

void Utility_CharacterPreviewGenerator__GetCacheInfo
               (int32_t *totalCached,int32_t *persistent,MethodInfo *method)

{
  int32_t iVar1;
  
  if (g_data_057ae8bf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    g_data_057ae8bf = '\x01';
  }
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar1 = ApplicationManagers_ResourceManager__GetExternalTextureCacheCount((MethodInfo *)0x0);
  *totalCached = iVar1;
  iVar1 = ApplicationManagers_ResourceManager__GetPersistentTextureCacheCount((MethodInfo *)0x0);
  *persistent = iVar1;
  return;
}


// Utility.CharacterPreviewGenerator$$CaptureCurrentCharacterPreview
// il2cpp: void Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview (bool isHuman, const MethodInfo* method);
// 0x4487400

void Utility_CharacterPreviewGenerator__CaptureCurrentCharacterPreview
               (bool_conflict isHuman,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  Settings_SetSettingsContainer_T__o *pSVar4;
  UnityEngine_Component_o *__this;
  Settings_StringSetting_o *pSVar5;
  UnityEngine_Object_c *x;
  bool_conflict bVar6;
  UnityEngine_Object_o *pUVar7;
  System_String_o *fileName;
  UnityEngine_Object_o *x_00;
  Settings_BaseSetSetting_o *unaff_RBP;
  Il2CppClass *method_00;
  System_String_o *cameraId;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  if (g_data_057ae8c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"TitanPreview");
    il2cpp_runtime_helper_023445d0(&"HumanPreview");
    il2cpp_runtime_helper_023445d0(&"Preset");
    g_data_057ae8c0 = '\x01';
  }
  x_00 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (x_00 == (UnityEngine_Object_o *)0x0) {
label_04487507:
    unaff_RBP = (Settings_BaseSetSetting_o *)&TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (Il2CppClass *)0x0;
    bVar6 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    if ((char)isHuman == '\0') {
      if (x_00 != (UnityEngine_Object_o *)0x0) {
        x = x_00[2].klass;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = (Il2CppClass *)0x0;
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
        if ((lVar3 != 0) &&
           (pSVar4 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
           pSVar4 != (Settings_SetSettingsContainer_T__o *)0x0)) {
          method_00 = MethodInfo_BaseSetSetting_GetSelectedSet;
          unaff_RBP = Settings_SetSettingsContainer_object___GetSelectedSet
                                (pSVar4,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet);
          if (unaff_RBP != (Settings_BaseSetSetting_o *)0x0) {
            bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
            method_00 = TypeInfo_TitanCustomSet;
            if (((unaff_RBP->klass->_2).naturalAligment < bVar1) ||
               ((unaff_RBP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_TitanCustomSet)) goto label_04487791;
          }
          if (x_00[2].klass != (UnityEngine_Object_c *)0x0) {
            method_00 = (Il2CppClass *)0x0;
            pUVar7 = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)x_00[2].klass,(MethodInfo *)0x0);
            if ((unaff_RBP != (Settings_BaseSetSetting_o *)0x0) &&
               (pSVar5 = (unaff_RBP->fields).UniqueId, x_00 = pUVar7,
               pSVar5 != (Settings_StringSetting_o *)0x0)) {
              fileName = System_String__Concat_3ae5ba0("Preset",(pSVar5->fields)._value,(MethodInfo *)0x0)
              ;
              if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar6 = 0;
              cameraId = "TitanPreview";
              goto label_04487773;
            }
          }
        }
      }
    }
    else if (x_00 != (UnityEngine_Object_o *)0x0) {
      pUVar7 = (UnityEngine_Object_o *)x_00[1].fields.m_CachedPtr;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = (Il2CppClass *)0x0;
      bVar6 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
      if ((lVar3 != 0) &&
         (pSVar4 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
         pSVar4 != (Settings_SetSettingsContainer_T__o *)0x0)) {
        method_00 = MethodInfo_BaseSetSetting_GetSelectedSet;
        unaff_RBP = Settings_SetSettingsContainer_object___GetSelectedSet
                              (pSVar4,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet);
        if (unaff_RBP != (Settings_BaseSetSetting_o *)0x0) {
          bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
          method_00 = TypeInfo_HumanCustomSet;
          if (((unaff_RBP->klass->_2).naturalAligment < bVar1) ||
             ((unaff_RBP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) goto label_04487791;
        }
        __this = (UnityEngine_Component_o *)x_00[1].fields.m_CachedPtr;
        if (__this != (UnityEngine_Component_o *)0x0) {
          method_00 = (Il2CppClass *)0x0;
          pUVar7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0);
          if ((unaff_RBP != (Settings_BaseSetSetting_o *)0x0) &&
             (pSVar5 = (unaff_RBP->fields).UniqueId, x_00 = pUVar7, pSVar5 != (Settings_StringSetting_o *)0x0)
             ) {
            fileName = System_String__Concat_3ae5ba0("Preset",(pSVar5->fields)._value,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar6 = 1;
            cameraId = "HumanPreview";
label_04487773:
            Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera
                      (cameraId,(UnityEngine_GameObject_o *)pUVar7,fileName,0x80,bVar6,
                       (UnityEngine_Transform_o *)0x0,in_stack_ffffffffffffffd8);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
    method_00 = TypeInfo_CharacterEditorGameManager;
    if ((bVar1 <= (x_00->klass->_2).naturalAligment) &&
       ((x_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorGameManager)) goto label_04487507;
  }
  il2cpp_runtime_helper_022b2fd0(x_00);
label_04487791:
  il2cpp_runtime_helper_022b2fd0(unaff_RBP);
  if (g_data_057ae8c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    g_data_057ae8c1 = '\x01';
    iVar2 = *(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ae8b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    g_data_057ae8b4 = '\x01';
    iVar2 = *(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(1,(MethodInfo *)method_00);
  Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(0,(MethodInfo *)method_00);
  return;
}


// Utility.CharacterPreviewGenerator$$InitializePreviewSystem
// il2cpp: void Utility_CharacterPreviewGenerator__InitializePreviewSystem (const MethodInfo* method);
// 0x44877a0

void Utility_CharacterPreviewGenerator__InitializePreviewSystem(MethodInfo *method)

{
  int iVar1;
  MethodInfo *in_RSI;
  
  if (g_data_057ae8c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    g_data_057ae8c1 = '\x01';
    iVar1 = *(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ae8b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    g_data_057ae8b4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(1,in_RSI);
  Utility_CharacterPreviewGenerator__CleanupOrphanedPreviewsInFolder(0,in_RSI);
  return;
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewForHumanSet
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet (UI_CharacterEditorHumanMenu_o* humanMenu, bool isRebuild, const MethodInfo* method);
// 0x4487840

void Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSet
               (UI_CharacterEditorHumanMenu_o *humanMenu,bool_conflict isRebuild,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_SetSettingsContainer_T__o *__this;
  Settings_HumanCustomSet_c *pSVar3;
  Settings_BoolSetting_o *__this_00;
  Settings_IntSetting_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  bool_conflict bVar6;
  MethodInfo *in_RAX;
  UnityEngine_GameObject_o *character;
  System_String_o *fileName;
  UnityEngine_Transform_o *cameraParent;
  Il2CppObject *__this_01;
  Il2CppClass *unaff_RBX;
  int32_t weapon;
  undefined1 uVar7;
  undefined4 uVar8;
  Il2CppClass *str1;
  Il2CppClass *pIVar9;
  Il2CppObject *__this_02;
  
  str1 = (Il2CppClass *)(ulong)(uint)isRebuild;
  if (g_data_057ae8c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"HumanPreview");
    il2cpp_runtime_helper_023445d0(&"Preset");
    g_data_057ae8c2 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar2 != 0) &&
     (__this = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
     __this != (Settings_SetSettingsContainer_T__o *)0x0)) {
    str1 = MethodInfo_BaseSetSetting_GetSelectedSet;
    unaff_RBX = (Il2CppClass *)
                Settings_SetSettingsContainer_object___GetSelectedSet
                          (__this,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet);
    if (unaff_RBX != (Il2CppClass *)0x0) {
      pSVar3 = (unaff_RBX->_1).image;
      bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      str1 = TypeInfo_HumanCustomSet;
      pIVar9 = unaff_RBX;
      if (((pSVar3->_2).naturalAligment < bVar1) ||
         ((pSVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) goto label_04487bb2;
    }
    pIVar9 = *(Il2CppClass **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (pIVar9 != (Il2CppClass *)0x0) {
      pSVar3 = (pIVar9->_1).image;
      bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
      str1 = TypeInfo_CharacterEditorGameManager;
      if (((pSVar3->_2).naturalAligment < bVar1) ||
         ((pSVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CharacterEditorGameManager)) goto label_04487bb2;
      __this_00 = *(Settings_BoolSetting_o **)&(pIVar9->_1).byval_arg.bits;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      weapon = 0;
      str1 = (Il2CppClass *)0x0;
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)humanMenu,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if ((humanMenu == (UI_CharacterEditorHumanMenu_o *)0x0) ||
           (pSVar4 = (humanMenu->fields).Weapon, pSVar4 == (Settings_IntSetting_o *)0x0)) goto label_04487baa;
        weapon = (pSVar4->fields)._value;
      }
      if ((char)isRebuild == '\0') {
label_04487ae8:
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        str1 = (Il2CppClass *)0x0;
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)humanMenu,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        if (__this_00 != (Settings_BoolSetting_o *)0x0) {
          str1 = (Il2CppClass *)0x0;
          character = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if ((unaff_RBX != (Il2CppClass *)0x0) &&
             (pSVar5 = (unaff_RBX->_1).this_arg.data, pSVar5 != (Settings_StringSetting_o *)0x0)) {
            str1 = (Il2CppClass *)(pSVar5->fields)._value;
            fileName = System_String__Concat_3ae5ba0("Preset",(System_String_o *)str1,(MethodInfo *)0x0);
            if (humanMenu != (UI_CharacterEditorHumanMenu_o *)0x0) {
              cameraParent = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)humanMenu,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera
                        ("HumanPreview",character,fileName,0x80,1,cameraParent,in_RAX);
              return;
            }
          }
        }
      }
      else if ((__this_00 != (Settings_BoolSetting_o *)0x0) &&
              (__this_00[2].monitor != (Characters_HumanSetup_o *)0x0)) {
        Characters_HumanSetup__Load
                  (__this_00[2].monitor,(Settings_HumanCustomSet_o *)unaff_RBX,weapon,0,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)humanMenu,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') goto label_04487ae8;
        if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ae8c3 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GeneratePreviewForHumanSetCoroutine_d__21);
          g_data_057ae8c3 = '\x01';
        }
        unaff_RBX = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_GeneratePreviewForHumanSetCoroutine_d__21);
        str1 = (Il2CppClass *)0x0;
        System_Object___ctor((Il2CppObject *)unaff_RBX,(MethodInfo *)0x0);
        *(undefined4 *)&((Settings_HumanCustomSet_Fields *)&(unaff_RBX->_1).name)->Settings = 0;
        if (unaff_RBX != (Il2CppClass *)0x0) {
          (unaff_RBX->_1).byval_arg.data = humanMenu;
          str1 = (Il2CppClass *)humanMenu;
          il2cpp_runtime_helper_022b4080(&(unaff_RBX->_1).byval_arg);
          *(undefined1 *)&(unaff_RBX->_1).byval_arg.bits = 0;
          if (humanMenu != (UI_CharacterEditorHumanMenu_o *)0x0) {
            UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                      ((UnityEngine_MonoBehaviour_o *)humanMenu,(System_Collections_IEnumerator_o *)unaff_RBX,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_04487baa:
  il2cpp_runtime_helper_022b2c90();
  pIVar9 = unaff_RBX;
label_04487bb2:
  uVar7 = SUB81(str1,0);
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae8c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GeneratePreviewForHumanSetCoroutine_d__21);
    g_data_057ae8c3 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GeneratePreviewForHumanSetCoroutine_d__21);
  uVar8 = 0;
  __this_02 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = pIVar9;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar9);
    *(undefined1 *)&__this_01[2].monitor = uVar7;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar8;
  return;
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewForHumanSetCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine (UI_CharacterEditorHumanMenu_o* humanMenu, bool isRebuild, const MethodInfo* method);
// 0x4487bc0

System_Collections_IEnumerator_o *
Utility_CharacterPreviewGenerator__GeneratePreviewForHumanSetCoroutine
          (UI_CharacterEditorHumanMenu_o *humanMenu,bool_conflict isRebuild,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_00;
  
  if (g_data_057ae8c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GeneratePreviewForHumanSetCoroutine_d__21);
    g_data_057ae8c3 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GeneratePreviewForHumanSetCoroutine_d__21);
  uVar1 = 0;
  __this_00 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[2].klass = (Il2CppClass *)humanMenu;
    il2cpp_runtime_helper_022b4080(__this + 2,humanMenu);
    *(char *)&__this[2].monitor = (char)isRebuild;
    return (System_Collections_IEnumerator_o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = uVar1;
  return extraout_RAX;
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewForTitanSetCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine (UI_CharacterEditorTitanMenu_o* titanMenu, bool isRebuild, const MethodInfo* method);
// 0x4487c60

System_Collections_IEnumerator_o *
Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSetCoroutine
          (UI_CharacterEditorTitanMenu_o *titanMenu,bool_conflict isRebuild,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_00;
  
  if (g_data_057ae8c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GeneratePreviewForTitanSetCoroutine_d__22);
    g_data_057ae8c4 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GeneratePreviewForTitanSetCoroutine_d__22);
  uVar1 = 0;
  __this_00 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[2].klass = (Il2CppClass *)titanMenu;
    il2cpp_runtime_helper_022b4080(__this + 2,titanMenu);
    *(char *)&__this[2].monitor = (char)isRebuild;
    return (System_Collections_IEnumerator_o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = uVar1;
  return extraout_RAX;
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewWithDebounce
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewWithDebounce (UnityEngine_MonoBehaviour_o* coroutineRunner, System_String_o* debounceKey, System_Action_o* generateAction, float delaySeconds, const MethodInfo* method);
// 0x4487d00

void Utility_CharacterPreviewGenerator__GeneratePreviewWithDebounce
               (UnityEngine_MonoBehaviour_o *coroutineRunner,System_String_o *debounceKey,
               System_Action_o *generateAction,float delaySeconds,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  UnityEngine_Coroutine_o *pUVar3;
  Il2CppClass *__this;
  Il2CppObject *__this_00;
  undefined4 uVar4;
  Il2CppClass *pIVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  Il2CppClass *__this_01;
  undefined4 uVar7;
  
  pIVar5 = (Il2CppClass *)debounceKey;
  if (g_data_057ae8c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Coroutine_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ae8c5 = '\x01';
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) goto label_04487d97;
label_04487d38:
    pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x10);
    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_01 = (Il2CppClass *)0x0;
      goto label_04487f49;
    }
  }
  else {
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) != 0) goto label_04487d38;
label_04487d97:
    il2cpp_runtime_helper_02337ed0();
    pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x10);
    __this_01 = (Il2CppClass *)0x0;
    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04487f49;
  }
  pIVar5 = (Il2CppClass *)debounceKey;
  bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar6,(Il2CppObject *)debounceKey,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x10);
    __this_01 = (Il2CppClass *)0x0;
    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04487f49;
    pIVar5 = (Il2CppClass *)debounceKey;
    pIVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar6,(Il2CppObject *)debounceKey,MethodInfo_Coroutine_get_Item);
    if (pIVar2 != (Il2CppObject *)0x0) {
      if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = *(Il2CppClass **)(*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x10);
      if ((__this_01 == (Il2CppClass *)0x0) ||
         (pIVar5 = (Il2CppClass *)debounceKey,
         pUVar3 = (UnityEngine_Coroutine_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                             (Il2CppObject *)debounceKey,MethodInfo_Coroutine_get_Item),
         coroutineRunner == (UnityEngine_MonoBehaviour_o *)0x0)) goto label_04487f49;
      UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0(coroutineRunner,pUVar3,(MethodInfo *)0x0);
    }
  }
  if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x10);
  }
  else {
    pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8) + 0x10);
  }
  if (g_data_057ae8c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebouncedPreviewCoroutine_d__24);
    g_data_057ae8c6 = '\x01';
  }
  __this = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_DebouncedPreviewCoroutine_d__24);
  pIVar5 = (Il2CppClass *)0x0;
  __this_01 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  *(undefined4 *)
   &((System_Collections_Generic_Dictionary_object__object__Fields *)&(__this->_1).name)->_buckets = 0;
  if (__this != (Il2CppClass *)0x0) {
    (__this->_1).this_arg.data = debounceKey;
    il2cpp_runtime_helper_022b4080(&(__this->_1).this_arg,debounceKey);
    __this_01 = (Il2CppClass *)&(__this->_1).byval_arg.bits;
    *(System_Action_o **)&(__this->_1).byval_arg.bits = generateAction;
    il2cpp_runtime_helper_022b4080();
    *(float *)&(__this->_1).byval_arg.data = delaySeconds;
    pIVar5 = (Il2CppClass *)generateAction;
    if ((coroutineRunner != (UnityEngine_MonoBehaviour_o *)0x0) &&
       (pUVar3 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                           (coroutineRunner,(System_Collections_IEnumerator_o *)__this,(MethodInfo *)0x0),
       pIVar5 = __this, __this_01 = (Il2CppClass *)coroutineRunner,
       pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar6,(Il2CppObject *)debounceKey,(Il2CppObject *)pUVar3,MethodInfo_Void_set_Item);
      return;
    }
  }
label_04487f49:
  uVar7 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae8c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebouncedPreviewCoroutine_d__24);
    g_data_057ae8c6 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DebouncedPreviewCoroutine_d__24);
  uVar4 = 0;
  pIVar2 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[3].klass = __this_01;
    il2cpp_runtime_helper_022b4080(__this_00 + 3,__this_01);
    __this_00[2].monitor = pIVar5;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,pIVar5);
    *(undefined4 *)&__this_00[2].klass = uVar7;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar2[1].klass = uVar4;
  return;
}


// Utility.CharacterPreviewGenerator$$DebouncedPreviewCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine (System_String_o* debounceKey, System_Action_o* generateAction, float delaySeconds, const MethodInfo* method);
// 0x4487f50

System_Collections_IEnumerator_o *
Utility_CharacterPreviewGenerator__DebouncedPreviewCoroutine
          (System_String_o *debounceKey,System_Action_o *generateAction,float delaySeconds,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_00;
  
  if (g_data_057ae8c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DebouncedPreviewCoroutine_d__24);
    g_data_057ae8c6 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DebouncedPreviewCoroutine_d__24);
  uVar1 = 0;
  __this_00 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[3].klass = (Il2CppClass *)debounceKey;
    il2cpp_runtime_helper_022b4080(__this + 3,debounceKey);
    __this[2].monitor = generateAction;
    il2cpp_runtime_helper_022b4080(&__this[2].monitor,generateAction);
    *(float *)&__this[2].klass = delaySeconds;
    return (System_Collections_IEnumerator_o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = uVar1;
  return extraout_RAX;
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewForTitanSet
// il2cpp: void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet (UI_CharacterEditorTitanMenu_o* titanMenu, bool isRebuild, const MethodInfo* method);
// 0x4488010

void Utility_CharacterPreviewGenerator__GeneratePreviewForTitanSet
               (UI_CharacterEditorTitanMenu_o *titanMenu,bool_conflict isRebuild,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_SetSettingsContainer_T__o *__this;
  Settings_TitanCustomSet_c *pSVar3;
  Settings_StringSetting_o *pSVar4;
  bool_conflict bVar5;
  MethodInfo *in_RAX;
  UnityEngine_GameObject_o *character;
  System_String_o *fileName;
  UnityEngine_Transform_o *cameraParent;
  Il2CppObject *__this_00;
  uint in_ECX;
  uint uVar6;
  Il2CppClass *extraout_RDX;
  Il2CppClass *unaff_RBX;
  undefined4 uVar7;
  undefined4 in_register_00000034;
  Il2CppClass *str1;
  Il2CppClass *pIVar8;
  Il2CppObject *__this_01;
  undefined1 in_R8B;
  Il2CppClass *in_R9;
  
  str1 = (Il2CppClass *)CONCAT44(in_register_00000034,isRebuild);
  if (g_data_057ae8c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSet);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"TitanPreview");
    il2cpp_runtime_helper_023445d0(&"Preset");
    g_data_057ae8c7 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
  uVar6 = in_ECX;
  if ((lVar2 != 0) &&
     (__this = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
     __this != (Settings_SetSettingsContainer_T__o *)0x0)) {
    str1 = MethodInfo_BaseSetSetting_GetSelectedSet;
    unaff_RBX = (Il2CppClass *)
                Settings_SetSettingsContainer_object___GetSelectedSet
                          (__this,(MethodInfo_39E05D0 *)MethodInfo_BaseSetSetting_GetSelectedSet);
    if (unaff_RBX != (Il2CppClass *)0x0) {
      pSVar3 = (unaff_RBX->_1).image;
      bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
      in_ECX = (uint)bVar1;
      uVar6 = (uint)bVar1;
      str1 = TypeInfo_TitanCustomSet;
      pIVar8 = unaff_RBX;
      if (((pSVar3->_2).naturalAligment < bVar1) ||
         ((pSVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_TitanCustomSet)) goto label_0448831e;
    }
    pIVar8 = *(Il2CppClass **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    uVar6 = in_ECX;
    if (pIVar8 != (Il2CppClass *)0x0) {
      pSVar3 = (pIVar8->_1).image;
      bVar1 = (TypeInfo_CharacterEditorGameManager->_2).naturalAligment;
      uVar6 = (uint)bVar1;
      str1 = TypeInfo_CharacterEditorGameManager;
      if (((pSVar3->_2).naturalAligment < bVar1) ||
         ((pSVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CharacterEditorGameManager)) goto label_0448831e;
      pSVar4 = (pIVar8->_1).this_arg.data;
      uVar6 = (uint)bVar1;
      if ((char)isRebuild == '\0') {
label_04488259:
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        str1 = (Il2CppClass *)0x0;
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)titanMenu,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return;
        }
        if (pSVar4 != (Settings_StringSetting_o *)0x0) {
          str1 = (Il2CppClass *)0x0;
          character = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pSVar4,(MethodInfo *)0x0);
          if ((unaff_RBX != (Il2CppClass *)0x0) &&
             (pSVar4 = (unaff_RBX->_1).this_arg.data, pSVar4 != (Settings_StringSetting_o *)0x0)) {
            str1 = (Il2CppClass *)(pSVar4->fields)._value;
            fileName = System_String__Concat_3ae5ba0("Preset",(System_String_o *)str1,(MethodInfo *)0x0);
            if (titanMenu != (UI_CharacterEditorTitanMenu_o *)0x0) {
              cameraParent = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)titanMenu,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCamera
                        ("TitanPreview",character,fileName,0x80,0,cameraParent,in_RAX);
              return;
            }
          }
        }
      }
      else {
        uVar6 = (uint)bVar1;
        if ((pSVar4 != (Settings_StringSetting_o *)0x0) &&
           (pSVar4[1].monitor != (Characters_BasicTitanSetup_o *)0x0)) {
          uVar6 = (uint)bVar1;
          Characters_BasicTitanSetup__Load
                    (pSVar4[1].monitor,(Settings_TitanCustomSet_o *)unaff_RBX,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)titanMenu,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') goto label_04488259;
          if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ae8c4 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_GeneratePreviewForTitanSetCoroutine_d__22);
            g_data_057ae8c4 = '\x01';
          }
          unaff_RBX = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_GeneratePreviewForTitanSetCoroutine_d__22);
          str1 = (Il2CppClass *)0x0;
          System_Object___ctor((Il2CppObject *)unaff_RBX,(MethodInfo *)0x0);
          *(undefined4 *)&((Settings_TitanCustomSet_Fields *)&(unaff_RBX->_1).name)->Settings = 0;
          if (unaff_RBX != (Il2CppClass *)0x0) {
            (unaff_RBX->_1).byval_arg.data = titanMenu;
            str1 = (Il2CppClass *)titanMenu;
            il2cpp_runtime_helper_022b4080(&(unaff_RBX->_1).byval_arg);
            *(undefined1 *)&(unaff_RBX->_1).byval_arg.bits = 0;
            if (titanMenu != (UI_CharacterEditorTitanMenu_o *)0x0) {
              UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                        ((UnityEngine_MonoBehaviour_o *)titanMenu,
                         (System_Collections_IEnumerator_o *)unaff_RBX,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar8 = unaff_RBX;
label_0448831e:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae8c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GeneratePreviewWithPersistentCameraCoroutine_d__26);
    g_data_057ae8c8 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GeneratePreviewWithPersistentCameraCoroutine_d__26);
  uVar7 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = pIVar8;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,pIVar8);
    __this_00[2].monitor = str1;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,str1);
    __this_00[3].klass = extraout_RDX;
    il2cpp_runtime_helper_022b4080(__this_00 + 3,extraout_RDX);
    *(uint *)&__this_00[3].monitor = uVar6;
    *(undefined1 *)((long)&__this_00[3].monitor + 4) = in_R8B;
    __this_00[4].klass = in_R9;
    il2cpp_runtime_helper_022b4080(__this_00 + 4,in_R9);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar7;
  return;
}


// Utility.CharacterPreviewGenerator$$GeneratePreviewWithPersistentCameraCoroutine
// il2cpp: System_Collections_IEnumerator_o* Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine (System_String_o* cameraId, UnityEngine_GameObject_o* character, System_String_o* fileName, int32_t size, bool isHuman, UnityEngine_Transform_o* cameraParent, const MethodInfo* method);
// 0x4488330

System_Collections_IEnumerator_o *
Utility_CharacterPreviewGenerator__GeneratePreviewWithPersistentCameraCoroutine
          (System_String_o *cameraId,UnityEngine_GameObject_o *character,System_String_o *fileName,
          int32_t size,bool_conflict isHuman,UnityEngine_Transform_o *cameraParent,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_00;
  
  if (g_data_057ae8c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GeneratePreviewWithPersistentCameraCoroutine_d__26);
    g_data_057ae8c8 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GeneratePreviewWithPersistentCameraCoroutine_d__26);
  uVar1 = 0;
  __this_00 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[2].klass = (Il2CppClass *)cameraId;
    il2cpp_runtime_helper_022b4080(__this + 2,cameraId);
    __this[2].monitor = character;
    il2cpp_runtime_helper_022b4080(&__this[2].monitor,character);
    __this[3].klass = (Il2CppClass *)fileName;
    il2cpp_runtime_helper_022b4080(__this + 3,fileName);
    *(int32_t *)&__this[3].monitor = size;
    *(char *)((long)&__this[3].monitor + 4) = (char)isHuman;
    __this[4].klass = (Il2CppClass *)cameraParent;
    il2cpp_runtime_helper_022b4080(__this + 4,cameraParent);
    return (System_Collections_IEnumerator_o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = uVar1;
  return extraout_RAX;
}


// Utility.CharacterPreviewGenerator$$.cctor
// il2cpp: void Utility_CharacterPreviewGenerator___cctor (const MethodInfo* method);
// 0x4488420

void Utility_CharacterPreviewGenerator___cctor(MethodInfo *method)

{
  ulong *puVar1;
  long lVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  ulong uVar5;
  
  if (cRam00000000057ae8c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_Coroutine);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Utility_CharacterPreviewGener);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Coroutine);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_PreviewCameraData);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    cRam00000000057ae8c9 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(pSVar3,MethodInfo_HashSet_1_System_String);
  **(undefined8 **)(TypeInfo_CharacterPreviewGenerator + 0xb8) = pSVar3;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CharacterPreviewGenerator + 0xb8),pSVar3);
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(_DAT_05570c70);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar4,_DAT_05589ce8);
  lVar2 = *(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 8) = pSVar4;
  il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar4);
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(_DAT_05570a68);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar4,_DAT_05589208);
  lVar2 = *(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x10) = pSVar4;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x10,pSVar4);
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(pSVar3,MethodInfo_HashSet_1_System_String);
  lVar2 = *(long *)(TypeInfo_CharacterPreviewGenerator + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar2 + 0x18) = pSVar3;
  uVar5 = lVar2 + 0x18;
  if (g_data_057ba470 != 0) {
    LOCK();
    puVar1 = (ulong *)((long)&g_data_05803fe8 + (ulong)((uint)(uVar5 >> 0xf) & 0x3fff8));
    *puVar1 = *puVar1 | 1L << ((byte)(uVar5 >> 0xc) & 0x3f);
    UNLOCK();
  }
  return;
}


