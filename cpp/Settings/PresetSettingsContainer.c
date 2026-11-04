// Type: Settings.PresetSettingsContainer
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/PresetSettingsContainer.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/PresetSettingsContainer.cs
// --------------------------------

// Settings.PresetSettingsContainer$$get_PresetFolderPath
// il2cpp: System_String_o* Settings_PresetSettingsContainer__get_PresetFolderPath (Settings_PresetSettingsContainer_o* __this, const MethodInfo* method);
// 0x181f24560

System_String_o *
Settings_PresetSettingsContainer__get_PresetFolderPath
          (Settings_PresetSettingsContainer_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843454b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&"/Presets");
    Il2CppMethodInitialized_1843454b0 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  pSVar1 = UnityEngine_Application__get_streamingAssetsPath((MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50(pSVar1,"/Presets",(MethodInfo *)0x0);
  return pSVar1;
}


// Settings.PresetSettingsContainer$$Load
// il2cpp: void Settings_PresetSettingsContainer__Load (Settings_PresetSettingsContainer_o* __this, const MethodInfo* method);
// 0x181f23f40
// eh: try 0x181f24048..0x181f24110 -> pad 0x18333db40 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x181f24110..0x181f241e2 -> pad 0x183325110 catch Il2CppExceptionWrapper
// eh: try 0x181f241e2..0x181f2423f -> pad 0x18333db40 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x181f2423f..0x181f24269 -> pad 0x183325110 catch Il2CppExceptionWrapper
// eh: try 0x181f24269..0x181f24300 -> pad 0x18333db40 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x181f24300..0x181f24349 -> pad 0x1833245a0 catch Il2CppExceptionWrapper
// eh: try 0x181f24349..0x181f2437e -> pad 0x18333db40 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x181f2437e..0x181f24424 -> pad 0x1833245a0 catch Il2CppExceptionWrapper
// eh: try 0x181f24424..0x181f24474 -> pad 0x18333db40 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x181f244d5..0x181f24500 -> pad 0x183325110 catch Il2CppExceptionWrapper
// eh: try 0x181f24500..0x181f24510 -> pad 0x18333db40 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x181f24510..0x181f24536 -> pad 0x1833245a0 catch Il2CppExceptionWrapper
// eh: try 0x181f24536..0x181f24541 -> pad 0x18333db40 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 95 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f24109: nop dword ptr [rax]
// asm:   0x181f24202: mov rdx, qword ptr [rip + 0x21ab2a7]  ; TypeInfo_Settings_BaseSetting
// asm:   0x181f24209: mov r9, qword ptr [rax]
// asm:   0x181f2420c: movzx eax, byte ptr [rdx + 0x130]
// asm:   0x181f24213: cmp byte ptr [r9 + 0x130], al
// asm:   0x181f2421a: jb 0x181f244e0
// asm:   0x181f242fe: nop 
// asm:   0x181f24344: mov rdi, r15
// asm:   0x181f24347: jmp 0x181f243b1
// asm:   0x181f24349: lea rcx, [rsp + 0x48]
// asm:   0x181f2434e: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x181f24353: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181f24358: test rcx, rcx
// asm:   0x181f2435b: jne 0x181f24500
// asm:   0x181f24361: xor r15d, r15d
// asm:   0x181f24364: mov r12, qword ptr [rsp + 0xf0]
// asm:   0x181f2436c: mov rdi, qword ptr [rsp + 0x20]
// asm:   0x181f24371: mov rsi, qword ptr [rsp + 0x108]
// asm:   0x181f24379: jmp 0x181f24292
// asm:   0x181f24439: mov rdx, qword ptr [rip + 0x2199e60]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose
// asm:   0x181f24440: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f24445: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181f2444a: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181f2444f: test rcx, rcx
// asm:   0x181f24452: jne 0x181f2453b
// asm:   0x181f24458: jmp 0x181f24434
// asm:   0x181f2445a: mov rax, qword ptr [rsp + 0x108]
// asm:   0x181f24462: mov r8, qword ptr [rax]
// asm:   0x181f24465: mov rdx, qword ptr [r8 + 0x230]
// asm:   0x181f2446c: mov rcx, qword ptr [rsp + 0xf0]
// asm:   0x181f24474: call qword ptr [r8 + 0x228]  ; vtable slot 15
// asm:   0x181f2447b: mov rbx, rax
// asm:   0x181f2447e: lea rcx, [rip + 0x21c0f2b]  ; "Failed to load preset container: "
// asm:   0x181f24485: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181f2448a: mov rcx, rax
// asm:   0x181f2448d: xor r8d, r8d
// asm:   0x181f24490: mov rdx, rbx
// asm:   0x181f24493: call 0x181969e50  ; System_String__Concat()
// asm:   0x181f24498: mov rbx, rax
// asm:   0x181f2449b: lea rcx, [rip + 0x21d6f96]  ; TypeInfo_UnityEngine_Debug
// asm:   0x181f244a2: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181f244a7: cmp dword ptr [rax + 0xe4], 0
// asm:   0x181f244ae: jne 0x181f244b8
// asm:   0x181f244b0: mov rcx, rax
// asm:   0x181f244b3: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x181f244b8: xor edx, edx
// asm:   0x181f244ba: mov rcx, rbx
// asm:   0x181f244bd: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x181f24500: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181f2453b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833245a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833245a5: push rbp
// asm:   0x1833245a6: sub rsp, 0x20
// asm:   0x1833245aa: mov rbp, rdx
// asm:   0x1833245ad: mov rax, qword ptr [rbp + 0x98]
// asm:   0x1833245b4: mov rcx, qword ptr [rax]
// asm:   0x1833245b7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x1833245bb: movabs rax, 0
// asm:   0x1833245c5: add rsp, 0x20
// asm:   0x1833245c9: pop rbp
// asm:   0x1833245ca: ret 
// asm:   0x183325110: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183325115: push rbp
// asm:   0x183325116: sub rsp, 0x20
// asm:   0x18332511a: mov rbp, rdx
// asm:   0x18332511d: mov rax, qword ptr [rbp + 0x90]
// asm:   0x183325124: mov rcx, qword ptr [rax]
// asm:   0x183325127: mov qword ptr [rbp + 0x40], rcx
// asm:   0x18332512b: movabs rax, 0
// asm:   0x183325135: add rsp, 0x20
// asm:   0x183325139: pop rbp
// asm:   0x18332513a: ret 
// asm:   0x18333db40: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333db45: push rbx
// asm:   0x18333db46: push rbp
// asm:   0x18333db47: sub rsp, 0x28
// asm:   0x18333db4b: mov rbp, rdx
// asm:   0x18333db4e: mov rbx, qword ptr [rbp + 0xa0]
// asm:   0x18333db55: mov rdx, qword ptr [rbx]
// asm:   0x18333db58: mov rdx, qword ptr [rdx]
// asm:   0x18333db5b: mov rcx, qword ptr [rip + 0x101726e]
// asm:   0x18333db62: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333db67: test al, al
// asm:   0x18333db69: je 0x18333db77
// asm:   0x18333db6b: movabs rax, 0
// asm:   0x18333db75: jmp 0x18333db8f
// asm:   0x18333db77: mov rax, qword ptr [rbx]
// asm:   0x18333db7a: mov qword ptr [rbp + 0x38], rax
// asm:   0x18333db7e: lea rdx, [rip + 0xc9e403]
// asm:   0x18333db85: lea rcx, [rbp + 0x38]
// asm:   0x18333db89: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333db8f: add rsp, 0x28
// asm:   0x18333db93: pop rbp
// asm:   0x18333db94: pop rbx
// asm:   0x18333db95: ret 

void Settings_PresetSettingsContainer__Load(Settings_PresetSettingsContainer_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  System_Collections_Specialized_OrderedDictionary_o *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Settings_ISetSettingsContainer_c *pSVar6;
  Settings_ISetSettingsContainer_c *pSVar7;
  bool bVar8;
  System_String_o *pSVar9;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  Il2CppObject *pIVar10;
  void *pvVar11;
  VirtualInvokeData *pVVar12;
  Il2CppObject *pIVar13;
  Il2CppObject *pIVar14;
  ushort uVar15;
  Il2CppObject *pIVar16;
  Il2CppObject *local_res18;
  Settings_PresetSettingsContainer_o *local_res20;
  Il2CppObject local_b8;
  undefined1 local_a8 [16];
  Il2CppObject *local_98;
  Il2CppObject *pIStack_90;
  int32_t local_88;
  undefined4 uStack_84;
  undefined1 local_80 [8];
  uint64_t uStack_78;
  Il2CppObject *local_70;
  Il2CppObject *pIStack_68;
  undefined8 local_60;
  
  local_res20 = __this;
  if (Il2CppMethodInitialized_1843454b1 == '\0') {
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
    Il2CppMethodInitialized_1843454b1 = '\x01';
  }
  pIVar16 = (Il2CppObject *)0x0;
  local_res18 = (Il2CppObject *)0x0;
  local_b8.klass = (Il2CppClass *)0x0;
  local_80 = (undefined1  [8])0x0;
  uStack_78 = 0;
  local_70 = (Il2CppObject *)0x0;
  pIStack_68 = (Il2CppObject *)0x0;
  local_60._0_4_ = 0;
  local_60._4_4_ = 0;
  pSVar9 = (*(__this->klass->vtable)._24_GetPresetFilePath.methodPtr)
                     (__this,(__this->klass->vtable)._24_GetPresetFilePath.method);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  bVar8 = System_IO_File__Exists(pSVar9,(MethodInfo *)0x0);
  if (bVar8) {
    pSVar9 = System_IO_File__ReadAllText(pSVar9,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
              (__this,pSVar9,(__this->klass->vtable)._9_DeserializeFromJsonString.method);
    pSVar3 = (__this->fields).Settings;
    if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar10 = (Il2CppObject *)
              System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar3,(MethodInfo *)0x0);
    if (pIVar10 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    local_res18 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,pIVar10);
    local_a8._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_a8._8_8_ = &local_res18;
    local_98 = &local_b8;
    while( true ) {
      if (local_res18 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pvVar11 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res18)
      ;
      pIVar10 = local_res18;
      if ((char)pvVar11 == '\0') break;
      if (local_res18 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar4 = local_res18->klass;
      uVar2 = (pIVar4->_2).interface_offsets_count;
      uVar15 = 0;
      if (uVar2 != 0) {
        pIVar5 = (pIVar4->_1).interfaceOffsets;
        do {
          if (pIVar5[uVar15].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
            pVVar12 = pIVar4->vtable + (pIVar5[uVar15].offset + 1);
            goto label_181f24195;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar2);
      }
      pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                          (local_res18,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_181f24195:
      pIVar13 = (*pVVar12->methodPtr)(pIVar10,pVVar12->method);
      pIVar10 = pIVar16;
      if (pIVar13 != (Il2CppObject *)0x0) {
        if (pIVar13->klass == g_data_184354e50) {
          pIVar10 = pIVar13;
        }
        if (pIVar10 == (Il2CppObject *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar13);
        }
      }
      pSVar3 = (__this->fields).Settings;
      if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar13 = System_Collections_Specialized_OrderedDictionary__get_Item(pSVar3,pIVar10,(MethodInfo *)0x0);
      if (pIVar13 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar4 = pIVar13->klass;
      bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
      if (((pIVar4->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar13);
      }
      pIVar13 = (Il2CppObject *)(*pIVar4->vtable[8].methodPtr)(pIVar13,pIVar4->vtable[8].method);
      if (__this_00 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,pIVar10,pIVar13,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Add);
    }
    local_b8.klass =
         (Il2CppClass *)il2cpp_vm_Object_IsInst(local_res18,(Il2CppClass *)TypeInfo_System_IDisposable);
    if (local_b8.klass != (Il2CppClass *)0x0) {
      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,(Il2CppObject *)local_b8.klass);
    }
  }
  (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
  Settings_SaveableSettingsContainer__Load((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_a8,
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_13C1150 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_string_GetEnumerator);
  local_80 = (undefined1  [8])local_a8._0_8_;
  uStack_78 = local_a8._8_8_;
  local_70 = local_98;
  pIStack_68 = pIStack_90;
  local_60._0_4_ = local_88;
  local_60._4_4_ = uStack_84;
  while( true ) {
    do {
      bVar8 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_80,
                         (MethodInfo_1585360 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext);
      pIVar10 = pIStack_68;
      if (!bVar8) {
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_80,
                   MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose);
        return;
      }
      pSVar3 = (__this->fields).Settings;
      if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar14 = System_Collections_Specialized_OrderedDictionary__get_Item(pSVar3,local_70,(MethodInfo *)0x0);
      pIVar13 = pIVar16;
      if (pIVar14 != (Il2CppObject *)0x0) {
        bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
        if (((pIVar14->klass->_2).typeHierarchyDepth < bVar1) ||
           (pIVar13 = pIVar14,
           (pIVar14->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
           (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar14);
        }
      }
      pIVar14 = il2cpp_vm_Object_IsInst(pIVar13,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer);
      pSVar6 = TypeInfo_Settings_ISetSettingsContainer;
    } while (pIVar14 == (Il2CppObject *)0x0);
    if (pIVar13 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar14 = il2cpp_vm_Object_IsInst(pIVar13,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer);
    pSVar7 = TypeInfo_Settings_ISetSettingsContainer;
    if (pIVar14 == (Il2CppObject *)0x0) break;
    pIVar14 = il2cpp_vm_Object_IsInst(pIVar13,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer);
    if (pIVar14 == (Il2CppObject *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar13,pSVar7);
    }
    il2cpp_runtime_helper_180014780(9,TypeInfo_Settings_ISetSettingsContainer,pIVar14,pIVar10);
  }
  il2cpp_codegen_raise_invalid_cast_exception(pIVar13,pSVar6);
}


// Settings.PresetSettingsContainer$$GetPresetFilePath
// il2cpp: System_String_o* Settings_PresetSettingsContainer__GetPresetFilePath (Settings_PresetSettingsContainer_o* __this, const MethodInfo* method);
// 0x181f23ec0

System_String_o *
Settings_PresetSettingsContainer__GetPresetFilePath
          (Settings_PresetSettingsContainer_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  
  if (Il2CppMethodInitialized_1843454b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_1843454b2 = '\x01';
  }
  pSVar1 = (*(__this->klass->vtable)._23_get_PresetFolderPath.methodPtr)
                     (__this,(__this->klass->vtable)._23_get_PresetFolderPath.method);
  str2 = (System_String_o *)
         (*(__this->klass->vtable)._15_unknown.methodPtr)(__this,(__this->klass->vtable)._15_unknown.method);
  pSVar1 = System_String__Concat_1969b70(pSVar1,"/",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Settings.PresetSettingsContainer$$.ctor
// il2cpp: void Settings_PresetSettingsContainer___ctor (Settings_PresetSettingsContainer_o* __this, const MethodInfo* method);
// 0x181f24550

void
Settings_PresetSettingsContainer___ctor(Settings_PresetSettingsContainer_o* __this, MethodInfo* method)

{
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


