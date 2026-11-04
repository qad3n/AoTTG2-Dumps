// Type: Weather.WeatherSchedule
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Weather/WeatherSchedule.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherSchedule.cs
// --------------------------------

// Weather.WeatherSchedule$$.ctor
// il2cpp: void Weather_WeatherSchedule___ctor (Weather_WeatherSchedule_o* __this, const MethodInfo* method);
// 0x181dd51d0

void Weather_WeatherSchedule___ctor(Weather_WeatherSchedule_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_WeatherEvent__o *__this_00;
  
  if (Il2CppMethodInitialized_18434494f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherEvent_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_WeatherEvent);
    Il2CppMethodInitialized_18434494f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_WeatherEvent);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_WeatherEvent_ctor);
  (__this->fields).Events = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Events,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.WeatherSchedule$$.ctor
// il2cpp: void Weather_WeatherSchedule___ctor (Weather_WeatherSchedule_o* __this, System_String_o* csv, const MethodInfo* method);
// 0x181dd5250

void Weather_WeatherSchedule___ctor_1dd5250
               (Weather_WeatherSchedule_o *__this,System_String_o *csv,MethodInfo *method)

{
  System_Collections_Generic_List_WeatherEvent__o *__this_00;
  
  if (Il2CppMethodInitialized_184344950 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherEvent_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_WeatherEvent);
    Il2CppMethodInitialized_184344950 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_WeatherEvent);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_WeatherEvent_ctor);
  (__this->fields).Events = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Events,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  Weather_WeatherSchedule__DeserializeFromCSV(__this,csv,(MethodInfo *)0x0);
  return;
}


// Weather.WeatherSchedule$$SerializeToCSV
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeToCSV (Weather_WeatherSchedule_o* __this, const MethodInfo* method);
// 0x181dd44d0
// eh: try 0x181dd4684..0x181dd4a79 -> pad 0x18333c400 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 45 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dd48ae: mov rbx, qword ptr [rsp + 0x120]
// asm:   0x181dd48f7: mov rdx, qword ptr [rip + 0x22ba58a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x181dd48fe: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x181dd4903: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181dd4908: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x181dd490d: test rcx, rcx
// asm:   0x181dd4910: jne 0x181dd4a4b
// asm:   0x181dd4916: xor r12d, r12d
// asm:   0x181dd4919: mov r13, qword ptr [rsp + 0x110]
// asm:   0x181dd4921: mov rbx, qword ptr [rsp + 0x128]
// asm:   0x181dd4929: mov qword ptr [rsp + 0x120], rbx
// asm:   0x181dd4931: mov rsi, qword ptr [rsp + 0x98]
// asm:   0x181dd4939: jmp 0x181dd48b6
// asm:   0x181dd493e: mov ebx, r12d
// asm:   0x181dd49df: mov rdx, qword ptr [rip + 0x22c9d62]  ; MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEvent_Dispose
// asm:   0x181dd49e6: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x181dd49eb: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181dd49f0: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x181dd49f5: test rcx, rcx
// asm:   0x181dd49f8: jne 0x181dd4a79
// asm:   0x181dd49fe: mov rbx, qword ptr [rsp + 0x128]
// asm:   0x181dd4a4b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x181dd4a79: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333c3d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c3d5: push rbp
// asm:   0x18333c3d6: sub rsp, 0x30
// asm:   0x18333c3da: mov rbp, rdx
// asm:   0x18333c3dd: mov rax, qword ptr [rbp + 0xb8]
// asm:   0x18333c3e4: mov rcx, qword ptr [rax]
// asm:   0x18333c3e7: mov qword ptr [rbp + 0x58], rcx
// asm:   0x18333c3eb: movabs rax, 0
// asm:   0x18333c3f5: add rsp, 0x30
// asm:   0x18333c3f9: pop rbp
// asm:   0x18333c3fa: ret 
// asm:   0x18333c400: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c405: push rbp
// asm:   0x18333c406: sub rsp, 0x30
// asm:   0x18333c40a: mov rbp, rdx
// asm:   0x18333c40d: mov rax, qword ptr [rbp + 0xc0]
// asm:   0x18333c414: mov rcx, qword ptr [rax]
// asm:   0x18333c417: mov qword ptr [rbp + 0x48], rcx
// asm:   0x18333c41b: movabs rax, 0
// asm:   0x18333c425: add rsp, 0x30
// asm:   0x18333c429: pop rbp
// asm:   0x18333c42a: ret 

System_String_o *
Weather_WeatherSchedule__SerializeToCSV(Weather_WeatherSchedule_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_WeatherEvent__o *__this_00;
  System_String_array *pSVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  System_Collections_Generic_List_float__o *__this_01;
  MethodInfo *pMVar5;
  Weather_WeatherEvent_o *__this_02;
  bool bVar6;
  int32_t iVar7;
  System_Collections_Generic_List_string__o *__this_03;
  System_Collections_Generic_List_string__o *__this_04;
  System_String_o *pSVar8;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar9;
  Il2CppObject *pIVar10;
  int index;
  float weight;
  undefined1 local_d8 [16];
  int32_t local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *local_b8;
  undefined8 local_b0;
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *local_a8;
  undefined1 local_a0 [8];
  undefined1 *puStack_98;
  Weather_WeatherEvent_o *local_90;
  undefined1 local_88 [8];
  undefined1 *puStack_80;
  Il2CppObject *local_78;
  System_Collections_Generic_List_string__o *local_70;
  System_Enum_o local_68;
  int32_t local_58;
  
  if (Il2CppMethodInitialized_184344951 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEvent_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEvent_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEvent_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_WeatherEvent_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherAction);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherValueSelectType);
    il2cpp_codegen_initialize_runtime_metadata(&";\n");
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_184344951 = '\x01';
  }
  local_a0 = (undefined1  [8])0x0;
  puStack_98 = (undefined1 *)0x0;
  local_90 = (Weather_WeatherEvent_o *)0x0;
  local_88 = (undefined1  [8])0x0;
  puStack_80 = (undefined1 *)0x0;
  local_78 = (Il2CppObject *)0x0;
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_03,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  __this_00 = (__this->fields).Events;
  if (__this_00 != (System_Collections_Generic_List_WeatherEvent__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_d8,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_WeatherEvent_GetEnumerator);
    local_a0 = (undefined1  [8])local_d8._0_8_;
    puStack_98 = (undefined1 *)local_d8._8_8_;
    local_90 = (Weather_WeatherEvent_o *)CONCAT44(uStack_c4,local_c8);
    local_c0 = 0;
    local_b8 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_a0;
    while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_a0,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEvent_MoveNext),
          __this_02 = local_90, bVar6) {
      __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this_04,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      if (__this_02 == (Weather_WeatherEvent_o *)0x0) {
        ThrowNullReferenceException();
      }
      local_68.klass = (System_Enum_c *)TypeInfo_Weather_WeatherAction;
      local_68.monitor = &g_data_ffffffffffffffff;
      local_58 = (__this_02->fields).Action;
      local_70 = __this_04;
      pSVar8 = System_Enum__ToString(&local_68,(MethodInfo *)0x0);
      pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (__this_04 == (System_Collections_Generic_List_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      piVar1 = &(__this_04->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_04->fields)._items;
      if (pSVar3 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar2 = (__this_04->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_04->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar2] = pSVar8;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar8);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)pSVar8,
                   (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
      }
      if ((__this_02->fields).Effect != 0) {
        local_d8._0_8_ = TypeInfo_Weather_WeatherEffect;
        local_d8._8_8_ = &g_data_ffffffffffffffff;
        local_c8 = (__this_02->fields).Effect;
        System_Enum__ToString((System_Enum_o *)local_d8,(MethodInfo *)0x0);
        il2cpp_runtime_helper_180012890(__this_04);
      }
      if ((__this_02->fields).ValueSelectType != 0) {
        if ((__this_02->fields).Action != 0xf) {
          local_d8._0_8_ = TypeInfo_Weather_WeatherValueSelectType;
          local_d8._8_8_ = &g_data_ffffffffffffffff;
          local_c8 = (__this_02->fields).ValueSelectType;
          System_Enum__ToString((System_Enum_o *)local_d8,(MethodInfo *)0x0);
          il2cpp_runtime_helper_180012890(__this_04);
        }
        index = 0;
        if ((__this_02->fields).ValueSelectType == 3) {
          while( true ) {
            pSVar4 = (__this_02->fields).Values;
            if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) {
              ThrowNullReferenceException();
            }
            if ((pSVar4->fields)._size <= index) break;
            iVar7 = Weather_WeatherEvent__GetValueType(__this_02,(MethodInfo *)0x0);
            pSVar4 = (__this_02->fields).Values;
            if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                (pSVar4,index,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_object_get_Item);
            __this_01 = (__this_02->fields).Weights;
            if (__this_01 == (System_Collections_Generic_List_float__o *)0x0) {
              ThrowNullReferenceException();
            }
            weight = System_Collections_Generic_List_float___get_Item
                               (__this_01,index,
                                (MethodInfo_983A20 *)MethodInfo_System_Collections_Generic_List_float_get_Item
                               );
            Weather_WeatherSchedule__SerializeRandomListValue(__this,iVar7,pIVar10,weight,(MethodInfo *)0x0);
            il2cpp_runtime_helper_180012890(__this_04);
            index = index + 1;
          }
        }
        else {
          pSVar4 = (__this_02->fields).Values;
          if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_d8,
                     (System_Collections_Generic_List_T__o *)pSVar4,
                     (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
          local_88 = (undefined1  [8])local_d8._0_8_;
          puStack_80 = (undefined1 *)local_d8._8_8_;
          local_78 = (Il2CppObject *)CONCAT44(uStack_c4,local_c8);
          local_b0 = 0;
          local_a8 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88;
          while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   ((System_Collections_Generic_List_Enumerator_object__o *)local_88,
                                    (MethodInfo_153A2A0 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext),
                pIVar10 = local_78, bVar6) {
            iVar7 = Weather_WeatherEvent__GetValueType(__this_02,(MethodInfo *)0x0);
            pSVar8 = Weather_WeatherSchedule__SerializeValue(__this,iVar7,pIVar10,(MethodInfo *)0x0);
            il2cpp_runtime_helper_180012890(__this_04,pSVar8);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88,
                     MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
        }
      }
      pUVar9 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_T__o *)__this_04,
                          (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      pSVar8 = System_String__Join(",",(System_String_array *)pUVar9,(MethodInfo *)0x0);
      if (__this_03 == (System_Collections_Generic_List_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      il2cpp_runtime_helper_180012890(__this_03,pSVar8);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              (local_b8,MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEvent_Dispose);
    if (__this_03 != (System_Collections_Generic_List_string__o *)0x0) {
      pUVar9 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_T__o *)__this_03,
                          (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      pSVar8 = System_String__Join(";\n",(System_String_array *)pUVar9,(MethodInfo *)0x0);
      return pSVar8;
    }
  }
  ThrowNullReferenceException();
}


// Weather.WeatherSchedule$$DeserializeFromCSV
// il2cpp: System_String_o* Weather_WeatherSchedule__DeserializeFromCSV (Weather_WeatherSchedule_o* __this, System_String_o* csv, const MethodInfo* method);
// 0x181dd3890
// eh: try 0x181dd3950..0x181dd3aac -> pad 0x183331bd0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 49 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dd3a20: nop 
// asm:   0x181dd3a28: mov eax, dword ptr [rsp + 0x70]
// asm:   0x181dd3a2c: mov dword ptr [rsp + 0x70], eax
// asm:   0x181dd3a30: lea rdx, [rsp + 0x70]
// asm:   0x181dd3a35: mov rcx, qword ptr [rip + 0x25813cc]
// asm:   0x181dd3a3c: call 0x180416160  ; il2cpp_value_box()
// asm:   0x181dd3a41: mov rbx, rax
// asm:   0x181dd3a44: lea rcx, [rip + 0x22d11bd]  ; "Import failed at line {0}"
// asm:   0x181dd3a4b: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x181dd3a50: mov rcx, rax
// asm:   0x181dd3a53: xor r8d, r8d
// asm:   0x181dd3a56: mov rdx, rbx
// asm:   0x181dd3a59: call 0x18196d190  ; System_String__Format()
// asm:   0x181dd3a5e: add rsp, 0x38
// asm:   0x181dd3a62: pop r15
// asm:   0x181dd3a64: pop r14
// asm:   0x181dd3a66: pop r12
// asm:   0x181dd3a68: pop rdi
// asm:   0x181dd3a69: pop rsi
// asm:   0x181dd3a6a: pop rbx
// asm:   0x181dd3a6b: ret 
// asm:   0x183331bd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331bd5: push rbx
// asm:   0x183331bd6: push rbp
// asm:   0x183331bd7: push rdi
// asm:   0x183331bd8: sub rsp, 0x20
// asm:   0x183331bdc: mov rbp, rdx
// asm:   0x183331bdf: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x183331be3: mov rax, qword ptr [rdi]
// asm:   0x183331be6: mov rbx, qword ptr [rax]
// asm:   0x183331be9: lea rcx, [rip + 0xd47368]  ; TypeInfo_System_Exception
// asm:   0x183331bf0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183331bf5: mov rcx, rax
// asm:   0x183331bf8: mov rdx, rbx
// asm:   0x183331bfb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183331c00: test al, al
// asm:   0x183331c02: je 0x183331c10
// asm:   0x183331c04: movabs rax, 0
// asm:   0x183331c0e: jmp 0x183331c28
// asm:   0x183331c10: mov rax, qword ptr [rdi]
// asm:   0x183331c13: mov qword ptr [rbp + 0x20], rax
// asm:   0x183331c17: lea rdx, [rip + 0xcaa36a]
// asm:   0x183331c1e: lea rcx, [rbp + 0x20]
// asm:   0x183331c22: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183331c28: add rsp, 0x20
// asm:   0x183331c2c: pop rdi
// asm:   0x183331c2d: pop rbp
// asm:   0x183331c2e: pop rbx
// asm:   0x183331c2f: ret 

System_String_o *
Weather_WeatherSchedule__DeserializeFromCSV
          (Weather_WeatherSchedule_o *__this,System_String_o *csv,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  System_Collections_Generic_List_WeatherEvent__o *pSVar2;
  bool bVar3;
  System_String_array *pSVar4;
  System_String_o *a;
  System_String_array *pSVar5;
  uint uVar6;
  
  if (Il2CppMethodInitialized_184344952 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherEvent_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherEvent_Clear)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"//");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344952 = '\x01';
  }
  pSVar2 = (__this->fields).Events;
  if (pSVar2 != (System_Collections_Generic_List_WeatherEvent__o *)0x0) {
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (csv != (System_String_o *)0x0) {
      pSVar4 = System_String__Split(csv,0x3b,0,(MethodInfo *)0x0);
      if (pSVar4 != (System_String_array *)0x0) {
        uVar6 = 0;
        while( true ) {
          if ((int)pSVar4->max_length <= (int)uVar6) {
            return "";
          }
          if ((uint)pSVar4->max_length <= uVar6) {
            ThrowIndexOutOfRangeException();
          }
          if (pSVar4->m_Items[(int)uVar6] == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          a = System_String__Trim(pSVar4->m_Items[(int)uVar6],(MethodInfo *)0x0);
          if ((uint)pSVar4->max_length <= uVar6) break;
          if (pSVar4->m_Items[(int)uVar6] == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar5 = System_String__Split(pSVar4->m_Items[(int)uVar6],10,0,(MethodInfo *)0x0);
          if (pSVar5 == (System_String_array *)0x0) {
            ThrowNullReferenceException();
          }
          bVar3 = System_String__op_Inequality
                            (a,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
          if (bVar3) {
            if (a == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar3 = System_String__StartsWith(a,"//",(MethodInfo *)0x0);
            if (!bVar3) {
              pSVar2 = (__this->fields).Events;
              Weather_WeatherSchedule__DeserializeLine(__this,a,(MethodInfo *)0x0);
              if (pSVar2 == (System_Collections_Generic_List_WeatherEvent__o *)0x0) {
                ThrowNullReferenceException();
              }
              il2cpp_runtime_helper_180012890(pSVar2);
            }
          }
          uVar6 = uVar6 + 1;
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Weather.WeatherSchedule$$SerializeValue
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeValue (Weather_WeatherSchedule_o* __this, int32_t type, Il2CppObject* value, const MethodInfo* method);
// 0x181dd4a80

System_String_o *
Weather_WeatherSchedule__SerializeValue
          (Weather_WeatherSchedule_o *__this,int32_t type,Il2CppObject *value,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int32_t *piVar5;
  System_String_o *pSVar6;
  float *pfVar7;
  void *pvVar8;
  undefined8 *puVar9;
  System_String_array *value_00;
  int32_t local_res10 [6];
  float local_78;
  int local_74 [3];
  undefined8 local_68;
  float local_60 [22];
  
  if (Il2CppMethodInitialized_184344953 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&";");
    il2cpp_codegen_initialize_runtime_metadata(&",");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344953 = '\x01';
  }
  local_78 = 0.0;
  local_res10[0] = 0;
  pSVar6 = "";
  switch(type) {
  case 1:
    if (value == (Il2CppObject *)0x0) goto label_181dd4f7d;
    if ((value->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e38 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pfVar7 = il2cpp_object_unbox(value);
    local_78 = *pfVar7;
    pSVar6 = System_Single__ToString(&local_78,(MethodInfo *)0x0);
    break;
  case 2:
    if (value == (Il2CppObject *)0x0) goto label_181dd4f7d;
    if ((value->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    piVar5 = il2cpp_object_unbox(value);
    local_res10[0] = *piVar5;
    goto label_181dd4bbb;
  case 3:
    pSVar6 = (System_String_o *)0x0;
    if (value == (Il2CppObject *)0x0) break;
    if (value->klass == g_data_184354e50) {
      pSVar6 = (System_String_o *)value;
    }
    if (pSVar6 == (System_String_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    goto label_181dd4bd6;
  case 4:
    if (value == (Il2CppObject *)0x0) goto label_181dd4f7d;
    if ((value->klass->_1).element_class != (TypeInfo_UnityEngine_Color->_1).element_class) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pfVar7 = il2cpp_object_unbox(value);
    fVar1 = *pfVar7;
    fVar2 = pfVar7[1];
    fVar3 = pfVar7[2];
    fVar4 = pfVar7[3];
    if (Il2CppMethodInitialized_184344955 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
      il2cpp_codegen_initialize_runtime_metadata(&"-");
      Il2CppMethodInitialized_184344955 = '\x01';
    }
    value_00 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
    local_74[0] = (int)(fVar1 * 255.0);
    pSVar6 = System_Int32__ToString(local_74,(MethodInfo *)0x0);
    if (value_00 == (System_String_array *)0x0) goto label_181dd4f7d;
    if ((int)value_00->max_length == 0) {
label_181dd4f98:
      ThrowIndexOutOfRangeException();
    }
    value_00->m_Items[0] = pSVar6;
    Il2CppCodeGenWriteBarrier(value_00->m_Items,pSVar6);
    local_74[0] = (int)(fVar2 * 255.0);
    pSVar6 = System_Int32__ToString(local_74,(MethodInfo *)0x0);
    if ((uint)value_00->max_length < 2) goto label_181dd4f98;
    value_00->m_Items[1] = pSVar6;
    Il2CppCodeGenWriteBarrier(value_00->m_Items + 1,pSVar6);
    local_74[0] = (int)(fVar3 * 255.0);
    pSVar6 = System_Int32__ToString(local_74,(MethodInfo *)0x0);
    if ((uint)value_00->max_length < 3) goto label_181dd4f98;
    value_00->m_Items[2] = pSVar6;
    Il2CppCodeGenWriteBarrier(value_00->m_Items + 2,pSVar6);
    local_74[0] = (int)(fVar4 * 255.0);
    pSVar6 = System_Int32__ToString(local_74,(MethodInfo *)0x0);
    if ((uint)value_00->max_length < 4) goto label_181dd4f98;
    value_00->m_Items[3] = pSVar6;
    Il2CppCodeGenWriteBarrier(value_00->m_Items + 3,pSVar6);
    if (((fVar4 != 1.0) || (fVar1 != fVar2)) || (fVar1 != fVar3)) goto label_181dd4f66;
    if ((int)value_00->max_length == 0) goto label_181dd4f98;
    pSVar6 = value_00->m_Items[0];
    break;
  case 5:
    if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
    }
    if (value == (Il2CppObject *)0x0) goto label_181dd4f7d;
    if ((value->klass->_1).element_class != *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pvVar8 = il2cpp_object_unbox(value);
    local_res10[0] = Unity_Collections_Bitwise__FromBool(*(bool *)pvVar8,(MethodInfo *)0x0);
label_181dd4bbb:
    pSVar6 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
    break;
  case 6:
    if (value == (Il2CppObject *)0x0) {
label_181dd4fb6:
      ThrowNullReferenceException();
    }
    if ((value->klass->_1).element_class != (TypeInfo_UnityEngine_Vector3->_1).element_class) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    puVar9 = il2cpp_object_unbox(value);
    local_68 = *puVar9;
    local_60[0] = *(float *)(puVar9 + 1);
    if (Il2CppMethodInitialized_184344956 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
      il2cpp_codegen_initialize_runtime_metadata(&"-");
      Il2CppMethodInitialized_184344956 = '\x01';
    }
    value_00 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
    pSVar6 = System_Single__ToString((float *)&local_68,(MethodInfo *)0x0);
    if (value_00 == (System_String_array *)0x0) goto label_181dd4fb6;
    if ((int)value_00->max_length == 0) {
label_181dd4faa:
      ThrowIndexOutOfRangeException();
    }
    value_00->m_Items[0] = pSVar6;
    Il2CppCodeGenWriteBarrier(value_00->m_Items,pSVar6);
    pSVar6 = System_Single__ToString((float *)((longlong)&local_68 + 4),(MethodInfo *)0x0);
    if ((uint)value_00->max_length < 2) goto label_181dd4faa;
    value_00->m_Items[1] = pSVar6;
    Il2CppCodeGenWriteBarrier(value_00->m_Items + 1,pSVar6);
    pSVar6 = System_Single__ToString(local_60,(MethodInfo *)0x0);
    if ((uint)value_00->max_length < 3) goto label_181dd4faa;
    value_00->m_Items[2] = pSVar6;
    Il2CppCodeGenWriteBarrier(value_00->m_Items + 2,pSVar6);
label_181dd4f66:
    pSVar6 = System_String__Join("-",value_00,(MethodInfo *)0x0);
  }
  if (pSVar6 != (System_String_o *)0x0) {
label_181dd4bd6:
    pSVar6 = System_String__Replace_1970e80
                       (pSVar6,",",*(System_String_o **)g_data_184354e50->static_fields,
                        (MethodInfo *)0x0);
    if (pSVar6 != (System_String_o *)0x0) {
      pSVar6 = System_String__Replace_1970e80
                         (pSVar6,";",*(System_String_o **)g_data_184354e50->static_fields,
                          (MethodInfo *)0x0);
      return pSVar6;
    }
  }
label_181dd4f7d:
  ThrowNullReferenceException();
}


// Weather.WeatherSchedule$$SerializeRandomListValue
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeRandomListValue (Weather_WeatherSchedule_o* __this, int32_t type, Il2CppObject* value, float weight, const MethodInfo* method);
// 0x181dd4450

System_String_o *
Weather_WeatherSchedule__SerializeRandomListValue
          (Weather_WeatherSchedule_o *__this,int32_t type,Il2CppObject *value,float weight,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  float local_res20 [2];
  
  local_res20[0] = weight;
  if (Il2CppMethodInitialized_184344954 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_184344954 = '\x01';
  }
  pSVar1 = Weather_WeatherSchedule__SerializeValue(__this,type,value,(MethodInfo *)0x0);
  str2 = System_Single__ToString(local_res20,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969b70(pSVar1,"-",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Weather.WeatherSchedule$$SerializeColor
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeColor (Weather_WeatherSchedule_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x181dd42a0

System_String_o *
Weather_WeatherSchedule__SerializeColor
          (Weather_WeatherSchedule_o *__this,UnityEngine_Color_o *color,MethodInfo *method)

{
  float fVar1;
  System_String_array *value;
  System_String_o *pSVar2;
  int local_res10 [6];
  
  if (Il2CppMethodInitialized_184344955 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_184344955 = '\x01';
  }
  value = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  local_res10[0] = (int)((color->fields).r * 255.0);
  pSVar2 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
  if (value != (System_String_array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0] = pSVar2;
      Il2CppCodeGenWriteBarrier(value->m_Items,pSVar2);
      local_res10[0] = (int)((color->fields).g * 255.0);
      pSVar2 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
      if (1 < (uint)value->max_length) {
        value->m_Items[1] = pSVar2;
        Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar2);
        local_res10[0] = (int)((color->fields).b * 255.0);
        pSVar2 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
        if (2 < (uint)value->max_length) {
          value->m_Items[2] = pSVar2;
          Il2CppCodeGenWriteBarrier(value->m_Items + 2,pSVar2);
          local_res10[0] = (int)((color->fields).a * 255.0);
          pSVar2 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
          if (3 < (uint)value->max_length) {
            value->m_Items[3] = pSVar2;
            Il2CppCodeGenWriteBarrier(value->m_Items + 3,pSVar2);
            if ((((color->fields).a != 1.0) || (fVar1 = (color->fields).r, fVar1 != (color->fields).g)) ||
               (fVar1 != (color->fields).b)) {
              pSVar2 = System_String__Join("-",value,(MethodInfo *)0x0);
              return pSVar2;
            }
            if ((int)value->max_length != 0) {
              return value->m_Items[0];
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Weather.WeatherSchedule$$SerializeColorValue
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeColorValue (Weather_WeatherSchedule_o* __this, float value, const MethodInfo* method);
// 0x181dd4270

System_String_o *
Weather_WeatherSchedule__SerializeColorValue(Weather_WeatherSchedule_o *__this,float value,MethodInfo *method)

{
  System_String_o *pSVar1;
  int local_res10 [6];
  
  local_res10[0] = (int)(value * 255.0);
  pSVar1 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
  return pSVar1;
}


// Weather.WeatherSchedule$$SerializeVector3
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeVector3 (Weather_WeatherSchedule_o* __this, UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x181dd4fe0

System_String_o *
Weather_WeatherSchedule__SerializeVector3
          (Weather_WeatherSchedule_o *__this,UnityEngine_Vector3_o *v,MethodInfo *method)

{
  System_String_array *value;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344956 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_184344956 = '\x01';
  }
  value = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
  pSVar1 = System_Single__ToString((float *)v,(MethodInfo *)0x0);
  if (value != (System_String_array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0] = pSVar1;
      Il2CppCodeGenWriteBarrier(value->m_Items,pSVar1);
      pSVar1 = System_Single__ToString(&(v->fields).y,(MethodInfo *)0x0);
      if (1 < (uint)value->max_length) {
        value->m_Items[1] = pSVar1;
        Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar1);
        pSVar1 = System_Single__ToString(&(v->fields).z,(MethodInfo *)0x0);
        if (2 < (uint)value->max_length) {
          value->m_Items[2] = pSVar1;
          Il2CppCodeGenWriteBarrier(value->m_Items + 2,pSVar1);
          pSVar1 = System_String__Join("-",value,(MethodInfo *)0x0);
          return pSVar1;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Weather.WeatherSchedule$$DeserializeLine
// il2cpp: Weather_WeatherEvent_o* Weather_WeatherSchedule__DeserializeLine (Weather_WeatherSchedule_o* __this, System_String_o* line, const MethodInfo* method);
// 0x181dd3ab0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dd3d65: movss xmm6, dword ptr [rip + 0x1584e9b]
// asm:   0x181dd3d6d: nop dword ptr [rax]
// asm:   0x181dd3e68: movaps xmm1, xmm0

Weather_WeatherEvent_o *
Weather_WeatherSchedule__DeserializeLine
          (Weather_WeatherSchedule_o *__this,System_String_o *line,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_string__WeatherAction__o *__this_00;
  System_Collections_Generic_Dictionary_string__WeatherEffect__o *__this_01;
  System_Collections_Generic_Dictionary_string__WeatherValueSelectType__o *__this_02;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Object_array *pSVar4;
  System_Collections_Generic_List_float__o *pSVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  int32_t iVar8;
  Weather_WeatherEvent_o *__this_03;
  System_String_array *pSVar9;
  ulonglong uVar10;
  Il2CppObject *pIVar11;
  System_String_array *pSVar12;
  uint uVar13;
  float fVar14;
  
  if (Il2CppMethodInitialized_184344957 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_WeatherEffect_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_WeatherAction_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_WeatherValueSelectType_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_float_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherEvent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherSchedule);
    Il2CppMethodInitialized_184344957 = '\x01';
  }
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Weather_WeatherEvent);
  Weather_WeatherEvent___ctor(__this_03,(MethodInfo *)0x0);
  if (line != (System_String_o *)0x0) {
    pSVar9 = System_String__Split(line,0x2c,0,(MethodInfo *)0x0);
    if ((TypeInfo_Weather_WeatherSchedule->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherSchedule);
    }
    if (pSVar9 != (System_String_array *)0x0) {
      if ((int)pSVar9->max_length == 0) {
label_181dd3ea9:
        ThrowIndexOutOfRangeException();
      }
      __this_00 = TypeInfo_Weather_WeatherSchedule->static_fields->NameToWeatherAction;
      if ((__this_00 != (System_Collections_Generic_Dictionary_string__WeatherAction__o *)0x0) &&
         (iVar8 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                             (Il2CppObject *)pSVar9->m_Items[0],
                             (MethodInfo_147A530 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_WeatherAction_get_Item),
         __this_03 != (Weather_WeatherEvent_o *)0x0)) {
        (__this_03->fields).Action = iVar8;
        uVar13 = 1;
        bVar7 = Weather_WeatherEvent__SupportsWeatherEffects(__this_03,(MethodInfo *)0x0);
        if (bVar7) {
          if ((TypeInfo_Weather_WeatherSchedule->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherSchedule);
          }
          if ((uint)pSVar9->max_length < 2) goto label_181dd3ea9;
          __this_01 = TypeInfo_Weather_WeatherSchedule->static_fields->NameToWeatherEffect;
          if (__this_01 == (System_Collections_Generic_Dictionary_string__WeatherEffect__o *)0x0)
          goto label_181dd3ea3;
          uVar13 = 2;
          iVar8 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                             (Il2CppObject *)pSVar9->m_Items[1],
                             (MethodInfo_147A530 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_WeatherEffect_get_Item);
          (__this_03->fields).Effect = iVar8;
        }
        if ((__this_03->fields).Action == 0xf) {
          (__this_03->fields).ValueSelectType = 1;
        }
        else {
          bVar7 = Weather_WeatherEvent__SupportsWeatherValueSelectTypes(__this_03,(MethodInfo *)0x0);
          if (bVar7) {
            if ((TypeInfo_Weather_WeatherSchedule->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherSchedule);
            }
            if ((uint)pSVar9->max_length <= uVar13) goto label_181dd3ea9;
            __this_02 = TypeInfo_Weather_WeatherSchedule->static_fields->NameToWeatherValueSelectType;
            if (__this_02 == (System_Collections_Generic_Dictionary_string__WeatherValueSelectType__o *)0x0)
            goto label_181dd3ea3;
            uVar10 = (ulonglong)uVar13;
            uVar13 = uVar13 + 1;
            iVar8 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                               (Il2CppObject *)pSVar9->m_Items[uVar10],
                               (MethodInfo_147A530 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_WeatherValueSelectType_get_Item
                              );
            (__this_03->fields).ValueSelectType = iVar8;
          }
        }
        if ((__this_03->fields).ValueSelectType == 3) {
          for (; (int)uVar13 < (int)pSVar9->max_length; uVar13 = uVar13 + 1) {
            if ((uint)pSVar9->max_length <= uVar13) goto label_181dd3ea9;
            if (pSVar9->m_Items[(int)uVar13] == (System_String_o *)0x0) goto label_181dd3ea3;
            pSVar12 = System_String__Split(pSVar9->m_Items[(int)uVar13],0x2d,0,(MethodInfo *)0x0);
            pSVar3 = (__this_03->fields).Values;
            iVar8 = Weather_WeatherEvent__GetValueType(__this_03,(MethodInfo *)0x0);
            if (pSVar12 == (System_String_array *)0x0) goto label_181dd3ea3;
            if ((int)pSVar12->max_length == 0) goto label_181dd3ea9;
            pIVar11 = Weather_WeatherSchedule__DeserializeValue
                                (__this,iVar8,pSVar12->m_Items[0],(MethodInfo *)0x0);
            pMVar6 = MethodInfo_System_Collections_Generic_List_object_Add;
            if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto label_181dd3ea3;
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (pSVar3->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) goto label_181dd3ea3;
            uVar2 = (pSVar3->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (pSVar3->fields)._size = uVar2 + 1;
              if ((uint)pSVar4->max_length <= uVar2) goto label_181dd3ea9;
              pSVar4->m_Items[(int)uVar2] = pIVar11;
              Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,pIVar11);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar3,pIVar11,(MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
            }
            uVar2 = (uint)pSVar12->max_length;
            pSVar5 = (__this_03->fields).Weights;
            if ((int)uVar2 < 2) {
              if (pSVar5 == (System_Collections_Generic_List_float__o *)0x0) goto label_181dd3ea3;
              fVar14 = 1.0;
            }
            else {
              if (uVar2 < 2) goto label_181dd3ea9;
              fVar14 = System_Single__Parse(pSVar12->m_Items[1],(MethodInfo *)0x0);
              if (pSVar5 == (System_Collections_Generic_List_float__o *)0x0) goto label_181dd3ea3;
            }
            il2cpp_runtime_helper_180030dc0(pSVar5,fVar14);
          }
        }
        else {
          while ((int)uVar13 < (int)pSVar9->max_length) {
            pSVar3 = (__this_03->fields).Values;
            iVar8 = Weather_WeatherEvent__GetValueType(__this_03,(MethodInfo *)0x0);
            if ((uint)pSVar9->max_length <= uVar13) goto label_181dd3ea9;
            pIVar11 = Weather_WeatherSchedule__DeserializeValue
                                (__this,iVar8,pSVar9->m_Items[(int)uVar13],(MethodInfo *)0x0);
            pMVar6 = MethodInfo_System_Collections_Generic_List_object_Add;
            if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto label_181dd3ea3;
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (pSVar3->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) goto label_181dd3ea3;
            uVar2 = (pSVar3->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (pSVar3->fields)._size = uVar2 + 1;
              if ((uint)pSVar4->max_length <= uVar2) goto label_181dd3ea9;
              pSVar4->m_Items[(int)uVar2] = pIVar11;
              Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,pIVar11);
              uVar13 = uVar13 + 1;
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar3,pIVar11,(MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
              uVar13 = uVar13 + 1;
            }
          }
        }
        return __this_03;
      }
    }
  }
label_181dd3ea3:
  ThrowNullReferenceException();
}


// Weather.WeatherSchedule$$DeserializeValue
// il2cpp: Il2CppObject* Weather_WeatherSchedule__DeserializeValue (Weather_WeatherSchedule_o* __this, int32_t type, System_String_o* item, const MethodInfo* method);
// 0x181dd3eb0

Il2CppObject *
Weather_WeatherSchedule__DeserializeValue
          (Weather_WeatherSchedule_o *__this,int32_t type,System_String_o *item,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t tryStart;
  int32_t finallyStart;
  int32_t finallyEnd;
  int32_t iVar3;
  Utility_Color255_o *__this_00;
  System_String_array *pSVar4;
  Il2CppObject *pIVar5;
  float fVar6;
  float local_res10 [2];
  float local_48;
  float local_44;
  float local_40;
  
  if (Il2CppMethodInitialized_184344958 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_184344958 = '\x01';
  }
  switch(type) {
  case 1:
    local_res10[0] = System_Single__Parse(item,(MethodInfo *)0x0);
    pIVar5 = il2cpp_value_box(g_data_184354e38,local_res10);
    return pIVar5;
  case 2:
    local_res10[0] = (float)System_Int32__Parse(item,(MethodInfo *)0x0);
    pIVar5 = il2cpp_value_box(g_data_184354e08,local_res10);
    return pIVar5;
  case 3:
    return (Il2CppObject *)item;
  case 4:
    if (Il2CppMethodInitialized_184344959 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
      Il2CppMethodInitialized_184344959 = '\x01';
    }
    if ((item != (System_String_o *)0x0) &&
       (pSVar4 = System_String__Split(item,0x2d,0,(MethodInfo *)0x0), pSVar4 != (System_String_array *)0x0)) {
      iVar1 = (int)pSVar4->max_length;
      if (iVar1 == 1) {
        tryStart = System_Int32__Parse(pSVar4->m_Items[0],(MethodInfo *)0x0);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
        finallyEnd = 0xff;
        iVar3 = tryStart;
        finallyStart = tryStart;
      }
      else {
        if ((((iVar1 == 0) ||
             (tryStart = System_Int32__Parse(pSVar4->m_Items[0],(MethodInfo *)0x0),
             (uint)pSVar4->max_length < 2)) ||
            (iVar3 = System_Int32__Parse(pSVar4->m_Items[1],(MethodInfo *)0x0), (uint)pSVar4->max_length < 3))
           || (finallyStart = System_Int32__Parse(pSVar4->m_Items[2],(MethodInfo *)0x0),
              (uint)pSVar4->max_length < 4)) {
          ThrowIndexOutOfRangeException();
        }
        finallyEnd = System_Int32__Parse(pSVar4->m_Items[3],(MethodInfo *)0x0);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      }
      Utility_Color255___ctor
                ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)__this_00,tryStart,iVar3,
                 finallyStart,finallyEnd,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
    ThrowNullReferenceException();
  case 5:
    iVar3 = System_Int32__Parse(item,(MethodInfo *)0x0);
    if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
    }
    bVar2 = Cysharp_Threading_Tasks_UniTaskStatusExtensions__IsCompleted(iVar3,(MethodInfo *)0x0);
    local_res10[0] = (float)CONCAT31(local_res10[0]._1_3_,bVar2);
    pIVar5 = il2cpp_value_box(g_data_184354de8,local_res10);
    return pIVar5;
  case 6:
    break;
  default:
    return (Il2CppObject *)0x0;
  }
  if ((item == (System_String_o *)0x0) ||
     (pSVar4 = System_String__Split(item,0x2d,0,(MethodInfo *)0x0), pSVar4 == (System_String_array *)0x0)) {
    ThrowNullReferenceException();
  }
  if (((int)pSVar4->max_length != 0) &&
     ((fVar6 = System_Single__Parse(pSVar4->m_Items[0],(MethodInfo *)0x0), 1 < (uint)pSVar4->max_length &&
      (local_44 = System_Single__Parse(pSVar4->m_Items[1],(MethodInfo *)0x0), 2 < (uint)pSVar4->max_length))))
  {
    local_40 = System_Single__Parse(pSVar4->m_Items[2],(MethodInfo *)0x0);
    local_48 = fVar6;
    pIVar5 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_48);
    return pIVar5;
  }
  ThrowIndexOutOfRangeException();
}


// Weather.WeatherSchedule$$DeserializeColor
// il2cpp: Utility_Color255_o* Weather_WeatherSchedule__DeserializeColor (Weather_WeatherSchedule_o* __this, System_String_o* item, const MethodInfo* method);
// 0x181dd3720

Utility_Color255_o *
Weather_WeatherSchedule__DeserializeColor
          (Weather_WeatherSchedule_o *__this,System_String_o *item,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int32_t tryEnd;
  int32_t finallyStart;
  int32_t finallyEnd;
  System_String_array *pSVar3;
  Utility_Color255_o *pUVar4;
  
  if (Il2CppMethodInitialized_184344959 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    Il2CppMethodInitialized_184344959 = '\x01';
  }
  if (item != (System_String_o *)0x0) {
    pSVar3 = System_String__Split(item,0x2d,0,(MethodInfo *)0x0);
    if (pSVar3 != (System_String_array *)0x0) {
      iVar1 = (int)pSVar3->max_length;
      if (iVar1 == 1) {
        iVar2 = System_Int32__Parse(pSVar3->m_Items[0],(MethodInfo *)0x0);
        pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
        Utility_Color255___ctor
                  ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar4,iVar2,iVar2,iVar2,0xff,
                   (MethodInfo *)0x0);
        return pUVar4;
      }
      if (iVar1 != 0) {
        iVar2 = System_Int32__Parse(pSVar3->m_Items[0],(MethodInfo *)0x0);
        if (1 < (uint)pSVar3->max_length) {
          tryEnd = System_Int32__Parse(pSVar3->m_Items[1],(MethodInfo *)0x0);
          if (2 < (uint)pSVar3->max_length) {
            finallyStart = System_Int32__Parse(pSVar3->m_Items[2],(MethodInfo *)0x0);
            if (3 < (uint)pSVar3->max_length) {
              finallyEnd = System_Int32__Parse(pSVar3->m_Items[3],(MethodInfo *)0x0);
              pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
              Utility_Color255___ctor
                        ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar4,iVar2,tryEnd,
                         finallyStart,finallyEnd,(MethodInfo *)0x0);
              return pUVar4;
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Weather.WeatherSchedule$$DeserializeColorValue
// il2cpp: int32_t Weather_WeatherSchedule__DeserializeColorValue (Weather_WeatherSchedule_o* __this, System_String_o* str, const MethodInfo* method);
// 0x181dd3710

int32_t Weather_WeatherSchedule__DeserializeColorValue
                  (Weather_WeatherSchedule_o *__this,System_String_o *str,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = System_Int32__Parse(str,(MethodInfo *)0x0);
  return iVar1;
}


// Weather.WeatherSchedule$$DeserializeVector3
// il2cpp: UnityEngine_Vector3_o Weather_WeatherSchedule__DeserializeVector3 (Weather_WeatherSchedule_o* __this, System_String_o* item, const MethodInfo* method);
// 0x181dd41c0

UnityEngine_Vector3_o *
Weather_WeatherSchedule__DeserializeVector3
          (UnityEngine_Vector3_o *__return_storage_ptr__,Weather_WeatherSchedule_o *__this,
          System_String_o *item,MethodInfo *method)

{
  System_String_array *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (item != (System_String_o *)0x0) {
    pSVar1 = System_String__Split(item,0x2d,0,(MethodInfo *)0x0);
    if (pSVar1 != (System_String_array *)0x0) {
      if ((int)pSVar1->max_length != 0) {
        fVar2 = System_Single__Parse(pSVar1->m_Items[0],(MethodInfo *)0x0);
        if (1 < (uint)pSVar1->max_length) {
          fVar3 = System_Single__Parse(pSVar1->m_Items[1],(MethodInfo *)0x0);
          if (2 < (uint)pSVar1->max_length) {
            fVar4 = System_Single__Parse(pSVar1->m_Items[2],(MethodInfo *)0x0);
            (__return_storage_ptr__->fields).x = fVar2;
            (__return_storage_ptr__->fields).y = fVar3;
            (__return_storage_ptr__->fields).z = fVar4;
            return __return_storage_ptr__;
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Weather.WeatherSchedule$$.cctor
// il2cpp: void Weather_WeatherSchedule___cctor (const MethodInfo* method);
// 0x181dd50c0

void Weather_WeatherSchedule___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__T__o *pSVar1;
  
  if (Il2CppMethodInitialized_18434495a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumToDict_WeatherAction);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumToDict_WeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumToDict_WeatherValueSelectType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherSchedule);
    Il2CppMethodInitialized_18434495a = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pSVar1 = Utility_Util__EnumToDict_Int32Enum_
                     ((MethodInfo_869960 *)MethodInfo_Utility_Util_EnumToDict_WeatherAction);
  TypeInfo_Weather_WeatherSchedule->static_fields->NameToWeatherAction =
       (System_Collections_Generic_Dictionary_string__WeatherAction__o *)pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Weather_WeatherSchedule->static_fields->NameToWeatherAction,pSVar1);
  pSVar1 = Utility_Util__EnumToDict_Int32Enum_
                     ((MethodInfo_869960 *)MethodInfo_Utility_Util_EnumToDict_WeatherEffect);
  TypeInfo_Weather_WeatherSchedule->static_fields->NameToWeatherEffect =
       (System_Collections_Generic_Dictionary_string__WeatherEffect__o *)pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Weather_WeatherSchedule->static_fields->NameToWeatherEffect,pSVar1);
  pSVar1 = Utility_Util__EnumToDict_Int32Enum_
                     ((MethodInfo_869960 *)MethodInfo_Utility_Util_EnumToDict_WeatherValueSelectType);
  TypeInfo_Weather_WeatherSchedule->static_fields->NameToWeatherValueSelectType =
       (System_Collections_Generic_Dictionary_string__WeatherValueSelectType__o *)pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Weather_WeatherSchedule->static_fields->NameToWeatherValueSelectType,pSVar1);
  return;
}


