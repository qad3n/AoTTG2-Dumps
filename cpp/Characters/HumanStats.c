// Type: Characters.HumanStats
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/HumanStats.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HumanStats.cs
// --------------------------------

// Characters.HumanStats$$.ctor
// il2cpp: void Characters_HumanStats___ctor (Characters_HumanStats_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x5bf9090
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bf94f0: lea rdi, [r12 + 0x48]
// asm:   0x5bf94f5: jmp 0x5bf9505
// asm:   0x5bf957c: lea rdi, [r12 + 0x50]
// asm:   0x5bf9581: jmp 0x5bf9591

void Characters_HumanStats___ctor
               (Characters_HumanStats_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__BasePerk__o **targetAddress;
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Characters_OmniDashPerk_c *pCVar3;
  Characters_VerticalDashPerk_c *pCVar4;
  System_Collections_Generic_Dictionary_string__BasePerk__o *__this_00;
  Characters_AdvancedAlloyPerk_o *__this_01;
  System_Collections_Generic_Dictionary_string__int__o *pSVar5;
  Characters_DurableBladesPerk_o *__this_02;
  Characters_RefillTimePerk_o *__this_03;
  Characters_VerticalDashPerk_o *__this_04;
  Characters_OmniDashPerk_o *__this_05;
  MethodInfo *method_00;
  float fVar6;
  
  if (Il2CppMethodInitialized_07547643 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AdvancedAlloyPerk);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BasePerk);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DurableBladesPerk);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_OmniDashPerk);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_RefillTimePerk);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_VerticalDashPerk);
    il2cpp_codegen_initialize_runtime_metadata(&"AdvancedAlloy");
    il2cpp_codegen_initialize_runtime_metadata(&"DurableBlades");
    il2cpp_codegen_initialize_runtime_metadata(&"RefillTime");
    il2cpp_codegen_initialize_runtime_metadata(&"OmniDash");
    il2cpp_codegen_initialize_runtime_metadata(&"VerticalDash");
    Il2CppMethodInitialized_07547643 = '\x01';
  }
  (__this->fields).Speed = 0x50;
  (__this->fields).Gas = 0x50;
  (__this->fields).Ammunition = 0x50;
  (__this->fields).Acceleration = 0x50;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_BasePerk);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_ctor);
  targetAddress = &(__this->fields).Perks;
  (__this->fields).Perks = __this_00;
  Il2CppCodeGenWriteBarrier(targetAddress);
  (__this->fields).CurrentGas = -1.0;
  (__this->fields).MaxGas = -1.0;
  (__this->fields).GasUsage = 0.2;
  (__this->fields).HorseSpeed = 50.0;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._human = human;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._human);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_AdvancedAlloyPerk);
  if (Il2CppMethodInitialized_07547650 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_int);
    Il2CppMethodInitialized_07547650 = '\x01';
  }
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int)
  ;
  System_Collections_Generic_Dictionary_object__int____ctor
            ((System_Collections_Generic_Dictionary_object__int__o *)pSVar5,
             (MethodInfo_4A9CB80 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
  (__this_01->fields).Requirements = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).Requirements);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  (*(__this_01->klass->vtable)._6_SetupRequirements.methodPtr)
            (__this_01,(__this_01->klass->vtable)._6_SetupRequirements.method);
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar2,(Il2CppObject *)"AdvancedAlloy",(Il2CppObject *)__this_01,
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_Add);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)*targetAddress;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_DurableBladesPerk);
    if (Il2CppMethodInitialized_07547650 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_int);
      Il2CppMethodInitialized_07547650 = '\x01';
    }
    pSVar5 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int);
    System_Collections_Generic_Dictionary_object__int____ctor
              ((System_Collections_Generic_Dictionary_object__int__o *)pSVar5,
               (MethodInfo_4A9CB80 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
    (__this_02->fields).Requirements = pSVar5;
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).Requirements);
    System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    (*(__this_02->klass->vtable)._6_SetupRequirements.methodPtr)
              (__this_02,(__this_02->klass->vtable)._6_SetupRequirements.method);
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05bf95d0;
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar2,(Il2CppObject *)"DurableBlades",(Il2CppObject *)__this_02,
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_Add);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)*targetAddress;
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_RefillTimePerk);
    if (Il2CppMethodInitialized_07547650 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_int);
      Il2CppMethodInitialized_07547650 = '\x01';
    }
    pSVar5 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int);
    System_Collections_Generic_Dictionary_object__int____ctor
              ((System_Collections_Generic_Dictionary_object__int__o *)pSVar5,
               (MethodInfo_4A9CB80 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
    (__this_03->fields).Requirements = pSVar5;
    Il2CppCodeGenWriteBarrier(&(__this_03->fields).Requirements);
    System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
    (*(__this_03->klass->vtable)._6_SetupRequirements.methodPtr)
              (__this_03,(__this_03->klass->vtable)._6_SetupRequirements.method);
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05bf95d0;
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar2,(Il2CppObject *)"RefillTime",(Il2CppObject *)__this_03,
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_Add);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)*targetAddress;
    __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_VerticalDashPerk);
    Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk___ctor
              ((Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)__this_04,(MethodInfo *)0x0);
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05bf95d0;
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar2,(Il2CppObject *)"VerticalDash",(Il2CppObject *)__this_04,
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_Add);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)*targetAddress;
    __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_OmniDashPerk);
    Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk___ctor
              ((Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk_o *)__this_05,(MethodInfo *)0x0);
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05bf95d0;
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar2,(Il2CppObject *)"OmniDash",(Il2CppObject *)__this_05,
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_Add);
    if ((System_Collections_Generic_Dictionary_object__object__o *)*targetAddress ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05bf95d0;
    method_00 = (MethodInfo *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)*targetAddress,
                           (Il2CppObject *)"VerticalDash",
                           (MethodInfo_4AAD450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
    pCVar4 = TypeInfo_Characters_VerticalDashPerk;
    if (method_00 == (MethodInfo *)0x0) {
      (__this->fields).VerticalDashPerk = (Characters_VerticalDashPerk_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_Characters_VerticalDashPerk->_2).typeHierarchyDepth;
      if (((((Characters_BasePerk_c *)method_00->methodPointer)->_2).typeHierarchyDepth < bVar1) ||
         ((((Characters_BasePerk_c *)method_00->methodPointer)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Characters_VerticalDashPerk)) goto label_05bf95d5;
      (__this->fields).VerticalDashPerk = (Characters_VerticalDashPerk_o *)method_00;
      if (((((Characters_BasePerk_c *)method_00->methodPointer)->_2).typeHierarchyDepth < bVar1) ||
         ((((Characters_BasePerk_c *)method_00->methodPointer)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)pCVar4)) goto label_05bf95d5;
    }
    Il2CppCodeGenWriteBarrier(&(__this->fields).VerticalDashPerk);
    if ((System_Collections_Generic_Dictionary_object__object__o *)*targetAddress !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      method_00 = (MethodInfo *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)*targetAddress,
                             (Il2CppObject *)"OmniDash",
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
      pCVar3 = TypeInfo_Characters_OmniDashPerk;
      if (method_00 == (MethodInfo *)0x0) {
        (__this->fields).OmniDashPerk = (Characters_OmniDashPerk_o *)0x0;
label_05bf9591:
        Il2CppCodeGenWriteBarrier(&(__this->fields).OmniDashPerk);
        fVar6 = (float)(__this->fields).Gas;
        fVar6 = fVar6 + fVar6 + -35.0;
        (__this->fields).MaxGas = fVar6;
        (__this->fields).CurrentGas = fVar6;
        Characters_HumanStats__UpdateStats(__this,method_00);
        return;
      }
      bVar1 = (TypeInfo_Characters_OmniDashPerk->_2).typeHierarchyDepth;
      if ((bVar1 <= (((Characters_BasePerk_c *)method_00->methodPointer)->_2).typeHierarchyDepth) &&
         ((((Characters_BasePerk_c *)method_00->methodPointer)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_OmniDashPerk)) {
        (__this->fields).OmniDashPerk = (Characters_OmniDashPerk_o *)method_00;
        if ((bVar1 <= (((Characters_BasePerk_c *)method_00->methodPointer)->_2).typeHierarchyDepth) &&
           ((((Characters_BasePerk_c *)method_00->methodPointer)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)pCVar3)) goto label_05bf9591;
      }
label_05bf95d5:
      il2cpp_codegen_raise_invalid_cast_exception(method_00);
    }
  }
label_05bf95d0:
  ThrowNullReferenceException();
}


// Characters.HumanStats$$DisablePerks
// il2cpp: void Characters_HumanStats__DisablePerks (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x5bf98a0
// eh: try 0x5bf9963..0x5bf99a1 -> pad 0x5bf99a8 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5bf99c0..0x5bf99c5 -> pad 0x5bf99e4 cleanup
// eh: try 0x5bf99e7..0x5bf99f1 -> pad 0x5bf99f9 catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bf99a6: jmp 0x5bf99a8
// asm:   0x5bf99a8: mov rbx, rax
// asm:   0x5bf99ab: cmp edx, 1
// asm:   0x5bf99ae: jne 0x5bf99e7
// asm:   0x5bf99b0: mov rdi, rbx
// asm:   0x5bf99b3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5bf99b8: mov rbx, qword ptr [rax]
// asm:   0x5bf99bb: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5bf99c0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5bf99c5: lea rax, [rip + 0x1696434]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BasePerk_Dispose
// asm:   0x5bf99cc: mov rsi, qword ptr [rax]
// asm:   0x5bf99cf: mov rdi, rsp
// asm:   0x5bf99d2: call 0x4de71f0  ; System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose()
// asm:   0x5bf99d7: test rbx, rbx
// asm:   0x5bf99da: je 0x5bf9994
// asm:   0x5bf99dc: mov rdi, rbx
// asm:   0x5bf99df: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5bf99e4: mov rbx, rax
// asm:   0x5bf99e7: lea rdi, [rsp + 0x18]
// asm:   0x5bf99ec: call 0x2fd8e90  ; il2cpp_runtime_helper_02fd8e90()
// asm:   0x5bf99f1: mov rdi, rbx
// asm:   0x5bf99f4: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5bf99f9: mov rdi, rax
// asm:   0x5bf99fc: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_HumanStats__DisablePerks(Characters_HumanStats_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_38;
  undefined8 local_20;
  undefined1 *local_18;
  
  if (Il2CppMethodInitialized_07547644 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BasePerk_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BasePerk_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BasePerk_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_BasePerk_GetEnumerator
              );
    Il2CppMethodInitialized_07547644 = '\x01';
  }
  local_38.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._currentValue = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_01 = System_Collections_Generic_Dictionary_object__object___get_Values
                          (__this_00,
                           (MethodInfo_4AAD2A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Values);
    if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
                (&local_38,__this_01,
                 (MethodInfo_43F93D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_BasePerk_GetEnumerator
                );
      local_20 = 0;
      local_18 = (undefined1 *)&local_38;
      while( true ) {
        bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                          (&local_38,
                           (MethodInfo_4CE7200 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BasePerk_MoveNext
                          );
        if (!bVar1) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                    (&local_38,
                     (MethodInfo_4CE71F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BasePerk_Dispose
                    );
          return;
        }
        if (local_38.fields._currentValue == (Il2CppObject *)0x0) break;
        *(undefined4 *)((long)&local_38.fields._currentValue[1].klass + 4) = 0;
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanStats$$GetPerkPoints
// il2cpp: int32_t Characters_HumanStats__GetPerkPoints (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x5bf9a10
// eh: try 0x5bf9af4..0x5bf9b4d -> pad 0x5bf9b58 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5bf9b70..0x5bf9b75 -> pad 0x5bf9b94 cleanup
// eh: try 0x5bf9b97..0x5bf9ba1 -> pad 0x5bf9ba9 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bf9b52: jmp 0x5bf9b58
// asm:   0x5bf9b54: jmp 0x5bf9b58
// asm:   0x5bf9b56: jmp 0x5bf9b58
// asm:   0x5bf9b58: mov r14, rax
// asm:   0x5bf9b5b: cmp edx, 1
// asm:   0x5bf9b5e: jne 0x5bf9b97
// asm:   0x5bf9b60: mov rdi, r14
// asm:   0x5bf9b63: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5bf9b68: mov r14, qword ptr [rax]
// asm:   0x5bf9b6b: mov qword ptr [rsp + 0x20], r14
// asm:   0x5bf9b70: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5bf9b75: lea rax, [rip + 0x169626c]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BasePerk_Dispose
// asm:   0x5bf9b7c: mov rsi, qword ptr [rax]
// asm:   0x5bf9b7f: mov rdi, rsp
// asm:   0x5bf9b82: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5bf9b87: test r14, r14
// asm:   0x5bf9b8a: je 0x5bf9b33
// asm:   0x5bf9b8c: mov rdi, r14
// asm:   0x5bf9b8f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5bf9b94: mov r14, rax
// asm:   0x5bf9b97: lea rdi, [rsp + 0x20]
// asm:   0x5bf9b9c: call 0x2fd8ec0  ; il2cpp_runtime_helper_02fd8ec0()
// asm:   0x5bf9ba1: mov rdi, r14
// asm:   0x5bf9ba4: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5bf9ba9: mov rdi, rax
// asm:   0x5bf9bac: call 0x2ab61e0  ; __clang_call_terminate()

int32_t Characters_HumanStats__GetPerkPoints(Characters_HumanStats_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_00;
  Characters_BasePerk_o *pCVar3;
  int iVar4;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_07547645 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BasePerk_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BasePerk_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BasePerk_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BasePerk_GetEnumerator);
    Il2CppMethodInitialized_07547645 = '\x01';
  }
  local_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._currentKey = (Il2CppObject *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_00 = System_Collections_Generic_Dictionary_object__object___get_Keys
                          (pSVar1,(MethodInfo_4AAD0F0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Keys);
    if (__this_00 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                (&local_58,__this_00,
                 (MethodInfo_511A520 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BasePerk_GetEnumerator)
      ;
      local_38 = 0;
      iVar4 = 0;
      local_30 = (undefined1 *)&local_58;
      while( true ) {
        bVar2 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                          (&local_58,
                           (MethodInfo_4CE7080 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BasePerk_MoveNext
                          );
        if (!bVar2) {
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                    (&local_58,
                     (MethodInfo_4CE7070 *)
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BasePerk_Dispose
                    );
          return iVar4;
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        pCVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar1,local_58.fields._currentKey,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
        if (pCVar3 == (Characters_BasePerk_o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar4 = iVar4 + (pCVar3->fields).CurrPoints;
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanStats$$UpdateStats
// il2cpp: void Characters_HumanStats__UpdateStats (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x5bf97d0

void Characters_HumanStats__UpdateStats(Characters_HumanStats_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Rigidbody_o *__this_00;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_07547646 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547646 = '\x01';
  }
  pCVar1 = (__this->fields)._human;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pCVar1 = (__this->fields)._human;
    if (((pCVar1 == (Characters_Human_o *)0x0) ||
        (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
       (__this_00 = (pUVar2->fields).Rigidbody, __this_00 == (UnityEngine_Rigidbody_o *)0x0)) {
      ThrowNullReferenceException();
    }
    fVar4 = (float)(__this->fields).Acceleration;
    UnityEngine_Rigidbody__set_mass(__this_00,(fVar4 + fVar4 + -150.0) * -0.001 + 0.5,(MethodInfo *)0x0);
  }
  (__this->fields).RunSpeed = (float)(__this->fields).Speed * 0.4 + -16.0;
  return;
}


// Characters.HumanStats$$ResetGas
// il2cpp: void Characters_HumanStats__ResetGas (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x5bf97b0

void Characters_HumanStats__ResetGas(Characters_HumanStats_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)(__this->fields).Gas;
  fVar1 = fVar1 + fVar1 + -35.0;
  (__this->fields).MaxGas = fVar1;
  (__this->fields).CurrentGas = fVar1;
  return;
}


// Characters.HumanStats$$UseDashGas
// il2cpp: void Characters_HumanStats__UseDashGas (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x5bf9bc0

void Characters_HumanStats__UseDashGas(Characters_HumanStats_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (__this->fields).CurrentGas + -4.0;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  (__this->fields).CurrentGas = fVar1;
  return;
}


// Characters.HumanStats$$UseFrameGas
// il2cpp: void Characters_HumanStats__UseFrameGas (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x5bf9c00

void Characters_HumanStats__UseFrameGas(Characters_HumanStats_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (__this->fields).GasUsage;
  fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar2 = (__this->fields).CurrentGas - fVar1 * fVar2;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  (__this->fields).CurrentGas = fVar2;
  return;
}


// Characters.HumanStats$$UseHookGas
// il2cpp: void Characters_HumanStats__UseHookGas (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x5befbd0

void Characters_HumanStats__UseHookGas(Characters_HumanStats_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (__this->fields).CurrentGas - (__this->fields).GasUsage;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  (__this->fields).CurrentGas = fVar1;
  return;
}


// Characters.HumanStats$$UseTSGas
// il2cpp: void Characters_HumanStats__UseTSGas (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x5bf9c40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bf9c72: jmp 0x5bf9d43

void Characters_HumanStats__UseTSGas(Characters_HumanStats_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  long *plVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_07547647 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&"StunGasPenalty");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_07547647 = '\x01';
    uVar1 = (TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
    pSVar2 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
  }
  else {
    pSVar2 = *(SimpleJSONFixed_JSONNode_o **)((Il2CppClass *)TypeInfo_Characters_CharacterData)->static_fields
    ;
  }
  if (((pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
      (pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar2,"Thunderspear",(pSVar2->klass->vtable)._7_get_Item.method),
      pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0)) ||
     (plVar3 = (long *)(*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar2,"StunGasPenalty",
                                  *(MethodInfo **)((long)&(pSVar2->klass->vtable)._7_get_Item + 8)),
     plVar3 == (long *)0x0)) {
    ThrowNullReferenceException();
  }
  fVar4 = (float)(**(code **)(*plVar3 + 0x388))(plVar3,*(undefined8 *)(*plVar3 + 0x390));
  fVar4 = fVar4 * -100.0 + (__this->fields).CurrentGas;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  (__this->fields).CurrentGas = fVar4;
  return;
}


// Characters.HumanStats$$UseGas
// il2cpp: void Characters_HumanStats__UseGas (Characters_HumanStats_o* __this, float amount, const MethodInfo* method);
// 0x5bf9be0

void Characters_HumanStats__UseGas(Characters_HumanStats_o *__this,float amount,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (__this->fields).CurrentGas - amount;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  (__this->fields).CurrentGas = fVar1;
  return;
}


// Characters.HumanStats$$Deserialize
// il2cpp: Characters_HumanStats_o* Characters_HumanStats__Deserialize (Characters_HumanStats_o* stats, System_String_o* str, const MethodInfo* method);
// 0x5bf9d50
// eh: try 0x5bf9e41..0x5bfa17a -> pad 0x5bfa198 (+33 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5bfa1c7..0x5bfa2b4 -> pad 0x5bfa2b4 (+1 call sites) cleanup
// eh: try 0x5bfa2b7..0x5bfa2bc -> pad 0x5bfa2c4 catch (...) [compiler noexcept guard]
// asm: 80 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bfa17a: jmp 0x5bfa1b0
// asm:   0x5bfa17c: jmp 0x5bfa1b0
// asm:   0x5bfa17e: jmp 0x5bfa1b0
// asm:   0x5bfa180: jmp 0x5bfa1b0
// asm:   0x5bfa182: jmp 0x5bfa1b0
// asm:   0x5bfa184: jmp 0x5bfa1b0
// asm:   0x5bfa186: jmp 0x5bfa1b0
// asm:   0x5bfa188: jmp 0x5bfa1b0
// asm:   0x5bfa18a: jmp 0x5bfa1b0
// asm:   0x5bfa18c: jmp 0x5bfa1b0
// asm:   0x5bfa18e: jmp 0x5bfa1b0
// asm:   0x5bfa190: jmp 0x5bfa1b0
// asm:   0x5bfa192: jmp 0x5bfa1b0
// asm:   0x5bfa194: jmp 0x5bfa1b0
// asm:   0x5bfa196: jmp 0x5bfa1b0
// asm:   0x5bfa198: jmp 0x5bfa1b0
// asm:   0x5bfa19a: jmp 0x5bfa1b0
// asm:   0x5bfa19c: jmp 0x5bfa1b0
// asm:   0x5bfa19e: jmp 0x5bfa1b0
// asm:   0x5bfa1a0: jmp 0x5bfa1b0
// asm:   0x5bfa1a2: jmp 0x5bfa1b0
// asm:   0x5bfa1a4: jmp 0x5bfa1b0
// asm:   0x5bfa1a6: jmp 0x5bfa1b0
// asm:   0x5bfa1a8: jmp 0x5bfa1b0
// asm:   0x5bfa1aa: jmp 0x5bfa1b0
// asm:   0x5bfa1ac: jmp 0x5bfa1b0
// asm:   0x5bfa1ae: jmp 0x5bfa1b0
// asm:   0x5bfa1b0: mov rbx, rax
// asm:   0x5bfa1b3: cmp edx, 1
// asm:   0x5bfa1b6: jne 0x5bfa2bc
// asm:   0x5bfa1bc: mov rdi, rbx
// asm:   0x5bfa1bf: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5bfa1c4: mov rbx, rax
// asm:   0x5bfa1c7: lea rdi, [rip + 0x167def2]  ; TypeInfo_System_Exception
// asm:   0x5bfa1ce: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5bfa1d3: mov rcx, qword ptr [rbx]
// asm:   0x5bfa1d6: mov rsi, qword ptr [rcx]
// asm:   0x5bfa1d9: mov rdi, rax
// asm:   0x5bfa1dc: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5bfa1e1: test al, al
// asm:   0x5bfa1e3: je 0x5bfa293
// asm:   0x5bfa1e9: mov rbx, qword ptr [rbx]
// asm:   0x5bfa1ec: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5bfa1f1: test rbx, rbx
// asm:   0x5bfa1f4: je 0x5bfa28e
// asm:   0x5bfa1fa: mov rax, qword ptr [rbx]
// asm:   0x5bfa1fd: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5bfa204: mov rdi, rbx
// asm:   0x5bfa207: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5bfa20d: mov rbx, rax
// asm:   0x5bfa210: lea rdi, [rip + 0x16e1171]  ; "Exception while loading human stats: "
// asm:   0x5bfa217: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5bfa21c: mov rdi, rax
// asm:   0x5bfa21f: mov rsi, rbx
// asm:   0x5bfa222: xor edx, edx
// asm:   0x5bfa224: call 0x53f0320  ; System_String__Concat()
// asm:   0x5bfa229: mov rbx, rax
// asm:   0x5bfa22c: lea rdi, [rip + 0x167d415]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5bfa233: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5bfa238: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5bfa23f: jne 0x5bfa249
// asm:   0x5bfa241: mov rdi, rax
// asm:   0x5bfa244: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5bfa249: mov rdi, rbx
// asm:   0x5bfa24c: xor esi, esi
// asm:   0x5bfa24e: call 0x69c42a0  ; UnityEngine_Debug__Log()
// asm:   0x5bfa293: mov edi, 8
// asm:   0x5bfa298: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5bfa29d: mov rcx, qword ptr [rbx]
// asm:   0x5bfa2a0: mov qword ptr [rax], rcx
// asm:   0x5bfa2a3: lea rsi, [rip + 0x1233256]
// asm:   0x5bfa2aa: mov rdi, rax
// asm:   0x5bfa2ad: xor edx, edx
// asm:   0x5bfa2af: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5bfa2b4: mov rbx, rax
// asm:   0x5bfa2b7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5bfa2bc: mov rdi, rbx
// asm:   0x5bfa2bf: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5bfa2c4: mov rdi, rax
// asm:   0x5bfa2c7: call 0x2ab61e0  ; __clang_call_terminate()

Characters_HumanStats_o *
Characters_HumanStats__Deserialize(Characters_HumanStats_o *stats,System_String_o *str,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Characters_Human_o *human;
  bool bVar2;
  int32_t iVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_String_o *key;
  Characters_BasePerk_o *pCVar6;
  Characters_HumanStats_o *__this;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar7;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_110;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_07547648 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanStats);
    il2cpp_codegen_initialize_runtime_metadata(&"Acceleration");
    il2cpp_codegen_initialize_runtime_metadata(&"Speed");
    il2cpp_codegen_initialize_runtime_metadata(&"Ammunition");
    il2cpp_codegen_initialize_runtime_metadata(&"Gas");
    il2cpp_codegen_initialize_runtime_metadata(&"Perks");
    Il2CppMethodInitialized_07547648 = '\x01';
  }
  local_78.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.m_Array.fields._index = 0;
  local_78.m_Array.fields._version = 0;
  local_78.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_78.m_Object.fields._getEnumeratorRetType = 0;
  local_78.m_Object.fields._36_4_ = 0;
  local_78.m_Object.fields._version = 0;
  local_78.m_Object.fields._index = 0;
  local_78.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_78.type = 0;
  local_78._4_4_ = 0;
  local_78.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_c8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c8.m_Array.fields._index = 0;
  local_c8.m_Array.fields._version = 0;
  local_c8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_c8.m_Object.fields._getEnumeratorRetType = 0;
  local_c8.m_Object.fields._36_4_ = 0;
  local_c8.m_Object.fields._version = 0;
  local_c8.m_Object.fields._index = 0;
  local_c8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c8.type = 0;
  local_c8._4_4_ = 0;
  local_c8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar2 = System_String__op_Inequality
                    (str,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (bVar2) {
    pSVar4 = SimpleJSONFixed_JSON__Parse(str,(MethodInfo *)0x0);
    if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar4,"Speed",(pSVar4->klass->vtable)._7_get_Item.method);
    if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar3 = (*(pSVar5->klass->vtable)._35_get_AsInt.methodPtr)
                      (pSVar5,(pSVar5->klass->vtable)._35_get_AsInt.method);
    if (stats == (Characters_HumanStats_o *)0x0) {
      ThrowNullReferenceException();
    }
    (stats->fields).Speed = iVar3;
    pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar4,"Gas",(pSVar4->klass->vtable)._7_get_Item.method);
    if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar3 = (*(pSVar5->klass->vtable)._35_get_AsInt.methodPtr)
                      (pSVar5,(pSVar5->klass->vtable)._35_get_AsInt.method);
    (stats->fields).Gas = iVar3;
    pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar4,"Ammunition",(pSVar4->klass->vtable)._7_get_Item.method);
    if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar3 = (*(pSVar5->klass->vtable)._35_get_AsInt.methodPtr)
                      (pSVar5,(pSVar5->klass->vtable)._35_get_AsInt.method);
    (stats->fields).Ammunition = iVar3;
    pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar4,"Acceleration",(pSVar4->klass->vtable)._7_get_Item.method);
    if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar3 = (*(pSVar5->klass->vtable)._35_get_AsInt.methodPtr)
                      (pSVar5,(pSVar5->klass->vtable)._35_get_AsInt.method);
    (stats->fields).Acceleration = iVar3;
    pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar4,"Perks",(pSVar4->klass->vtable)._7_get_Item.method);
    if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    SimpleJSONFixed_JSONNode__get_Keys
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_110,pSVar5,(MethodInfo *)0x0);
    local_c8.m_Array.fields._current = local_110.m_Array.fields._current;
    local_c8.m_Array.fields._list = local_110.m_Array.fields._list;
    local_c8.m_Array.fields._index = local_110.m_Array.fields._index;
    local_c8.m_Array.fields._version = local_110.m_Array.fields._version;
    local_c8.m_Object.fields._current.fields.value = local_110.m_Object.fields._current.fields.value;
    local_c8.m_Object.fields._getEnumeratorRetType = local_110.m_Object.fields._getEnumeratorRetType;
    local_c8.m_Object.fields._36_4_ = local_110.m_Object.fields._36_4_;
    local_c8.m_Object.fields._version = local_110.m_Object.fields._version;
    local_c8.m_Object.fields._index = local_110.m_Object.fields._index;
    local_c8.m_Object.fields._current.fields.key = local_110.m_Object.fields._current.fields.key;
    local_c8.type = local_110.type;
    local_c8._4_4_ = local_110._4_4_;
    local_c8.m_Object.fields._dictionary = local_110.m_Object.fields._dictionary;
    SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_110,
               (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c8,(MethodInfo *)0x0);
    local_78.m_Array.fields._current = local_110.m_Array.fields._current;
    local_78.m_Array.fields._list = local_110.m_Array.fields._list;
    local_78.m_Array.fields._index = local_110.m_Array.fields._index;
    local_78.m_Array.fields._version = local_110.m_Array.fields._version;
    local_78.m_Object.fields._current.fields.value = local_110.m_Object.fields._current.fields.value;
    local_78.m_Object.fields._getEnumeratorRetType = local_110.m_Object.fields._getEnumeratorRetType;
    local_78.m_Object.fields._36_4_ = local_110.m_Object.fields._36_4_;
    local_78.m_Object.fields._version = local_110.m_Object.fields._version;
    local_78.m_Object.fields._index = local_110.m_Object.fields._index;
    local_78.m_Object.fields._current.fields.key = local_110.m_Object.fields._current.fields.key;
    local_78.type = local_110.type;
    local_78._4_4_ = local_110._4_4_;
    local_78.m_Object.fields._dictionary = local_110.m_Object.fields._dictionary;
    while( true ) {
      method_01 = (MethodInfo *)0x0;
      bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_78,(MethodInfo *)0x0);
      if (!bVar2) break;
      key = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_78,(MethodInfo *)0x0);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(stats->fields).Perks;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar1,(Il2CppObject *)key,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_ContainsKey);
      if (bVar2) {
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(stats->fields).Perks;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pCVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar1,(Il2CppObject *)key,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
        pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar4,"Perks",(pSVar4->klass->vtable)._7_get_Item.method);
        if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar5,key,(pSVar5->klass->vtable)._7_get_Item.method);
        if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar3 = (**(code **)((long)pSVar5->klass + 0x368))(pSVar5);
        if (pCVar6 == (Characters_BasePerk_o *)0x0) {
          ThrowNullReferenceException();
        }
        (pCVar6->fields).CurrPoints = iVar3;
      }
    }
    bVar2 = Characters_HumanStats__Validate(stats,method_01);
    if (bVar2) {
      fVar7 = (float)(stats->fields).Gas;
      fVar7 = fVar7 + fVar7 + -35.0;
      (stats->fields).MaxGas = fVar7;
      (stats->fields).CurrentGas = fVar7;
      Characters_HumanStats__UpdateStats(stats,method_01);
      return stats;
    }
  }
  else if (stats == (Characters_HumanStats_o *)0x0) {
    ThrowNullReferenceException();
  }
  human = (stats->fields)._human;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanStats);
  Characters_HumanStats___ctor(__this,human,method_00);
  return __this;
}


// Characters.HumanStats$$Serialize
// il2cpp: System_String_o* Characters_HumanStats__Serialize (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x5bfa4e0
// eh: try 0x5bfa7b3..0x5bfa980 -> pad 0x5bfa996 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5bfa9b8..0x5bfa9bd -> pad 0x5bfa9e2 cleanup
// eh: try 0x5bfa9e5..0x5bfa9ef -> pad 0x5bfa9f7 catch (...) [compiler noexcept guard]
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bfa980: jmp 0x5bfa99c
// asm:   0x5bfa982: jmp 0x5bfa99c
// asm:   0x5bfa984: jmp 0x5bfa99c
// asm:   0x5bfa986: jmp 0x5bfa99c
// asm:   0x5bfa988: jmp 0x5bfa99c
// asm:   0x5bfa98a: jmp 0x5bfa99c
// asm:   0x5bfa98c: jmp 0x5bfa99c
// asm:   0x5bfa98e: jmp 0x5bfa99c
// asm:   0x5bfa990: jmp 0x5bfa99c
// asm:   0x5bfa992: jmp 0x5bfa99c
// asm:   0x5bfa994: jmp 0x5bfa99c
// asm:   0x5bfa996: jmp 0x5bfa99c
// asm:   0x5bfa998: jmp 0x5bfa99c
// asm:   0x5bfa99a: jmp 0x5bfa99c
// asm:   0x5bfa99c: mov rbx, rax
// asm:   0x5bfa99f: mov rbp, qword ptr [rsp]
// asm:   0x5bfa9a3: cmp edx, 1
// asm:   0x5bfa9a6: jne 0x5bfa9e5
// asm:   0x5bfa9a8: mov rdi, rbx
// asm:   0x5bfa9ab: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5bfa9b0: mov rbx, qword ptr [rax]
// asm:   0x5bfa9b3: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5bfa9b8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5bfa9bd: lea rax, [rip + 0x1695424]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BasePerk_Dispose
// asm:   0x5bfa9c4: mov rsi, qword ptr [rax]
// asm:   0x5bfa9c7: lea rdi, [rsp + 0x10]
// asm:   0x5bfa9cc: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5bfa9d1: test rbx, rbx
// asm:   0x5bfa9d4: je 0x5bfa8de
// asm:   0x5bfa9da: mov rdi, rbx
// asm:   0x5bfa9dd: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5bfa9e2: mov rbx, rax
// asm:   0x5bfa9e5: lea rdi, [rsp + 0x30]
// asm:   0x5bfa9ea: call 0x2fd8ef0  ; il2cpp_runtime_helper_02fd8ef0()
// asm:   0x5bfa9ef: mov rdi, rbx
// asm:   0x5bfa9f2: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5bfa9f7: mov rdi, rax
// asm:   0x5bfa9fa: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o * Characters_HumanStats__Serialize(Characters_HumanStats_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  SimpleJSONFixed_JSONObject_o *__this_00;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  SimpleJSONFixed_JSONObject_o *__this_01;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_02;
  Characters_BasePerk_o *pCVar6;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_68;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07547649 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BasePerk_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BasePerk_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BasePerk_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BasePerk_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&"Acceleration");
    il2cpp_codegen_initialize_runtime_metadata(&"Speed");
    il2cpp_codegen_initialize_runtime_metadata(&"Ammunition");
    il2cpp_codegen_initialize_runtime_metadata(&"Gas");
    il2cpp_codegen_initialize_runtime_metadata(&"Perks");
    Il2CppMethodInitialized_07547649 = '\x01';
  }
  local_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._currentKey = (Il2CppObject *)0x0;
  bVar3 = Characters_HumanStats__Validate(__this,method);
  if (!bVar3) {
    (__this->fields).Speed = 0x50;
    (__this->fields).Gas = 0x50;
    (__this->fields).Ammunition = 0x50;
    (__this->fields).Acceleration = 0x50;
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05bfa943;
    System_Collections_Generic_Dictionary_object__object___Clear
              (pSVar1,(MethodInfo_4AAD690 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_Clear);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  pSVar4 = System_Int32__ToString(&(__this->fields).Speed,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
  if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"Speed",pSVar5,(__this_00->klass->vtable)._8_set_Item.method);
    pSVar4 = System_Int32__ToString(&(__this->fields).Gas,(MethodInfo *)0x0);
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"Gas",pSVar5,(__this_00->klass->vtable)._8_set_Item.method);
    pSVar4 = System_Int32__ToString(&(__this->fields).Ammunition,(MethodInfo *)0x0);
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"Ammunition",pSVar5,(__this_00->klass->vtable)._8_set_Item.method);
    pSVar4 = System_Int32__ToString(&(__this->fields).Acceleration,(MethodInfo *)0x0);
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"Acceleration",pSVar5,(__this_00->klass->vtable)._8_set_Item.method);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this_01,(MethodInfo *)0x0);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_02 = System_Collections_Generic_Dictionary_object__object___get_Keys
                            (pSVar1,(MethodInfo_4AAD0F0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Keys)
      ;
      if (__this_02 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
        System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_48,
                   __this_02,
                   (MethodInfo_511A520 *)
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BasePerk_GetEnumerator
                  );
        local_68.fields._currentKey = (Il2CppObject *)local_38;
        local_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_48._0_8_;
        local_68.fields._index = local_48._8_4_;
        local_68.fields._version = local_48._12_4_;
        local_48._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_48._8_8_ = &local_68;
        if (__this_01 == (SimpleJSONFixed_JSONObject_o *)0x0) {
          do {
            bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                              (&local_68,
                               (MethodInfo_4CE7080 *)
                               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BasePerk_MoveNext
                              );
            pIVar2 = local_68.fields._currentKey;
            if (!bVar3) goto label_05bfa8c6;
            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
            if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05bfa924;
            pCVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar1,local_68.fields._currentKey,
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
            if (pCVar6 == (Characters_BasePerk_o *)0x0) goto label_05bfa929;
          } while ((pCVar6->fields).CurrPoints < 1);
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            pCVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar1,pIVar2,
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
            if (pCVar6 != (Characters_BasePerk_o *)0x0) {
              pSVar4 = System_Int32__ToString(&(pCVar6->fields).CurrPoints,(MethodInfo *)0x0);
              if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
              }
              SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
              ThrowNullReferenceException();
            }
label_05bfa93e:
            ThrowNullReferenceException();
          }
label_05bfa8c1:
          ThrowNullReferenceException();
        }
        do {
          do {
            bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                              (&local_68,
                               (MethodInfo_4CE7080 *)
                               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BasePerk_MoveNext
                              );
            pIVar2 = local_68.fields._currentKey;
            if (!bVar3) {
label_05bfa8c6:
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                        (&local_68,
                         (MethodInfo_4CE7070 *)
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BasePerk_Dispose
                        );
              (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                        (__this_00,"Perks",(SimpleJSONFixed_JSONNode_o *)__this_01,
                         (__this_00->klass->vtable)._8_set_Item.method);
              pSVar4 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                                 (__this_00,(__this_00->klass->vtable)._3_ToString.method);
              return pSVar4;
            }
            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
            if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05bfa924:
              ThrowNullReferenceException();
            }
            pCVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar1,local_68.fields._currentKey,
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
            if (pCVar6 == (Characters_BasePerk_o *)0x0) {
label_05bfa929:
              ThrowNullReferenceException();
            }
          } while ((pCVar6->fields).CurrPoints < 1);
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
          if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05bfa8c1;
          pCVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar1,pIVar2,
                              (MethodInfo_4AAD450 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
          if (pCVar6 == (Characters_BasePerk_o *)0x0) goto label_05bfa93e;
          pSVar4 = System_Int32__ToString(&(pCVar6->fields).CurrPoints,(MethodInfo *)0x0);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
          (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
                    (__this_01,(System_String_o *)pIVar2,pSVar5,(__this_01->klass->vtable)._8_set_Item.method)
          ;
        } while( true );
      }
    }
  }
label_05bfa943:
  ThrowNullReferenceException();
}


// Characters.HumanStats$$Validate
// il2cpp: bool Characters_HumanStats__Validate (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x5bfa2d0
// eh: try 0x5bfa413..0x5bfa452 -> pad 0x5bfa45b (+2 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5bfa472..0x5bfa477 -> pad 0x5bfa4ba cleanup
// eh: try 0x5bfa4bd..0x5bfa4c5 -> pad 0x5bfa4cd catch (...) [compiler noexcept guard]
// asm: 17 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bfa457: jmp 0x5bfa45b
// asm:   0x5bfa459: jmp 0x5bfa45b
// asm:   0x5bfa45b: mov rbx, rax
// asm:   0x5bfa45e: cmp edx, 1
// asm:   0x5bfa461: jne 0x5bfa4bd
// asm:   0x5bfa463: mov rdi, rbx
// asm:   0x5bfa466: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5bfa46b: mov rax, qword ptr [rax]
// asm:   0x5bfa46e: mov qword ptr [rsp], rax
// asm:   0x5bfa472: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5bfa4ba: mov rbx, rax
// asm:   0x5bfa4bd: mov rdi, rsp
// asm:   0x5bfa4c0: call 0x2fd8f20  ; il2cpp_runtime_helper_02fd8f20()
// asm:   0x5bfa4c5: mov rdi, rbx
// asm:   0x5bfa4c8: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5bfa4cd: mov rdi, rax
// asm:   0x5bfa4d0: call 0x2ab61e0  ; __clang_call_terminate()

bool Characters_HumanStats__Validate(Characters_HumanStats_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar5;
  char cVar6;
  int32_t iVar7;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  MethodInfo *method_00;
  undefined8 local_48;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *local_40;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_38;
  
  if (Il2CppMethodInitialized_0754764a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Values);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BasePerk_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BasePerk_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BasePerk_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanStats);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_BasePerk_GetEnumerator
              );
    Il2CppMethodInitialized_0754764a = '\x01';
  }
  local_38.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._currentValue = (Il2CppObject *)0x0;
  iVar1 = (__this->fields).Speed;
  iVar2 = (__this->fields).Gas;
  iVar3 = (__this->fields).Ammunition;
  iVar4 = (__this->fields).Acceleration;
  if ((((((0x140 < iVar2 + iVar1 + iVar3 + iVar4) || (iVar1 < 0x32)) || (100 < iVar1)) ||
       ((iVar2 < 0x32 || (100 < iVar2)))) || ((iVar3 < 0x32 || ((100 < iVar3 || (iVar4 < 0x32)))))) ||
     (100 < iVar4)) {
    return false;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
  if ((__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (__this_01 = System_Collections_Generic_Dictionary_object__object___get_Values
                            (__this_00,
                             (MethodInfo_4AAD2A0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Values),
     __this_01 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
            (&local_38,__this_01,
             (MethodInfo_43F93D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_BasePerk_GetEnumerator);
  local_48 = 0;
  local_40 = &local_38;
  while( true ) {
    method_00 = 
    MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BasePerk_MoveNext;
    bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                      (&local_38,
                       (MethodInfo_4CE7200 *)
                       MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BasePerk_MoveNext
                      );
    if (!bVar5) {
      il2cpp_runtime_helper_02fd8f20(&local_48);
      iVar7 = Characters_HumanStats__GetPerkPoints(__this,method_00);
      if ((TypeInfo_Characters_HumanStats->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanStats);
      }
      return iVar7 <= TypeInfo_Characters_HumanStats->static_fields->MaxPerkPoints;
    }
    if (local_38.fields._currentValue == (Il2CppObject *)0x0) break;
    cVar6 = (*(local_38.fields._currentValue)->klass->vtable[8].methodPtr)
                      (local_38.fields._currentValue,(__this->fields).Perks,
                       (local_38.fields._currentValue)->klass->vtable[8].method);
    if (cVar6 == '\0') {
      il2cpp_runtime_helper_02fd8f20(&local_48);
      return false;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanStats$$.cctor
// il2cpp: void Characters_HumanStats___cctor (const MethodInfo* method);
// 0x5bfaa00

void Characters_HumanStats___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754764b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanStats);
    Il2CppMethodInitialized_0754764b = '\x01';
  }
  TypeInfo_Characters_HumanStats->static_fields->MaxPerkPoints = 3;
  return;
}


