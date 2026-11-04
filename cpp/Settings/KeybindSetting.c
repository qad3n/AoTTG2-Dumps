// Type: Settings.KeybindSetting
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/KeybindSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/KeybindSetting.cs
// --------------------------------

// Settings.KeybindSetting.<DefaultInputKeys>d__5$$.ctor
// il2cpp: void Settings_KeybindSetting__DefaultInputKeys_d__5___ctor (Settings_KeybindSetting__DefaultInputKeys_d__5_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x1808e2870

void
Settings_KeybindSetting__DefaultInputKeys_d__5___ctor(Settings_KeybindSetting__DefaultInputKeys_d__5_o* __this, int32_t __1__state, MethodInfo* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Settings.KeybindSetting.<DefaultInputKeys>d__5$$System.IDisposable.Dispose
// il2cpp: void Settings_KeybindSetting__DefaultInputKeys_d__5__System_IDisposable_Dispose (Settings_KeybindSetting__DefaultInputKeys_d__5_o* __this, const MethodInfo* method);
// 0x180547020

void
Settings_KeybindSetting__DefaultInputKeys_d__5__System_IDisposable_Dispose(Settings_KeybindSetting__DefaultInputKeys_d__5_o* __this, MethodInfo* method)

{
  return;
}


// Settings.KeybindSetting.<DefaultInputKeys>d__5$$MoveNext
// il2cpp: bool Settings_KeybindSetting__DefaultInputKeys_d__5__MoveNext (Settings_KeybindSetting__DefaultInputKeys_d__5_o* __this, const MethodInfo* method);
// 0x181f29eb0

bool Settings_KeybindSetting__DefaultInputKeys_d__5__MoveNext
               (Settings_KeybindSetting__DefaultInputKeys_d__5_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  Settings_KeybindSetting_o *pSVar4;
  System_String_array *pSVar5;
  System_String_o *keyStr;
  Settings_InputKey_o *__this_00;
  
  if (Il2CppMethodInitialized_1843454ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InputKey);
    Il2CppMethodInitialized_1843454ab = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 0) {
    pSVar4 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pSVar4 == (Settings_KeybindSetting_o *)0x0) goto label_181f29fb7;
    if ((pSVar4->fields)._defaultKeyStrings == (System_String_array *)0x0) {
      return false;
    }
    pSVar5 = (pSVar4->fields)._defaultKeyStrings;
    (__this->fields).__7__wrap1 = pSVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__7__wrap1,pSVar5);
    (__this->fields).__7__wrap2 = 0;
  }
  else {
    if (iVar2 != 1) {
      return false;
    }
    piVar1 = &(__this->fields).__7__wrap2;
    *piVar1 = *piVar1 + 1;
    (__this->fields).__1__state = -1;
  }
  pSVar5 = (__this->fields).__7__wrap1;
  if (pSVar5 != (System_String_array *)0x0) {
    if ((int)pSVar5->max_length <= (__this->fields).__7__wrap2) {
      (__this->fields).__7__wrap1 = (System_String_array *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__7__wrap1,(void *)0x0);
      return false;
    }
    pSVar5 = (__this->fields).__7__wrap1;
    uVar3 = (__this->fields).__7__wrap2;
    if ((uint)pSVar5->max_length <= uVar3) {
      ThrowIndexOutOfRangeException();
    }
    keyStr = pSVar5->m_Items[(int)uVar3];
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InputKey);
    Settings_InputKey___ctor_1f1d700(__this_00,keyStr,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_00);
    (__this->fields).__1__state = 1;
    return true;
  }
label_181f29fb7:
  ThrowNullReferenceException();
}


// Settings.KeybindSetting.<DefaultInputKeys>d__5$$System.Collections.Generic.IEnumerator<Settings.InputKey>.get_Current
// il2cpp: Settings_InputKey_o* Settings_KeybindSetting__DefaultInputKeys_d__5__System_Collections_Generic_IEnumerator_Settings_InputKey__get_Current (Settings_KeybindSetting__DefaultInputKeys_d__5_o* __this, const MethodInfo* method);
// 0x180573e90

Settings_InputKey_o*
Settings_KeybindSetting__DefaultInputKeys_d__5__System_Collections_Generic_IEnumerator_Settings_InputKey__get_Current(Settings_KeybindSetting__DefaultInputKeys_d__5_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Settings.KeybindSetting.<DefaultInputKeys>d__5$$System.Collections.IEnumerator.Reset
// il2cpp: void Settings_KeybindSetting__DefaultInputKeys_d__5__System_Collections_IEnumerator_Reset (Settings_KeybindSetting__DefaultInputKeys_d__5_o* __this, const MethodInfo* method);
// 0x181f2a070

void Settings_KeybindSetting__DefaultInputKeys_d__5__System_Collections_IEnumerator_Reset
               (Settings_KeybindSetting__DefaultInputKeys_d__5_o *__this,MethodInfo *method)

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
                  MethodInfo_Settings_KeybindSetting_DefaultInputKeys_d__5_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Settings.KeybindSetting.<DefaultInputKeys>d__5$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Settings_KeybindSetting__DefaultInputKeys_d__5__System_Collections_IEnumerator_get_Current (Settings_KeybindSetting__DefaultInputKeys_d__5_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Settings_KeybindSetting__DefaultInputKeys_d__5__System_Collections_IEnumerator_get_Current(Settings_KeybindSetting__DefaultInputKeys_d__5_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Settings.KeybindSetting.<DefaultInputKeys>d__5$$System.Collections.Generic.IEnumerable<Settings.InputKey>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_InputKey__o* Settings_KeybindSetting__DefaultInputKeys_d__5__System_Collections_Generic_IEnumerable_Settings_InputKey__GetEnumerator (Settings_KeybindSetting__DefaultInputKeys_d__5_o* __this, const MethodInfo* method);
// 0x181f29fd0

System_Collections_Generic_IEnumerator_InputKey__o*
Settings_KeybindSetting__DefaultInputKeys_d__5__System_Collections_Generic_IEnumerable_Settings_InputKey__GetEnumerator(Settings_KeybindSetting__DefaultInputKeys_d__5_o* __this, MethodInfo* method)

{
  int iVar1;
  Settings_KeybindSetting_o *value;
  int32_t iVar2;
  Settings_KeybindSetting__DefaultInputKeys_d__5_o *__this_00;
  
  if (Il2CppMethodInitialized_1843454ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting_DefaultInputKeys_d__5);
    Il2CppMethodInitialized_1843454ac = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting_DefaultInputKeys_d__5)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  value = (__this->fields).__4__this;
  (__this_00->fields).__4__this = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,value);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Settings.KeybindSetting.<DefaultInputKeys>d__5$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Settings_KeybindSetting__DefaultInputKeys_d__5__System_Collections_IEnumerable_GetEnumerator (Settings_KeybindSetting__DefaultInputKeys_d__5_o* __this, const MethodInfo* method);
// 0x181f29fd0

System_Collections_IEnumerator_o *
Settings_KeybindSetting__DefaultInputKeys_d__5__System_Collections_IEnumerable_GetEnumerator
          (Settings_KeybindSetting__DefaultInputKeys_d__5_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_KeybindSetting_o *value;
  int32_t iVar2;
  Settings_KeybindSetting__DefaultInputKeys_d__5_o *__this_00;
  
  if (Il2CppMethodInitialized_1843454ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting_DefaultInputKeys_d__5);
    Il2CppMethodInitialized_1843454ac = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting_DefaultInputKeys_d__5)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  value = (__this->fields).__4__this;
  (__this_00->fields).__4__this = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,value);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Settings.KeybindSetting$$.ctor
// il2cpp: void Settings_KeybindSetting___ctor (Settings_KeybindSetting_o* __this, System_String_array* defaultKeyStrings, const MethodInfo* method);
// 0x181f1fbf0

void Settings_KeybindSetting___ctor
               (Settings_KeybindSetting_o *__this,System_String_array *defaultKeyStrings,MethodInfo *method)

{
  System_Collections_Generic_List_InputKey__o *__this_00;
  
  if (Il2CppMethodInitialized_1843454a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_InputKey);
    Il2CppMethodInitialized_1843454a0 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_InputKey);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_InputKey_ctor);
  (__this->fields).InputKeys = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).InputKeys,__this_00);
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._defaultKeyStrings = defaultKeyStrings;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._defaultKeyStrings,defaultKeyStrings);
  (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
  return;
}


// Settings.KeybindSetting$$ContainsEnter
// il2cpp: bool Settings_KeybindSetting__ContainsEnter (Settings_KeybindSetting_o* __this, const MethodInfo* method);
// 0x181f1ea90

bool Settings_KeybindSetting__ContainsEnter(Settings_KeybindSetting_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Settings_KeybindSetting__Contains_1f1ec20(__this,0x10f,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  bVar1 = Settings_KeybindSetting__Contains_1f1ec20(__this,0xd,(MethodInfo *)0x0);
  return bVar1;
}


// Settings.KeybindSetting$$SetDefault
// il2cpp: void Settings_KeybindSetting__SetDefault (Settings_KeybindSetting_o* __this, const MethodInfo* method);
// 0x181f1f9d0

void Settings_KeybindSetting__SetDefault(Settings_KeybindSetting_o *__this,MethodInfo *method)

{
  Settings_KeybindSetting__LoadFromStringArray(__this,(__this->fields)._defaultKeyStrings,(MethodInfo *)0x0);
  return;
}


// Settings.KeybindSetting$$DefaultInputKeys
// il2cpp: System_Collections_Generic_IEnumerable_InputKey__o* Settings_KeybindSetting__DefaultInputKeys (Settings_KeybindSetting_o* __this, const MethodInfo* method);
// 0x181f1ed70

System_Collections_Generic_IEnumerable_InputKey__o *
Settings_KeybindSetting__DefaultInputKeys(Settings_KeybindSetting_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Settings_KeybindSetting__DefaultInputKeys_d__5_o *__this_00;
  
  if (Il2CppMethodInitialized_1843454a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting_DefaultInputKeys_d__5);
    Il2CppMethodInitialized_1843454a1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting_DefaultInputKeys_d__5)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = -2;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar1;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_Generic_IEnumerable_InputKey__o *)__this_00;
}


// Settings.KeybindSetting$$LoadFromStringArray
// il2cpp: void Settings_KeybindSetting__LoadFromStringArray (Settings_KeybindSetting_o* __this, System_String_array* keyStrings, const MethodInfo* method);
// 0x181f1f6c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f1f74f: nop 

void Settings_KeybindSetting__LoadFromStringArray
               (Settings_KeybindSetting_o *__this,System_String_array *keyStrings,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  uint uVar2;
  System_Collections_Generic_List_InputKey__o *pSVar3;
  System_String_o *keyStr;
  Settings_InputKey_array *pSVar4;
  MethodInfo *pMVar5;
  Settings_InputKey_o *__this_00;
  uint uVar6;
  
  if (Il2CppMethodInitialized_1843454a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InputKey);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_Clear);
    Il2CppMethodInitialized_1843454a2 = '\x01';
  }
  pSVar3 = (__this->fields).InputKeys;
  if (pSVar3 != (System_Collections_Generic_List_InputKey__o *)0x0) {
    length = (pSVar3->fields)._size;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar3->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (keyStrings != (System_String_array *)0x0) {
      uVar6 = 0;
      do {
        if ((int)keyStrings->max_length <= (int)uVar6) {
          return;
        }
        if ((uint)keyStrings->max_length <= uVar6) {
label_181f1f814:
          ThrowIndexOutOfRangeException();
        }
        keyStr = keyStrings->m_Items[(int)uVar6];
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InputKey);
        Settings_InputKey___ctor_1f1d700(__this_00,keyStr,(MethodInfo *)0x0);
        pMVar5 = MethodInfo_System_Collections_Generic_List_InputKey_Add;
        pSVar3 = (__this->fields).InputKeys;
        if (pSVar3 == (System_Collections_Generic_List_InputKey__o *)0x0) break;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar3->fields)._items;
        if (pSVar4 == (Settings_InputKey_array *)0x0) break;
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          if ((uint)pSVar4->max_length <= uVar2) goto label_181f1f814;
          pSVar4->m_Items[(int)uVar2] = __this_00;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,__this_00);
          uVar6 = uVar6 + 1;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_00,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
          uVar6 = uVar6 + 1;
        }
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// Settings.KeybindSetting$$ToString
// il2cpp: System_String_o* Settings_KeybindSetting__ToString (Settings_KeybindSetting_o* __this, const MethodInfo* method);
// 0x181f1f9e0
// eh: try 0x181f1fb00..0x181f1fbe8 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f1fafe: nop 
// asm:   0x181f1fb6d: mov rdx, qword ptr [rip + 0x2167a54]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose
// asm:   0x181f1fb74: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181f1fb79: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f1fb7e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f1fb83: test rcx, rcx
// asm:   0x181f1fb86: jne 0x181f1fbe8
// asm:   0x181f1fb88: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x181f1fbe8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

System_String_o * Settings_KeybindSetting__ToString(Settings_KeybindSetting_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_InputKey__o *__this_00;
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_01;
  undefined8 uVar2;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  System_String_o *pSVar3;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  Il2CppObject *local_18;
  
  if (Il2CppMethodInitialized_1843454a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&" / ");
    Il2CppMethodInitialized_1843454a3 = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  __this_00 = (__this->fields).InputKeys;
  if (__this_00 != (System_Collections_Generic_List_InputKey__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
      if (!bVar1) break;
      if (local_18 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      if ((*(char *)((longlong)&local_18[1].klass + 4) == '\0') || (*(int *)&local_18[1].monitor != 0)) {
        uVar2 = (*local_18->klass->vtable[3].methodPtr)(local_18,local_18->klass->vtable[3].method);
        if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(__this_01,uVar2);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
    if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
      if ((__this_01->fields)._size != 0) {
        value = System_Collections_Generic_List_object___ToArray
                          ((System_Collections_Generic_List_T__o *)__this_01,
                           (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        pSVar3 = System_String__Join(" / ",(System_String_array *)value,(MethodInfo *)0x0);
        return pSVar3;
      }
      return "None";
    }
  }
  ThrowNullReferenceException();
}


// Settings.KeybindSetting$$Contains
// il2cpp: bool Settings_KeybindSetting__Contains (Settings_KeybindSetting_o* __this, Settings_InputKey_o* key, const MethodInfo* method);
// 0x181f1ead0
// eh: try 0x181f1eb80..0x181f1ec17 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f1ebe3: mov rdx, qword ptr [rip + 0x21689de]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose
// asm:   0x181f1ebea: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181f1ebef: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f1ebf4: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f1ebf9: test rcx, rcx
// asm:   0x181f1ebfc: jne 0x181f1ec17
// asm:   0x181f1ec17: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool Settings_KeybindSetting__Contains
               (Settings_KeybindSetting_o *__this,Settings_InputKey_o *key,MethodInfo *method)

{
  System_Collections_Generic_List_InputKey__o *__this_00;
  bool bVar1;
  char cVar2;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_1843454a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    Il2CppMethodInitialized_1843454a4 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).InputKeys;
  if (__this_00 != (System_Collections_Generic_List_InputKey__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
        return false;
      }
      if (local_28.fields._current == (Il2CppObject *)0x0) break;
      cVar2 = (*(local_28.fields._current)->klass->vtable[0].methodPtr)
                        (local_28.fields._current,key,(local_28.fields._current)->klass->vtable[0].method);
      if (cVar2 != '\0') {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
        return true;
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Settings.KeybindSetting$$Contains
// il2cpp: bool Settings_KeybindSetting__Contains (Settings_KeybindSetting_o* __this, int32_t key, const MethodInfo* method);
// 0x181f1ec20
// eh: try 0x181f1ecd0..0x181f1ed61 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f1ed2d: mov rdx, qword ptr [rip + 0x2168894]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose
// asm:   0x181f1ed34: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181f1ed39: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f1ed3e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f1ed43: test rcx, rcx
// asm:   0x181f1ed46: jne 0x181f1ed61
// asm:   0x181f1ed61: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool Settings_KeybindSetting__Contains_1f1ec20
               (Settings_KeybindSetting_o *__this,int32_t key,MethodInfo *method)

{
  System_Collections_Generic_List_InputKey__o *__this_00;
  bool bVar1;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_1843454a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    Il2CppMethodInitialized_1843454a5 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).InputKeys;
  if (__this_00 != (System_Collections_Generic_List_InputKey__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
        return false;
      }
      if (local_28.fields._current == (Il2CppObject *)0x0) break;
      if (((*(char *)((longlong)&local_28.fields._current[1].klass + 4) == '\0') &&
          (*(char *)((longlong)&local_28.fields._current[1].monitor + 4) == '\0')) &&
         (*(int *)&local_28.fields._current[1].klass == key)) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
        return true;
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Settings.KeybindSetting$$GetKeyDown
// il2cpp: bool Settings_KeybindSetting__GetKeyDown (Settings_KeybindSetting_o* __this, bool cl, const MethodInfo* method);
// 0x181f1f0a0
// eh: try 0x181f1f1b0..0x181f1f280 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f1f24c: mov rdx, qword ptr [rip + 0x2168375]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose
// asm:   0x181f1f253: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181f1f258: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f1f25d: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f1f262: test rcx, rcx
// asm:   0x181f1f265: jne 0x181f1f280
// asm:   0x181f1f280: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool Settings_KeybindSetting__GetKeyDown(Settings_KeybindSetting_o *__this,bool cl,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_List_InputKey__o *__this_01;
  Il2CppObject *__this_02;
  bool bVar1;
  undefined1 local_40 [16];
  Settings_InputKey_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_1843454a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    Il2CppMethodInitialized_1843454a6 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if (!cl) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    __this_00 = (System_Collections_Generic_HashSet_object__o *)
                TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
    if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_181f1f274;
    bVar1 = System_Collections_Generic_HashSet_object___Contains
                      (__this_00,(Il2CppObject *)__this,
                       (MethodInfo_1759E40 *)
                       MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
    if (bVar1) {
      return false;
    }
  }
  __this_01 = (__this->fields).InputKeys;
  if (__this_01 != (System_Collections_Generic_List_InputKey__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_01,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = (Il2CppObject *)local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
label_181f1f1b0:
    do {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
      __this_02 = local_28.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
        return false;
      }
      if ((Settings_InputKey_o *)local_28.fields._current == (Settings_InputKey_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = ((Settings_InputKey_Fields *)((longlong)local_28.fields._current + 0x10))->_isModifier;
      if (((Settings_InputKey_Fields *)((longlong)local_28.fields._current + 0x10))->_isSpecial == false) {
        if ((bVar1 != false) &&
           (bVar1 = UnityEngine_Input__GetKey
                              (((Settings_InputKey_Fields *)((longlong)local_28.fields._current + 0x10))->
                               _modifier,(MethodInfo *)0x0), !bVar1)) goto label_181f1f1b0;
        bVar1 = UnityEngine_Input__GetKeyDown
                          (((Settings_InputKey_Fields *)((longlong)__this_02 + 0x10))->_key,(MethodInfo *)0x0)
        ;
      }
      else {
        if ((bVar1 != false) &&
           (bVar1 = UnityEngine_Input__GetKey
                              (((Settings_InputKey_Fields *)((longlong)local_28.fields._current + 0x10))->
                               _modifier,(MethodInfo *)0x0), !bVar1)) goto label_181f1f1b0;
        bVar1 = Settings_InputKey__GetSpecial
                          ((Settings_InputKey_o *)__this_02,
                           ((Settings_InputKey_Fields *)((longlong)__this_02 + 0x10))->_special,
                           (MethodInfo *)0x0);
      }
      if (bVar1 != false) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
        return true;
      }
    } while( true );
  }
label_181f1f274:
  ThrowNullReferenceException();
}


// Settings.KeybindSetting$$GetKey
// il2cpp: bool Settings_KeybindSetting__GetKey (Settings_KeybindSetting_o* __this, bool cl, const MethodInfo* method);
// 0x181f1f480
// eh: try 0x181f1f5e0..0x181f1f6b2 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f1f5dd: nop dword ptr [rax]
// asm:   0x181f1f671: mov rdx, qword ptr [rip + 0x2167f50]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose
// asm:   0x181f1f678: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181f1f67d: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f1f682: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f1f687: test rcx, rcx
// asm:   0x181f1f68a: jne 0x181f1f6b2
// asm:   0x181f1f6b2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool Settings_KeybindSetting__GetKey(Settings_KeybindSetting_o *__this,bool cl,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_List_InputKey__o *__this_00;
  Il2CppObject *__this_01;
  bool bVar2;
  undefined1 local_40 [16];
  Settings_InputKey_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_1843454a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    Il2CppMethodInitialized_1843454a7 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if (!cl) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
    if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_181f1f6a6;
    bVar2 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar1,(Il2CppObject *)__this,
                       (MethodInfo_1759E40 *)
                       MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
    if (bVar2) {
      return false;
    }
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)
           TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindHold;
  if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
label_181f1f6a6:
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_HashSet_object___Contains
                    (pSVar1,(Il2CppObject *)__this,
                     (MethodInfo_1759E40 *)
                     MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
  if (!bVar2) {
    __this_00 = (__this->fields).InputKeys;
    if (__this_00 == (System_Collections_Generic_List_InputKey__o *)0x0) goto label_181f1f6a6;
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = (Il2CppObject *)local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
label_181f1f5e0:
    do {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
      __this_01 = local_28.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
        return false;
      }
      if ((Settings_InputKey_o *)local_28.fields._current == (Settings_InputKey_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = ((Settings_InputKey_Fields *)((longlong)local_28.fields._current + 0x10))->_isModifier;
      if (((Settings_InputKey_Fields *)((longlong)local_28.fields._current + 0x10))->_isSpecial == false) {
        if ((bVar2 != false) &&
           (bVar2 = UnityEngine_Input__GetKey
                              (((Settings_InputKey_Fields *)((longlong)local_28.fields._current + 0x10))->
                               _modifier,(MethodInfo *)0x0), !bVar2)) goto label_181f1f5e0;
        bVar2 = UnityEngine_Input__GetKey
                          (((Settings_InputKey_Fields *)((longlong)__this_01 + 0x10))->_key,(MethodInfo *)0x0)
        ;
      }
      else {
        if ((bVar2 != false) &&
           (bVar2 = UnityEngine_Input__GetKey
                              (((Settings_InputKey_Fields *)((longlong)local_28.fields._current + 0x10))->
                               _modifier,(MethodInfo *)0x0), !bVar2)) goto label_181f1f5e0;
        bVar2 = Settings_InputKey__GetSpecial
                          ((Settings_InputKey_o *)__this_01,
                           ((Settings_InputKey_Fields *)((longlong)__this_01 + 0x10))->_special,
                           (MethodInfo *)0x0);
      }
    } while (bVar2 == false);
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
  }
  return true;
}


// Settings.KeybindSetting$$GetKeyUp
// il2cpp: bool Settings_KeybindSetting__GetKeyUp (Settings_KeybindSetting_o* __this, bool cl, const MethodInfo* method);
// 0x181f1f290
// eh: try 0x181f1f3a0..0x181f1f470 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f1f43c: mov rdx, qword ptr [rip + 0x2168185]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose
// asm:   0x181f1f443: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181f1f448: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f1f44d: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f1f452: test rcx, rcx
// asm:   0x181f1f455: jne 0x181f1f470
// asm:   0x181f1f470: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool Settings_KeybindSetting__GetKeyUp(Settings_KeybindSetting_o *__this,bool cl,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_List_InputKey__o *__this_01;
  Il2CppObject *__this_02;
  bool bVar1;
  undefined1 local_40 [16];
  Settings_InputKey_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_1843454a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    Il2CppMethodInitialized_1843454a8 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if (!cl) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    __this_00 = (System_Collections_Generic_HashSet_object__o *)
                TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
    if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_181f1f464;
    bVar1 = System_Collections_Generic_HashSet_object___Contains
                      (__this_00,(Il2CppObject *)__this,
                       (MethodInfo_1759E40 *)
                       MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
    if (bVar1) {
      return false;
    }
  }
  __this_01 = (__this->fields).InputKeys;
  if (__this_01 != (System_Collections_Generic_List_InputKey__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_01,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = (Il2CppObject *)local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
label_181f1f3a0:
    do {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
      __this_02 = local_28.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
        return false;
      }
      if ((Settings_InputKey_o *)local_28.fields._current == (Settings_InputKey_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = ((Settings_InputKey_Fields *)((longlong)local_28.fields._current + 0x10))->_isModifier;
      if (((Settings_InputKey_Fields *)((longlong)local_28.fields._current + 0x10))->_isSpecial == false) {
        if ((bVar1 != false) &&
           (bVar1 = UnityEngine_Input__GetKey
                              (((Settings_InputKey_Fields *)((longlong)local_28.fields._current + 0x10))->
                               _modifier,(MethodInfo *)0x0), !bVar1)) goto label_181f1f3a0;
        bVar1 = UnityEngine_Input__GetKeyUp
                          (((Settings_InputKey_Fields *)((longlong)__this_02 + 0x10))->_key,(MethodInfo *)0x0)
        ;
      }
      else {
        if ((bVar1 != false) &&
           (bVar1 = UnityEngine_Input__GetKey
                              (((Settings_InputKey_Fields *)((longlong)local_28.fields._current + 0x10))->
                               _modifier,(MethodInfo *)0x0), !bVar1)) goto label_181f1f3a0;
        bVar1 = Settings_InputKey__GetSpecial
                          ((Settings_InputKey_o *)__this_02,
                           ((Settings_InputKey_Fields *)((longlong)__this_02 + 0x10))->_special,
                           (MethodInfo *)0x0);
      }
      if (bVar1 != false) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
        return true;
      }
    } while( true );
  }
label_181f1f464:
  ThrowNullReferenceException();
}


// Settings.KeybindSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_KeybindSetting__SerializeToJsonObject (Settings_KeybindSetting_o* __this, const MethodInfo* method);
// 0x181f1f820
// eh: try 0x181f1f900..0x181f1f9c3 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f1f8fc: nop dword ptr [rax]
// asm:   0x181f1f981: mov rdx, qword ptr [rip + 0x2167c40]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose
// asm:   0x181f1f988: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181f1f98d: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f1f992: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f1f997: test rcx, rcx
// asm:   0x181f1f99a: jne 0x181f1f9c3
// asm:   0x181f1f99c: mov rdi, qword ptr [rsp + 0x90]
// asm:   0x181f1f9c3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

SimpleJSONFixed_JSONNode_o *
Settings_KeybindSetting__SerializeToJsonObject(Settings_KeybindSetting_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_InputKey__o *__this_00;
  bool bVar1;
  SimpleJSONFixed_JSONArray_o *__this_01;
  System_String_o *aData;
  SimpleJSONFixed_JSONString_o *__this_02;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  
  if (Il2CppMethodInitialized_1843454a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    Il2CppMethodInitialized_1843454a9 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_01,(MethodInfo *)0x0);
  __this_00 = (__this->fields).InputKeys;
  if (__this_00 != (System_Collections_Generic_List_InputKey__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    local_48.fields._list = (System_Collections_Generic_List_T__o *)local_60._0_8_;
    local_48.fields._index = local_60._8_4_;
    local_48.fields._version = local_60._12_4_;
    local_48.fields._current = local_50;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = &local_48;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_48,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                   MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
        return (SimpleJSONFixed_JSONNode_o *)__this_01;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      aData = (System_String_o *)
              (*(local_48.fields._current)->klass->vtable[3].methodPtr)
                        (local_48.fields._current,(local_48.fields._current)->klass->vtable[3].method);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
      SimpleJSONFixed_JSONString___ctor(__this_02,aData,(MethodInfo *)0x0);
      if (__this_01 == (SimpleJSONFixed_JSONArray_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(__this_01->klass->vtable)._21_Add.methodPtr)
                (__this_01,(SimpleJSONFixed_JSONNode_o *)__this_02,(__this_01->klass->vtable)._21_Add.method);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Settings.KeybindSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_KeybindSetting__DeserializeFromJsonObject (Settings_KeybindSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x181f1edf0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f1ef27: nop word ptr [rax + rax]
// asm:   0x181f1f03b: jmp 0x181f1f042

void Settings_KeybindSetting__DeserializeFromJsonObject
               (Settings_KeybindSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  SimpleJSONFixed_JSONNode_c *pSVar4;
  System_String_array *pSVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  System_Collections_Generic_List_string__o *__this_00;
  SimpleJSONFixed_JSONArray_o *pSVar8;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar9;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar10;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  System_String_o *pSVar12;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *keyStrings;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  SimpleJSONFixed_JSONNode_Enumerator_o local_68;
  
  if (Il2CppMethodInitialized_1843454aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_1843454aa = '\x01';
  }
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((json != (SimpleJSONFixed_JSONNode_o *)0x0) &&
     (pSVar8 = (*(json->klass->vtable)._45_get_AsArray.methodPtr)
                         (json,(json->klass->vtable)._45_get_AsArray.method),
     pSVar8 != (SimpleJSONFixed_JSONArray_o *)0x0)) {
    pSVar9 = (*(pSVar8->klass->vtable)._32_GetEnumerator.methodPtr)
                       (&local_68,pSVar8,(pSVar8->klass->vtable)._32_GetEnumerator.method);
    local_d8.type = (pSVar9->fields).type;
    local_d8._4_4_ = *(undefined4 *)&(pSVar9->fields).field_0x4;
    local_d8.m_Object.fields._dictionary = (pSVar9->fields).m_Object.fields._dictionary;
    local_d8.m_Object.fields._version = (pSVar9->fields).m_Object.fields._version;
    local_d8.m_Object.fields._index = (pSVar9->fields).m_Object.fields._index;
    local_d8.m_Object.fields._current.fields.key = (pSVar9->fields).m_Object.fields._current.fields.key;
    local_d8.m_Object.fields._current.fields.value = (pSVar9->fields).m_Object.fields._current.fields.value;
    local_d8.m_Object.fields._getEnumeratorRetType = (pSVar9->fields).m_Object.fields._getEnumeratorRetType;
    local_d8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar9->fields).m_Object.fields.field_0x24;
    local_d8.m_Array.fields._list = (pSVar9->fields).m_Array.fields._list;
    local_d8.m_Array.fields._index = (pSVar9->fields).m_Array.fields._index;
    local_d8.m_Array.fields._version = (pSVar9->fields).m_Array.fields._version;
    local_d8.m_Array.fields._current = (pSVar9->fields).m_Array.fields._current;
    bVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
    if (bVar7) {
      do {
        pSVar10 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
        pSVar12 = (pSVar10->fields).key;
        pSVar11 = (pSVar10->fields).value;
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        local_88.fields.key = pSVar12;
        local_88.fields.value = pSVar11;
        pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_88,(MethodInfo *)0x0);
        if (pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181f1f07c;
        pSVar4 = pSVar11->klass;
        bVar2 = (TypeInfo_SimpleJSONFixed_JSONString->_2).typeHierarchyDepth;
        if (((pSVar4->_2).typeHierarchyDepth < bVar2) ||
           ((pSVar4->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString)) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar11,TypeInfo_SimpleJSONFixed_JSONString);
        }
        pSVar12 = (*(pSVar4->vtable)._9_get_Value.methodPtr)(pSVar11,(pSVar4->vtable)._9_get_Value.method);
        pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_181f1f07c;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this_00->fields)._items;
        if (pSVar5 == (System_String_array *)0x0) goto label_181f1f07c;
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pSVar5->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          if ((uint)pSVar5->max_length <= uVar3) {
            ThrowIndexOutOfRangeException();
          }
          pSVar5->m_Items[(int)uVar3] = pSVar12;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar3,pSVar12);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar12,
                     (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
        }
        bVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
      } while (bVar7);
    }
    else if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_181f1f07c;
    keyStrings = System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_T__o *)__this_00,
                            (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    Settings_KeybindSetting__LoadFromStringArray(__this,(System_String_array *)keyStrings,(MethodInfo *)0x0);
    return;
  }
label_181f1f07c:
  ThrowNullReferenceException();
}


