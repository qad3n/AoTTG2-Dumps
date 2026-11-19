// Type: Settings.PresetSettingsContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/PresetSettingsContainer.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/PresetSettingsContainer.cs
// --------------------------------

// Settings.PresetSettingsContainer$$get_PresetFolderPath
// il2cpp: System_String_o* Settings_PresetSettingsContainer__get_PresetFolderPath (Settings_PresetSettingsContainer_o* __this, const MethodInfo* method);
// 0x5c7b940

System_String_o *
Settings_PresetSettingsContainer__get_PresetFolderPath
          (Settings_PresetSettingsContainer_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754797d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    Il2CppMethodInitialized_0754797d = '\x01';
    uVar1 = (TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
    return TypeInfo_Utility_FolderPaths->static_fields->PresetsPath;
  }
  return *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Utility_FolderPaths)->static_fields + 0x18);
}


// Settings.PresetSettingsContainer$$Load
// il2cpp: void Settings_PresetSettingsContainer__Load (Settings_PresetSettingsContainer_o* __this, const MethodInfo* method);
// 0x5c7b9b0
// eh: try 0x5c7baaf..0x5c7c0b2 -> pad 0x5c7c051 (+35 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5c7c0bd..0x5c7c0c7 -> pad 0x5c7c1cc catch (...) [compiler noexcept guard]
// eh: try 0x5c7c0ef..0x5c7c0f4 -> pad 0x5c7c0f9 catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5c7c0ff..0x5c7c109 -> pad 0x5c7c1cc catch (...) [compiler noexcept guard]
// eh: try 0x5c7c12f..0x5c7c1bc -> pad 0x5c7c1bc (+1 call sites) cleanup
// eh: try 0x5c7c1bf..0x5c7c1c4 -> pad 0x5c7c1cc catch (...) [compiler noexcept guard]
// asm: 122 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c7bc0e: nop 
// asm:   0x5c7bdbf: nop 
// asm:   0x5c7bdf6: test r15, r15
// asm:   0x5c7bdf9: jne 0x5c7c03b
// asm:   0x5c7bf8f: jmp 0x5c7be80
// asm:   0x5c7c029: mov rdi, rbx
// asm:   0x5c7c02c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c7c03b: mov rdi, r15
// asm:   0x5c7c03e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c7c043: jmp 0x5c7c062
// asm:   0x5c7c045: jmp 0x5c7c062
// asm:   0x5c7c047: jmp 0x5c7c062
// asm:   0x5c7c049: jmp 0x5c7c062
// asm:   0x5c7c04b: jmp 0x5c7c062
// asm:   0x5c7c04d: jmp 0x5c7c062
// asm:   0x5c7c04f: jmp 0x5c7c062
// asm:   0x5c7c051: jmp 0x5c7c062
// asm:   0x5c7c053: jmp 0x5c7c057
// asm:   0x5c7c055: jmp 0x5c7c057
// asm:   0x5c7c057: mov r15, rdx
// asm:   0x5c7c05a: mov r12, rax
// asm:   0x5c7c05d: jmp 0x5c7c109
// asm:   0x5c7c062: mov r15, rdx
// asm:   0x5c7c065: mov r12, rax
// asm:   0x5c7c068: mov r14, qword ptr [rsp]
// asm:   0x5c7c06c: jmp 0x5c7c109
// asm:   0x5c7c071: jmp 0x5c7c08d
// asm:   0x5c7c073: jmp 0x5c7c08d
// asm:   0x5c7c075: jmp 0x5c7c08d
// asm:   0x5c7c077: jmp 0x5c7c08d
// asm:   0x5c7c079: jmp 0x5c7c08d
// asm:   0x5c7c07b: jmp 0x5c7c08d
// asm:   0x5c7c07d: jmp 0x5c7c08d
// asm:   0x5c7c07f: jmp 0x5c7c08d
// asm:   0x5c7c081: jmp 0x5c7c08d
// asm:   0x5c7c083: jmp 0x5c7c0cf
// asm:   0x5c7c085: jmp 0x5c7c0cf
// asm:   0x5c7c087: jmp 0x5c7c0cf
// asm:   0x5c7c089: jmp 0x5c7c0cf
// asm:   0x5c7c08b: jmp 0x5c7c0cf
// asm:   0x5c7c08d: mov r15, rdx
// asm:   0x5c7c090: mov r12, rax
// asm:   0x5c7c093: cmp r15d, 1
// asm:   0x5c7c097: jne 0x5c7c0bd
// asm:   0x5c7c099: mov rdi, r12
// asm:   0x5c7c09c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c7c0a1: mov r15, qword ptr [rax]
// asm:   0x5c7c0a4: mov qword ptr [rsp + 0x18], r15
// asm:   0x5c7c0a9: mov r14, qword ptr [rsp]
// asm:   0x5c7c0ad: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c7c0b2: jmp 0x5c7bd7d
// asm:   0x5c7c0b7: mov r15, rdx
// asm:   0x5c7c0ba: mov r12, rax
// asm:   0x5c7c0bd: lea rdi, [rsp + 0x18]
// asm:   0x5c7c0c2: call 0x2fda250  ; il2cpp_runtime_helper_02fda250()
// asm:   0x5c7c0c7: mov r14, qword ptr [rsp]
// asm:   0x5c7c0cb: jmp 0x5c7c109
// asm:   0x5c7c0cd: jmp 0x5c7c0cf
// asm:   0x5c7c0cf: mov r15, rdx
// asm:   0x5c7c0d2: mov r12, rax
// asm:   0x5c7c0d5: mov r14, qword ptr [rsp]
// asm:   0x5c7c0d9: cmp r15d, 1
// asm:   0x5c7c0dd: jne 0x5c7c0ff
// asm:   0x5c7c0df: mov rdi, r12
// asm:   0x5c7c0e2: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c7c0e7: mov rbx, qword ptr [rax]
// asm:   0x5c7c0ea: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5c7c0ef: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c7c0f4: jmp 0x5c7bfb6
// asm:   0x5c7c0f9: mov r15, rdx
// asm:   0x5c7c0fc: mov r12, rax
// asm:   0x5c7c0ff: lea rdi, [rsp + 0x18]
// asm:   0x5c7c104: call 0x2fda2f0  ; il2cpp_runtime_helper_02fda2f0()
// asm:   0x5c7c109: cmp r15d, 1
// asm:   0x5c7c10d: jne 0x5c7c1c4
// asm:   0x5c7c113: mov rdi, r12
// asm:   0x5c7c116: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c7c11b: mov rbx, rax
// asm:   0x5c7c11e: lea rax, [rip + 0x18da5a3]
// asm:   0x5c7c125: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5c7c129: mov rax, qword ptr [rbx]
// asm:   0x5c7c12c: mov rsi, qword ptr [rax]
// asm:   0x5c7c12f: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5c7c134: test al, al
// asm:   0x5c7c136: je 0x5c7c19b
// asm:   0x5c7c138: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c7c13d: mov rax, qword ptr [r14]
// asm:   0x5c7c140: mov rsi, qword ptr [rax + 0x230]
// asm:   0x5c7c147: mov rdi, r14
// asm:   0x5c7c14a: call qword ptr [rax + 0x228]  ; vtable slot 15
// asm:   0x5c7c150: mov rbx, rax
// asm:   0x5c7c153: lea rdi, [rip + 0x165fade]  ; "Failed to load preset container: "
// asm:   0x5c7c15a: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5c7c15f: mov rdi, rax
// asm:   0x5c7c162: mov rsi, rbx
// asm:   0x5c7c165: xor edx, edx
// asm:   0x5c7c167: call 0x53f0320  ; System_String__Concat()
// asm:   0x5c7c16c: mov rbx, rax
// asm:   0x5c7c16f: lea rdi, [rip + 0x15fb4d2]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5c7c176: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5c7c17b: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5c7c182: jne 0x5c7c18c
// asm:   0x5c7c184: mov rdi, rax
// asm:   0x5c7c187: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5c7c18c: mov rdi, rbx
// asm:   0x5c7c18f: xor esi, esi
// asm:   0x5c7c191: call 0x69c42a0  ; UnityEngine_Debug__Log()
// asm:   0x5c7c196: jmp 0x5c7bfcf
// asm:   0x5c7c19b: mov edi, 8
// asm:   0x5c7c1a0: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5c7c1a5: mov rcx, qword ptr [rbx]
// asm:   0x5c7c1a8: mov qword ptr [rax], rcx
// asm:   0x5c7c1ab: lea rsi, [rip + 0x11b134e]
// asm:   0x5c7c1b2: mov rdi, rax
// asm:   0x5c7c1b5: xor edx, edx
// asm:   0x5c7c1b7: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5c7c1bc: mov r12, rax
// asm:   0x5c7c1bf: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c7c1c4: mov rdi, r12
// asm:   0x5c7c1c7: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c7c1cc: mov rdi, rax
// asm:   0x5c7c1cf: call 0x2ab61e0  ; __clang_call_terminate()

void Settings_PresetSettingsContainer__Load(Settings_PresetSettingsContainer_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Specialized_OrderedDictionary_o *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Il2CppClass *pIVar4;
  Settings_ISetSettingsContainer_c *itf;
  bool bVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  Il2CppObject *pIVar7;
  VirtualInvokeData *pVVar8;
  Il2CppObject *pIVar9;
  Il2CppClass *pIVar10;
  ulong uVar11;
  Settings_ISetSettingsContainer_c *pSVar12;
  MethodInfo *method_00;
  long lVar13;
  Il2CppObject *pIStack_90;
  undefined1 auStack_88 [16];
  System_Collections_Generic_Dictionary_Enumerator_object__object__o *pSStack_78;
  Il2CppObject *pIStack_70;
  System_String_o *pSStack_68;
  int32_t iStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  Il2CppObject *pIStack_48;
  System_String_o *pSStack_40;
  undefined8 uStack_38;
  
  if (Il2CppMethodInitialized_0754797e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ISetSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_string_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_string_get_Value);
    Il2CppMethodInitialized_0754797e = '\x01';
  }
  pIStack_90 = (Il2CppObject *)0x0;
  auStack_88._0_8_ = (Il2CppClass *)0x0;
  pIStack_48 = (Il2CppObject *)0x0;
  pSStack_40 = (System_String_o *)0x0;
  auStack_58 = (undefined1  [8])0x0;
  uStack_50._0_4_ = 0;
  uStack_50._4_4_ = 0;
  uStack_38._0_4_ = 0;
  uStack_38._4_4_ = 0;
  pSVar6 = (*(__this->klass->vtable)._24_GetPresetFilePath.methodPtr)
                     (__this,(__this->klass->vtable)._24_GetPresetFilePath.method);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  bVar5 = System_IO_File__Exists(pSVar6,(MethodInfo *)0x0);
  if (bVar5) {
    pSVar6 = System_IO_File__ReadAllText(pSVar6,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
              (__this,pSVar6,(__this->klass->vtable)._9_DeserializeFromJsonString.method);
    pSVar2 = (__this->fields).Settings;
    if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar7 = (Il2CppObject *)
             System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar2,(MethodInfo *)0x0);
    if (pIVar7 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar10 = pIVar7->klass;
    uVar11 = (ulong)(pIVar10->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar3 = (pIVar10->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(System_Collections_IEnumerable_c **)((long)&pIVar3->interfaceType + lVar13) ==
            TypeInfo_System_Collections_IEnumerable) {
          pVVar8 = pIVar10->vtable + *(int *)((long)&pIVar3->offset + lVar13);
          goto label_05c7bb91;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar11 * 0x10 != lVar13);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar7,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,0);
label_05c7bb91:
    pIStack_90 = (Il2CppObject *)(*pVVar8->methodPtr)(pIVar7,pVVar8->method);
    auStack_88._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    pSStack_78 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&pIStack_90;
    pIStack_70 = (Il2CppObject *)auStack_88;
    do {
      pIVar7 = pIStack_90;
      if (pIStack_90 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar10 = pIStack_90->klass;
      uVar11 = (ulong)(pIVar10->_2).interface_offsets_count;
      if (uVar11 != 0) {
        pIVar3 = (pIVar10->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar13) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar8 = pIVar10->vtable + *(int *)((long)&pIVar3->offset + lVar13);
            goto label_05c7bc43;
          }
          lVar13 = lVar13 + 0x10;
        } while (uVar11 * 0x10 != lVar13);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIStack_90,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05c7bc43:
      bVar5 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
      pIVar7 = pIStack_90;
      if (!bVar5) {
        pIVar10 = (Il2CppClass *)
                  il2cpp_vm_Object_IsInst(pIStack_90,(Il2CppClass *)TypeInfo_System_IDisposable);
        auStack_88._0_8_ = pIVar10;
        if (pIVar10 == (Il2CppClass *)0x0) break;
        pIVar4 = (pIVar10->_1).image;
        uVar11 = (ulong)(pIVar4->_2).interface_offsets_count;
        if (uVar11 == 0) goto label_05c7bdcf;
        pIVar3 = (pIVar4->_1).interfaceOffsets;
        lVar13 = 0;
        goto label_05c7bdc0;
      }
      if (pIStack_90 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar10 = pIStack_90->klass;
      uVar11 = (ulong)(pIVar10->_2).interface_offsets_count;
      if (uVar11 != 0) {
        pIVar3 = (pIVar10->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar13) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar8 = pIVar10->vtable + (*(int *)((long)&pIVar3->offset + lVar13) + 1);
            goto label_05c7bcd7;
          }
          lVar13 = lVar13 + 0x10;
        } while (uVar11 * 0x10 != lVar13);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIStack_90,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05c7bcd7:
      pIVar7 = (*pVVar8->methodPtr)(pIVar7,pVVar8->method);
      if ((pIVar7 != (Il2CppObject *)0x0) && (pIVar7->klass != g_data_07556758)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar7);
      }
      pSVar2 = (__this->fields).Settings;
      if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar9 = System_Collections_Specialized_OrderedDictionary__get_Item(pSVar2,pIVar7,(MethodInfo *)0x0);
      if (pIVar9 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar10 = pIVar9->klass;
      bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
      if (((pIVar10->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar10->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar9);
      }
      pIVar9 = (Il2CppObject *)(*pIVar10->vtable[8].methodPtr)(pIVar9,pIVar10->vtable[8].method);
      if (__this_00 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,pIVar7,pIVar9,
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    } while( true );
  }
  goto label_05c7bdff;
  while (lVar13 = lVar13 + 0x10, uVar11 * 0x10 != lVar13) {
label_05c7bdc0:
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar13) == TypeInfo_System_IDisposable) {
      pVVar8 = pIVar4->vtable + *(int *)((long)&pIVar3->offset + lVar13);
      goto label_05c7bded;
    }
  }
label_05c7bdcf:
  pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)pIVar10,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05c7bded:
  (*pVVar8->methodPtr)((Il2CppObject *)pIVar10,pVVar8->method);
label_05c7bdff:
  method_00 = (__this->klass->vtable)._4_SetDefault.method;
  (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,method_00);
  Settings_SaveableSettingsContainer__Load((Settings_SaveableSettingsContainer_o *)__this,method_00);
  if (__this_00 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)(auStack_88 + 8),
             (System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAD970 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_string_GetEnumerator);
  uStack_38._0_4_ = iStack_60;
  uStack_38._4_4_ = uStack_5c;
  pIStack_48 = pIStack_70;
  pSStack_40 = pSStack_68;
  auStack_58 = (undefined1  [8])auStack_88._8_8_;
  uStack_50 = (Il2CppObject **)pSStack_78;
  auStack_88._8_8_ = (void *)0x0;
  pSStack_78 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)auStack_58;
  do {
    do {
      bVar5 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)auStack_58,
                         (MethodInfo_4CE66D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext);
      pSVar6 = pSStack_40;
      if (!bVar5) {
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)auStack_58,
                   (MethodInfo_4CE67F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose);
        return;
      }
      pSVar2 = (__this->fields).Settings;
      if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar7 = System_Collections_Specialized_OrderedDictionary__get_Item(pSVar2,pIStack_48,(MethodInfo *)0x0)
      ;
      if (pIVar7 != (Il2CppObject *)0x0) {
        bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
        if (((pIVar7->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pIVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar7);
        }
      }
      pIVar9 = il2cpp_vm_Object_IsInst(pIVar7,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer);
      pSVar12 = TypeInfo_Settings_ISetSettingsContainer;
    } while (pIVar9 == (Il2CppObject *)0x0);
    if (pIVar7 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar9 = il2cpp_vm_Object_IsInst(pIVar7,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer);
    itf = TypeInfo_Settings_ISetSettingsContainer;
    if ((pIVar9 == (Il2CppObject *)0x0) ||
       (pIVar9 = il2cpp_vm_Object_IsInst(pIVar7,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer),
       pSVar12 = itf, pIVar9 == (Il2CppObject *)0x0)) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar7,pSVar12);
    }
    pIVar10 = pIVar9->klass;
    uVar11 = (ulong)(pIVar10->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar3 = (pIVar10->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(Settings_ISetSettingsContainer_c **)((long)&pIVar3->interfaceType + lVar13) == itf) {
          pVVar8 = pIVar10->vtable + (*(int *)((long)&pIVar3->offset + lVar13) + 9);
          goto label_05c7be90;
        }
        lVar13 = lVar13 + 0x10;
      } while (uVar11 * 0x10 != lVar13);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar9,(Il2CppClass *)itf,9);
label_05c7be90:
    (*pVVar8->methodPtr)(pIVar9,pSVar6,pVVar8->method);
  } while( true );
}


// Settings.PresetSettingsContainer$$GetPresetFilePath
// il2cpp: System_String_o* Settings_PresetSettingsContainer__GetPresetFilePath (Settings_PresetSettingsContainer_o* __this, const MethodInfo* method);
// 0x5c7c3c0

System_String_o *
Settings_PresetSettingsContainer__GetPresetFilePath
          (Settings_PresetSettingsContainer_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  
  if (Il2CppMethodInitialized_0754797f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_0754797f = '\x01';
  }
  pSVar1 = (*(__this->klass->vtable)._23_get_PresetFolderPath.methodPtr)
                     (__this,(__this->klass->vtable)._23_get_PresetFolderPath.method);
  str2 = (System_String_o *)
         (*(__this->klass->vtable)._15_unknown.methodPtr)(__this,(__this->klass->vtable)._15_unknown.method);
  pSVar1 = System_String__Concat_5301f10(pSVar1,"/",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Settings.PresetSettingsContainer$$.ctor
// il2cpp: void Settings_PresetSettingsContainer___ctor (Settings_PresetSettingsContainer_o* __this, const MethodInfo* method);
// 0x5c7c430

void Settings_PresetSettingsContainer___ctor(Settings_PresetSettingsContainer_o *__this,MethodInfo *method)

{
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


