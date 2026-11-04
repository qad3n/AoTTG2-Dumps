// Type: Settings.BaseSettingsContainer
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/BaseSettingsContainer.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BaseSettingsContainer.cs
// --------------------------------

// Settings.BaseSettingsContainer.<>c$$.cctor
// il2cpp: void Settings_BaseSettingsContainer___c___cctor (const MethodInfo* method);
// 0x181f2a440

void Settings_BaseSettingsContainer___c___cctor(MethodInfo *method)

{
  Settings_BaseSettingsContainer___c_o *__this;
  
  if (Il2CppMethodInitialized_184345487 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSettingsContainer_c);
    Il2CppMethodInitialized_184345487 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BaseSettingsContainer_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Settings_BaseSettingsContainer_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_BaseSettingsContainer_c->static_fields->__9,__this);
  return;
}


// Settings.BaseSettingsContainer.<>c$$.ctor
// il2cpp: void Settings_BaseSettingsContainer___c___ctor (Settings_BaseSettingsContainer___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Settings_BaseSettingsContainer___c___ctor(Settings_BaseSettingsContainer___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.BaseSettingsContainer.<>c$$<RegisterSettings>b__5_1
// il2cpp: bool Settings_BaseSettingsContainer___c___RegisterSettings_b__5_1 (Settings_BaseSettingsContainer___c_o* __this, System_Reflection_FieldInfo_o* field, const MethodInfo* method);
// 0x181f2a0b0

bool Settings_BaseSettingsContainer___c___RegisterSettings_b__5_1
               (Settings_BaseSettingsContainer___c_o *__this,System_Reflection_FieldInfo_o *field,
               MethodInfo *method)

{
  Il2CppType *handle;
  undefined1 uVar1;
  longlong *plVar2;
  System_Type_o *pSVar3;
  
  if (Il2CppMethodInitialized_184345488 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_BaseSetting);
    Il2CppMethodInitialized_184345488 = '\x01';
  }
  if (field != (System_Reflection_FieldInfo_o *)0x0) {
    plVar2 = (longlong *)(*(field->klass->vtable)._17_unknown.methodPtr)(field);
    handle = TypeRef_Settings_BaseSetting;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    pSVar3 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = (**(code **)(*plVar2 + 0x288))(plVar2,pSVar3,*(undefined8 *)(*plVar2 + 0x290));
      return (bool)uVar1;
    }
  }
  ThrowNullReferenceException();
}


// Settings.BaseSettingsContainer$$.ctor
// il2cpp: void Settings_BaseSettingsContainer___ctor (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x181f0fcf0

void Settings_BaseSettingsContainer___ctor(Settings_BaseSettingsContainer_o *__this,MethodInfo *method)

{
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_01;
  System_Collections_Generic_HashSet_string__o *__this_02;
  
  if (Il2CppMethodInitialized_184345481 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Specialized_OrderedDictionary);
    Il2CppMethodInitialized_184345481 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Specialized_OrderedDictionary);
  System_Collections_Specialized_OrderedDictionary___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).Settings = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Settings,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
  (__this->fields).TypedSettings = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TypedSettings,__this_01);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_02,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  (__this->fields).FoundSettings = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FoundSettings,__this_02);
  Settings_BaseSetting___ctor((Settings_BaseSetting_o *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._11_Setup.methodPtr)(__this,(__this->klass->vtable)._11_Setup.method);
  return;
}


// Settings.BaseSettingsContainer$$Setup
// il2cpp: void Settings_BaseSettingsContainer__Setup (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x181f0fbb0

void Settings_BaseSettingsContainer__Setup(Settings_BaseSettingsContainer_o *__this,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  Settings_BaseSettingsContainer__RegisterSettings(__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._12_Apply.methodPtr)
            (__this,(System_Type_o *)(__this->klass->vtable)._12_Apply.method,in_R8);
  return;
}


// Settings.BaseSettingsContainer$$RegisterSettings
// il2cpp: void Settings_BaseSettingsContainer__RegisterSettings (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x181f0f1e0
// eh: try 0x181f0f3a0..0x181f0f699 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f0f629: mov r8, qword ptr [rsp + 0x30]
// asm:   0x181f0f62e: cmp qword ptr [r8], 0
// asm:   0x181f0f632: je 0x181f0f645
// asm:   0x181f0f634: xor ecx, ecx
// asm:   0x181f0f636: mov r8, qword ptr [r8]
// asm:   0x181f0f639: mov rdx, qword ptr [rip + 0x2189cc0]  ; TypeInfo_System_IDisposable
// asm:   0x181f0f640: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181f0f645: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f0f64a: test rcx, rcx
// asm:   0x181f0f64d: jne 0x181f0f699
// asm:   0x181f0f699: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Settings_BaseSettingsContainer__RegisterSettings
               (Settings_BaseSettingsContainer_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Il2CppType *handle;
  char cVar5;
  bool bVar6;
  ushort uVar7;
  System_Type_o *pSVar8;
  System_Reflection_FieldInfo_array *source;
  System_Func_FieldInfo__bool__o *__this_02;
  Il2CppObject *pIVar9;
  void *pvVar10;
  VirtualInvokeData *pVVar11;
  Il2CppObject *pIVar12;
  Il2CppObject *value;
  Il2CppObject *key;
  longlong *plVar13;
  longlong *plVar14;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *left;
  
  if (Il2CppMethodInitialized_184345482 == '\0') {
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
    Il2CppMethodInitialized_184345482 = '\x01';
  }
  pSVar8 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (pSVar8 != (System_Type_o *)0x0) {
    source = System_Type__GetFields(pSVar8,(MethodInfo *)0x0);
    if ((TypeInfo_Settings_BaseSettingsContainer_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_BaseSettingsContainer_c);
    }
    __this_02 = TypeInfo_Settings_BaseSettingsContainer_c->static_fields->__9__5_1;
    if (__this_02 == (System_Func_FieldInfo__bool__o *)0x0) {
      if ((TypeInfo_Settings_BaseSettingsContainer_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_BaseSettingsContainer_c);
      }
      pIVar9 = (Il2CppObject *)TypeInfo_Settings_BaseSettingsContainer_c->static_fields->__9;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_FieldInfo_bool);
      System_Func_object__bool____ctor
                ((System_Predicate_object__o *)__this_02,pIVar9,
                 (intptr_t)MethodInfo_Settings_BaseSettingsContainer_c_RegisterSettings_b__5_1,
                 (MethodInfo_B61EB0 *)0x0);
      TypeInfo_Settings_BaseSettingsContainer_c->static_fields->__9__5_1 = __this_02;
      Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_BaseSettingsContainer_c->static_fields->__9__5_1,__this_02)
      ;
    }
    pIVar9 = (Il2CppObject *)
             System_Linq_Enumerable__Where_float_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (System_Func_TSource__bool__o *)__this_02,
                        (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_FieldInfo);
    if (pIVar9 != (Il2CppObject *)0x0) {
      pIVar9 = InterfaceInvoker0_Invoke
                         (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_FieldInfo,pIVar9);
      do {
        if (pIVar9 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar10 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar9);
        if ((char)pvVar10 == '\0') {
          if (pIVar9 != (Il2CppObject *)0x0) {
            InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar9);
          }
          return;
        }
        if (pIVar9 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar3 = pIVar9->klass;
        uVar2 = (pIVar3->_2).interface_offsets_count;
        uVar7 = 0;
        if (uVar2 != 0) {
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          do {
            if (pIVar4[uVar7].interfaceType ==
                (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_FieldInfo) {
              pVVar11 = pIVar3->vtable + pIVar4[uVar7].offset;
              goto label_181f0f426;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar2);
        }
        pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                            (pIVar9,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_FieldInfo,0
                            );
label_181f0f426:
        pIVar12 = (*pVVar11->methodPtr)(pIVar9,pVVar11->method);
        if (pIVar12 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        value = (Il2CppObject *)
                (*pIVar12->klass->vtable[0x1a].methodPtr)(pIVar12,__this,pIVar12->klass->vtable[0x1a].method);
        if (value != (Il2CppObject *)0x0) {
          bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
          if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
             ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
            il2cpp_codegen_raise_invalid_cast_exception(value);
          }
        }
        __this_00 = (__this->fields).Settings;
        key = (Il2CppObject *)(*pIVar12->klass->vtable[8].methodPtr)(pIVar12,pIVar12->klass->vtable[8].method)
        ;
        if (__this_00 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Specialized_OrderedDictionary__Add(__this_00,key,value,(MethodInfo *)0x0);
        plVar13 = (longlong *)(*pIVar12->klass->vtable[0x11].methodPtr)(pIVar12);
        if (Il2CppMethodInitialized_184345486 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_TypedSetting_T);
          Il2CppMethodInitialized_184345486 = '\x01';
        }
        handle = TypeRef_Settings_TypedSetting_T;
        if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354ea0);
        }
        pSVar8 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
        if (plVar13 == (longlong *)0x0) {
          ThrowNullReferenceException();
        }
        plVar14 = (longlong *)(**(code **)(*plVar13 + 0x898))(plVar13,*(undefined8 *)(*plVar13 + 0x8a0));
        if (plVar14 == (longlong *)0x0) {
          ThrowNullReferenceException();
        }
        cVar5 = (**(code **)(*plVar14 + 0x3b8))(plVar14,*(undefined8 *)(*plVar14 + 0x3c0));
        if (cVar5 != '\0') {
          plVar13 = (longlong *)(**(code **)(*plVar13 + 0x898))(plVar13,*(undefined8 *)(*plVar13 + 0x8a0));
          if (plVar13 == (longlong *)0x0) {
            ThrowNullReferenceException();
          }
          left = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)
                 (**(code **)(*plVar13 + 0x448))(plVar13,*(undefined8 *)(*plVar13 + 0x450));
          if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_184354ea0);
          }
          bVar6 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                            (left,(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)pSVar8,
                             (MethodInfo_841F20 *)0x0);
          if (bVar6) {
            __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this->fields).TypedSettings;
            pIVar12 = (Il2CppObject *)
                      (*pIVar12->klass->vtable[8].methodPtr)(pIVar12,pIVar12->klass->vtable[8].method);
            if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Collections_Generic_Dictionary_object__object___Add
                      (__this_01,pIVar12,value,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_Add);
          }
        }
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// Settings.BaseSettingsContainer$$SetDefault
// il2cpp: void Settings_BaseSettingsContainer__SetDefault (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x181f0f980
// eh: try 0x181f0fa40..0x181f0face -> pad 0x183315930 catch Il2CppExceptionWrapper
// eh: try 0x181f0face..0x181f0fb23 -> pad 0x180026a30 cleanup
// eh: try 0x181f0fb23..0x181f0fb97 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f0faee: mov rdx, qword ptr [rip + 0x21bf9bb]  ; TypeInfo_Settings_BaseSetting
// asm:   0x181f0faf5: mov r9, qword ptr [rax]
// asm:   0x181f0faf8: movzx eax, byte ptr [rdx + 0x130]
// asm:   0x181f0faff: cmp byte ptr [r9 + 0x130], al
// asm:   0x181f0fb06: jb 0x181f0fb84
// asm:   0x181f0fb59: lea rcx, [rsp + 0x30]
// asm:   0x181f0fb5e: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x181f0fb63: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f0fb68: test rcx, rcx
// asm:   0x181f0fb6b: jne 0x181f0fb97
// asm:   0x181f0fb97: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Settings_BaseSettingsContainer__SetDefault(Settings_BaseSettingsContainer_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Il2CppObject *pIVar5;
  void *pvVar6;
  VirtualInvokeData *pVVar7;
  Il2CppObject *pIVar8;
  ushort uVar9;
  
  if (Il2CppMethodInitialized_184345483 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    Il2CppMethodInitialized_184345483 = '\x01';
  }
  __this_00 = (__this->fields).Settings;
  if (__this_00 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
    pIVar5 = (Il2CppObject *)
             System_Collections_Specialized_OrderedDictionary__get_Values(__this_00,(MethodInfo *)0x0);
    if (pIVar5 != (Il2CppObject *)0x0) {
      pIVar5 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,pIVar5);
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
          uVar9 = 0;
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          do {
            if (pIVar4[uVar9].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar7 = pIVar3->vtable + (pIVar4[uVar9].offset + 1);
              goto label_181f0fab9;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar2);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar5,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_181f0fab9:
        pIVar8 = (*pVVar7->methodPtr)(pIVar5,pVVar7->method);
        if (pIVar8 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar3 = pIVar8->klass;
        bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
        if (((pIVar3->_2).typeHierarchyDepth < bVar1) ||
           ((pIVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BaseSetting))
        {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar8);
        }
        (*pIVar3->vtable[4].methodPtr)(pIVar8,pIVar3->vtable[4].method);
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// Settings.BaseSettingsContainer$$Apply
// il2cpp: void Settings_BaseSettingsContainer__Apply (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x180547020

void
Settings_BaseSettingsContainer__Apply(Settings_BaseSettingsContainer_o* __this, MethodInfo* method)

{
  return;
}


// Settings.BaseSettingsContainer$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_BaseSettingsContainer__SerializeToJsonObject (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x181f0f6b0
// eh: try 0x181f0f7a0..0x181f0f864 -> pad 0x183315930 catch Il2CppExceptionWrapper
// eh: try 0x181f0f864..0x181f0f8c1 -> pad 0x180026a30 cleanup
// eh: try 0x181f0f8c1..0x181f0f977 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f0f884: mov rdx, qword ptr [rip + 0x21bfc25]  ; TypeInfo_Settings_BaseSetting
// asm:   0x181f0f88b: mov r9, qword ptr [rax]
// asm:   0x181f0f88e: movzx eax, byte ptr [rdx + 0x130]
// asm:   0x181f0f895: cmp byte ptr [r9 + 0x130], al
// asm:   0x181f0f89c: jb 0x181f0f957
// asm:   0x181f0f91b: lea rcx, [rsp + 0x30]
// asm:   0x181f0f920: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x181f0f925: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181f0f92a: test rcx, rcx
// asm:   0x181f0f92d: jne 0x181f0f977
// asm:   0x181f0f92f: mov rdi, qword ptr [rsp + 0x88]
// asm:   0x181f0f977: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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
Settings_BaseSettingsContainer__SerializeToJsonObject
          (Settings_BaseSettingsContainer_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  System_Collections_Specialized_OrderedDictionary_o *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  SimpleJSONFixed_JSONObject_o *__this_00;
  Il2CppObject *pIVar6;
  void *pvVar7;
  VirtualInvokeData *pVVar8;
  System_String_o *pSVar9;
  Il2CppObject *pIVar10;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  ushort uVar12;
  System_String_o *key;
  
  if (Il2CppMethodInitialized_184345484 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    Il2CppMethodInitialized_184345484 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  pSVar3 = (__this->fields).Settings;
  if (pSVar3 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
    pIVar6 = (Il2CppObject *)
             System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar3,(MethodInfo *)0x0);
    if (pIVar6 != (Il2CppObject *)0x0) {
      pIVar6 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,pIVar6);
      do {
        if (pIVar6 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar7 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar6);
        if ((char)pvVar7 == '\0') {
          pIVar6 = il2cpp_vm_Object_IsInst(pIVar6,(Il2CppClass *)TypeInfo_System_IDisposable);
          if (pIVar6 != (Il2CppObject *)0x0) {
            InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar6);
          }
          return (SimpleJSONFixed_JSONNode_o *)__this_00;
        }
        if (pIVar6 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar4 = pIVar6->klass;
        uVar2 = (pIVar4->_2).interface_offsets_count;
        if (uVar2 != 0) {
          uVar12 = 0;
          pIVar5 = (pIVar4->_1).interfaceOffsets;
          do {
            if (pIVar5[uVar12].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar8 = pIVar4->vtable + (pIVar5[uVar12].offset + 1);
              goto label_181f0f819;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar2);
        }
        pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_181f0f819:
        pSVar9 = (System_String_o *)(*pVVar8->methodPtr)(pIVar6,pVVar8->method);
        key = (System_String_o *)0x0;
        if (pSVar9 != (System_String_o *)0x0) {
          if ((Il2CppClass *)pSVar9->klass == g_data_184354e50) {
            key = pSVar9;
          }
          if (key == (System_String_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar9);
          }
        }
        pSVar3 = (__this->fields).Settings;
        if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar10 = System_Collections_Specialized_OrderedDictionary__get_Item
                            (pSVar3,(Il2CppObject *)key,(MethodInfo *)0x0);
        if (pIVar10 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar4 = pIVar10->klass;
        bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
        if (((pIVar4->_2).typeHierarchyDepth < bVar1) ||
           ((pIVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BaseSetting))
        {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar10);
        }
        pSVar11 = (SimpleJSONFixed_JSONNode_o *)
                  (*pIVar4->vtable[5].methodPtr)(pIVar10,pIVar4->vtable[5].method);
        if (__this_00 == (SimpleJSONFixed_JSONObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        (*(__this_00->klass->vtable)._20_Add.methodPtr)
                  (__this_00,key,pSVar11,(__this_00->klass->vtable)._20_Add.method);
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// Settings.BaseSettingsContainer$$DeserializeFromJsonObject
// il2cpp: void Settings_BaseSettingsContainer__DeserializeFromJsonObject (Settings_BaseSettingsContainer_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x181f0ed90
// eh: try 0x181f0ee39..0x181f0eee0 -> pad 0x18333da10 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x181f0eee0..0x181f0f01a -> pad 0x1833333e0 catch Il2CppExceptionWrapper
// eh: try 0x181f0f01a..0x181f0f080 -> pad 0x18333da10 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x181f0f080..0x181f0f0a7 -> pad 0x1833333e0 catch Il2CppExceptionWrapper
// eh: try 0x181f0f0a7..0x181f0f12a -> pad 0x18333da10 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x181f0f192..0x181f0f1c2 -> pad 0x1833333e0 catch Il2CppExceptionWrapper
// eh: try 0x181f0f1c2..0x181f0f1df -> pad 0x18333da10 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 64 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f0f03d: mov rdx, qword ptr [rip + 0x21c046c]  ; TypeInfo_Settings_BaseSetting
// asm:   0x181f0f044: mov r8, qword ptr [rdi]
// asm:   0x181f0f047: movzx eax, byte ptr [rdx + 0x130]
// asm:   0x181f0f04e: cmp byte ptr [r8 + 0x130], al
// asm:   0x181f0f055: jb 0x181f0f19d
// asm:   0x181f0f0da: lea rcx, [rsp + 0x50]
// asm:   0x181f0f0df: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x181f0f0e4: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x181f0f0e9: test rcx, rcx
// asm:   0x181f0f0ec: jne 0x181f0f1c2
// asm:   0x181f0f0f2: mov r14, qword ptr [rsp + 0x90]
// asm:   0x181f0f0fa: mov r15, qword ptr [rsp + 0x20]
// asm:   0x181f0f129: nop 
// asm:   0x181f0f12c: lea rcx, [rip + 0x21ec305]  ; TypeInfo_UnityEngine_Debug
// asm:   0x181f0f133: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181f0f138: cmp dword ptr [rax + 0xe4], 0
// asm:   0x181f0f13f: jne 0x181f0f149
// asm:   0x181f0f141: mov rcx, rax
// asm:   0x181f0f144: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x181f0f149: lea rcx, [rip + 0x21d4dc0]  ; "Failed to deserialize json."
// asm:   0x181f0f150: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181f0f155: mov rcx, rax
// asm:   0x181f0f158: xor edx, edx
// asm:   0x181f0f15a: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x181f0f15f: mov rax, qword ptr [rsp + 0x20]
// asm:   0x181f0f164: mov r8, qword ptr [rax]
// asm:   0x181f0f167: mov rdx, qword ptr [r8 + 0x180]
// asm:   0x181f0f16e: mov rcx, qword ptr [rsp + 0x90]
// asm:   0x181f0f176: call qword ptr [r8 + 0x178]  ; vtable slot 4
// asm:   0x181f0f1c2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833333e0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833333e5: push rbp
// asm:   0x1833333e6: sub rsp, 0x20
// asm:   0x1833333ea: mov rbp, rdx
// asm:   0x1833333ed: mov rax, qword ptr [rbp + 0x38]
// asm:   0x1833333f1: mov rcx, qword ptr [rax]
// asm:   0x1833333f4: mov qword ptr [rbp + 0x48], rcx
// asm:   0x1833333f8: movabs rax, 0
// asm:   0x183333402: add rsp, 0x20
// asm:   0x183333406: pop rbp
// asm:   0x183333407: ret 
// asm:   0x18333da10: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333da15: push rbx
// asm:   0x18333da16: push rbp
// asm:   0x18333da17: sub rsp, 0x28
// asm:   0x18333da1b: mov rbp, rdx
// asm:   0x18333da1e: mov rbx, qword ptr [rbp + 0x40]
// asm:   0x18333da22: mov rdx, qword ptr [rbx]
// asm:   0x18333da25: mov rdx, qword ptr [rdx]
// asm:   0x18333da28: mov rcx, qword ptr [rip + 0x10173a1]
// asm:   0x18333da2f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333da34: test al, al
// asm:   0x18333da36: je 0x18333da44
// asm:   0x18333da38: movabs rax, 0
// asm:   0x18333da42: jmp 0x18333da5c
// asm:   0x18333da44: mov rax, qword ptr [rbx]
// asm:   0x18333da47: mov qword ptr [rbp + 0x30], rax
// asm:   0x18333da4b: lea rdx, [rip + 0xc9e536]
// asm:   0x18333da52: lea rcx, [rbp + 0x30]
// asm:   0x18333da56: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333da5c: add rsp, 0x28
// asm:   0x18333da60: pop rbp
// asm:   0x18333da61: pop rbx
// asm:   0x18333da62: ret 

void Settings_BaseSettingsContainer__DeserializeFromJsonObject
               (Settings_BaseSettingsContainer_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_00;
  System_Collections_Specialized_OrderedDictionary_o *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_Collections_Generic_HashSet_object__o *__this_01;
  bool bVar6;
  Il2CppObject *pIVar7;
  void *pvVar8;
  VirtualInvokeData *pVVar9;
  MethodInfo *pMVar10;
  System_Xml_Schema_XmlSchema_o *pSVar11;
  ushort uVar12;
  MethodInfo *key;
  Il2CppObject *local_res20;
  Il2CppObject *local_60 [4];
  undefined8 local_40;
  Il2CppObject **local_38;
  Il2CppObject **local_30;
  
  if (Il2CppMethodInitialized_184345485 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    Il2CppMethodInitialized_184345485 = '\x01';
  }
  local_res20 = (Il2CppObject *)0x0;
  local_60[0] = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)(__this->fields).FoundSettings;
  if (__this_00 == (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
            (__this_00,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear);
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (TypeInfo_SimpleJSONFixed_JSONObject->_2).typeHierarchyDepth;
    if (((json->klass->_2).typeHierarchyDepth < bVar1) ||
       ((json->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject)) {
      il2cpp_codegen_raise_invalid_cast_exception(json);
    }
  }
  pSVar3 = (__this->fields).Settings;
  if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar7 = (Il2CppObject *)
           System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar3,(MethodInfo *)0x0);
  if (pIVar7 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  local_res20 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,pIVar7);
  local_40 = 0;
  local_38 = &local_res20;
  local_30 = local_60;
  do {
    if (local_res20 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar8 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res20);
    pIVar7 = local_res20;
    if ((char)pvVar8 == '\0') {
      local_60[0] = il2cpp_vm_Object_IsInst(local_res20,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (local_60[0] != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_60[0]);
      }
      bVar6 = (*(__this->klass->vtable)._13_Validate.methodPtr)
                        (__this,(__this->klass->vtable)._13_Validate.method);
      if (!bVar6) {
        (*(__this->klass->vtable)._4_SetDefault.methodPtr)
                  (__this,(__this->klass->vtable)._4_SetDefault.method);
      }
      return;
    }
    if (local_res20 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar4 = local_res20->klass;
    uVar2 = (pIVar4->_2).interface_offsets_count;
    if (uVar2 != 0) {
      uVar12 = 0;
      pIVar5 = (pIVar4->_1).interfaceOffsets;
      do {
        if (pIVar5[uVar12].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar9 = pIVar4->vtable + (pIVar5[uVar12].offset + 1);
          goto label_181f0ef69;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar2);
    }
    pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_res20,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_181f0ef69:
    pMVar10 = (MethodInfo *)(*pVVar9->methodPtr)(pIVar7,pVVar9->method);
    key = (MethodInfo *)0x0;
    if (pMVar10 != (MethodInfo *)0x0) {
      if ((Il2CppClass *)pMVar10->methodPointer == g_data_184354e50) {
        key = pMVar10;
      }
      if (key == (MethodInfo *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pMVar10);
      }
    }
    if (json == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar11 = (*(json->klass->vtable)._7_get_Item.methodPtr)(json,key);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      pSVar3 = (__this->fields).Settings;
      if (pSVar3 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar7 = System_Collections_Specialized_OrderedDictionary__get_Item
                         (pSVar3,(Il2CppObject *)key,(MethodInfo *)0x0);
      pSVar11 = (*(json->klass->vtable)._7_get_Item.methodPtr)(json,key);
      if (pIVar7 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar4 = pIVar7->klass;
      bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
      if (((pIVar4->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar7);
      }
      (*pIVar4->vtable[6].methodPtr)(pIVar7,pSVar11,pIVar4->vtable[6].method);
      __this_01 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).FoundSettings;
      if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_object___Add
                (__this_01,(Il2CppObject *)key,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    }
  } while( true );
}


// Settings.BaseSettingsContainer$$Validate
// il2cpp: bool Settings_BaseSettingsContainer__Validate (Settings_BaseSettingsContainer_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
Settings_BaseSettingsContainer__Validate(Settings_BaseSettingsContainer_o* __this, MethodInfo* method)

{
  return true;
}


// Settings.BaseSettingsContainer$$<RegisterSettings>g__IsTypedSetting|5_0
// il2cpp: bool Settings_BaseSettingsContainer___RegisterSettings_g__IsTypedSetting_5_0 (System_Type_o* settingType, const MethodInfo* method);
// 0x181f0fbe0

bool Settings_BaseSettingsContainer___RegisterSettings_g__IsTypedSetting_5_0
               (System_Type_o *settingType,MethodInfo *method)

{
  Il2CppType *handle;
  char cVar1;
  bool bVar2;
  System_Type_o *right;
  longlong *plVar3;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *left;
  
  if (Il2CppMethodInitialized_184345486 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Settings_TypedSetting_T);
    Il2CppMethodInitialized_184345486 = '\x01';
  }
  handle = TypeRef_Settings_TypedSetting_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  right = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (settingType != (System_Type_o *)0x0) {
    plVar3 = (longlong *)
             (*(settingType->klass->vtable)._118_unknown.methodPtr)
                       (settingType,(settingType->klass->vtable)._118_unknown.method);
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x3b8))(plVar3,*(undefined8 *)(*plVar3 + 0x3c0));
      if (cVar1 == '\0') {
        return false;
      }
      plVar3 = (longlong *)
               (*(settingType->klass->vtable)._118_unknown.methodPtr)
                         (settingType,(settingType->klass->vtable)._118_unknown.method);
      if (plVar3 != (longlong *)0x0) {
        left = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)
               (**(code **)(*plVar3 + 0x448))(plVar3,*(undefined8 *)(*plVar3 + 0x450));
        if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354ea0);
        }
        bVar2 = Unity_Burst_Unsafe__AreSame___Il2CppFullySharedGenericType_
                          (left,(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)right,
                           (MethodInfo_841F20 *)0x0);
        return bVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


