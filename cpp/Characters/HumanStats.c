// Type: Characters.HumanStats
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HumanStats.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HumanStats.cs
// --------------------------------

// Characters.HumanStats$$.ctor
// il2cpp: void Characters_HumanStats___ctor (Characters_HumanStats_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x182160350

void Characters_HumanStats___ctor
               (Characters_HumanStats_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__BasePerk__o *__this_00;
  Characters_BasePerk_o *__this_01;
  Characters_DurableBladesPerk_o *__this_02;
  Characters_RefillTimePerk_o *__this_03;
  Characters_VerticalDashPerk_o *pCVar3;
  Characters_OmniDashPerk_o *__this_04;
  float fVar4;
  
  if (Il2CppMethodInitialized_184346c73 == '\0') {
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
    Il2CppMethodInitialized_184346c73 = '\x01';
  }
  (__this->fields).Speed = 0x50;
  (__this->fields).Gas = 0x50;
  (__this->fields).Ammunition = 0x50;
  (__this->fields).Acceleration = 0x50;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_BasePerk);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_ctor);
  (__this->fields).Perks = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Perks,__this_00);
  (__this->fields).CurrentGas = -1.0;
  (__this->fields).MaxGas = -1.0;
  (__this->fields).GasUsage = 0.2;
  (__this->fields).HorseSpeed = 50.0;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._human = human;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._human,human);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
  __this_01 = (Characters_BasePerk_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_AdvancedAlloyPerk);
  Characters_BasePerk___ctor(__this_01,(MethodInfo *)0x0);
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar2,(Il2CppObject *)"AdvancedAlloy",(Il2CppObject *)__this_01,
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_Add);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_DurableBladesPerk);
    Characters_BasePerk___ctor((Characters_BasePerk_o *)__this_02,(MethodInfo *)0x0);
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar2,(Il2CppObject *)"DurableBlades",(Il2CppObject *)__this_02,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_Add);
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_RefillTimePerk);
      Characters_BasePerk___ctor((Characters_BasePerk_o *)__this_03,(MethodInfo *)0x0);
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar2,(Il2CppObject *)"RefillTime",(Il2CppObject *)__this_03,
                   (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_Add)
        ;
        pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
        pCVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_VerticalDashPerk);
        Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk___ctor
                  ((Assets_Scripts_Characters_Human_Perks_PowerPerk_o *)pCVar3,(MethodInfo *)0x0);
        if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___Add
                    (pSVar2,(Il2CppObject *)"VerticalDash",(Il2CppObject *)pCVar3,
                     (MethodInfo_146B4B0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_Add);
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
          __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_OmniDashPerk);
          Assets_Scripts_Characters_Human_Perks_DivisivePowerPerk___ctor
                    ((Assets_Scripts_Characters_Human_Perks_PowerPerk_o *)__this_04,(MethodInfo *)0x0);
          if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___Add
                      (pSVar2,(Il2CppObject *)"OmniDash",(Il2CppObject *)__this_04,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_Add);
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
            if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              pCVar3 = (Characters_VerticalDashPerk_o *)
                       System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar2,(Il2CppObject *)"VerticalDash",
                                  (MethodInfo_147A5B0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
              if (pCVar3 == (Characters_VerticalDashPerk_o *)0x0) {
                (__this->fields).VerticalDashPerk = (Characters_VerticalDashPerk_o *)0x0;
                pCVar3 = (Characters_VerticalDashPerk_o *)0x0;
              }
              else {
                bVar1 = (TypeInfo_Characters_VerticalDashPerk->_2).typeHierarchyDepth;
                if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_Characters_VerticalDashPerk)) {
                  il2cpp_codegen_raise_invalid_cast_exception(pCVar3);
                }
                (__this->fields).VerticalDashPerk = pCVar3;
                bVar1 = (TypeInfo_Characters_VerticalDashPerk->_2).typeHierarchyDepth;
                if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
                   ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_Characters_VerticalDashPerk)) {
                  il2cpp_codegen_raise_invalid_cast_exception(pCVar3);
                }
              }
              Il2CppCodeGenWriteBarrier(&(__this->fields).VerticalDashPerk,pCVar3);
              pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
              if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                pCVar3 = (Characters_VerticalDashPerk_o *)
                         System_Collections_Generic_Dictionary_object__object___get_Item
                                   (pSVar2,(Il2CppObject *)"OmniDash",
                                    (MethodInfo_147A5B0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item)
                ;
                if (pCVar3 == (Characters_VerticalDashPerk_o *)0x0) {
                  (__this->fields).OmniDashPerk = (Characters_OmniDashPerk_o *)0x0;
                  pCVar3 = (Characters_VerticalDashPerk_o *)0x0;
                }
                else {
                  bVar1 = (TypeInfo_Characters_OmniDashPerk->_2).typeHierarchyDepth;
                  if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
                     ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                      (Il2CppClass *)TypeInfo_Characters_OmniDashPerk)) {
                    il2cpp_codegen_raise_invalid_cast_exception(pCVar3);
                  }
                  (__this->fields).OmniDashPerk = (Characters_OmniDashPerk_o *)pCVar3;
                  bVar1 = (TypeInfo_Characters_OmniDashPerk->_2).typeHierarchyDepth;
                  if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
                     ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                      (Il2CppClass *)TypeInfo_Characters_OmniDashPerk)) {
                    il2cpp_codegen_raise_invalid_cast_exception(pCVar3);
                  }
                }
                Il2CppCodeGenWriteBarrier(&(__this->fields).OmniDashPerk,pCVar3);
                fVar4 = (float)(__this->fields).Gas;
                fVar4 = (fVar4 + fVar4) - 35.0;
                (__this->fields).MaxGas = fVar4;
                (__this->fields).CurrentGas = fVar4;
                Characters_HumanStats__UpdateStats(__this,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanStats$$DisablePerks
// il2cpp: void Characters_HumanStats__DisablePerks (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x18215f790
// eh: try 0x18215f860..0x18215f8c1 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18215f895: mov rdx, qword ptr [rip + 0x1f58e24]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BasePerk_Dispose
// asm:   0x18215f89c: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18215f8a1: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18215f8a6: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18215f8ab: test rcx, rcx
// asm:   0x18215f8ae: jne 0x18215f8c1
// asm:   0x18215f8c1: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Characters_HumanStats__DisablePerks(Characters_HumanStats_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__BasePerk__o *__this_00;
  bool bVar1;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_28;
  
  if (Il2CppMethodInitialized_184346c74 == '\0') {
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
    Il2CppMethodInitialized_184346c74 = '\x01';
  }
  local_28.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._currentValue = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).Perks;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__BasePerk__o *)0x0) {
    __this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           (MethodInfo_13C65A0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Values);
    if (__this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_40,
                 __this_01,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_BasePerk_GetEnumerator
                );
      local_28.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_40._0_8_;
      local_28.fields._index = local_40._8_4_;
      local_28.fields._version = local_40._12_4_;
      local_28.fields._currentValue = local_30;
      local_40._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_40._8_8_ = &local_28;
      while( true ) {
        bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                          (&local_28,
                           (MethodInfo_155CFB0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BasePerk_MoveNext
                          );
        if (!bVar1) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                     MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BasePerk_Dispose
                    );
          return;
        }
        if (local_28.fields._currentValue == (Il2CppObject *)0x0) break;
        *(undefined4 *)((longlong)&local_28.fields._currentValue[1].klass + 4) = 0;
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanStats$$GetPerkPoints
// il2cpp: int32_t Characters_HumanStats__GetPerkPoints (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x18215f8d0
// eh: try 0x18215f9b0..0x18215fa44 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18215f9fe: mov rdx, qword ptr [rip + 0x1f58a1b]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BasePerk_Dispose
// asm:   0x18215fa05: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18215fa0a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18215fa0f: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18215fa14: test rcx, rcx
// asm:   0x18215fa17: jne 0x18215fa44
// asm:   0x18215fa19: mov edi, dword ptr [rsp + 0x70]
// asm:   0x18215fa44: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

int32_t Characters_HumanStats__GetPerkPoints(Characters_HumanStats_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__BasePerk__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar1;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  Characters_BasePerk_o *pCVar2;
  int iVar3;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_28;
  
  if (Il2CppMethodInitialized_184346c75 == '\0') {
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
    Il2CppMethodInitialized_184346c75 = '\x01';
  }
  local_28.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._currentKey = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).Perks;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__BasePerk__o *)0x0) {
    __this_02 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           (MethodInfo_13C6500 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Keys);
    if (__this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      iVar3 = 0;
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_40,
                 __this_02,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BasePerk_GetEnumerator)
      ;
      local_28.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_40._0_8_;
      local_28.fields._index = local_40._8_4_;
      local_28.fields._version = local_40._12_4_;
      local_28.fields._currentKey = local_30;
      local_40._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_40._8_8_ = &local_28;
      while( true ) {
        bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                          (&local_28,
                           (MethodInfo_156BDD0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BasePerk_MoveNext
                          );
        if (!bVar1) {
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BasePerk_Dispose
                    );
          return iVar3;
        }
        __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
        if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        pCVar2 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (__this_01,local_28.fields._currentKey,
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
        if (pCVar2 == (Characters_BasePerk_o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar3 = iVar3 + (pCVar2->fields).CurrPoints;
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanStats$$UpdateStats
// il2cpp: void Characters_HumanStats__UpdateStats (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x18215fe90

void Characters_HumanStats__UpdateStats(Characters_HumanStats_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Rigidbody_o *__this_00;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184346c76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c76 = '\x01';
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
    UnityEngine_Rigidbody__set_mass(__this_00,0.5 - ((fVar4 + fVar4) - 150.0) * 0.001,(MethodInfo *)0x0);
  }
  (__this->fields).RunSpeed = (float)(__this->fields).Speed * 0.4 - 16.0;
  return;
}


// Characters.HumanStats$$ResetGas
// il2cpp: void Characters_HumanStats__ResetGas (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x18215fa50

void Characters_HumanStats__ResetGas(Characters_HumanStats_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)(__this->fields).Gas;
  fVar1 = (fVar1 + fVar1) - 35.0;
  (__this->fields).MaxGas = fVar1;
  (__this->fields).CurrentGas = fVar1;
  return;
}


// Characters.HumanStats$$UseDashGas
// il2cpp: void Characters_HumanStats__UseDashGas (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x18215ff60

void Characters_HumanStats__UseDashGas(Characters_HumanStats_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (__this->fields).CurrentGas - 4.0;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  (__this->fields).CurrentGas = fVar1;
  return;
}


// Characters.HumanStats$$UseFrameGas
// il2cpp: void Characters_HumanStats__UseFrameGas (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x18215ff80

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
// 0x18215ffe0

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
// 0x182160000

void Characters_HumanStats__UseTSGas(Characters_HumanStats_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  longlong *plVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184346c77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata(&"StunGasPenalty");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunderspear");
    Il2CppMethodInitialized_184346c77 = '\x01';
  }
  if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
  }
  pSVar1 = TypeInfo_Characters_CharacterData->static_fields->HumanWeaponInfo;
  if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar2 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)(pSVar1,(MethodInfo *)"Thunderspear");
    if (pSVar2 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      plVar3 = (longlong *)
               (*(pSVar2->klass->vtable)._7_get_IdAttribute.methodPtr)
                         (pSVar2,(MethodInfo *)"StunGasPenalty");
      if (plVar3 != (longlong *)0x0) {
        fVar4 = (float)(**(code **)(*plVar3 + 0x388))(plVar3,*(undefined8 *)(*plVar3 + 0x390));
        fVar4 = (__this->fields).CurrentGas - fVar4 * 100.0;
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
        (__this->fields).CurrentGas = fVar4;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanStats$$UseGas
// il2cpp: void Characters_HumanStats__UseGas (Characters_HumanStats_o* __this, float amount, const MethodInfo* method);
// 0x18215ffc0

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
// 0x18215f2c0
// eh: try 0x18215f397..0x18215f783 -> pad 0x18333ed30 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 59 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18215f57f: nop 
// asm:   0x18215f693: mov eax, dword ptr [rsp + 0x28]
// asm:   0x18215f697: dec eax
// asm:   0x18215f699: movsxd rcx, eax
// asm:   0x18215f69c: mov rcx, qword ptr [rsp + rcx*8 + 0x20]
// asm:   0x18215f6a1: test rcx, rcx
// asm:   0x18215f6a4: je 0x18215f73f
// asm:   0x18215f6aa: mov rax, qword ptr [rcx]
// asm:   0x18215f6ad: mov rdx, qword ptr [rax + 0x190]
// asm:   0x18215f6b4: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x18215f6ba: mov rbx, rax
// asm:   0x18215f6bd: lea rcx, [rip + 0x1f76914]  ; "Exception while loading human stats: "
// asm:   0x18215f6c4: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18215f6c9: mov rcx, rax
// asm:   0x18215f6cc: xor r8d, r8d
// asm:   0x18215f6cf: mov rdx, rbx
// asm:   0x18215f6d2: call 0x181969e50  ; System_String__Concat()
// asm:   0x18215f6d7: mov rbx, rax
// asm:   0x18215f6da: lea rcx, [rip + 0x1f9bd57]  ; TypeInfo_UnityEngine_Debug
// asm:   0x18215f6e1: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18215f6e6: cmp dword ptr [rax + 0xe4], 0
// asm:   0x18215f6ed: jne 0x18215f6f7
// asm:   0x18215f6ef: mov rcx, rax
// asm:   0x18215f6f2: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x18215f6f7: xor edx, edx
// asm:   0x18215f6f9: mov rcx, rbx
// asm:   0x18215f6fc: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x18215f701: mov rbx, qword ptr [rsp + 0x160]
// asm:   0x18333ed30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333ed35: push rbx
// asm:   0x18333ed36: push rbp
// asm:   0x18333ed37: push rdi
// asm:   0x18333ed38: sub rsp, 0x20
// asm:   0x18333ed3c: mov rbp, rdx
// asm:   0x18333ed3f: mov rdi, qword ptr [rbp + 0xe0]
// asm:   0x18333ed46: mov rax, qword ptr [rdi]
// asm:   0x18333ed49: mov rbx, qword ptr [rax]
// asm:   0x18333ed4c: lea rcx, [rip + 0xd3a205]  ; TypeInfo_System_Exception
// asm:   0x18333ed53: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333ed58: mov rcx, rax
// asm:   0x18333ed5b: mov rdx, rbx
// asm:   0x18333ed5e: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333ed63: test al, al
// asm:   0x18333ed65: mov rax, qword ptr [rdi]
// asm:   0x18333ed68: je 0x18333ed82
// asm:   0x18333ed6a: movsxd rcx, dword ptr [rbp + 0x28]
// asm:   0x18333ed6e: mov qword ptr [rbp + rcx*8 + 0x20], rax
// asm:   0x18333ed73: inc dword ptr [rbp + 0x28]
// asm:   0x18333ed76: movabs rax, 0
// asm:   0x18333ed80: jmp 0x18333ed97
// asm:   0x18333ed82: mov qword ptr [rbp + 0x30], rax
// asm:   0x18333ed86: lea rdx, [rip + 0xc9d1fb]
// asm:   0x18333ed8d: lea rcx, [rbp + 0x30]
// asm:   0x18333ed91: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333ed97: add rsp, 0x20
// asm:   0x18333ed9b: pop rdi
// asm:   0x18333ed9c: pop rbp
// asm:   0x18333ed9d: pop rbx
// asm:   0x18333ed9e: ret 

Characters_HumanStats_o *
Characters_HumanStats__Deserialize(Characters_HumanStats_o *stats,System_String_o *str,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__BasePerk__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Characters_Human_o *human;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar1;
  bool bVar2;
  int32_t iVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_Xml_Schema_XmlSchema_o *pSVar5;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o *pSVar6;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o *pSVar7;
  MethodInfo *key;
  Characters_BasePerk_o *pCVar8;
  System_String_o *pSVar9;
  Characters_HumanStats_o *__this_01;
  float fVar10;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_118;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o local_70;
  
  if (Il2CppMethodInitialized_184346c78 == '\0') {
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
    Il2CppMethodInitialized_184346c78 = '\x01';
  }
  local_118.type = 0;
  local_118._4_4_ = 0;
  local_118.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_118.m_Object.fields._version = 0;
  local_118.m_Object.fields._index = 0;
  local_118.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_118.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_118.m_Object.fields._getEnumeratorRetType = 0;
  local_118.m_Object.fields._36_4_ = 0;
  local_118.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_118.m_Array.fields._index = 0;
  local_118.m_Array.fields._version = 0;
  local_118.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_c8.type = 0;
  local_c8._4_4_ = 0;
  local_c8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8.m_Object.fields._version = 0;
  local_c8.m_Object.fields._index = 0;
  local_c8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_c8.m_Object.fields._getEnumeratorRetType = 0;
  local_c8.m_Object.fields._36_4_ = 0;
  local_c8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c8.m_Array.fields._index = 0;
  local_c8.m_Array.fields._version = 0;
  local_c8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar2 = System_String__op_Inequality
                    (str,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (bVar2) {
    pSVar4 = SimpleJSONFixed_JSON__Parse(str,(MethodInfo *)0x0);
    if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)(pSVar4,(MethodInfo *)"Speed");
    if (pSVar5 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar3 = (*(code *)((Il2CppClass *)pSVar5->klass)->vtable[35].methodPtr)
                      (pSVar5,((Il2CppClass *)pSVar5->klass)->vtable[35].method);
    if (stats == (Characters_HumanStats_o *)0x0) {
      ThrowNullReferenceException();
    }
    (stats->fields).Speed = iVar3;
    pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)(pSVar4,(MethodInfo *)"Gas");
    if (pSVar5 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar3 = (*(code *)((Il2CppClass *)pSVar5->klass)->vtable[35].methodPtr)
                      (pSVar5,((Il2CppClass *)pSVar5->klass)->vtable[35].method);
    (stats->fields).Gas = iVar3;
    pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)(pSVar4,(MethodInfo *)"Ammunition");
    if (pSVar5 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar3 = (*(code *)((Il2CppClass *)pSVar5->klass)->vtable[35].methodPtr)
                      (pSVar5,((Il2CppClass *)pSVar5->klass)->vtable[35].method);
    (stats->fields).Ammunition = iVar3;
    pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)(pSVar4,(MethodInfo *)"Acceleration");
    if (pSVar5 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar3 = (*(code *)((Il2CppClass *)pSVar5->klass)->vtable[35].methodPtr)
                      (pSVar5,((Il2CppClass *)pSVar5->klass)->vtable[35].method);
    (stats->fields).Acceleration = iVar3;
    pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)(pSVar4,(MethodInfo *)"Perks");
    if (pSVar5 == (System_Xml_Schema_XmlSchema_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = SimpleJSONFixed_JSONNode__get_Values
                       (&local_70,(SimpleJSONFixed_JSONNode_o *)pSVar5,(MethodInfo *)0x0);
    local_c8.type = (pSVar6->fields).m_Enumerator.fields.type;
    local_c8._4_4_ = *(undefined4 *)&(pSVar6->fields).m_Enumerator.fields.field_0x4;
    local_c8.m_Object.fields._dictionary = (pSVar6->fields).m_Enumerator.fields.m_Object.fields._dictionary;
    pSVar1 = &(pSVar6->fields).m_Enumerator;
    local_c8.m_Object.fields._version = (pSVar1->fields).m_Object.fields._version;
    local_c8.m_Object.fields._index = (pSVar1->fields).m_Object.fields._index;
    local_c8.m_Object.fields._current.fields.key =
         (pSVar6->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
    local_c8.m_Object.fields._current.fields.value =
         *(Il2CppObject **)
          ((longlong)&(pSVar6->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8);
    pSVar1 = &(pSVar6->fields).m_Enumerator;
    local_c8.m_Object.fields._getEnumeratorRetType = (pSVar1->fields).m_Object.fields._getEnumeratorRetType;
    local_c8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar1->fields).m_Object.fields.field_0x24;
    local_c8.m_Array.fields._list = (pSVar6->fields).m_Enumerator.fields.m_Array.fields._list;
    pSVar1 = &(pSVar6->fields).m_Enumerator;
    local_c8.m_Array.fields._index = (pSVar1->fields).m_Array.fields._index;
    local_c8.m_Array.fields._version = (pSVar1->fields).m_Array.fields._version;
    local_c8.m_Array.fields._current = (pSVar6->fields).m_Enumerator.fields.m_Array.fields._current;
    pSVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                       ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_70,
                        (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c8,(MethodInfo *)0x0);
    local_118.type = (pSVar7->fields).m_Enumerator.fields.type;
    local_118._4_4_ = *(undefined4 *)&(pSVar7->fields).m_Enumerator.fields.field_0x4;
    local_118.m_Object.fields._dictionary = (pSVar7->fields).m_Enumerator.fields.m_Object.fields._dictionary;
    pSVar1 = &(pSVar7->fields).m_Enumerator;
    local_118.m_Object.fields._version = (pSVar1->fields).m_Object.fields._version;
    local_118.m_Object.fields._index = (pSVar1->fields).m_Object.fields._index;
    local_118.m_Object.fields._current.fields.key =
         (pSVar7->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
    local_118.m_Object.fields._current.fields.value =
         *(Il2CppObject **)
          ((longlong)&(pSVar7->fields).m_Enumerator.fields.m_Object.fields._current.fields + 8);
    pSVar1 = &(pSVar7->fields).m_Enumerator;
    local_118.m_Object.fields._getEnumeratorRetType = (pSVar1->fields).m_Object.fields._getEnumeratorRetType;
    local_118.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar1->fields).m_Object.fields.field_0x24;
    local_118.m_Array.fields._list = (pSVar7->fields).m_Enumerator.fields.m_Array.fields._list;
    pSVar1 = &(pSVar7->fields).m_Enumerator;
    local_118.m_Array.fields._index = (pSVar1->fields).m_Array.fields._index;
    local_118.m_Array.fields._version = (pSVar1->fields).m_Array.fields._version;
    local_118.m_Array.fields._current = (pSVar7->fields).m_Enumerator.fields.m_Array.fields._current;
    while( true ) {
      bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
      if (!bVar2) break;
      key = (MethodInfo *)
            SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
      __this = (stats->fields).Perks;
      if (__this == (System_Collections_Generic_Dictionary_string__BasePerk__o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)key,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_ContainsKey);
      if (bVar2) {
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(stats->fields).Perks;
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          ThrowNullReferenceException();
        }
        pCVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (__this_00,(Il2CppObject *)key,
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
        pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)(pSVar4,(MethodInfo *)"Perks");
        if (pSVar5 == (System_Xml_Schema_XmlSchema_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar9 = (*(pSVar5->klass->vtable)._7_get_IdAttribute.methodPtr)(pSVar5,key);
        if (pSVar9 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar3 = (**(code **)((longlong)pSVar9->klass + 0x368))(pSVar9);
        if (pCVar8 == (Characters_BasePerk_o *)0x0) {
          ThrowNullReferenceException();
        }
        (pCVar8->fields).CurrPoints = iVar3;
      }
    }
    bVar2 = Characters_HumanStats__Validate(stats,(MethodInfo *)0x0);
    if (bVar2) {
      fVar10 = (float)(stats->fields).Gas;
      fVar10 = (fVar10 + fVar10) - 35.0;
      (stats->fields).MaxGas = fVar10;
      (stats->fields).CurrentGas = fVar10;
      Characters_HumanStats__UpdateStats(stats,(MethodInfo *)0x0);
      return stats;
    }
  }
  if (stats != (Characters_HumanStats_o *)0x0) {
    human = (stats->fields)._human;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanStats);
    Characters_HumanStats___ctor(__this_01,human,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// Characters.HumanStats$$Serialize
// il2cpp: System_String_o* Characters_HumanStats__Serialize (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x18215fa70
// eh: try 0x18215fd20..0x18215fe85 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18215fdf4: mov rdx, qword ptr [rip + 0x1f58625]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BasePerk_Dispose
// asm:   0x18215fdfb: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18215fe00: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18215fe05: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18215fe0a: test rcx, rcx
// asm:   0x18215fe0d: jne 0x18215fe85
// asm:   0x18215fe0f: mov r14, qword ptr [rsp + 0xa0]
// asm:   0x18215fe17: mov r15, qword ptr [rsp + 0xa8]
// asm:   0x18215fe85: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

System_String_o * Characters_HumanStats__Serialize(Characters_HumanStats_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__BasePerk__o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Il2CppObject *key;
  bool bVar3;
  SimpleJSONFixed_JSONObject_o *__this_00;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  SimpleJSONFixed_JSONObject_o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  Characters_BasePerk_o *pCVar6;
  undefined1 local_60 [16];
  System_String_o *local_50;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_184346c79 == '\0') {
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
    Il2CppMethodInitialized_184346c79 = '\x01';
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentKey = (Il2CppObject *)0x0;
  bVar3 = Characters_HumanStats__Validate(__this,(MethodInfo *)0x0);
  if (!bVar3) {
    (__this->fields).Speed = 0x50;
    (__this->fields).Gas = 0x50;
    (__this->fields).Ammunition = 0x50;
    (__this->fields).Acceleration = 0x50;
    pSVar1 = (__this->fields).Perks;
    if (pSVar1 == (System_Collections_Generic_Dictionary_string__BasePerk__o *)0x0) goto label_18215fe64;
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_Clear);
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
    pSVar1 = (__this->fields).Perks;
    if (pSVar1 != (System_Collections_Generic_Dictionary_string__BasePerk__o *)0x0) {
      __this_02 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,
                             (MethodInfo_13C6500 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Keys);
      if (__this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
        System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
                   local_60,__this_02,
                   (MethodInfo_F1E4D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_BasePerk_GetEnumerator
                  );
        local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_60._0_8_;
        local_48.fields._index = local_60._8_4_;
        local_48.fields._version = local_60._12_4_;
        local_48.fields._currentKey = (Il2CppObject *)local_50;
        local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_60._8_8_ = &local_48;
        while( true ) {
          do {
            bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                              (&local_48,
                               (MethodInfo_156BDD0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BasePerk_MoveNext
                              );
            key = local_48.fields._currentKey;
            if (!bVar3) {
              System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_BasePerk_Dispose
                        );
              (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                        (__this_00,"Perks",(SimpleJSONFixed_JSONNode_o *)__this_01,
                         (__this_00->klass->vtable)._8_set_Item.method);
              pSVar4 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                                 (__this_00,(__this_00->klass->vtable)._3_ToString.method);
              return pSVar4;
            }
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
            if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              ThrowNullReferenceException();
            }
            pCVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar2,local_48.fields._currentKey,
                                (MethodInfo_147A5B0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
            if (pCVar6 == (Characters_BasePerk_o *)0x0) {
              ThrowNullReferenceException();
            }
          } while ((pCVar6->fields).CurrPoints < 1);
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Perks;
          if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          pCVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar2,key,
                              (MethodInfo_147A5B0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
          if (pCVar6 == (Characters_BasePerk_o *)0x0) break;
          pSVar4 = System_Int32__ToString(&(pCVar6->fields).CurrPoints,(MethodInfo *)0x0);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
          if (__this_01 == (SimpleJSONFixed_JSONObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
                    (__this_01,(System_String_o *)key,pSVar5,(__this_01->klass->vtable)._8_set_Item.method);
        }
        ThrowNullReferenceException();
      }
    }
  }
label_18215fe64:
  ThrowNullReferenceException();
}


// Characters.HumanStats$$Validate
// il2cpp: bool Characters_HumanStats__Validate (Characters_HumanStats_o* __this, const MethodInfo* method);
// 0x1821600f0
// eh: try 0x182160230..0x182160300 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18216022f: nop 
// asm:   0x18216028d: mov rdx, qword ptr [rip + 0x1f5842c]  ; MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BasePerk_Dispose
// asm:   0x182160294: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182160299: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18216029e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821602a3: test rcx, rcx
// asm:   0x1821602a6: jne 0x182160300
// asm:   0x1821602a8: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x182160300: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool Characters_HumanStats__Validate(Characters_HumanStats_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__BasePerk__o *__this_00;
  bool bVar1;
  char cVar2;
  int32_t iVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_28;
  
  if (Il2CppMethodInitialized_184346c7a == '\0') {
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
    Il2CppMethodInitialized_184346c7a = '\x01';
  }
  local_28.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._currentValue = (Il2CppObject *)0x0;
  if ((((((0x140 < (__this->fields).Acceleration + (__this->fields).Ammunition + (__this->fields).Gas +
                   (__this->fields).Speed) || ((__this->fields).Speed < 0x32)) ||
        (100 < (uint)(__this->fields).Speed)) ||
       (((__this->fields).Gas < 0x32 || (100 < (uint)(__this->fields).Gas)))) ||
      (((__this->fields).Ammunition < 0x32 ||
       ((100 < (uint)(__this->fields).Ammunition || ((__this->fields).Acceleration < 0x32)))))) ||
     (100 < (uint)(__this->fields).Acceleration)) {
    return false;
  }
  __this_00 = (__this->fields).Perks;
  if ((__this_00 == (System_Collections_Generic_Dictionary_string__BasePerk__o *)0x0) ||
     (__this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                             (MethodInfo_13C65A0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Values),
     __this_01 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_40,
             __this_01,
             (MethodInfo_F1E4D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_string_BasePerk_GetEnumerator);
  local_28.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_40._0_8_;
  local_28.fields._index = local_40._8_4_;
  local_28.fields._version = local_40._12_4_;
  local_28.fields._currentValue = local_30;
  local_40._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_40._8_8_ = &local_28;
  do {
    bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_PhotonNetwork_RaiseEventBatch__object___MoveNext
                      (&local_28,
                       (MethodInfo_155CFB0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BasePerk_MoveNext
                      );
    if (!bVar1) {
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                 MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BasePerk_Dispose
                );
      iVar3 = Characters_HumanStats__GetPerkPoints(__this,(MethodInfo *)0x0);
      if ((TypeInfo_Characters_HumanStats->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanStats);
      }
      if (TypeInfo_Characters_HumanStats->static_fields->MaxPerkPoints < iVar3) {
        return false;
      }
      return true;
    }
    if (local_28.fields._currentValue == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    cVar2 = (*(local_28.fields._currentValue)->klass->vtable[8].methodPtr)
                      (local_28.fields._currentValue,(__this->fields).Perks,
                       (local_28.fields._currentValue)->klass->vtable[8].method);
  } while (cVar2 != '\0');
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
             MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_BasePerk_Dispose
            );
  return false;
}


// Characters.HumanStats$$.cctor
// il2cpp: void Characters_HumanStats___cctor (const MethodInfo* method);
// 0x182160310

void Characters_HumanStats___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346c7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanStats);
    Il2CppMethodInitialized_184346c7b = '\x01';
  }
  TypeInfo_Characters_HumanStats->static_fields->MaxPerkPoints = 3;
  return;
}


