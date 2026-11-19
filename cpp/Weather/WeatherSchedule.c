// Type: Weather.WeatherSchedule
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Weather/WeatherSchedule.cs
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherSchedule.cs
// --------------------------------

// Weather.WeatherSchedule$$.ctor
// il2cpp: void Weather_WeatherSchedule___ctor (Weather_WeatherSchedule_o* __this, const MethodInfo* method);
// 0x585f4e0

void Weather_WeatherSchedule___ctor(Weather_WeatherSchedule_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_WeatherEvent__o *__this_00;
  
  if (Il2CppMethodInitialized_075450a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherEvent_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_WeatherEvent);
    Il2CppMethodInitialized_075450a9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_WeatherEvent);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_WeatherEvent_ctor);
  (__this->fields).Events = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Events);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Weather.WeatherSchedule$$.ctor
// il2cpp: void Weather_WeatherSchedule___ctor (Weather_WeatherSchedule_o* __this, System_String_o* csv, const MethodInfo* method);
// 0x585f560

void Weather_WeatherSchedule___ctor_575f560
               (Weather_WeatherSchedule_o *__this,System_String_o *csv,MethodInfo *method)

{
  System_Collections_Generic_List_WeatherEvent__o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075450aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherEvent_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_WeatherEvent);
    Il2CppMethodInitialized_075450aa = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_WeatherEvent);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_WeatherEvent_ctor);
  (__this->fields).Events = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Events);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  Weather_WeatherSchedule__DeserializeFromCSV(__this,csv,method_00);
  return;
}


// Weather.WeatherSchedule$$SerializeToCSV
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeToCSV (Weather_WeatherSchedule_o* __this, const MethodInfo* method);
// 0x585f8f0
// eh: try 0x585faaf..0x58600d5 -> pad 0x5860102 (+31 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58600e0..0x58600ea -> pad 0x586017a catch (...) [compiler noexcept guard]
// eh: try 0x5860135..0x586013a -> pad 0x5860165 cleanup
// eh: try 0x5860168..0x5860172 -> pad 0x586017a catch (...) [compiler noexcept guard]
// asm: 82 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585ff5c: test ebx, ebx
// asm:   0x585ff5e: jne 0x586007b
// asm:   0x585ff64: nop word ptr cs:[rax + rax]
// asm:   0x585fff5: jmp 0x585fffb
// asm:   0x585fff7: jmp 0x585fffb
// asm:   0x585fff9: jmp 0x585fffb
// asm:   0x585fffb: mov rbx, rdx
// asm:   0x585fffe: mov r14, rax
// asm:   0x5860001: cmp ebx, 1
// asm:   0x5860004: jne 0x58600e0
// asm:   0x586000a: mov rdi, r14
// asm:   0x586000d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5860012: mov rbp, qword ptr [rax]
// asm:   0x5860015: mov qword ptr [rsp + 8], rbp
// asm:   0x586001a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x586001f: xor ebx, ebx
// asm:   0x5860021: mov r14b, 1
// asm:   0x5860024: jmp 0x585ff3a
// asm:   0x586007b: lea rax, [rip + 0x1a2ee7e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEvent_Dispose
// asm:   0x5860082: mov rsi, qword ptr [rax]
// asm:   0x5860085: lea rdi, [rsp + 0x30]
// asm:   0x586008a: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x586008f: test r14b, r14b
// asm:   0x5860092: mov rbx, qword ptr [rsp + 0x20]
// asm:   0x5860097: jne 0x586003d
// asm:   0x5860099: jmp 0x586006c
// asm:   0x58600cd: mov rdi, rbp
// asm:   0x58600d0: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58600da: mov rbx, rdx
// asm:   0x58600dd: mov r14, rax
// asm:   0x58600e0: lea rdi, [rsp + 8]
// asm:   0x58600e5: call 0x2fcead0  ; il2cpp_runtime_helper_02fcead0()
// asm:   0x58600ea: jmp 0x5860120
// asm:   0x58600ec: jmp 0x586011a
// asm:   0x58600ee: jmp 0x586011a
// asm:   0x58600f0: jmp 0x586011a
// asm:   0x58600f2: jmp 0x586011a
// asm:   0x58600f4: jmp 0x586011a
// asm:   0x58600f6: jmp 0x586011a
// asm:   0x58600f8: jmp 0x586011a
// asm:   0x58600fa: jmp 0x586011a
// asm:   0x58600fc: jmp 0x586011a
// asm:   0x58600fe: jmp 0x586011a
// asm:   0x5860100: jmp 0x586011a
// asm:   0x5860102: jmp 0x586011a
// asm:   0x5860104: jmp 0x586011a
// asm:   0x5860106: jmp 0x586011a
// asm:   0x5860108: jmp 0x586011a
// asm:   0x586010a: jmp 0x586011a
// asm:   0x586010c: jmp 0x586011a
// asm:   0x586010e: jmp 0x586011a
// asm:   0x5860110: jmp 0x586011a
// asm:   0x5860112: jmp 0x586011a
// asm:   0x5860114: jmp 0x586011a
// asm:   0x5860116: jmp 0x586011a
// asm:   0x5860118: jmp 0x586011a
// asm:   0x586011a: mov rbx, rdx
// asm:   0x586011d: mov r14, rax
// asm:   0x5860120: cmp ebx, 1
// asm:   0x5860123: jne 0x5860168
// asm:   0x5860125: mov rdi, r14
// asm:   0x5860128: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x586012d: mov rbx, qword ptr [rax]
// asm:   0x5860130: mov qword ptr [rsp + 0x68], rbx
// asm:   0x5860135: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x586013a: lea rax, [rip + 0x1a2edbf]  ; MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEvent_Dispose
// asm:   0x5860141: mov rsi, qword ptr [rax]
// asm:   0x5860144: lea rdi, [rsp + 0x30]
// asm:   0x5860149: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x586014e: test rbx, rbx
// asm:   0x5860151: jne 0x586015d
// asm:   0x5860153: mov rbx, qword ptr [rsp + 0x20]
// asm:   0x5860158: jmp 0x586003d
// asm:   0x586015d: mov rdi, rbx
// asm:   0x5860160: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5860165: mov r14, rax
// asm:   0x5860168: lea rdi, [rsp + 0x68]
// asm:   0x586016d: call 0x2fceb00  ; il2cpp_runtime_helper_02fceb00()
// asm:   0x5860172: mov rdi, r14
// asm:   0x5860175: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x586017a: mov rdi, rax
// asm:   0x586017d: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
Weather_WeatherSchedule__SerializeToCSV(Weather_WeatherSchedule_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_WeatherEvent__o *__this_00;
  System_Collections_Generic_List_float__o *__this_01;
  MethodInfo *pMVar3;
  Weather_WeatherEvent_o *__this_02;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_List_string__o *pSVar6;
  MethodInfo *pMVar7;
  Il2CppObject *pIVar8;
  System_String_o *pSVar9;
  System_String_o *str2;
  System_String_array *pSVar10;
  Il2CppRGCTXData *method_00;
  int iVar11;
  System_Collections_Generic_List_object__o *pSVar12;
  float fVar13;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  int iStack_90;
  undefined4 uStack_8c;
  System_Collections_Generic_List_string__o *pSStack_88;
  Weather_WeatherSchedule_o *pWStack_80;
  undefined1 auStack_78 [8];
  undefined1 *puStack_70;
  Weather_WeatherEvent_o *pWStack_68;
  undefined1 auStack_58 [8];
  undefined1 *puStack_50;
  Il2CppObject *pIStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  pWStack_80 = __this;
  if (Il2CppMethodInitialized_075450ab == '\0') {
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
    Il2CppMethodInitialized_075450ab = '\x01';
  }
  auStack_78 = (undefined1  [8])0x0;
  puStack_70 = (undefined1 *)0x0;
  pWStack_68 = (Weather_WeatherEvent_o *)0x0;
  auStack_58 = (undefined1  [8])0x0;
  puStack_50 = (undefined1 *)0x0;
  pIStack_48 = (Il2CppObject *)0x0;
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar6,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  __this_00 = (pWStack_80->fields).Events;
  if (__this_00 != (System_Collections_Generic_List_WeatherEvent__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a0,
               (System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_WeatherEvent_GetEnumerator);
    pWStack_68 = (Weather_WeatherEvent_o *)CONCAT44(uStack_8c,iStack_90);
    auStack_78 = auStack_a0;
    puStack_70 = puStack_98;
    uStack_40 = 0;
    puStack_38 = auStack_78;
    pSStack_88 = pSVar6;
    while (bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)auStack_78,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEvent_MoveNext),
          __this_02 = pWStack_68, bVar4) {
      pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)pSVar6,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      if (__this_02 == (Weather_WeatherEvent_o *)0x0) {
        ThrowNullReferenceException();
      }
      auStack_a0 = (undefined1  [8])TypeInfo_Weather_WeatherAction;
      puStack_98 = (undefined1 *)0xffffffffffffffff;
      iStack_90 = (__this_02->fields).Action;
      pMVar7 = (MethodInfo *)System_Enum__ToString((System_Enum_o *)auStack_a0,(MethodInfo *)0x0);
      pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) {
label_058600af:
        ThrowNullReferenceException();
      }
      piVar1 = &(pSVar6->fields)._version;
      *piVar1 = *piVar1 + 1;
      method_00 = (Il2CppRGCTXData *)(pSVar6->fields)._items;
      if (method_00 == (Il2CppRGCTXData *)0x0) goto label_058600af;
      uVar2 = (pSVar6->fields)._size;
      if (uVar2 < *(uint *)&method_00[3].rgctxDataDummy) {
        (pSVar6->fields)._size = uVar2 + 1;
        method_00[(long)(int)uVar2 + 4].method = pMVar7;
        Il2CppCodeGenWriteBarrier(&method_00[(long)(int)uVar2 + 4].rgctxDataDummy);
      }
      else {
        method_00 = pMVar3->klass->rgctx_data;
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pMVar7,
                   (MethodInfo_395D230 *)method_00[0xe].method);
      }
      if ((__this_02->fields).Effect != 0) {
        auStack_a0 = (undefined1  [8])TypeInfo_Weather_WeatherEffect;
        puStack_98 = (undefined1 *)0xffffffffffffffff;
        iStack_90 = (__this_02->fields).Effect;
        pMVar7 = (MethodInfo *)System_Enum__ToString((System_Enum_o *)auStack_a0,(MethodInfo *)0x0);
        pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = &(pSVar6->fields)._version;
        *piVar1 = *piVar1 + 1;
        method_00 = (Il2CppRGCTXData *)(pSVar6->fields)._items;
        if (method_00 == (Il2CppRGCTXData *)0x0) {
          ThrowNullReferenceException();
        }
        uVar2 = (pSVar6->fields)._size;
        if (uVar2 < *(uint *)&method_00[3].rgctxDataDummy) {
          (pSVar6->fields)._size = uVar2 + 1;
          method_00[(long)(int)uVar2 + 4].method = pMVar7;
          Il2CppCodeGenWriteBarrier(&method_00[(long)(int)uVar2 + 4].rgctxDataDummy);
        }
        else {
          method_00 = pMVar3->klass->rgctx_data;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pMVar7,
                     (MethodInfo_395D230 *)method_00[0xe].method);
        }
      }
      iVar11 = (__this_02->fields).ValueSelectType;
      if (iVar11 != 0) {
        if ((__this_02->fields).Action != 0xf) {
          auStack_a0 = (undefined1  [8])TypeInfo_Weather_WeatherValueSelectType;
          puStack_98 = (undefined1 *)0xffffffffffffffff;
          iStack_90 = iVar11;
          pMVar7 = (MethodInfo *)System_Enum__ToString((System_Enum_o *)auStack_a0,(MethodInfo *)0x0);
          pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          method_00 = (Il2CppRGCTXData *)(pSVar6->fields)._items;
          if (method_00 == (Il2CppRGCTXData *)0x0) {
            ThrowNullReferenceException();
          }
          uVar2 = (pSVar6->fields)._size;
          if (uVar2 < *(uint *)&method_00[3].rgctxDataDummy) {
            (pSVar6->fields)._size = uVar2 + 1;
            method_00[(long)(int)uVar2 + 4].method = pMVar7;
            Il2CppCodeGenWriteBarrier(&method_00[(long)(int)uVar2 + 4].rgctxDataDummy);
          }
          else {
            method_00 = pMVar3->klass->rgctx_data;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pMVar7,
                       (MethodInfo_395D230 *)method_00[0xe].method);
          }
          iVar11 = (__this_02->fields).ValueSelectType;
        }
        pSVar12 = (__this_02->fields).Values;
        if (iVar11 == 3) {
          if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) {
label_0586009b:
            ThrowNullReferenceException();
          }
          iVar11 = 0;
          while (iVar11 < (pSVar12->fields)._size) {
            iVar5 = Weather_WeatherEvent__GetValueType(__this_02,(MethodInfo *)0x0);
            pSVar12 = (__this_02->fields).Values;
            if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar8 = System_Collections_Generic_List_object___get_Item
                               (pSVar12,iVar11,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_object_get_Item);
            __this_01 = (__this_02->fields).Weights;
            if (__this_01 == (System_Collections_Generic_List_float__o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar13 = System_Collections_Generic_List_float___get_Item
                               (__this_01,iVar11,
                                (MethodInfo_39AC490 *)
                                MethodInfo_System_Collections_Generic_List_float_get_Item);
            auStack_a0._0_4_ = fVar13;
            if (Il2CppMethodInitialized_075450ae == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&"-");
              Il2CppMethodInitialized_075450ae = '\x01';
            }
            pSVar9 = Weather_WeatherSchedule__SerializeValue(pWStack_80,iVar5,pIVar8,(MethodInfo *)method_00);
            str2 = System_Single__ToString((float *)auStack_a0,(MethodInfo *)0x0);
            pMVar7 = (MethodInfo *)
                     System_String__Concat_5301f10(pSVar9,"-",str2,(MethodInfo *)0x0);
            pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
            piVar1 = &(pSVar6->fields)._version;
            *piVar1 = *piVar1 + 1;
            method_00 = (Il2CppRGCTXData *)(pSVar6->fields)._items;
            if (method_00 == (Il2CppRGCTXData *)0x0) {
              ThrowNullReferenceException();
            }
            uVar2 = (pSVar6->fields)._size;
            if (uVar2 < *(uint *)&method_00[3].rgctxDataDummy) {
              (pSVar6->fields)._size = uVar2 + 1;
              method_00[(long)(int)uVar2 + 4].method = pMVar7;
              Il2CppCodeGenWriteBarrier(&method_00[(long)(int)uVar2 + 4].rgctxDataDummy);
            }
            else {
              method_00 = pMVar3->klass->rgctx_data;
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pMVar7,
                         (MethodInfo_395D230 *)method_00[0xe].method);
            }
            iVar11 = iVar11 + 1;
            pSVar12 = (__this_02->fields).Values;
            if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) goto label_0586009b;
          }
        }
        else {
          if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)auStack_a0,pSVar12,
                     (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
          pIStack_48 = (Il2CppObject *)CONCAT44(uStack_8c,iStack_90);
          auStack_58 = auStack_a0;
          puStack_50 = puStack_98;
          auStack_a0 = (undefined1  [8])0x0;
          puStack_98 = auStack_58;
          while (bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   ((System_Collections_Generic_List_Enumerator_object__o *)auStack_58,
                                    (MethodInfo_4C45C50 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext),
                pIVar8 = pIStack_48, bVar4) {
            iVar5 = Weather_WeatherEvent__GetValueType(__this_02,(MethodInfo *)0x0);
            pMVar7 = (MethodInfo *)
                     Weather_WeatherSchedule__SerializeValue(pWStack_80,iVar5,pIVar8,(MethodInfo *)method_00);
            pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
            piVar1 = &(pSVar6->fields)._version;
            *piVar1 = *piVar1 + 1;
            method_00 = (Il2CppRGCTXData *)(pSVar6->fields)._items;
            if (method_00 == (Il2CppRGCTXData *)0x0) {
              ThrowNullReferenceException();
            }
            uVar2 = (pSVar6->fields)._size;
            if (uVar2 < *(uint *)&method_00[3].rgctxDataDummy) {
              (pSVar6->fields)._size = uVar2 + 1;
              method_00[(long)(int)uVar2 + 4].method = pMVar7;
              Il2CppCodeGenWriteBarrier(&method_00[(long)(int)uVar2 + 4].rgctxDataDummy);
            }
            else {
              method_00 = pMVar3->klass->rgctx_data;
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pMVar7,
                         (MethodInfo_395D230 *)method_00[0xe].method);
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)auStack_58,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
        }
      }
      pSVar10 = (System_String_array *)
                System_Collections_Generic_List_object___ToArray
                          ((System_Collections_Generic_List_object__o *)pSVar6,
                           (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      pSVar6 = pSStack_88;
      pSVar9 = System_String__Join(",",pSVar10,(MethodInfo *)0x0);
      pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (pSVar6 == (System_Collections_Generic_List_string__o *)0x0) {
label_058600b4:
        ThrowNullReferenceException();
      }
      piVar1 = &(pSVar6->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar10 = (pSVar6->fields)._items;
      if (pSVar10 == (System_String_array *)0x0) goto label_058600b4;
      uVar2 = (pSVar6->fields)._size;
      if (uVar2 < (uint)pSVar10->max_length) {
        (pSVar6->fields)._size = uVar2 + 1;
        pSVar10->m_Items[(int)uVar2] = pSVar9;
        Il2CppCodeGenWriteBarrier(pSVar10->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar6,(Il2CppObject *)pSVar9,
                   (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_78,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_WeatherEvent_Dispose);
    if (pSVar6 != (System_Collections_Generic_List_string__o *)0x0) {
      pSVar10 = (System_String_array *)
                System_Collections_Generic_List_object___ToArray
                          ((System_Collections_Generic_List_object__o *)pSVar6,
                           (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      pSVar9 = System_String__Join(";\n",pSVar10,(MethodInfo *)0x0);
      return pSVar9;
    }
  }
  ThrowNullReferenceException();
}


// Weather.WeatherSchedule$$DeserializeFromCSV
// il2cpp: System_String_o* Weather_WeatherSchedule__DeserializeFromCSV (Weather_WeatherSchedule_o* __this, System_String_o* csv, const MethodInfo* method);
// 0x585f5f0
// eh: try 0x585f6c6..0x585f820 -> pad 0x585f82b (+12 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x585f84e..0x585f8cd -> pad 0x585f8cd (+1 call sites) cleanup
// eh: try 0x585f8d0..0x585f8d5 -> pad 0x585f8dd catch (...) [compiler noexcept guard]
// asm: 52 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x585f6ce: nop 
// asm:   0x585f825: jmp 0x585f837
// asm:   0x585f827: jmp 0x585f837
// asm:   0x585f829: jmp 0x585f837
// asm:   0x585f82b: jmp 0x585f837
// asm:   0x585f82d: jmp 0x585f837
// asm:   0x585f82f: jmp 0x585f837
// asm:   0x585f831: jmp 0x585f837
// asm:   0x585f833: jmp 0x585f837
// asm:   0x585f835: jmp 0x585f837
// asm:   0x585f837: mov rbx, rax
// asm:   0x585f83a: cmp edx, 1
// asm:   0x585f83d: jne 0x585f8d5
// asm:   0x585f843: mov rdi, rbx
// asm:   0x585f846: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x585f84b: mov rbx, rax
// asm:   0x585f84e: lea rdi, [rip + 0x1a1886b]  ; TypeInfo_System_Exception
// asm:   0x585f855: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x585f85a: mov rcx, qword ptr [rbx]
// asm:   0x585f85d: mov rsi, qword ptr [rcx]
// asm:   0x585f860: mov rdi, rax
// asm:   0x585f863: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x585f868: test al, al
// asm:   0x585f86a: je 0x585f8ac
// asm:   0x585f86c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x585f871: mov dword ptr [rsp + 0xc], r13d
// asm:   0x585f876: lea rax, [rip + 0x1cf6e4b]
// asm:   0x585f87d: mov rdi, qword ptr [rax + 0x48]
// asm:   0x585f881: lea rsi, [rsp + 0xc]
// asm:   0x585f886: call 0x30d6260  ; il2cpp_runtime_helper_030d6260()
// asm:   0x585f88b: mov rbx, rax
// asm:   0x585f88e: lea rdi, [rip + 0x1a7f1db]  ; "Import failed at line {0}"
// asm:   0x585f895: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x585f89a: mov rdi, rax
// asm:   0x585f89d: mov rsi, rbx
// asm:   0x585f8a0: xor edx, edx
// asm:   0x585f8a2: call 0x53f51c0  ; System_String__Format()
// asm:   0x585f8a7: jmp 0x585f7ee
// asm:   0x585f8ac: mov edi, 8
// asm:   0x585f8b1: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x585f8b6: mov rcx, qword ptr [rbx]
// asm:   0x585f8b9: mov qword ptr [rax], rcx
// asm:   0x585f8bc: lea rsi, [rip + 0x15cdc3d]
// asm:   0x585f8c3: mov rdi, rax
// asm:   0x585f8c6: xor edx, edx
// asm:   0x585f8c8: call 0x6e255c0  ; __cxa_throw()
// asm:   0x585f8cd: mov rbx, rax
// asm:   0x585f8d0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x585f8d5: mov rdi, rbx
// asm:   0x585f8d8: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x585f8dd: mov rdi, rax
// asm:   0x585f8e0: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
Weather_WeatherSchedule__DeserializeFromCSV
          (Weather_WeatherSchedule_o *__this,System_String_o *csv,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  System_Collections_Generic_List_WeatherEvent__o *pSVar2;
  Weather_WeatherEvent_array *pWVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  uint uVar6;
  System_String_array *pSVar7;
  System_String_o *a;
  System_String_array *pSVar8;
  Weather_WeatherEvent_o *item;
  MethodInfo *method_00;
  uint uVar9;
  
  if (Il2CppMethodInitialized_075450ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherEvent_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherEvent_Clear)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"//");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075450ac = '\x01';
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
      pSVar7 = System_String__Split(csv,0x3b,0,(MethodInfo *)0x0);
      if (pSVar7 != (System_String_array *)0x0) {
        uVar6 = (uint)pSVar7->max_length;
        if (0 < (int)uVar6) {
          uVar9 = 0;
          do {
            if (uVar6 <= uVar9) {
              ThrowIndexOutOfRangeException();
            }
            if (pSVar7->m_Items[(int)uVar9] == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            a = System_String__Trim(pSVar7->m_Items[(int)uVar9],(MethodInfo *)0x0);
            if ((uint)pSVar7->max_length <= uVar9) {
              ThrowIndexOutOfRangeException();
            }
            if (pSVar7->m_Items[(int)uVar9] == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar8 = System_String__Split(pSVar7->m_Items[(int)uVar9],10,0,(MethodInfo *)0x0);
            if (pSVar8 == (System_String_array *)0x0) {
              ThrowNullReferenceException();
            }
            bVar5 = System_String__op_Inequality
                              (a,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
            if (bVar5) {
              if (a == (System_String_o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar5 = System_String__StartsWith(a,"//",(MethodInfo *)0x0);
              if (!bVar5) {
                pSVar2 = (__this->fields).Events;
                item = Weather_WeatherSchedule__DeserializeLine(__this,a,method_00);
                pMVar4 = MethodInfo_System_Collections_Generic_List_WeatherEvent_Add;
                if (pSVar2 == (System_Collections_Generic_List_WeatherEvent__o *)0x0) {
label_0585f81b:
                  ThrowNullReferenceException();
                }
                piVar1 = &(pSVar2->fields)._version;
                *piVar1 = *piVar1 + 1;
                pWVar3 = (pSVar2->fields)._items;
                if (pWVar3 == (Weather_WeatherEvent_array *)0x0) goto label_0585f81b;
                uVar6 = (pSVar2->fields)._size;
                if (uVar6 < (uint)pWVar3->max_length) {
                  (pSVar2->fields)._size = uVar6 + 1;
                  pWVar3->m_Items[(int)uVar6] = item;
                  Il2CppCodeGenWriteBarrier(pWVar3->m_Items + (int)uVar6);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)item,
                             (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
                }
              }
            }
            uVar9 = uVar9 + 1;
            uVar6 = (uint)pSVar7->max_length;
          } while ((int)uVar9 < (int)uVar6);
        }
        return "";
      }
    }
  }
  ThrowNullReferenceException();
}


// Weather.WeatherSchedule$$SerializeValue
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeValue (Weather_WeatherSchedule_o* __this, int32_t type, Il2CppObject* value, const MethodInfo* method);
// 0x5860200
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5860425: lea rax, [rip + 0x1cf629c]
// asm:   0x586042c: mov rsi, qword ptr [rax + 0x90]

System_String_o *
Weather_WeatherSchedule__SerializeValue
          (Weather_WeatherSchedule_o *__this,int32_t type,Il2CppObject *value,MethodInfo *method)

{
  float *pfVar1;
  int32_t *piVar2;
  UnityEngine_Color_Fields *pUVar3;
  void *pvVar4;
  UnityEngine_Vector3_Fields *pUVar5;
  System_String_o *pSVar6;
  UnityEngine_Color_c *method_00;
  UnityEngine_Vector3_c *method_01;
  int32_t local_20;
  float local_1c;
  
  if (Il2CppMethodInitialized_075450ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Color);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&";");
    il2cpp_codegen_initialize_runtime_metadata(&",");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075450ad = '\x01';
  }
  local_1c = 0.0;
  local_20 = 0;
  switch(type) {
  case 1:
    if (value == (Il2CppObject *)0x0) goto label_0586048c;
    if ((value->klass->_1).element_class != *(Il2CppClass **)(g_data_07556740 + 0x40)) {
label_05860491:
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    pfVar1 = il2cpp_vm_Object_Unbox(value);
    local_1c = *pfVar1;
    value = (Il2CppObject *)System_Single__ToString(&local_1c,(MethodInfo *)0x0);
    break;
  case 2:
    if (value == (Il2CppObject *)0x0) goto label_0586048c;
    if ((value->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) goto label_05860491;
    piVar2 = il2cpp_vm_Object_Unbox(value);
    local_20 = *piVar2;
    goto label_058603d1;
  case 3:
    if (value == (Il2CppObject *)0x0) goto label_0586048c;
    if (value->klass != g_data_07556758) goto label_05860491;
    goto label_05860433;
  case 4:
    if (value == (Il2CppObject *)0x0) goto label_0586048c;
    if ((value->klass->_1).element_class != (TypeInfo_UnityEngine_Color->_1).element_class) goto label_05860491;
    method_00 = TypeInfo_UnityEngine_Color;
    pUVar3 = il2cpp_vm_Object_Unbox(value);
    value = (Il2CppObject *)
            Weather_WeatherSchedule__SerializeColor
                      (__this,(UnityEngine_Color_o)*pUVar3,(MethodInfo *)method_00);
    break;
  case 5:
    if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
    }
    if (value == (Il2CppObject *)0x0) goto label_0586048c;
    if ((value->klass->_1).element_class != *(Il2CppClass **)(g_data_075566f0 + 0x40)) goto label_05860491;
    pvVar4 = il2cpp_vm_Object_Unbox(value);
    local_20 = System_Convert__ToInt32_541c200(*(bool *)pvVar4,(MethodInfo *)0x0);
label_058603d1:
    value = (Il2CppObject *)System_Int32__ToString(&local_20,(MethodInfo *)0x0);
    break;
  case 6:
    if (value == (Il2CppObject *)0x0) goto label_0586048c;
    if ((value->klass->_1).element_class != (TypeInfo_UnityEngine_Vector3->_1).element_class)
    goto label_05860491;
    method_01 = TypeInfo_UnityEngine_Vector3;
    pUVar5 = il2cpp_vm_Object_Unbox(value);
    value = (Il2CppObject *)
            Weather_WeatherSchedule__SerializeVector3
                      ((Weather_WeatherSchedule_o *)value,(UnityEngine_Vector3_o)*pUVar5,
                       (MethodInfo *)method_01);
    break;
  default:
    value = (Il2CppObject *)"";
  }
  if ((System_String_o *)value != (System_String_o *)0x0) {
label_05860433:
    pSVar6 = System_String__Replace_5304550
                       ((System_String_o *)value,",",
                        *(System_String_o **)g_data_07556758->static_fields,(MethodInfo *)0x0);
    if (pSVar6 != (System_String_o *)0x0) {
      pSVar6 = System_String__Replace_5304550
                         (pSVar6,";",*(System_String_o **)g_data_07556758->static_fields,
                          (MethodInfo *)0x0);
      return pSVar6;
    }
  }
label_0586048c:
  ThrowNullReferenceException();
}


// Weather.WeatherSchedule$$SerializeRandomListValue
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeRandomListValue (Weather_WeatherSchedule_o* __this, int32_t type, Il2CppObject* value, float weight, const MethodInfo* method);
// 0x5860190

System_String_o *
Weather_WeatherSchedule__SerializeRandomListValue
          (Weather_WeatherSchedule_o *__this,int32_t type,Il2CppObject *value,float weight,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  float fStack_1c;
  
  fStack_1c = weight;
  if (Il2CppMethodInitialized_075450ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_075450ae = '\x01';
  }
  pSVar1 = Weather_WeatherSchedule__SerializeValue(__this,type,value,method);
  str2 = System_Single__ToString(&fStack_1c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5301f10(pSVar1,"-",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Weather.WeatherSchedule$$SerializeColor
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeColor (Weather_WeatherSchedule_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x58609a0

System_String_o *
Weather_WeatherSchedule__SerializeColor
          (Weather_WeatherSchedule_o *__this,UnityEngine_Color_o color,MethodInfo *method)

{
  System_String_array *value;
  System_String_o *pSVar1;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  int local_5c;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  local_48._8_4_ = in_XMM1_Dc;
  local_48._0_8_ = color.fields._8_8_;
  local_48._12_4_ = in_XMM1_Dd;
  fStack_50 = (float)in_XMM0_Dc;
  local_58 = (undefined1  [8])color.fields._0_8_;
  fStack_4c = (float)in_XMM0_Dd;
  local_38._8_4_ = in_XMM0_Dc;
  local_38._0_8_ = color.fields._0_8_;
  local_38._12_4_ = in_XMM0_Dd;
  if (Il2CppMethodInitialized_075450af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_075450af = '\x01';
  }
  value = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  local_5c = (int)((float)local_38._0_4_ * 255.0);
  pSVar1 = System_Int32__ToString(&local_5c,(MethodInfo *)0x0);
  if (value == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)value->max_length != 0) {
    value->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(value->m_Items);
    local_58._0_4_ = local_58._4_4_;
    fStack_50 = (float)local_58._4_4_;
    fStack_4c = (float)local_58._4_4_;
    local_5c = (int)((float)local_58._4_4_ * 255.0);
    pSVar1 = System_Int32__ToString(&local_5c,(MethodInfo *)0x0);
    if ((value->max_length & 0xfffffffe) != 0) {
      value->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(value->m_Items + 1);
      local_5c = (int)((float)local_48._0_4_ * 255.0);
      pSVar1 = System_Int32__ToString(&local_5c,(MethodInfo *)0x0);
      if (2 < (uint)value->max_length) {
        value->m_Items[2] = pSVar1;
        Il2CppCodeGenWriteBarrier(value->m_Items + 2);
        local_28 = (float)local_48._4_4_;
        fStack_24 = (float)local_48._4_4_;
        fStack_20 = (float)local_48._4_4_;
        fStack_1c = (float)local_48._4_4_;
        local_5c = (int)((float)local_48._4_4_ * 255.0);
        pSVar1 = System_Int32__ToString(&local_5c,(MethodInfo *)0x0);
        if ((value->max_length & 0xfffffffc) != 0) {
          value->m_Items[3] = pSVar1;
          Il2CppCodeGenWriteBarrier(value->m_Items + 3);
          if ((float)local_38._0_4_ == (float)local_48._0_4_) {
            if (((((float)local_38._0_4_ == (float)local_58._0_4_) &&
                 (!NAN((float)local_38._0_4_) && !NAN((float)local_58._0_4_))) && (local_28 == 1.0)) &&
               (!NAN(local_28))) {
              if ((int)value->max_length != 0) {
                return value->m_Items[0];
              }
              goto label_05860b62;
            }
          }
          pSVar1 = System_String__Join("-",value,(MethodInfo *)0x0);
          return pSVar1;
        }
      }
    }
  }
label_05860b62:
  ThrowIndexOutOfRangeException();
}


// Weather.WeatherSchedule$$SerializeColorValue
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeColorValue (Weather_WeatherSchedule_o* __this, float value, const MethodInfo* method);
// 0x5860c60

System_String_o *
Weather_WeatherSchedule__SerializeColorValue(Weather_WeatherSchedule_o *__this,float value,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t iStack_4;
  
  pSVar1 = System_Int32__ToString(&iStack_4,(MethodInfo *)0x0);
  return pSVar1;
}


// Weather.WeatherSchedule$$SerializeVector3
// il2cpp: System_String_o* Weather_WeatherSchedule__SerializeVector3 (Weather_WeatherSchedule_o* __this, UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x5860b70

System_String_o *
Weather_WeatherSchedule__SerializeVector3
          (Weather_WeatherSchedule_o *__this,UnityEngine_Vector3_o v,MethodInfo *method)

{
  System_String_array *value;
  System_String_o *pSVar1;
  undefined8 local_20;
  float local_18 [2];
  
  local_18[0] = v.fields.z;
  local_20 = v.fields._0_8_;
  if (Il2CppMethodInitialized_075450b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_075450b0 = '\x01';
  }
  value = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
  pSVar1 = System_Single__ToString((float *)&local_20,(MethodInfo *)0x0);
  if (value == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)value->max_length != 0) {
    value->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(value->m_Items);
    pSVar1 = System_Single__ToString((float *)((long)&local_20 + 4),(MethodInfo *)0x0);
    if ((value->max_length & 0xfffffffe) != 0) {
      value->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(value->m_Items + 1);
      pSVar1 = System_Single__ToString(local_18,(MethodInfo *)0x0);
      if (2 < (uint)value->max_length) {
        value->m_Items[2] = pSVar1;
        Il2CppCodeGenWriteBarrier(value->m_Items + 2);
        pSVar1 = System_String__Join("-",value,(MethodInfo *)0x0);
        return pSVar1;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Weather.WeatherSchedule$$DeserializeLine
// il2cpp: Weather_WeatherEvent_o* Weather_WeatherSchedule__DeserializeLine (Weather_WeatherSchedule_o* __this, System_String_o* line, const MethodInfo* method);
// 0x58604a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5860781: jmp 0x586097f
// asm:   0x586083b: jmp 0x5860855

Weather_WeatherEvent_o *
Weather_WeatherSchedule__DeserializeLine
          (Weather_WeatherSchedule_o *__this,System_String_o *line,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_string__WeatherAction__o *__this_00;
  System_Collections_Generic_Dictionary_string__WeatherEffect__o *__this_01;
  System_Collections_Generic_Dictionary_string__WeatherValueSelectType__o *__this_02;
  System_Collections_Generic_List_object__o *pSVar2;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_float__o *__this_03;
  System_Single_array *pSVar4;
  bool bVar5;
  int32_t iVar6;
  int iVar7;
  Weather_WeatherEvent_o *__this_04;
  System_String_array *pSVar8;
  ulong uVar9;
  Il2CppObject *item;
  System_Collections_Generic_List_string__o *__this_05;
  System_Collections_Generic_List_T__o *values;
  System_String_o *pSVar10;
  MethodInfo *pMVar11;
  MethodInfo *pMVar12;
  System_String_o **method_00;
  uint uVar13;
  int count;
  ulong uVar14;
  float item_00;
  
  if (Il2CppMethodInitialized_075450b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_WeatherEffect_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_WeatherAction_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_WeatherValueSelectType_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_float_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_GetRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherEvent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherSchedule);
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_075450b1 = '\x01';
  }
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Weather_WeatherEvent);
  Weather_WeatherEvent___ctor(__this_04,(MethodInfo *)0x0);
  if (line != (System_String_o *)0x0) {
    pSVar8 = System_String__Split(line,0x2c,0,(MethodInfo *)0x0);
    if ((TypeInfo_Weather_WeatherSchedule->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherSchedule);
    }
    if (pSVar8 != (System_String_array *)0x0) {
      if ((int)pSVar8->max_length == 0) {
label_05860997:
        ThrowIndexOutOfRangeException();
      }
      __this_00 = TypeInfo_Weather_WeatherSchedule->static_fields->NameToWeatherAction;
      if ((__this_00 != (System_Collections_Generic_Dictionary_string__WeatherAction__o *)0x0) &&
         (iVar6 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                             (Il2CppObject *)pSVar8->m_Items[0],
                             (MethodInfo_4AA1600 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_WeatherAction_get_Item),
         __this_04 != (Weather_WeatherEvent_o *)0x0)) {
        (__this_04->fields).Action = iVar6;
        bVar5 = Weather_WeatherEvent__SupportsWeatherEffects(__this_04,(MethodInfo *)0x0);
        uVar13 = 1;
        if (bVar5) {
          if ((TypeInfo_Weather_WeatherSchedule->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherSchedule);
          }
          if ((pSVar8->max_length & 0xfffffffe) == 0) goto label_05860997;
          __this_01 = TypeInfo_Weather_WeatherSchedule->static_fields->NameToWeatherEffect;
          if (__this_01 == (System_Collections_Generic_Dictionary_string__WeatherEffect__o *)0x0)
          goto label_05860992;
          iVar6 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                             (Il2CppObject *)pSVar8->m_Items[1],
                             (MethodInfo_4AA1600 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_WeatherEffect_get_Item);
          (__this_04->fields).Effect = iVar6;
          uVar13 = 2;
        }
        if ((__this_04->fields).Action == 0xf) {
          (__this_04->fields).ValueSelectType = 1;
        }
        else {
          bVar5 = Weather_WeatherEvent__SupportsWeatherValueSelectTypes(__this_04,(MethodInfo *)0x0);
          if (bVar5) {
            if ((TypeInfo_Weather_WeatherSchedule->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherSchedule);
            }
            if ((uint)pSVar8->max_length <= uVar13) goto label_05860997;
            __this_02 = TypeInfo_Weather_WeatherSchedule->static_fields->NameToWeatherValueSelectType;
            if (__this_02 == (System_Collections_Generic_Dictionary_string__WeatherValueSelectType__o *)0x0)
            goto label_05860992;
            uVar9 = (ulong)uVar13;
            uVar13 = uVar13 + 1;
            iVar7 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                               (Il2CppObject *)pSVar8->m_Items[uVar9],
                               (MethodInfo_4AA1600 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_WeatherValueSelectType_get_Item
                              );
            (__this_04->fields).ValueSelectType = iVar7;
          }
          else {
            iVar7 = (__this_04->fields).ValueSelectType;
          }
          if (iVar7 == 3) {
            pMVar11 = (MethodInfo *)0x0;
            iVar6 = Weather_WeatherEvent__GetValueType(__this_04,(MethodInfo *)0x0);
            if ((int)pSVar8->max_length <= (int)uVar13) {
              return __this_04;
            }
            uVar9 = pSVar8->max_length & 0xffffffff;
            uVar14 = (ulong)uVar13;
            while (uVar14 < uVar9) {
              pSVar10 = pSVar8->m_Items[uVar14];
              if ((TypeInfo_Weather_WeatherSchedule->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherSchedule);
              }
              __this_05 = Weather_WeatherSchedule__SplitParts(pSVar10,pMVar11);
              if (__this_05 == (System_Collections_Generic_List_string__o *)0x0) goto label_05860992;
              iVar7 = (__this_05->fields)._size;
              if (iVar6 == 4) {
                count = 4;
                if (iVar7 < 4) goto label_0586084b;
              }
              else {
                if (iVar6 == 6) {
                  if (2 < iVar7) {
                    iVar7 = 3;
                  }
                }
                else {
label_0586084b:
                  if (0 < iVar7) {
                    iVar7 = 1;
                  }
                }
                count = iVar7;
              }
              pSVar2 = (__this_04->fields).Values;
              values = System_Collections_Generic_List_object___GetRange
                                 ((System_Collections_Generic_List_object__o *)__this_05,0,count,
                                  (MethodInfo_395E160 *)
                                  MethodInfo_System_Collections_Generic_List_string_GetRange);
              method_00 = &"-";
              pSVar10 = System_String__Join_5303350
                                  ("-",
                                   (System_Collections_Generic_IEnumerable_string__o *)values,
                                   (MethodInfo *)0x0);
              pMVar11 = (MethodInfo *)
                        Weather_WeatherSchedule__DeserializeValue
                                  (__this,iVar6,pSVar10,(MethodInfo *)method_00);
              pMVar12 = MethodInfo_System_Collections_Generic_List_object_Add;
              if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) goto label_05860992;
              piVar1 = &(pSVar2->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar3 = (pSVar2->fields)._items;
              if (pSVar3 == (System_Object_array *)0x0) goto label_05860992;
              uVar13 = (pSVar2->fields)._size;
              if (uVar13 < (uint)pSVar3->max_length) {
                (pSVar2->fields)._size = uVar13 + 1;
                pSVar3->m_Items[(int)uVar13] = (Il2CppObject *)pMVar11;
                Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar13);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar2,(Il2CppObject *)pMVar11,
                           (MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
              }
              __this_03 = (__this_04->fields).Weights;
              item_00 = 1.0;
              if (count < (__this_05->fields)._size) {
                pSVar10 = System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)__this_05,count,
                                     (MethodInfo_395CF20 *)
                                     MethodInfo_System_Collections_Generic_List_string_get_Item);
                pMVar11 = (MethodInfo *)0x0;
                item_00 = System_Single__Parse(pSVar10,(MethodInfo *)0x0);
              }
              pMVar12 = MethodInfo_System_Collections_Generic_List_float_Add;
              if (__this_03 == (System_Collections_Generic_List_float__o *)0x0) goto label_05860992;
              piVar1 = &(__this_03->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar4 = (__this_03->fields)._items;
              if (pSVar4 == (System_Single_array *)0x0) goto label_05860992;
              uVar13 = (__this_03->fields)._size;
              if (uVar13 < (uint)pSVar4->max_length) {
                (__this_03->fields)._size = uVar13 + 1;
                pSVar4->m_Items[(int)uVar13] = item_00;
              }
              else {
                pMVar11 = pMVar12->klass->rgctx_data[0xe].method;
                System_Collections_Generic_List_float___AddWithResize
                          (__this_03,item_00,(MethodInfo_39AC7A0 *)pMVar11);
              }
              uVar14 = uVar14 + 1;
              uVar13 = (uint)pSVar8->max_length;
              uVar9 = (ulong)uVar13;
              if ((long)(int)uVar13 <= (long)uVar14) {
                return __this_04;
              }
            }
            goto label_05860997;
          }
        }
        if ((int)uVar13 < (int)pSVar8->max_length) {
          pMVar11 = (MethodInfo *)(ulong)uVar13;
          do {
            while( true ) {
              pSVar2 = (__this_04->fields).Values;
              iVar6 = Weather_WeatherEvent__GetValueType(__this_04,(MethodInfo *)0x0);
              pMVar12 = (MethodInfo *)(ulong)(uint)pSVar8->max_length;
              if (pMVar12 <= pMVar11) goto label_05860997;
              item = Weather_WeatherSchedule__DeserializeValue
                               (__this,iVar6,pSVar8->m_Items[(long)pMVar11],pMVar12);
              pMVar12 = MethodInfo_System_Collections_Generic_List_object_Add;
              if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) goto label_05860992;
              piVar1 = &(pSVar2->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar3 = (pSVar2->fields)._items;
              if (pSVar3 == (System_Object_array *)0x0) goto label_05860992;
              uVar13 = (pSVar2->fields)._size;
              if ((uint)pSVar3->max_length <= uVar13) break;
              (pSVar2->fields)._size = uVar13 + 1;
              pSVar3->m_Items[(int)uVar13] = item;
              Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar13);
              pMVar11 = (MethodInfo *)((long)&pMVar11->methodPointer + 1);
              if ((long)(int)pSVar8->max_length <= (long)pMVar11) {
                return __this_04;
              }
            }
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar2,item,(MethodInfo_395D230 *)pMVar12->klass->rgctx_data[0xe].method);
            pMVar11 = (MethodInfo *)((long)&pMVar11->methodPointer + 1);
          } while ((long)pMVar11 < (long)(int)pSVar8->max_length);
        }
        return __this_04;
      }
    }
  }
label_05860992:
  ThrowNullReferenceException();
}


// Weather.WeatherSchedule$$DeserializeValue
// il2cpp: Il2CppObject* Weather_WeatherSchedule__DeserializeValue (Weather_WeatherSchedule_o* __this, int32_t type, System_String_o* item, const MethodInfo* method);
// 0x5860f00

Il2CppObject *
Weather_WeatherSchedule__DeserializeValue
          (Weather_WeatherSchedule_o *__this,int32_t type,System_String_o *item,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  int32_t value;
  Utility_Color255_o *pUVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  UnityEngine_Vector3_c **__this_00;
  Il2CppClass *klass;
  UnityEngine_Vector3_o local_28;
  
  method_00 = (MethodInfo *)item;
  __this_00 = (UnityEngine_Vector3_c **)__this;
  if (Il2CppMethodInitialized_075450b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    __this_00 = &TypeInfo_UnityEngine_Vector3;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_075450b2 = '\x01';
    method_00 = extraout_RDX;
  }
  switch(type) {
  case 1:
    fVar2 = System_Single__Parse(item,(MethodInfo *)0x0);
    local_28.fields.x = fVar2;
    klass = g_data_07556740;
    break;
  case 2:
    fVar2 = (float)System_Int32__Parse(item,(MethodInfo *)0x0);
    local_28.fields.x = fVar2;
    klass = g_data_07556710;
    break;
  case 3:
    goto switchD_05860f4e_caseD_3;
  case 4:
    pUVar3 = Weather_WeatherSchedule__DeserializeColor(__this,item,method_00);
    return (Il2CppObject *)pUVar3;
  case 5:
    value = System_Int32__Parse(item,(MethodInfo *)0x0);
    if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
    }
    bVar1 = System_Convert__ToBoolean_5422360(value,(MethodInfo *)0x0);
    local_28.fields.x._0_1_ = bVar1;
    klass = g_data_075566f0;
    break;
  case 6:
    local_28 = Weather_WeatherSchedule__DeserializeVector3
                         ((Weather_WeatherSchedule_o *)__this_00,item,method_00);
    klass = (Il2CppClass *)TypeInfo_UnityEngine_Vector3;
    break;
  default:
    item = (System_String_o *)0x0;
    goto switchD_05860f4e_caseD_3;
  }
  item = (System_String_o *)il2cpp_vm_Object_Box(klass,&local_28);
switchD_05860f4e_caseD_3:
  return (Il2CppObject *)item;
}


// Weather.WeatherSchedule$$GetValuePartCount
// il2cpp: int32_t Weather_WeatherSchedule__GetValuePartCount (int32_t type, int32_t partCount, const MethodInfo* method);
// 0x5860ed0

int32_t Weather_WeatherSchedule__GetValuePartCount(int32_t type,int32_t partCount,MethodInfo *method)

{
  int32_t iVar1;
  
  if (type == 4) {
    if (3 < partCount) {
      return 4;
    }
  }
  else if (type == 6) {
    iVar1 = 3;
    if (partCount < 3) {
      iVar1 = partCount;
    }
    return iVar1;
  }
  iVar1 = 1;
  if (partCount < 1) {
    iVar1 = partCount;
  }
  return iVar1;
}


// Weather.WeatherSchedule$$SplitParts
// il2cpp: System_Collections_Generic_List_string__o* Weather_WeatherSchedule__SplitParts (System_String_o* item, const MethodInfo* method);
// 0x5860c80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5860d39: jmp 0x5860d90

System_Collections_Generic_List_string__o *
Weather_WeatherSchedule__SplitParts(System_String_o *item,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_array *pSVar2;
  MethodInfo *pMVar3;
  bool bVar4;
  uint16_t uVar5;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar6;
  uint index;
  uint uVar7;
  
  if (Il2CppMethodInitialized_075450b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_075450b3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if (item != (System_String_o *)0x0) {
    uVar7 = 0;
    if (1 < (item->fields)._stringLength) {
      index = 1;
      uVar7 = 0;
label_05860d1c:
      do {
        uVar5 = System_String__get_Chars(item,index - 1,(MethodInfo *)0x0);
        bVar4 = false;
        if (uVar5 == 0x65) {
          if (1 < index) {
label_05860d57:
            uVar5 = System_String__get_Chars(item,index - 2,(MethodInfo *)0x0);
            if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_07556750);
            }
            bVar4 = System_Char__IsDigit(uVar5,(MethodInfo *)0x0);
          }
        }
        else {
          uVar5 = System_String__get_Chars(item,index - 1,(MethodInfo *)0x0);
          if ((1 < index) && (uVar5 == 0x45)) goto label_05860d57;
        }
        uVar5 = System_String__get_Chars(item,index,(MethodInfo *)0x0);
        if (((uVar5 != 0x2d) || (index - uVar7 == 0 || (int)index < (int)uVar7)) || (bVar4 != false)) {
          index = index + 1;
          if ((item->fields)._stringLength <= (int)index) break;
          goto label_05860d1c;
        }
        pSVar6 = System_String__Substring_53042f0(item,uVar7,index - uVar7,(MethodInfo *)0x0);
        pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_05860ec5;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar2 = (__this->fields)._items;
        if (pSVar2 == (System_String_array *)0x0) goto label_05860ec5;
        uVar7 = (__this->fields)._size;
        if (uVar7 < (uint)pSVar2->max_length) {
          (__this->fields)._size = uVar7 + 1;
          pSVar2->m_Items[(int)uVar7] = pSVar6;
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + (int)uVar7);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
                     (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
        }
        index = index + 1;
        uVar7 = index;
      } while ((int)index < (item->fields)._stringLength);
    }
    pSVar6 = System_String__Substring(item,uVar7,(MethodInfo *)0x0);
    pMVar3 = MethodInfo_System_Collections_Generic_List_string_Add;
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar2 = (__this->fields)._items;
      if (pSVar2 != (System_String_array *)0x0) {
        uVar7 = (__this->fields)._size;
        if (uVar7 < (uint)pSVar2->max_length) {
          (__this->fields)._size = uVar7 + 1;
          pSVar2->m_Items[(int)uVar7] = pSVar6;
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + (int)uVar7);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
                     (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
        }
        return __this;
      }
    }
  }
label_05860ec5:
  ThrowNullReferenceException();
}


// Weather.WeatherSchedule$$DeserializeColor
// il2cpp: Utility_Color255_o* Weather_WeatherSchedule__DeserializeColor (Weather_WeatherSchedule_o* __this, System_String_o* item, const MethodInfo* method);
// 0x5861020

Utility_Color255_o *
Weather_WeatherSchedule__DeserializeColor
          (Weather_WeatherSchedule_o *__this,System_String_o *item,MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  int32_t r;
  int32_t g;
  int32_t b;
  int32_t a;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar3;
  Utility_Color255_o *__this_01;
  MethodInfo *pMVar4;
  
  pMVar4 = (MethodInfo *)item;
  if (Il2CppMethodInitialized_075450b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherSchedule);
    Il2CppMethodInitialized_075450b4 = '\x01';
    uVar1 = (TypeInfo_Weather_WeatherSchedule->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Weather_WeatherSchedule->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherSchedule);
    __this_00 = Weather_WeatherSchedule__SplitParts(item,pMVar4);
  }
  else {
    __this_00 = Weather_WeatherSchedule__SplitParts(item,pMVar4);
  }
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = (__this_00->fields)._size;
  pSVar3 = System_Collections_Generic_List_object___get_Item
                     ((System_Collections_Generic_List_object__o *)__this_00,0,
                      (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
  r = System_Int32__Parse(pSVar3,(MethodInfo *)0x0);
  if (iVar2 == 1) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    a = 0xff;
    g = r;
    b = r;
  }
  else {
    pSVar3 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,1,
                        (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
    g = System_Int32__Parse(pSVar3,(MethodInfo *)0x0);
    pSVar3 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,2,
                        (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
    b = System_Int32__Parse(pSVar3,(MethodInfo *)0x0);
    pSVar3 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,3,
                        (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
    a = System_Int32__Parse(pSVar3,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  }
  Utility_Color255___ctor(__this_01,r,g,b,a,(MethodInfo *)0x0);
  return __this_01;
}


// Weather.WeatherSchedule$$DeserializeColorValue
// il2cpp: int32_t Weather_WeatherSchedule__DeserializeColorValue (Weather_WeatherSchedule_o* __this, System_String_o* str, const MethodInfo* method);
// 0x58612d0

int32_t Weather_WeatherSchedule__DeserializeColorValue
                  (Weather_WeatherSchedule_o *__this,System_String_o *str,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = System_Int32__Parse(str,(MethodInfo *)0x0);
  return iVar1;
}


// Weather.WeatherSchedule$$DeserializeVector3
// il2cpp: UnityEngine_Vector3_o Weather_WeatherSchedule__DeserializeVector3 (Weather_WeatherSchedule_o* __this, System_String_o* item, const MethodInfo* method);
// 0x58611c0

UnityEngine_Vector3_o
Weather_WeatherSchedule__DeserializeVector3
          (Weather_WeatherSchedule_o *__this,System_String_o *item,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar2;
  MethodInfo *pMVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  
  pMVar3 = (MethodInfo *)item;
  if (Il2CppMethodInitialized_075450b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherSchedule);
    Il2CppMethodInitialized_075450b5 = '\x01';
    uVar1 = (TypeInfo_Weather_WeatherSchedule->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Weather_WeatherSchedule->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Weather_WeatherSchedule);
    __this_00 = Weather_WeatherSchedule__SplitParts(item,pMVar3);
  }
  else {
    __this_00 = Weather_WeatherSchedule__SplitParts(item,pMVar3);
  }
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = System_Collections_Generic_List_object___get_Item
                     ((System_Collections_Generic_List_object__o *)__this_00,0,
                      (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
  UVar6.fields.x = System_Single__Parse(pSVar2,(MethodInfo *)0x0);
  pSVar2 = System_Collections_Generic_List_object___get_Item
                     ((System_Collections_Generic_List_object__o *)__this_00,1,
                      (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
  fVar4 = System_Single__Parse(pSVar2,(MethodInfo *)0x0);
  pSVar2 = System_Collections_Generic_List_object___get_Item
                     ((System_Collections_Generic_List_object__o *)__this_00,2,
                      (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
  fVar5 = System_Single__Parse(pSVar2,(MethodInfo *)0x0);
  UVar6.fields.y = fVar4;
  UVar6.fields.z = fVar5;
  return (UnityEngine_Vector3_o)UVar6.fields;
}


// Weather.WeatherSchedule$$.cctor
// il2cpp: void Weather_WeatherSchedule___cctor (const MethodInfo* method);
// 0x58612e0

void Weather_WeatherSchedule___cctor(MethodInfo *method)

{
  Weather_WeatherSchedule_StaticFields *pWVar1;
  System_Collections_Generic_Dictionary_string__T__o *pSVar2;
  
  if (Il2CppMethodInitialized_075450b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumToDict_WeatherAction);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumToDict_WeatherEffect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumToDict_WeatherValueSelectType);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherSchedule);
    Il2CppMethodInitialized_075450b6 = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pSVar2 = Utility_Util__EnumToDict_Int32Enum_
                     ((MethodInfo_377C170 *)MethodInfo_Utility_Util_EnumToDict_WeatherAction);
  TypeInfo_Weather_WeatherSchedule->static_fields->NameToWeatherAction =
       (System_Collections_Generic_Dictionary_string__WeatherAction__o *)pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Weather_WeatherSchedule->static_fields->NameToWeatherAction);
  pSVar2 = Utility_Util__EnumToDict_Int32Enum_
                     ((MethodInfo_377C170 *)MethodInfo_Utility_Util_EnumToDict_WeatherEffect);
  pWVar1 = TypeInfo_Weather_WeatherSchedule->static_fields;
  pWVar1->NameToWeatherEffect = (System_Collections_Generic_Dictionary_string__WeatherEffect__o *)pSVar2;
  Il2CppCodeGenWriteBarrier(&pWVar1->NameToWeatherEffect);
  pSVar2 = Utility_Util__EnumToDict_Int32Enum_
                     ((MethodInfo_377C170 *)MethodInfo_Utility_Util_EnumToDict_WeatherValueSelectType);
  pWVar1 = TypeInfo_Weather_WeatherSchedule->static_fields;
  pWVar1->NameToWeatherValueSelectType =
       (System_Collections_Generic_Dictionary_string__WeatherValueSelectType__o *)pSVar2;
  Il2CppCodeGenWriteBarrier(&pWVar1->NameToWeatherValueSelectType);
  return;
}


