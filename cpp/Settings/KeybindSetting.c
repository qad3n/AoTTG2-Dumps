// Type: Settings.KeybindSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/KeybindSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/KeybindSetting.cs
// --------------------------------

// Settings.KeybindSetting.<DefaultInputKeys>d__6$$.ctor
// il2cpp: void Settings_KeybindSetting__DefaultInputKeys_d__6___ctor (Settings_KeybindSetting__DefaultInputKeys_d__6_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5c7b460

void Settings_KeybindSetting__DefaultInputKeys_d__6___ctor
               (Settings_KeybindSetting__DefaultInputKeys_d__6_o *__this,int32_t __1__state,MethodInfo *method
               )

{
  int32_t iVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this->fields).__l__initialThreadId = iVar1;
  return;
}


// Settings.KeybindSetting.<DefaultInputKeys>d__6$$System.IDisposable.Dispose
// il2cpp: void Settings_KeybindSetting__DefaultInputKeys_d__6__System_IDisposable_Dispose (Settings_KeybindSetting__DefaultInputKeys_d__6_o* __this, const MethodInfo* method);
// 0x5c7b490

void Settings_KeybindSetting__DefaultInputKeys_d__6__System_IDisposable_Dispose
               (Settings_KeybindSetting__DefaultInputKeys_d__6_o *__this,MethodInfo *method)

{
  return;
}


// Settings.KeybindSetting.<DefaultInputKeys>d__6$$MoveNext
// il2cpp: bool Settings_KeybindSetting__DefaultInputKeys_d__6__MoveNext (Settings_KeybindSetting__DefaultInputKeys_d__6_o* __this, const MethodInfo* method);
// 0x5c7b4a0

bool Settings_KeybindSetting__DefaultInputKeys_d__6__MoveNext
               (Settings_KeybindSetting__DefaultInputKeys_d__6_o *__this,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  Settings_KeybindSetting_o *pSVar3;
  System_String_array *pSVar4;
  System_String_o *keyStr;
  Settings_InputKey_o *__this_00;
  System_String_array **targetAddress;
  uint uVar5;
  
  if (Il2CppMethodInitialized_07547978 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InputKey);
    Il2CppMethodInitialized_07547978 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    uVar5 = (__this->fields).__7__wrap2 + 1;
    (__this->fields).__7__wrap2 = uVar5;
  }
  else {
    if (iVar2 != 0) {
      uVar5 = 0;
      goto label_05c7b591;
    }
    pSVar3 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pSVar3 == (Settings_KeybindSetting_o *)0x0) goto label_05c7b59a;
    pSVar4 = (pSVar3->fields)._defaultKeyStrings;
    uVar5 = 0;
    if (pSVar4 == (System_String_array *)0x0) goto label_05c7b591;
    (__this->fields).__7__wrap1 = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__7__wrap1);
    (__this->fields).__7__wrap2 = 0;
  }
  pSVar4 = (__this->fields).__7__wrap1;
  if (pSVar4 == (System_String_array *)0x0) {
label_05c7b59a:
    ThrowNullReferenceException();
  }
  uVar1 = (uint)pSVar4->max_length;
  if ((int)uVar5 < (int)uVar1) {
    if (uVar1 <= uVar5) {
      ThrowIndexOutOfRangeException();
    }
    keyStr = pSVar4->m_Items[(int)uVar5];
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InputKey);
    Settings_InputKey___ctor_5a55c90(__this_00,keyStr,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    uVar5 = 1;
  }
  else {
    targetAddress = &(__this->fields).__7__wrap1;
    *targetAddress = (System_String_array *)0x0;
    uVar5 = 0;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
label_05c7b591:
  return SUB41(uVar5,0);
}


// Settings.KeybindSetting.<DefaultInputKeys>d__6$$System.Collections.Generic.IEnumerator<Settings.InputKey>.get_Current
// il2cpp: Settings_InputKey_o* Settings_KeybindSetting__DefaultInputKeys_d__6__System_Collections_Generic_IEnumerator_Settings_InputKey__get_Current (Settings_KeybindSetting__DefaultInputKeys_d__6_o* __this, const MethodInfo* method);
// 0x5c7b5b0

Settings_InputKey_o *
Settings_KeybindSetting__DefaultInputKeys_d__6__System_Collections_Generic_IEnumerator_Settings_InputKey__get_Current
          (Settings_KeybindSetting__DefaultInputKeys_d__6_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Settings.KeybindSetting.<DefaultInputKeys>d__6$$System.Collections.IEnumerator.Reset
// il2cpp: void Settings_KeybindSetting__DefaultInputKeys_d__6__System_Collections_IEnumerator_Reset (Settings_KeybindSetting__DefaultInputKeys_d__6_o* __this, const MethodInfo* method);
// 0x5c7b5c0

void Settings_KeybindSetting__DefaultInputKeys_d__6__System_Collections_IEnumerator_Reset
               (Settings_KeybindSetting__DefaultInputKeys_d__6_o *__this,MethodInfo *method)

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
                  MethodInfo_Settings_KeybindSetting_DefaultInputKeys_d__6_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Settings.KeybindSetting.<DefaultInputKeys>d__6$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Settings_KeybindSetting__DefaultInputKeys_d__6__System_Collections_IEnumerator_get_Current (Settings_KeybindSetting__DefaultInputKeys_d__6_o* __this, const MethodInfo* method);
// 0x5c7b600

Il2CppObject *
Settings_KeybindSetting__DefaultInputKeys_d__6__System_Collections_IEnumerator_get_Current
          (Settings_KeybindSetting__DefaultInputKeys_d__6_o *__this,MethodInfo *method)

{
  return (Il2CppObject *)(__this->fields).__2__current;
}


// Settings.KeybindSetting.<DefaultInputKeys>d__6$$System.Collections.Generic.IEnumerable<Settings.InputKey>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_InputKey__o* Settings_KeybindSetting__DefaultInputKeys_d__6__System_Collections_Generic_IEnumerable_Settings_InputKey__GetEnumerator (Settings_KeybindSetting__DefaultInputKeys_d__6_o* __this, const MethodInfo* method);
// 0x5c7b610

System_Collections_IEnumerator_o *
Settings_KeybindSetting__DefaultInputKeys_d__6__System_Collections_Generic_IEnumerable_Settings_InputKey__GetEnumerator
          (Settings_KeybindSetting__DefaultInputKeys_d__6_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Settings_KeybindSetting__DefaultInputKeys_d__6_o *__this_00;
  
  if (Il2CppMethodInitialized_07547979 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting_DefaultInputKeys_d__6);
    Il2CppMethodInitialized_07547979 = '\x01';
  }
  if (((__this->fields).__1__state == -2) &&
     (iVar1 = (__this->fields).__l__initialThreadId,
     iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0), iVar1 == iVar2)) {
    (__this->fields).__1__state = 0;
    return (System_Collections_IEnumerator_o *)__this;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting_DefaultInputKeys_d__6)
  ;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  (__this_00->fields).__4__this = (__this->fields).__4__this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Settings.KeybindSetting.<DefaultInputKeys>d__6$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* Settings_KeybindSetting__DefaultInputKeys_d__6__System_Collections_IEnumerable_GetEnumerator (Settings_KeybindSetting__DefaultInputKeys_d__6_o* __this, const MethodInfo* method);
// 0x5c7b6b0

System_Collections_IEnumerator_o *
Settings_KeybindSetting__DefaultInputKeys_d__6__System_Collections_IEnumerable_GetEnumerator
          (Settings_KeybindSetting__DefaultInputKeys_d__6_o *__this,MethodInfo *method)

{
  System_Collections_IEnumerator_o *pSVar1;
  
  pSVar1 = Settings_KeybindSetting__DefaultInputKeys_d__6__System_Collections_Generic_IEnumerable_Settings_InputKey__GetEnumerator
                     (__this,method);
  return pSVar1;
}


// Settings.KeybindSetting$$.ctor
// il2cpp: void Settings_KeybindSetting___ctor (Settings_KeybindSetting_o* __this, System_String_array* defaultKeyStrings, const MethodInfo* method);
// 0x5b4b800

void Settings_KeybindSetting___ctor
               (Settings_KeybindSetting_o *__this,System_String_array *defaultKeyStrings,MethodInfo *method)

{
  MethodInfo *method_00;
  Settings_InspectorSettingMetadata_o *__this_00;
  
  if (Il2CppMethodInitialized_075472ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_InputKey);
    Il2CppMethodInitialized_075472ec = '\x01';
  }
  method_00 = (MethodInfo *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_InputKey);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)method_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_InputKey_ctor);
  (__this->fields).InputKeys = (System_Collections_Generic_List_InputKey__o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).InputKeys);
  if (Il2CppMethodInitialized_075472cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InspectorSettingMetadata);
    Il2CppMethodInitialized_075472cb = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InspectorSettingMetadata);
  Settings_InspectorSettingMetadata___ctor(__this_00,method_00);
  (__this->fields).InspectorMetadata = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).InspectorMetadata);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._defaultKeyStrings = defaultKeyStrings;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._defaultKeyStrings);
  (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
  return;
}


// Settings.KeybindSetting$$ContainsEnter
// il2cpp: bool Settings_KeybindSetting__ContainsEnter (Settings_KeybindSetting_o* __this, const MethodInfo* method);
// 0x5b57080

bool Settings_KeybindSetting__ContainsEnter(Settings_KeybindSetting_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  
  bVar1 = Settings_KeybindSetting__Contains_5a570b0(__this,0x10f,in_RDX);
  if (bVar1) {
    return true;
  }
  bVar1 = Settings_KeybindSetting__Contains_5a570b0(__this,0xd,method_00);
  return bVar1;
}


// Settings.KeybindSetting$$SetDefault
// il2cpp: void Settings_KeybindSetting__SetDefault (Settings_KeybindSetting_o* __this, const MethodInfo* method);
// 0x5b57220

void Settings_KeybindSetting__SetDefault(Settings_KeybindSetting_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  Settings_KeybindSetting__LoadFromStringArray(__this,(__this->fields)._defaultKeyStrings,in_RDX);
  return;
}


// Settings.KeybindSetting$$DefaultInputKeys
// il2cpp: System_Collections_Generic_IEnumerable_InputKey__o* Settings_KeybindSetting__DefaultInputKeys (Settings_KeybindSetting_o* __this, const MethodInfo* method);
// 0x5b57380

System_Collections_Generic_IEnumerable_InputKey__o *
Settings_KeybindSetting__DefaultInputKeys(Settings_KeybindSetting_o *__this,MethodInfo *method)

{
  Settings_KeybindSetting__DefaultInputKeys_d__6_o *__this_00;
  
  if (Il2CppMethodInitialized_075472ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting_DefaultInputKeys_d__6);
    Il2CppMethodInitialized_075472ed = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting_DefaultInputKeys_d__6)
  ;
  Settings_KeybindSetting__DefaultInputKeys_d__6___ctor(__this_00,-2,(MethodInfo *)0x0);
  if (__this_00 == (Settings_KeybindSetting__DefaultInputKeys_d__6_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_Generic_IEnumerable_InputKey__o *)__this_00;
}


// Settings.KeybindSetting$$LoadFromStringArray
// il2cpp: void Settings_KeybindSetting__LoadFromStringArray (Settings_KeybindSetting_o* __this, System_String_array* keyStrings, const MethodInfo* method);
// 0x5b57230

void Settings_KeybindSetting__LoadFromStringArray
               (Settings_KeybindSetting_o *__this,System_String_array *keyStrings,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint uVar2;
  System_Collections_Generic_List_InputKey__o *pSVar3;
  System_String_o *keyStr;
  Settings_InputKey_array *pSVar4;
  MethodInfo *pMVar5;
  ulong uVar6;
  Settings_InputKey_o *__this_00;
  MethodInfo *method_00;
  ulong uVar7;
  
  if (Il2CppMethodInitialized_075472ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InputKey);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_InputKey_Clear);
    Il2CppMethodInitialized_075472ee = '\x01';
  }
  pSVar3 = (__this->fields).InputKeys;
  if (pSVar3 != (System_Collections_Generic_List_InputKey__o *)0x0) {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (keyStrings != (System_String_array *)0x0) {
      if (0 < (int)keyStrings->max_length) {
        uVar6 = keyStrings->max_length & 0xffffffff;
        uVar7 = 0;
        do {
          if (uVar6 <= uVar7) {
            ThrowIndexOutOfRangeException();
          }
          keyStr = keyStrings->m_Items[uVar7];
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InputKey);
          Settings_InputKey___ctor_5a55c90(__this_00,keyStr,method_00);
          pMVar5 = MethodInfo_System_Collections_Generic_List_InputKey_Add;
          pSVar3 = (__this->fields).InputKeys;
          if (pSVar3 == (System_Collections_Generic_List_InputKey__o *)0x0) goto label_05b5736d;
          piVar1 = &(pSVar3->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (pSVar3->fields)._items;
          if (pSVar4 == (Settings_InputKey_array *)0x0) goto label_05b5736d;
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = __this_00;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_00,
                       (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
          }
          uVar7 = uVar7 + 1;
          uVar2 = (uint)keyStrings->max_length;
          uVar6 = (ulong)uVar2;
        } while ((long)uVar7 < (long)(int)uVar2);
      }
      return;
    }
  }
label_05b5736d:
  ThrowNullReferenceException();
}


// Settings.KeybindSetting$$ToString
// il2cpp: System_String_o* Settings_KeybindSetting__ToString (Settings_KeybindSetting_o* __this, const MethodInfo* method);
// 0x5b573f0
// eh: try 0x5b57555..0x5b57679 -> pad 0x5b57680 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b576a0..0x5b576a5 -> pad 0x5b576c8 cleanup
// eh: try 0x5b576cb..0x5b576d5 -> pad 0x5b576dd catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b5751e: lea r12, [rip + 0x173f433]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x5b57525: jmp 0x5b575da
// asm:   0x5b5767e: jmp 0x5b57688
// asm:   0x5b57680: jmp 0x5b57688
// asm:   0x5b57682: jmp 0x5b57688
// asm:   0x5b57684: jmp 0x5b57688
// asm:   0x5b57686: jmp 0x5b57688
// asm:   0x5b57688: mov r14, rax
// asm:   0x5b5768b: cmp edx, 1
// asm:   0x5b5768e: jne 0x5b576cb
// asm:   0x5b57690: mov rdi, r14
// asm:   0x5b57693: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b57698: mov r14, qword ptr [rax]
// asm:   0x5b5769b: mov qword ptr [rsp + 0x20], r14
// asm:   0x5b576a0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b576a5: lea rax, [rip + 0x1736ad4]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose
// asm:   0x5b576ac: mov rsi, qword ptr [rax]
// asm:   0x5b576af: mov rdi, rsp
// asm:   0x5b576b2: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b576b7: test r14, r14
// asm:   0x5b576ba: je 0x5b57573
// asm:   0x5b576c0: mov rdi, r14
// asm:   0x5b576c3: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b576c8: mov r14, rax
// asm:   0x5b576cb: lea rdi, [rsp + 0x20]
// asm:   0x5b576d0: call 0x2fd7220  ; il2cpp_runtime_helper_02fd7220()
// asm:   0x5b576d5: mov rdi, r14
// asm:   0x5b576d8: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b576dd: mov rdi, rax
// asm:   0x5b576e0: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o * Settings_KeybindSetting__ToString(Settings_KeybindSetting_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_InputKey__o *__this_00;
  MethodInfo *pMVar3;
  undefined1 *puVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *__this_01;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  undefined1 auStack_58 [8];
  undefined1 *puStack_50;
  Il2CppObject *pIStack_48;
  undefined1 auStack_38 [16];
  Il2CppObject *pIStack_28;
  
  if (Il2CppMethodInitialized_075472ef == '\0') {
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
    Il2CppMethodInitialized_075472ef = '\x01';
  }
  auStack_58 = (undefined1  [8])0x0;
  puStack_50 = (undefined1 *)0x0;
  pIStack_48 = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  __this_00 = (__this->fields).InputKeys;
  if (__this_00 != (System_Collections_Generic_List_InputKey__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_38,
               (System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    pIStack_48 = pIStack_28;
    auStack_58 = (undefined1  [8])auStack_38._0_8_;
    puStack_50 = (undefined1 *)auStack_38._8_8_;
    auStack_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    auStack_38._8_8_ = auStack_58;
    puVar4 = auStack_58;
    if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
      do {
        auStack_38._8_8_ = puVar4;
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)auStack_58,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
        if (!bVar5) goto label_05b57561;
        if (pIStack_48 == (Il2CppObject *)0x0) goto label_05b5765f;
      } while ((*(char *)((long)&pIStack_48[1].klass + 4) != '\0') &&
              (puVar4 = (undefined1 *)auStack_38._8_8_, *(int *)&pIStack_48[1].monitor == 0));
      (*pIStack_48->klass->vtable[3].methodPtr)(pIStack_48,pIStack_48->klass->vtable[3].method);
label_05b57674:
      ThrowNullReferenceException();
    }
    while (bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)auStack_58,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext), bVar5)
    {
      if (pIStack_48 == (Il2CppObject *)0x0) {
label_05b5765f:
        ThrowNullReferenceException();
      }
      if ((*(char *)((long)&pIStack_48[1].klass + 4) == '\0') || (*(int *)&pIStack_48[1].monitor != 0)) {
        pSVar7 = (System_String_o *)
                 (*pIStack_48->klass->vtable[3].methodPtr)(pIStack_48,pIStack_48->klass->vtable[3].method);
        pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this_01->fields)._items;
        if (pSVar6 == (System_String_array *)0x0) goto label_05b57674;
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pSVar6->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pSVar6->m_Items[(int)uVar2] = pSVar7;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar7,
                     (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
        }
      }
    }
label_05b57561:
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_58,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
    if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
      if ((__this_01->fields)._size == 0) {
        pSVar7 = "None";
      }
      else {
        pSVar6 = (System_String_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)__this_01,
                            (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        pSVar7 = System_String__Join(" / ",pSVar6,(MethodInfo *)0x0);
      }
      return pSVar7;
    }
  }
  ThrowNullReferenceException();
}


// Settings.KeybindSetting$$Contains
// il2cpp: bool Settings_KeybindSetting__Contains (Settings_KeybindSetting_o* __this, Settings_InputKey_o* key, const MethodInfo* method);
// 0x5b576f0
// eh: try 0x5b57793..0x5b577f9 -> pad 0x5b57802 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b5781a..0x5b5781f -> pad 0x5b57845 cleanup
// eh: try 0x5b57848..0x5b57852 -> pad 0x5b5785a catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b577fe: jmp 0x5b57802
// asm:   0x5b57800: jmp 0x5b57802
// asm:   0x5b57802: mov rbx, rax
// asm:   0x5b57805: cmp edx, 1
// asm:   0x5b57808: jne 0x5b57848
// asm:   0x5b5780a: mov rdi, rbx
// asm:   0x5b5780d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b57812: mov r14, qword ptr [rax]
// asm:   0x5b57815: mov qword ptr [rsp + 0x18], r14
// asm:   0x5b5781a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b5781f: lea rax, [rip + 0x173695a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose
// asm:   0x5b57826: mov rsi, qword ptr [rax]
// asm:   0x5b57829: mov rdi, rsp
// asm:   0x5b5782c: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b57831: xor ebp, ebp
// asm:   0x5b57833: mov ebx, 0
// asm:   0x5b57838: test r14, r14
// asm:   0x5b5783b: je 0x5b577e0
// asm:   0x5b5783d: mov rdi, r14
// asm:   0x5b57840: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b57845: mov rbx, rax
// asm:   0x5b57848: lea rdi, [rsp + 0x18]
// asm:   0x5b5784d: call 0x2fd7250  ; il2cpp_runtime_helper_02fd7250()
// asm:   0x5b57852: mov rdi, rbx
// asm:   0x5b57855: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b5785a: mov rdi, rax
// asm:   0x5b5785d: call 0x2ab61e0  ; __clang_call_terminate()

bool Settings_KeybindSetting__Contains
               (Settings_KeybindSetting_o *__this,Settings_InputKey_o *key,MethodInfo *method)

{
  System_Collections_Generic_List_InputKey__o *__this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (Il2CppMethodInitialized_075472f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    Il2CppMethodInitialized_075472f0 = '\x01';
  }
  SStack_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).InputKeys;
  if (__this_00 == (System_Collections_Generic_List_InputKey__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&SStack_48,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
  uStack_30 = 0;
  puStack_28 = (undefined1 *)&SStack_48;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
    if (!bVar1) {
      iVar3 = 5;
      goto label_05b577ce;
    }
    if (SStack_48.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    cVar2 = (*(SStack_48.fields._current)->klass->vtable[0].methodPtr)
                      (SStack_48.fields._current,key,(SStack_48.fields._current)->klass->vtable[0].method);
  } while (cVar2 == '\0');
  iVar3 = 4;
label_05b577ce:
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_48,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
  return iVar3 == 4 && bVar1;
}


// Settings.KeybindSetting$$Contains
// il2cpp: bool Settings_KeybindSetting__Contains (Settings_KeybindSetting_o* __this, int32_t key, const MethodInfo* method);
// 0x5b570b0
// eh: try 0x5b57153..0x5b571b4 -> pad 0x5b571bb (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b571d3..0x5b571d8 -> pad 0x5b571fe cleanup
// eh: try 0x5b57201..0x5b5720b -> pad 0x5b57213 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b571b9: jmp 0x5b571bb
// asm:   0x5b571bb: mov rbx, rax
// asm:   0x5b571be: cmp edx, 1
// asm:   0x5b571c1: jne 0x5b57201
// asm:   0x5b571c3: mov rdi, rbx
// asm:   0x5b571c6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b571cb: mov r14, qword ptr [rax]
// asm:   0x5b571ce: mov qword ptr [rsp + 0x18], r14
// asm:   0x5b571d3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b571d8: lea rax, [rip + 0x1736fa1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose
// asm:   0x5b571df: mov rsi, qword ptr [rax]
// asm:   0x5b571e2: mov rdi, rsp
// asm:   0x5b571e5: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b571ea: xor ebp, ebp
// asm:   0x5b571ec: mov ebx, 0
// asm:   0x5b571f1: test r14, r14
// asm:   0x5b571f4: je 0x5b5719b
// asm:   0x5b571f6: mov rdi, r14
// asm:   0x5b571f9: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b571fe: mov rbx, rax
// asm:   0x5b57201: lea rdi, [rsp + 0x18]
// asm:   0x5b57206: call 0x2fd7280  ; il2cpp_runtime_helper_02fd7280()
// asm:   0x5b5720b: mov rdi, rbx
// asm:   0x5b5720e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b57213: mov rdi, rax
// asm:   0x5b57216: call 0x2ab61e0  ; __clang_call_terminate()

bool Settings_KeybindSetting__Contains_5a570b0
               (Settings_KeybindSetting_o *__this,int32_t key,MethodInfo *method)

{
  System_Collections_Generic_List_InputKey__o *__this_00;
  bool bVar1;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_30;
  undefined1 *local_28;
  
  if (Il2CppMethodInitialized_075472f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    Il2CppMethodInitialized_075472f1 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).InputKeys;
  if (__this_00 == (System_Collections_Generic_List_InputKey__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
  local_30 = 0;
  local_28 = (undefined1 *)&local_48;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
    if (!bVar1) {
      iVar2 = 5;
      goto label_05b57189;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
  } while (((*(char *)((long)&local_48.fields._current[1].klass + 4) != '\0') ||
           (*(char *)((long)&local_48.fields._current[1].monitor + 4) != '\0')) ||
          (*(int *)&local_48.fields._current[1].klass != key));
  iVar2 = 4;
label_05b57189:
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
  return iVar2 == 4 && bVar1;
}


// Settings.KeybindSetting$$GetKeyDown
// il2cpp: bool Settings_KeybindSetting__GetKeyDown (Settings_KeybindSetting_o* __this, bool cl, const MethodInfo* method);
// 0x5b57870
// eh: try 0x5b57984..0x5b579db -> pad 0x5b579e4 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b579fc..0x5b57a01 -> pad 0x5b57a27 cleanup
// eh: try 0x5b57a2a..0x5b57a34 -> pad 0x5b57a3c catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b579e0: jmp 0x5b579e4
// asm:   0x5b579e2: jmp 0x5b579e4
// asm:   0x5b579e4: mov rbx, rax
// asm:   0x5b579e7: cmp edx, 1
// asm:   0x5b579ea: jne 0x5b57a2a
// asm:   0x5b579ec: mov rdi, rbx
// asm:   0x5b579ef: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b579f4: mov r14, qword ptr [rax]
// asm:   0x5b579f7: mov qword ptr [rsp + 0x20], r14
// asm:   0x5b579fc: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b57a01: lea rax, [rip + 0x1736778]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose
// asm:   0x5b57a08: mov rsi, qword ptr [rax]
// asm:   0x5b57a0b: mov rdi, rsp
// asm:   0x5b57a0e: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b57a13: xor ebx, ebx
// asm:   0x5b57a15: mov ebp, 0
// asm:   0x5b57a1a: test r14, r14
// asm:   0x5b57a1d: je 0x5b579c3
// asm:   0x5b57a1f: mov rdi, r14
// asm:   0x5b57a22: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b57a27: mov rbx, rax
// asm:   0x5b57a2a: lea rdi, [rsp + 0x20]
// asm:   0x5b57a2f: call 0x2fd72b0  ; il2cpp_runtime_helper_02fd72b0()
// asm:   0x5b57a34: mov rdi, rbx
// asm:   0x5b57a37: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b57a3c: mov rdi, rax
// asm:   0x5b57a3f: call 0x2ab61e0  ; __clang_call_terminate()

bool Settings_KeybindSetting__GetKeyDown(Settings_KeybindSetting_o *__this,bool cl,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_List_InputKey__o *__this_01;
  bool bVar1;
  bool bVar2;
  int iVar3;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_28;
  undefined1 *local_20;
  
  if (Il2CppMethodInitialized_075472f2 == '\0') {
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
    Il2CppMethodInitialized_075472f2 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (!cl) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    __this_00 = (System_Collections_Generic_HashSet_object__o *)
                TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
    if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05b579db;
    bVar1 = System_Collections_Generic_HashSet_object___Contains
                      (__this_00,(Il2CppObject *)__this,
                       (MethodInfo_4FB3720 *)
                       MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
    if (bVar1) {
      return false;
    }
  }
  __this_01 = (__this->fields).InputKeys;
  if (__this_01 != (System_Collections_Generic_List_InputKey__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    local_28 = 0;
    local_20 = (undefined1 *)&local_48;
    do {
      method_00 = MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext;
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
      if (!bVar1) {
        iVar3 = 6;
        goto label_05b579b1;
      }
      if ((Settings_InputKey_o *)local_48.fields._current == (Settings_InputKey_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = Settings_InputKey__GetKeyDown((Settings_InputKey_o *)local_48.fields._current,method_00);
    } while (!bVar2);
    iVar3 = 5;
label_05b579b1:
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
    return iVar3 == 5 && bVar1;
  }
label_05b579db:
  ThrowNullReferenceException();
}


// Settings.KeybindSetting$$GetKey
// il2cpp: bool Settings_KeybindSetting__GetKey (Settings_KeybindSetting_o* __this, bool cl, const MethodInfo* method);
// 0x5b57a50
// eh: try 0x5b57bb4..0x5b57c0b -> pad 0x5b57c14 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b57c2c..0x5b57c31 -> pad 0x5b57c57 cleanup
// eh: try 0x5b57c5a..0x5b57c64 -> pad 0x5b57c6c catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b57c10: jmp 0x5b57c14
// asm:   0x5b57c12: jmp 0x5b57c14
// asm:   0x5b57c14: mov rbx, rax
// asm:   0x5b57c17: cmp edx, 1
// asm:   0x5b57c1a: jne 0x5b57c5a
// asm:   0x5b57c1c: mov rdi, rbx
// asm:   0x5b57c1f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b57c24: mov r14, qword ptr [rax]
// asm:   0x5b57c27: mov qword ptr [rsp + 0x20], r14
// asm:   0x5b57c2c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b57c31: lea rax, [rip + 0x1736548]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose
// asm:   0x5b57c38: mov rsi, qword ptr [rax]
// asm:   0x5b57c3b: mov rdi, rsp
// asm:   0x5b57c3e: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b57c43: xor ebx, ebx
// asm:   0x5b57c45: mov ebp, 0
// asm:   0x5b57c4a: test r14, r14
// asm:   0x5b57c4d: je 0x5b57bf3
// asm:   0x5b57c4f: mov rdi, r14
// asm:   0x5b57c52: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b57c57: mov rbx, rax
// asm:   0x5b57c5a: lea rdi, [rsp + 0x20]
// asm:   0x5b57c5f: call 0x2fd72e0  ; il2cpp_runtime_helper_02fd72e0()
// asm:   0x5b57c64: mov rdi, rbx
// asm:   0x5b57c67: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b57c6c: mov rdi, rax
// asm:   0x5b57c6f: call 0x2ab61e0  ; __clang_call_terminate()

bool Settings_KeybindSetting__GetKey(Settings_KeybindSetting_o *__this,bool cl,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_List_InputKey__o *__this_00;
  bool bVar2;
  bool bVar3;
  int iVar4;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_28;
  undefined1 *local_20;
  
  if (Il2CppMethodInitialized_075472f3 == '\0') {
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
    Il2CppMethodInitialized_075472f3 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (!cl) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
    if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05b57c0b;
    bVar2 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar1,(Il2CppObject *)__this,
                       (MethodInfo_4FB3720 *)
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
label_05b57c0b:
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_HashSet_object___Contains
                    (pSVar1,(Il2CppObject *)__this,
                     (MethodInfo_4FB3720 *)
                     MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
  local_20 = (undefined1 *)&local_48;
  bVar3 = true;
  if (!bVar2) {
    __this_00 = (__this->fields).InputKeys;
    if (__this_00 == (System_Collections_Generic_List_InputKey__o *)0x0) goto label_05b57c0b;
    System_Collections_Generic_List_object___GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    local_28 = 0;
    do {
      method_00 = MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext;
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
      if (!bVar3) {
        iVar4 = 7;
        goto label_05b57be1;
      }
      if ((Settings_InputKey_o *)local_48.fields._current == (Settings_InputKey_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = Settings_InputKey__GetKey((Settings_InputKey_o *)local_48.fields._current,method_00);
    } while (!bVar2);
    iVar4 = 6;
label_05b57be1:
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
    bVar3 = iVar4 == 6 && bVar3;
  }
  return bVar3;
}


// Settings.KeybindSetting$$GetKeyUp
// il2cpp: bool Settings_KeybindSetting__GetKeyUp (Settings_KeybindSetting_o* __this, bool cl, const MethodInfo* method);
// 0x5b57c80
// eh: try 0x5b57d94..0x5b57deb -> pad 0x5b57df4 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b57e0c..0x5b57e11 -> pad 0x5b57e37 cleanup
// eh: try 0x5b57e3a..0x5b57e44 -> pad 0x5b57e4c catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b57df0: jmp 0x5b57df4
// asm:   0x5b57df2: jmp 0x5b57df4
// asm:   0x5b57df4: mov rbx, rax
// asm:   0x5b57df7: cmp edx, 1
// asm:   0x5b57dfa: jne 0x5b57e3a
// asm:   0x5b57dfc: mov rdi, rbx
// asm:   0x5b57dff: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b57e04: mov r14, qword ptr [rax]
// asm:   0x5b57e07: mov qword ptr [rsp + 0x20], r14
// asm:   0x5b57e0c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b57e11: lea rax, [rip + 0x1736368]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose
// asm:   0x5b57e18: mov rsi, qword ptr [rax]
// asm:   0x5b57e1b: mov rdi, rsp
// asm:   0x5b57e1e: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b57e23: xor ebx, ebx
// asm:   0x5b57e25: mov ebp, 0
// asm:   0x5b57e2a: test r14, r14
// asm:   0x5b57e2d: je 0x5b57dd3
// asm:   0x5b57e2f: mov rdi, r14
// asm:   0x5b57e32: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b57e37: mov rbx, rax
// asm:   0x5b57e3a: lea rdi, [rsp + 0x20]
// asm:   0x5b57e3f: call 0x2fd7310  ; il2cpp_runtime_helper_02fd7310()
// asm:   0x5b57e44: mov rdi, rbx
// asm:   0x5b57e47: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b57e4c: mov rdi, rax
// asm:   0x5b57e4f: call 0x2ab61e0  ; __clang_call_terminate()

bool Settings_KeybindSetting__GetKeyUp(Settings_KeybindSetting_o *__this,bool cl,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_List_InputKey__o *__this_01;
  bool bVar1;
  bool bVar2;
  int iVar3;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_28;
  undefined1 *local_20;
  
  if (Il2CppMethodInitialized_075472f4 == '\0') {
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
    Il2CppMethodInitialized_075472f4 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (!cl) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    __this_00 = (System_Collections_Generic_HashSet_object__o *)
                TypeInfo_CustomLogic_CustomLogicManager->static_fields->KeybindDefaultDisabled;
    if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05b57deb;
    bVar1 = System_Collections_Generic_HashSet_object___Contains
                      (__this_00,(Il2CppObject *)__this,
                       (MethodInfo_4FB3720 *)
                       MethodInfo_System_Collections_Generic_HashSet_KeybindSetting_Contains);
    if (bVar1) {
      return false;
    }
  }
  __this_01 = (__this->fields).InputKeys;
  if (__this_01 != (System_Collections_Generic_List_InputKey__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
    local_28 = 0;
    local_20 = (undefined1 *)&local_48;
    do {
      method_00 = MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext;
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
      if (!bVar1) {
        iVar3 = 6;
        goto label_05b57dc1;
      }
      if ((Settings_InputKey_o *)local_48.fields._current == (Settings_InputKey_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = Settings_InputKey__GetKeyUp((Settings_InputKey_o *)local_48.fields._current,method_00);
    } while (!bVar2);
    iVar3 = 5;
label_05b57dc1:
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
    return iVar3 == 5 && bVar1;
  }
label_05b57deb:
  ThrowNullReferenceException();
}


// Settings.KeybindSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_KeybindSetting__SerializeToJsonObject (Settings_KeybindSetting_o* __this, const MethodInfo* method);
// 0x5b57e60
// eh: try 0x5b57f44..0x5b58024 -> pad 0x5b58030 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b5804a..0x5b5804f -> pad 0x5b58072 cleanup
// eh: try 0x5b58075..0x5b5807f -> pad 0x5b58087 catch (...) [compiler noexcept guard]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b57f2f: lea r13, [rip + 0x1736252]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext
// asm:   0x5b57f36: mov r14, rsp
// asm:   0x5b57f39: lea rbp, [rip + 0x1722160]  ; TypeInfo_SimpleJSONFixed_JSONString
// asm:   0x5b58024: jmp 0x5b58032
// asm:   0x5b58026: jmp 0x5b58032
// asm:   0x5b58028: jmp 0x5b58032
// asm:   0x5b5802a: jmp 0x5b58032
// asm:   0x5b5802c: jmp 0x5b58032
// asm:   0x5b5802e: jmp 0x5b58032
// asm:   0x5b58030: jmp 0x5b58032
// asm:   0x5b58032: mov r14, rax
// asm:   0x5b58035: cmp edx, 1
// asm:   0x5b58038: jne 0x5b58075
// asm:   0x5b5803a: mov rdi, r14
// asm:   0x5b5803d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b58042: mov r14, qword ptr [rax]
// asm:   0x5b58045: mov qword ptr [rsp + 0x20], r14
// asm:   0x5b5804a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b5804f: lea rax, [rip + 0x173612a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose
// asm:   0x5b58056: mov rsi, qword ptr [rax]
// asm:   0x5b58059: mov rdi, rsp
// asm:   0x5b5805c: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b58061: test r14, r14
// asm:   0x5b58064: je 0x5b57fca
// asm:   0x5b5806a: mov rdi, r14
// asm:   0x5b5806d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b58072: mov r14, rax
// asm:   0x5b58075: lea rdi, [rsp + 0x20]
// asm:   0x5b5807a: call 0x2fd7340  ; il2cpp_runtime_helper_02fd7340()
// asm:   0x5b5807f: mov rdi, r14
// asm:   0x5b58082: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b58087: mov rdi, rax
// asm:   0x5b5808a: call 0x2ab61e0  ; __clang_call_terminate()

SimpleJSONFixed_JSONNode_o *
Settings_KeybindSetting__SerializeToJsonObject(Settings_KeybindSetting_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_InputKey__o *__this_00;
  bool bVar1;
  SimpleJSONFixed_JSONArray_o *__this_01;
  System_String_o *pSVar2;
  SimpleJSONFixed_JSONString_o *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o SStack_68;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (Il2CppMethodInitialized_075472f5 == '\0') {
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
    Il2CppMethodInitialized_075472f5 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_01,(MethodInfo *)0x0);
  __this_00 = (__this->fields).InputKeys;
  if (__this_00 == (System_Collections_Generic_List_InputKey__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
             (System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_InputKey_GetEnumerator);
  SStack_68.fields._current = pIStack_38;
  SStack_68.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
  SStack_68.fields._index = auStack_48._8_4_;
  SStack_68.fields._version = auStack_48._12_4_;
  auStack_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_48._8_8_ = &SStack_68;
  if (__this_01 == (SimpleJSONFixed_JSONArray_o *)0x0) {
    auStack_48._8_8_ = &SStack_68;
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&SStack_68,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext);
    if (bVar1) {
      if (SStack_68.fields._current != (Il2CppObject *)0x0) {
        pSVar2 = (System_String_o *)
                 (*(SStack_68.fields._current)->klass->vtable[3].methodPtr)
                           (SStack_68.fields._current,(SStack_68.fields._current)->klass->vtable[3].method);
        pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
        SimpleJSONFixed_JSONString___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
        ThrowNullReferenceException();
      }
label_05b57feb:
      ThrowNullReferenceException();
    }
  }
  else {
    while (bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (&SStack_68,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_MoveNext), bVar1)
    {
      if (SStack_68.fields._current == (Il2CppObject *)0x0) goto label_05b57feb;
      pSVar2 = (System_String_o *)
               (*(SStack_68.fields._current)->klass->vtable[3].methodPtr)
                         (SStack_68.fields._current,(SStack_68.fields._current)->klass->vtable[3].method);
      pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
      SimpleJSONFixed_JSONString___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
      (*(__this_01->klass->vtable)._21_Add.methodPtr)
                (__this_01,(SimpleJSONFixed_JSONNode_o *)pSVar3,(__this_01->klass->vtable)._21_Add.method);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            (&SStack_68,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_InputKey_Dispose);
  return (SimpleJSONFixed_JSONNode_o *)__this_01;
}


// Settings.KeybindSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_KeybindSetting__DeserializeFromJsonObject (Settings_KeybindSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x5b58090

void Settings_KeybindSetting__DeserializeFromJsonObject
               (Settings_KeybindSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  SimpleJSONFixed_JSONNode_c *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  System_Collections_Generic_List_string__o *__this_00;
  SimpleJSONFixed_JSONArray_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_String_o *item;
  System_String_array *pSVar9;
  MethodInfo *method_00;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar10;
  SimpleJSONFixed_JSONNode_Enumerator_Fields SStack_78;
  
  if (Il2CppMethodInitialized_075472f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_075472f6 = '\x01';
  }
  SStack_78.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_78.m_Array.fields._index = 0;
  SStack_78.m_Array.fields._version = 0;
  SStack_78.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  SStack_78.m_Object.fields._getEnumeratorRetType = 0;
  SStack_78.m_Object.fields._36_4_ = 0;
  SStack_78.m_Object.fields._version = 0;
  SStack_78.m_Object.fields._index = 0;
  SStack_78.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  SStack_78.type = 0;
  SStack_78._4_4_ = 0;
  SStack_78.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  SStack_78.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar7 = (*(json->klass->vtable)._45_get_AsArray.methodPtr)
                       (json,(json->klass->vtable)._45_get_AsArray.method);
    if (pSVar7 != (SimpleJSONFixed_JSONArray_o *)0x0) {
      (*(pSVar7->klass->vtable)._32_GetEnumerator.methodPtr)
                ((SimpleJSONFixed_JSONNode_Enumerator_o *)&SStack_78,pSVar7,
                 (pSVar7->klass->vtable)._32_GetEnumerator.method);
      bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&SStack_78,(MethodInfo *)0x0);
      if (bVar6) {
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
          SVar10 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             ((SimpleJSONFixed_JSONNode_Enumerator_o *)&SStack_78,(MethodInfo *)0x0);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar10,(MethodInfo *)0x0);
          if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            pSVar4 = pSVar8->klass;
            bVar2 = (TypeInfo_SimpleJSONFixed_JSONString->_2).typeHierarchyDepth;
            if ((bVar2 <= (pSVar4->_2).typeHierarchyDepth) &&
               ((pSVar4->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString)) {
              (*(pSVar4->vtable)._9_get_Value.methodPtr)(pSVar8,(pSVar4->vtable)._9_get_Value.method);
              ThrowNullReferenceException();
            }
label_05b5835f:
            il2cpp_codegen_raise_invalid_cast_exception(pSVar8);
          }
          goto label_05b5831b;
        }
        do {
          SVar10 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             ((SimpleJSONFixed_JSONNode_Enumerator_o *)&SStack_78,(MethodInfo *)0x0);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar10,(MethodInfo *)0x0);
          if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05b5831b;
          pSVar4 = pSVar8->klass;
          bVar2 = (TypeInfo_SimpleJSONFixed_JSONString->_2).typeHierarchyDepth;
          if (((pSVar4->_2).typeHierarchyDepth < bVar2) ||
             ((pSVar4->_2).typeHierarchy[(ulong)bVar2 - 1] !=
              (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString)) goto label_05b5835f;
          item = (*(pSVar4->vtable)._9_get_Value.methodPtr)(pSVar8,(pSVar4->vtable)._9_get_Value.method);
          pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar9 = (__this_00->fields)._items;
          if (pSVar9 == (System_String_array *)0x0) goto label_05b5831b;
          uVar3 = (__this_00->fields)._size;
          if (uVar3 < (uint)pSVar9->max_length) {
            (__this_00->fields)._size = uVar3 + 1;
            pSVar9->m_Items[(int)uVar3] = item;
            Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar3);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                       (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
          }
          bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&SStack_78,(MethodInfo *)0x0);
        } while (bVar6);
      }
      else if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_05b5831b;
      pSVar9 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      Settings_KeybindSetting__LoadFromStringArray(__this,pSVar9,method_00);
      return;
    }
  }
label_05b5831b:
  ThrowNullReferenceException();
}


