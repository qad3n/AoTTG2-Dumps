// Type: Settings.BaseSettingsContainer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/BaseSettingsContainer.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BaseSettingsContainer.cs
// --------------------------------

// Settings.BaseSettingsContainer.<>c$$.cctor
// il2cpp: void Settings_BaseSettingsContainer___c___cctor (const MethodInfo* method);
// 0x5b55240

void Settings_BaseSettingsContainer___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075472d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSettingsContainer_c);
    Il2CppMethodInitialized_075472d3 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BaseSettingsContainer_c)
  ;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Settings_BaseSettingsContainer_c->static_fields->__9 =
       (Settings_BaseSettingsContainer___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_BaseSettingsContainer_c->static_fields->__9);
  return;
}


// Settings.BaseSettingsContainer.<>c$$.ctor
// il2cpp: void Settings_BaseSettingsContainer___c___ctor (Settings_BaseSettingsContainer___c_o* __this, const MethodInfo* method);
// 0x5b552b0

void Settings_BaseSettingsContainer___c___ctor
               (Settings_BaseSettingsContainer___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.BaseSettingsContainer.<>c$$<RegisterSettings>b__5_1
// il2cpp: bool Settings_BaseSettingsContainer___c___RegisterSettings_b__5_1 (Settings_BaseSettingsContainer___c_o* __this, System_Reflection_FieldInfo_o* field, const MethodInfo* method);
// 0x5b552c0

bool Settings_BaseSettingsContainer___c___RegisterSettings_b__5_1
               (Settings_BaseSettingsContainer___c_o *__this,System_Reflection_FieldInfo_o *field,
               MethodInfo *method)

{
  long lVar1;
  Il2CppType *handle;
  undefined1 uVar2;
  long *plVar3;
  System_Type_o *pSVar4;
  
  if (Il2CppMethodInitialized_075472d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_BaseSetting);
    Il2CppMethodInitialized_075472d4 = '\x01';
  }
  if (field != (System_Reflection_FieldInfo_o *)0x0) {
    plVar3 = (long *)(*(field->klass->vtable)._17_unknown.methodPtr)(field);
    handle = TypeRef_Settings_BaseSetting;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    pSVar4 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (plVar3 != (long *)0x0) {
      lVar1 = *plVar3;
      uVar2 = (**(code **)(lVar1 + 0x288))
                        (plVar3,pSVar4,*(undefined8 *)(lVar1 + 0x290),lVar1,*(code **)(lVar1 + 0x288));
      return (bool)uVar2;
    }
  }
  ThrowNullReferenceException();
}


// Settings.BaseSettingsContainer$$.ctor
// il2cpp: void Settings_BaseSettingsContainer___ctor (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x5b46990

void Settings_BaseSettingsContainer___ctor(Settings_BaseSettingsContainer_o *__this,MethodInfo *method)

{
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_01;
  MethodInfo *method_00;
  Settings_InspectorSettingMetadata_o *__this_02;
  
  if (Il2CppMethodInitialized_075472cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Specialized_OrderedDictionary);
    Il2CppMethodInitialized_075472cd = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Specialized_OrderedDictionary);
  System_Collections_Specialized_OrderedDictionary___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).Settings = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Settings);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
  (__this->fields).TypedSettings = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TypedSettings);
  method_00 = (MethodInfo *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)method_00,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  (__this->fields).FoundSettings = (System_Collections_Generic_HashSet_string__o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FoundSettings);
  if (Il2CppMethodInitialized_075472cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InspectorSettingMetadata);
    Il2CppMethodInitialized_075472cb = '\x01';
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InspectorSettingMetadata);
  Settings_InspectorSettingMetadata___ctor(__this_02,method_00);
  (__this->fields).InspectorMetadata = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).InspectorMetadata);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._11_Setup.methodPtr)(__this,(__this->klass->vtable)._11_Setup.method);
  return;
}


// Settings.BaseSettingsContainer$$Setup
// il2cpp: void Settings_BaseSettingsContainer__Setup (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x5b55100

void Settings_BaseSettingsContainer__Setup(Settings_BaseSettingsContainer_o *__this,MethodInfo *method)

{
  Settings_BaseSettingsContainer__RegisterSettings(__this,method);
  (*(__this->klass->vtable)._12_Apply.methodPtr)(__this,(__this->klass->vtable)._12_Apply.method);
  return;
}


// Settings.BaseSettingsContainer$$RegisterSettings
// il2cpp: void Settings_BaseSettingsContainer__RegisterSettings (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x5b549d0
// eh: try 0x5b54c2f..0x5b54e5b -> pad 0x5b54e84 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5b54e9c..0x5b54ea1 -> pad 0x5b54ea6 cleanup
// eh: try 0x5b54ea9..0x5b54eb3 -> pad 0x5b54ebb catch (...) [compiler noexcept guard]
// asm: 41 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b54ab5: jmp 0x5b54ad0
// asm:   0x5b54bdb: lea rbp, [rip + 0x1724816]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5b54be2: lea r14, [rip + 0x171c387]  ; TypeInfo_System_Collections_Generic_IEnumerator_FieldInfo
// asm:   0x5b54be9: jmp 0x5b54bfd
// asm:   0x5b54bf0: mov rbx, qword ptr [rsp]
// asm:   0x5b54bf4: test rbx, rbx
// asm:   0x5b54bf7: je 0x5b54e42
// asm:   0x5b54c1d: nop dword ptr [rax]
// asm:   0x5b54dee: nop 
// asm:   0x5b54e60: mov rdi, rbp
// asm:   0x5b54e63: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b54e68: jmp 0x5b54e84
// asm:   0x5b54e6a: jmp 0x5b54e84
// asm:   0x5b54e6c: jmp 0x5b54e84
// asm:   0x5b54e6e: jmp 0x5b54e84
// asm:   0x5b54e70: jmp 0x5b54e84
// asm:   0x5b54e72: jmp 0x5b54e84
// asm:   0x5b54e74: jmp 0x5b54e84
// asm:   0x5b54e76: jmp 0x5b54e84
// asm:   0x5b54e78: jmp 0x5b54e84
// asm:   0x5b54e7a: jmp 0x5b54e84
// asm:   0x5b54e7c: jmp 0x5b54e84
// asm:   0x5b54e7e: jmp 0x5b54e84
// asm:   0x5b54e80: jmp 0x5b54e84
// asm:   0x5b54e82: jmp 0x5b54e84
// asm:   0x5b54e84: mov rbx, rax
// asm:   0x5b54e87: cmp edx, 1
// asm:   0x5b54e8a: jne 0x5b54ea9
// asm:   0x5b54e8c: mov rdi, rbx
// asm:   0x5b54e8f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b54e94: mov rbp, qword ptr [rax]
// asm:   0x5b54e97: mov qword ptr [rsp + 8], rbp
// asm:   0x5b54e9c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b54ea1: jmp 0x5b54dbf
// asm:   0x5b54ea6: mov rbx, rax
// asm:   0x5b54ea9: lea rdi, [rsp + 8]
// asm:   0x5b54eae: call 0x2fd6e40  ; il2cpp_runtime_helper_02fd6e40()
// asm:   0x5b54eb3: mov rdi, rbx
// asm:   0x5b54eb6: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b54ebb: mov rdi, rax
// asm:   0x5b54ebe: call 0x2ab61e0  ; __clang_call_terminate()

void Settings_BaseSettingsContainer__RegisterSettings
               (Settings_BaseSettingsContainer_o *__this,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  char cVar4;
  bool bVar5;
  System_Type_o *pSVar6;
  System_Reflection_FieldInfo_array *source;
  Settings_BaseSettingsContainer___c_StaticFields *pSVar7;
  System_Func_FieldInfo__bool__o *__this_02;
  Il2CppObject *pIVar8;
  VirtualInvokeData *pVVar9;
  Il2CppObject *pIVar10;
  Il2CppObject *value;
  ulong uVar11;
  MethodInfo *method_00;
  long lVar12;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_075472ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_FieldInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_FieldInfo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_FieldInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_FieldInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_BaseSettingsContainer_c_RegisterSettings_b__5_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSettingsContainer_c);
    Il2CppMethodInitialized_075472ce = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
  pSVar6 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (pSVar6 != (System_Type_o *)0x0) {
    source = System_Type__GetFields(pSVar6,(MethodInfo *)0x0);
    if ((TypeInfo_Settings_BaseSettingsContainer_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_BaseSettingsContainer_c);
      pSVar7 = TypeInfo_Settings_BaseSettingsContainer_c->static_fields;
      __this_02 = pSVar7->__9__5_1;
    }
    else {
      pSVar7 = TypeInfo_Settings_BaseSettingsContainer_c->static_fields;
      __this_02 = pSVar7->__9__5_1;
    }
    if (__this_02 == (System_Func_FieldInfo__bool__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_Settings_BaseSettingsContainer_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_BaseSettingsContainer_c);
        pSVar7 = TypeInfo_Settings_BaseSettingsContainer_c->static_fields;
      }
      pIVar8 = (Il2CppObject *)pSVar7->__9;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_FieldInfo_bool);
      System_Func_object__bool____ctor
                ((System_Func_object__bool__o *)__this_02,pIVar8,
                 (intptr_t)MethodInfo_Settings_BaseSettingsContainer_c_RegisterSettings_b__5_1,
                 (MethodInfo_4F19300 *)0x0);
      pSVar7 = TypeInfo_Settings_BaseSettingsContainer_c->static_fields;
      pSVar7->__9__5_1 = __this_02;
      Il2CppCodeGenWriteBarrier(&pSVar7->__9__5_1);
    }
    pIVar8 = (Il2CppObject *)
             System_Linq_Enumerable__Where_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (System_Func_TSource__bool__o *)__this_02,
                        (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_FieldInfo);
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar2 = pIVar8->klass;
      uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar11 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerable_FieldInfo__c **)((long)&pIVar3->interfaceType + lVar12)
              == TypeInfo_System_Collections_Generic_IEnumerable_FieldInfo) {
            pVVar9 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar12);
            goto label_05b54bb1;
          }
          lVar12 = lVar12 + 0x10;
        } while (uVar11 * 0x10 != lVar12);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_FieldInfo,0);
label_05b54bb1:
      pIVar8 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
      local_38 = (undefined1 *)&local_48;
      local_40 = 0;
      do {
        local_48 = pIVar8;
        if (pIVar8 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = pIVar8->klass;
        uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar11 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(Il2CppClass **)((long)&pIVar3->interfaceType + lVar12) ==
                (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar9 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar12);
              goto label_05b54c53;
            }
            lVar12 = lVar12 + 0x10;
          } while (uVar11 * 0x10 != lVar12);
        }
        pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05b54c53:
        cVar4 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
        pIVar8 = local_48;
        if (cVar4 == '\0') {
          if (local_48 == (Il2CppObject *)0x0) {
            return;
          }
          pIVar2 = local_48->klass;
          uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
          if (uVar11 == 0) goto label_05b54dff;
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar12 = 0;
          goto label_05b54df0;
        }
        if (local_48 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = local_48->klass;
        uVar11 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar11 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerator_FieldInfo__c **)
                 ((long)&pIVar3->interfaceType + lVar12) ==
                TypeInfo_System_Collections_Generic_IEnumerator_FieldInfo) {
              pVVar9 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar12);
              goto label_05b54cc3;
            }
            lVar12 = lVar12 + 0x10;
          } while (uVar11 * 0x10 != lVar12);
        }
        pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_48,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_FieldInfo,
                            0);
label_05b54cc3:
        pIVar10 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
        if (pIVar10 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        value = (Il2CppObject *)
                (*pIVar10->klass->vtable[0x1a].methodPtr)(pIVar10,__this,pIVar10->klass->vtable[0x1a].method);
        if (value != (Il2CppObject *)0x0) {
          bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
          if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
             ((value->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(value);
          }
        }
        __this_00 = (__this->fields).Settings;
        pIVar8 = (Il2CppObject *)
                 (*pIVar10->klass->vtable[8].methodPtr)(pIVar10,pIVar10->klass->vtable[8].method);
        if (__this_00 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Specialized_OrderedDictionary__Add(__this_00,pIVar8,value,(MethodInfo *)0x0);
        method_00 = pIVar10->klass->vtable[0x11].method;
        pSVar6 = (System_Type_o *)(*pIVar10->klass->vtable[0x11].methodPtr)(pIVar10);
        bVar5 = Settings_BaseSettingsContainer___RegisterSettings_g__IsTypedSetting_5_0(pSVar6,method_00);
        pIVar8 = local_48;
        if (bVar5) {
          __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (__this->fields).TypedSettings;
          pIVar8 = (Il2CppObject *)
                   (*pIVar10->klass->vtable[8].methodPtr)(pIVar10,pIVar10->klass->vtable[8].method);
          if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___Add
                    (__this_01,pIVar8,value,
                     (MethodInfo_4AAD4E0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Add);
          pIVar8 = local_48;
        }
      } while( true );
    }
  }
  ThrowNullReferenceException();
  while (lVar12 = lVar12 + 0x10, uVar11 * 0x10 != lVar12) {
label_05b54df0:
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar12) == TypeInfo_System_IDisposable) {
      pVVar9 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar12);
      goto label_05b54e1d;
    }
  }
label_05b54dff:
  pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(local_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05b54e1d:
  (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
  return;
}


// Settings.BaseSettingsContainer$$SetDefault
// il2cpp: void Settings_BaseSettingsContainer__SetDefault (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x5b41860
// eh: try 0x5b419af..0x5b41ab5 -> pad 0x5b41abe (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b41ade..0x5b41ae3 -> pad 0x5b41b7f cleanup
// eh: try 0x5b41b82..0x5b41b8c -> pad 0x5b41b94 catch (...) [compiler noexcept guard]
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b418fd: nop dword ptr [rax]
// asm:   0x5b4199c: nop dword ptr [rax]
// asm:   0x5b41aba: jmp 0x5b41ac2
// asm:   0x5b41abc: jmp 0x5b41ac2
// asm:   0x5b41abe: jmp 0x5b41ac2
// asm:   0x5b41ac0: jmp 0x5b41ac2
// asm:   0x5b41ac2: mov rbx, rax
// asm:   0x5b41ac5: cmp edx, 1
// asm:   0x5b41ac8: jne 0x5b41b82
// asm:   0x5b41ace: mov rdi, rbx
// asm:   0x5b41ad1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b41ad6: mov r14, qword ptr [rax]
// asm:   0x5b41ad9: mov qword ptr [rsp + 0x10], r14
// asm:   0x5b41ade: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b41b77: mov rdi, r14
// asm:   0x5b41b7a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b41b7f: mov rbx, rax
// asm:   0x5b41b82: lea rdi, [rsp + 0x10]
// asm:   0x5b41b87: call 0x2fd6ed0  ; il2cpp_runtime_helper_02fd6ed0()
// asm:   0x5b41b8c: mov rdi, rbx
// asm:   0x5b41b8f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b41b94: mov rdi, rax
// asm:   0x5b41b97: call 0x2ab61e0  ; __clang_call_terminate()

void Settings_BaseSettingsContainer__SetDefault(Settings_BaseSettingsContainer_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  ulong uVar7;
  long lVar8;
  Il2CppObject *local_48;
  Il2CppObject *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  Il2CppObject **local_28;
  
  if (Il2CppMethodInitialized_075472cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    Il2CppMethodInitialized_075472cf = '\x01';
  }
  local_40 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).Settings;
  if ((__this_00 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) ||
     (pIVar5 = (Il2CppObject *)
               System_Collections_Specialized_OrderedDictionary__get_Values(__this_00,(MethodInfo *)0x0),
     pIVar5 == (Il2CppObject *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar2 = pIVar5->klass;
  uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
  if (uVar7 != 0) {
    pIVar3 = (pIVar2->_1).interfaceOffsets;
    lVar8 = 0;
    do {
      if (*(System_Collections_IEnumerable_c **)((long)&pIVar3->interfaceType + lVar8) ==
          TypeInfo_System_Collections_IEnumerable) {
        pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
        goto label_05b41931;
      }
      lVar8 = lVar8 + 0x10;
    } while (uVar7 * 0x10 != lVar8);
  }
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar5,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,0);
label_05b41931:
  local_48 = (Il2CppObject *)(*pVVar6->methodPtr)(pIVar5,pVVar6->method);
  local_30 = (undefined1 *)&local_48;
  local_38 = 0;
  local_28 = &local_40;
  do {
    pIVar5 = local_48;
    if (local_48 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = local_48->klass;
    uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar8) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
          goto label_05b419d3;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_48,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05b419d3:
    bVar4 = (*pVVar6->methodPtr)(pIVar5,pVVar6->method);
    pIVar5 = local_48;
    if (!bVar4) {
      pIVar5 = il2cpp_vm_Object_IsInst(local_48,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (pIVar5 == (Il2CppObject *)0x0) {
        return;
      }
      pIVar2 = pIVar5->klass;
      uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
      local_40 = pIVar5;
      if (uVar7 == 0) goto label_05b41b3f;
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar8 = 0;
      break;
    }
    if (local_48 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = local_48->klass;
    uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar7 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar8) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar6 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar8) + 1);
          goto label_05b41a57;
        }
        lVar8 = lVar8 + 0x10;
      } while (uVar7 * 0x10 != lVar8);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_48,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05b41a57:
    pIVar5 = (*pVVar6->methodPtr)(pIVar5,pVVar6->method);
    if (pIVar5 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = pIVar5->klass;
    bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
    if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar5);
    }
    (*pIVar2->vtable[4].methodPtr)(pIVar5,pIVar2->vtable[4].method);
  } while( true );
  while (lVar8 = lVar8 + 0x10, uVar7 * 0x10 != lVar8) {
    if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar8) == TypeInfo_System_IDisposable) {
      pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
      goto label_05b41b5d;
    }
  }
label_05b41b3f:
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar5,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05b41b5d:
  (*pVVar6->methodPtr)(pIVar5,pVVar6->method);
  return;
}


// Settings.BaseSettingsContainer$$Apply
// il2cpp: void Settings_BaseSettingsContainer__Apply (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x5b55220

void Settings_BaseSettingsContainer__Apply(Settings_BaseSettingsContainer_o *__this,MethodInfo *method)

{
  return;
}


// Settings.BaseSettingsContainer$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_BaseSettingsContainer__SerializeToJsonObject (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x5b45ac0
// eh: try 0x5b45c3f..0x5b45e66 -> pad 0x5b45e81 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5b45e9d..0x5b45ea2 -> pad 0x5b45ea7 cleanup
// eh: try 0x5b45eaa..0x5b45eb4 -> pad 0x5b45ebc catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b45c2d: nop dword ptr [rax]
// asm:   0x5b45e6b: mov rdi, r14
// asm:   0x5b45e6e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b45e73: jmp 0x5b45e85
// asm:   0x5b45e75: jmp 0x5b45e85
// asm:   0x5b45e77: jmp 0x5b45e85
// asm:   0x5b45e79: jmp 0x5b45e85
// asm:   0x5b45e7b: jmp 0x5b45e85
// asm:   0x5b45e7d: jmp 0x5b45e85
// asm:   0x5b45e7f: jmp 0x5b45e85
// asm:   0x5b45e81: jmp 0x5b45e85
// asm:   0x5b45e83: jmp 0x5b45e85
// asm:   0x5b45e85: mov r14, rax
// asm:   0x5b45e88: cmp edx, 1
// asm:   0x5b45e8b: jne 0x5b45eaa
// asm:   0x5b45e8d: mov rdi, r14
// asm:   0x5b45e90: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b45e95: mov r14, qword ptr [rax]
// asm:   0x5b45e98: mov qword ptr [rsp + 0x10], r14
// asm:   0x5b45e9d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b45ea2: jmp 0x5b45da5
// asm:   0x5b45ea7: mov r14, rax
// asm:   0x5b45eaa: lea rdi, [rsp + 0x10]
// asm:   0x5b45eaf: call 0x2fd6f70  ; il2cpp_runtime_helper_02fd6f70()
// asm:   0x5b45eb4: mov rdi, r14
// asm:   0x5b45eb7: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b45ebc: mov rdi, rax
// asm:   0x5b45ebf: call 0x2ab61e0  ; __clang_call_terminate()

SimpleJSONFixed_JSONNode_o *
Settings_BaseSettingsContainer__SerializeToJsonObject
          (Settings_BaseSettingsContainer_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Specialized_OrderedDictionary_o *pSVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  bool bVar5;
  SimpleJSONFixed_JSONObject_o *__this_00;
  Il2CppObject *pIVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *key;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  ulong uVar9;
  long lVar10;
  Il2CppObject *local_58;
  Il2CppObject *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_075472d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    Il2CppMethodInitialized_075472d0 = '\x01';
  }
  local_58 = (Il2CppObject *)0x0;
  local_50 = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).Settings;
  if ((pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) ||
     (pIVar6 = (Il2CppObject *)
               System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar2,(MethodInfo *)0x0),
     pIVar6 == (Il2CppObject *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar3 = pIVar6->klass;
  uVar9 = (ulong)(pIVar3->_2).interface_offsets_count;
  if (uVar9 != 0) {
    pIVar4 = (pIVar3->_1).interfaceOffsets;
    lVar10 = 0;
    do {
      if (*(System_Collections_IEnumerable_c **)((long)&pIVar4->interfaceType + lVar10) ==
          TypeInfo_System_Collections_IEnumerable) {
        pVVar7 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar10);
        goto label_05b45bc1;
      }
      lVar10 = lVar10 + 0x10;
    } while (uVar9 * 0x10 != lVar10);
  }
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,0);
label_05b45bc1:
  local_58 = (Il2CppObject *)(*pVVar7->methodPtr)(pIVar6,pVVar7->method);
  local_40 = (undefined1 *)&local_58;
  local_48 = 0;
  local_38 = &local_50;
  do {
    pIVar6 = local_58;
    if (local_58 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = local_58->klass;
    uVar9 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar9 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar10) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar7 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar10);
          goto label_05b45c63;
        }
        lVar10 = lVar10 + 0x10;
      } while (uVar9 * 0x10 != lVar10);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05b45c63:
    bVar5 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
    pIVar6 = local_58;
    if (!bVar5) {
      pIVar6 = il2cpp_vm_Object_IsInst(local_58,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (pIVar6 == (Il2CppObject *)0x0) {
        return (SimpleJSONFixed_JSONNode_o *)__this_00;
      }
      pIVar3 = pIVar6->klass;
      uVar9 = (ulong)(pIVar3->_2).interface_offsets_count;
      local_50 = pIVar6;
      if (uVar9 == 0) goto label_05b45dff;
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar10 = 0;
      break;
    }
    if (local_58 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = local_58->klass;
    uVar9 = (ulong)(pIVar3->_2).interface_offsets_count;
    if (uVar9 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      lVar10 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar10) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar7 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar10) + 1);
          goto label_05b45cf7;
        }
        lVar10 = lVar10 + 0x10;
      } while (uVar9 * 0x10 != lVar10);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05b45cf7:
    key = (System_String_o *)(*pVVar7->methodPtr)(pIVar6,pVVar7->method);
    if ((key != (System_String_o *)0x0) && (key->klass != g_data_07556758)) {
      il2cpp_codegen_raise_invalid_cast_exception(key);
    }
    pSVar2 = (__this->fields).Settings;
    if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar6 = System_Collections_Specialized_OrderedDictionary__get_Item
                       (pSVar2,(Il2CppObject *)key,(MethodInfo *)0x0);
    if (pIVar6 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar3 = pIVar6->klass;
    bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
    if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar6);
    }
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)(*pIVar3->vtable[5].methodPtr)(pIVar6,pIVar3->vtable[5].method);
    if (__this_00 == (SimpleJSONFixed_JSONObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(__this_00->klass->vtable)._20_Add.methodPtr)
              (__this_00,key,pSVar8,(__this_00->klass->vtable)._20_Add.method);
  } while( true );
  while (lVar10 = lVar10 + 0x10, uVar9 * 0x10 != lVar10) {
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar10) == TypeInfo_System_IDisposable) {
      pVVar7 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar10);
      goto label_05b45e1d;
    }
  }
label_05b45dff:
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar6,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05b45e1d:
  (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// Settings.BaseSettingsContainer$$DeserializeFromJsonObject
// il2cpp: void Settings_BaseSettingsContainer__DeserializeFromJsonObject (Settings_BaseSettingsContainer_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x5b46260
// eh: try 0x5b46314..0x5b46799 -> pad 0x5b46755 (+26 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5b467a4..0x5b467ae -> pad 0x5b4685f catch (...) [compiler noexcept guard]
// eh: try 0x5b467d3..0x5b4684f -> pad 0x5b4684f (+1 call sites) cleanup
// eh: try 0x5b46852..0x5b46857 -> pad 0x5b4685f catch (...) [compiler noexcept guard]
// asm: 90 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b4639c: nop dword ptr [rax]
// asm:   0x5b46408: lea r15, [rip + 0x1732fe9]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x5b4640f: lea r14, [rip + 0x1733c6a]  ; TypeInfo_SimpleJSONFixed_JSONNode
// asm:   0x5b46416: jmp 0x5b4642e
// asm:   0x5b46420: mov rbx, qword ptr [rsp + 0x10]
// asm:   0x5b46425: test rbx, rbx
// asm:   0x5b46428: je 0x5b466fc
// asm:   0x5b4644d: nop dword ptr [rax]
// asm:   0x5b46741: mov rdi, r14
// asm:   0x5b46744: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b46749: jmp 0x5b46757
// asm:   0x5b4674b: jmp 0x5b46757
// asm:   0x5b4674d: jmp 0x5b46757
// asm:   0x5b4674f: jmp 0x5b46757
// asm:   0x5b46751: jmp 0x5b46757
// asm:   0x5b46753: jmp 0x5b46757
// asm:   0x5b46755: jmp 0x5b46757
// asm:   0x5b46757: mov rbx, rdx
// asm:   0x5b4675a: mov r15, rax
// asm:   0x5b4675d: jmp 0x5b467ae
// asm:   0x5b4675f: jmp 0x5b46779
// asm:   0x5b46761: jmp 0x5b46779
// asm:   0x5b46763: jmp 0x5b46779
// asm:   0x5b46765: jmp 0x5b46779
// asm:   0x5b46767: jmp 0x5b46779
// asm:   0x5b46769: jmp 0x5b46779
// asm:   0x5b4676b: jmp 0x5b46779
// asm:   0x5b4676d: jmp 0x5b46779
// asm:   0x5b4676f: jmp 0x5b46779
// asm:   0x5b46771: jmp 0x5b46779
// asm:   0x5b46773: jmp 0x5b46779
// asm:   0x5b46775: jmp 0x5b46779
// asm:   0x5b46777: jmp 0x5b46779
// asm:   0x5b46779: mov rbx, rdx
// asm:   0x5b4677c: mov r15, rax
// asm:   0x5b4677f: cmp ebx, 1
// asm:   0x5b46782: jne 0x5b467a4
// asm:   0x5b46784: mov rdi, r15
// asm:   0x5b46787: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b4678c: mov r14, qword ptr [rax]
// asm:   0x5b4678f: mov qword ptr [rsp + 0x20], r14
// asm:   0x5b46794: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b46799: jmp 0x5b46639
// asm:   0x5b4679e: mov rbx, rdx
// asm:   0x5b467a1: mov r15, rax
// asm:   0x5b467a4: lea rdi, [rsp + 0x20]
// asm:   0x5b467a9: call 0x2fd7010  ; il2cpp_runtime_helper_02fd7010()
// asm:   0x5b467ae: cmp ebx, 1
// asm:   0x5b467b1: jne 0x5b46857
// asm:   0x5b467b7: mov rdi, r15
// asm:   0x5b467ba: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b467bf: mov rbx, rax
// asm:   0x5b467c2: lea rax, [rip + 0x1a0feff]
// asm:   0x5b467c9: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5b467cd: mov rax, qword ptr [rbx]
// asm:   0x5b467d0: mov rsi, qword ptr [rax]
// asm:   0x5b467d3: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b467d8: test al, al
// asm:   0x5b467da: je 0x5b4682e
// asm:   0x5b467dc: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b467e1: lea rdi, [rip + 0x1730e60]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5b467e8: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b467ed: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5b467f4: jne 0x5b467fe
// asm:   0x5b467f6: mov rdi, rax
// asm:   0x5b467f9: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5b467fe: lea rdi, [rip + 0x179536b]  ; "Failed to deserialize json."
// asm:   0x5b46805: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b4680a: mov rdi, rax
// asm:   0x5b4680d: xor esi, esi
// asm:   0x5b4680f: call 0x69c42a0  ; UnityEngine_Debug__Log()
// asm:   0x5b46814: mov rdi, qword ptr [rsp + 8]
// asm:   0x5b46819: mov rax, qword ptr [rdi]
// asm:   0x5b4681c: mov rsi, qword ptr [rax + 0x180]
// asm:   0x5b46823: call qword ptr [rax + 0x178]  ; vtable slot 4
// asm:   0x5b46829: jmp 0x5b466ed
// asm:   0x5b4682e: mov edi, 8
// asm:   0x5b46833: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5b46838: mov rcx, qword ptr [rbx]
// asm:   0x5b4683b: mov qword ptr [rax], rcx
// asm:   0x5b4683e: lea rsi, [rip + 0x12e6cbb]
// asm:   0x5b46845: mov rdi, rax
// asm:   0x5b46848: xor edx, edx
// asm:   0x5b4684a: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5b4684f: mov r15, rax
// asm:   0x5b46852: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b46857: mov rdi, r15
// asm:   0x5b4685a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b4685f: mov rdi, rax
// asm:   0x5b46862: call 0x2ab61e0  ; __clang_call_terminate()

void Settings_BaseSettingsContainer__DeserializeFromJsonObject
               (Settings_BaseSettingsContainer_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Collections_Specialized_OrderedDictionary_o *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  char cVar6;
  bool bVar7;
  Il2CppObject *pIVar8;
  VirtualInvokeData *pVVar9;
  System_String_o *key;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  ulong uVar11;
  long lVar12;
  Il2CppObject *local_58;
  Il2CppObject *local_50;
  undefined8 local_48;
  Il2CppObject **local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_075472d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    Il2CppMethodInitialized_075472d1 = '\x01';
  }
  local_58 = (Il2CppObject *)0x0;
  local_50 = (Il2CppObject *)0x0;
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).FoundSettings;
  if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Clear
            (pSVar2,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear);
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (TypeInfo_SimpleJSONFixed_JSONObject->_2).typeHierarchyDepth;
    if (((json->klass->_2).typeHierarchyDepth < bVar1) ||
       ((json->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject)) {
      il2cpp_codegen_raise_invalid_cast_exception(json);
    }
  }
  pSVar3 = (__this->fields).Settings;
  if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar8 = (Il2CppObject *)
           System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar3,(MethodInfo *)0x0);
  if (pIVar8 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar4 = pIVar8->klass;
  uVar11 = (ulong)(pIVar4->_2).interface_offsets_count;
  if (uVar11 != 0) {
    pIVar5 = (pIVar4->_1).interfaceOffsets;
    lVar12 = 0;
    do {
      if (*(System_Collections_IEnumerable_c **)((long)&pIVar5->interfaceType + lVar12) ==
          TypeInfo_System_Collections_IEnumerable) {
        pVVar9 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar12);
        goto label_05b463d1;
      }
      lVar12 = lVar12 + 0x10;
    } while (uVar11 * 0x10 != lVar12);
  }
  pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,0);
label_05b463d1:
  pIVar8 = (Il2CppObject *)(*pVVar9->methodPtr)(pIVar8,pVVar9->method);
  local_48 = 0;
  local_40 = &local_58;
  local_38 = &local_50;
  do {
    local_58 = pIVar8;
    if (pIVar8 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = pIVar8->klass;
    uVar11 = (ulong)(pIVar4->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar5->interfaceType + lVar12) ==
            (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar9 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar12);
          goto label_05b46483;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar11 * 0x10 != lVar12);
    }
    pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05b46483:
    cVar6 = (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
    pIVar8 = local_58;
    if (cVar6 == '\0') {
      pIVar8 = il2cpp_vm_Object_IsInst(local_58,(Il2CppClass *)TypeInfo_System_IDisposable);
      local_50 = pIVar8;
      if (pIVar8 == (Il2CppObject *)0x0) goto label_05b466b6;
      pIVar4 = pIVar8->klass;
      uVar11 = (ulong)(pIVar4->_2).interface_offsets_count;
      if (uVar11 == 0) goto label_05b4668f;
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      lVar12 = 0;
      break;
    }
    if (local_58 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = local_58->klass;
    uVar11 = (ulong)(pIVar4->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(System_Collections_IEnumerator_c **)((long)&pIVar5->interfaceType + lVar12) ==
            TypeInfo_System_Collections_IEnumerator) {
          pVVar9 = pIVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar12) + 1);
          goto label_05b46517;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar11 * 0x10 != lVar12);
    }
    pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05b46517:
    key = (System_String_o *)(*pVVar9->methodPtr)(pIVar8,pVVar9->method);
    if ((key != (System_String_o *)0x0) && (key->klass != g_data_07556758)) {
      il2cpp_codegen_raise_invalid_cast_exception(key);
    }
    if (json == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar10 = (*(json->klass->vtable)._7_get_Item.methodPtr)
                        (json,key,(json->klass->vtable)._7_get_Item.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pIVar8 = local_58;
    if (bVar7) {
      pSVar3 = (__this->fields).Settings;
      if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar8 = System_Collections_Specialized_OrderedDictionary__get_Item
                         (pSVar3,(Il2CppObject *)key,(MethodInfo *)0x0);
      pSVar10 = (*(json->klass->vtable)._7_get_Item.methodPtr)
                          (json,key,(json->klass->vtable)._7_get_Item.method);
      if (pIVar8 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar4 = pIVar8->klass;
      bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
      if (((pIVar4->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar4->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar8);
      }
      (*pIVar4->vtable[6].methodPtr)(pIVar8,pSVar10,pIVar4->vtable[6].method);
      pSVar2 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).FoundSettings;
      if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_object___Add
                (pSVar2,(Il2CppObject *)key,
                 (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      pIVar8 = local_58;
    }
  } while( true );
  while (lVar12 = lVar12 + 0x10, uVar11 * 0x10 != lVar12) {
    if (*(System_IDisposable_c **)((long)&pIVar5->interfaceType + lVar12) == TypeInfo_System_IDisposable) {
      pVVar9 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar12);
      goto label_05b466ad;
    }
  }
label_05b4668f:
  pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar8,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05b466ad:
  (*pVVar9->methodPtr)(pIVar8,pVVar9->method);
label_05b466b6:
  bVar7 = (*(__this->klass->vtable)._13_Validate.methodPtr)
                    (__this,(__this->klass->vtable)._13_Validate.method);
  if (!bVar7) {
    (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
  }
  return;
}


// Settings.BaseSettingsContainer$$Validate
// il2cpp: bool Settings_BaseSettingsContainer__Validate (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x5b55230

bool Settings_BaseSettingsContainer__Validate(Settings_BaseSettingsContainer_o *__this,MethodInfo *method)

{
  return true;
}


// Settings.BaseSettingsContainer$$<RegisterSettings>g__IsTypedSetting|5_0
// il2cpp: bool Settings_BaseSettingsContainer___RegisterSettings_g__IsTypedSetting_5_0 (System_Type_o* settingType, const MethodInfo* method);
// 0x5b55120

bool Settings_BaseSettingsContainer___RegisterSettings_g__IsTypedSetting_5_0
               (System_Type_o *settingType,MethodInfo *method)

{
  Il2CppType *handle;
  char cVar1;
  bool bVar2;
  System_Type_o *right;
  long *plVar3;
  System_Type_o *left;
  
  if (Il2CppMethodInitialized_075472d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_TypedSetting_T);
    Il2CppMethodInitialized_075472d2 = '\x01';
  }
  handle = TypeRef_Settings_TypedSetting_T;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  right = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (settingType != (System_Type_o *)0x0) {
    plVar3 = (long *)(*(settingType->klass->vtable)._118_unknown.methodPtr)
                               (settingType,(settingType->klass->vtable)._118_unknown.method);
    if (plVar3 != (long *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x3b8))(plVar3,*(undefined8 *)(*plVar3 + 0x3c0));
      if (cVar1 == '\0') {
        return false;
      }
      plVar3 = (long *)(*(settingType->klass->vtable)._118_unknown.methodPtr)
                                 (settingType,(settingType->klass->vtable)._118_unknown.method);
      if (plVar3 != (long *)0x0) {
        left = (System_Type_o *)(**(code **)(*plVar3 + 0x448))(plVar3,*(undefined8 *)(*plVar3 + 0x450));
        if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_075567a8);
        }
        bVar2 = System_Type__op_Equality(left,right,(MethodInfo *)0x0);
        return bVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


