// Type: Characters.BasePerk
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BasePerk.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Perks/BasePerk.cs
// --------------------------------

// Characters.BasePerk$$get_Name
// il2cpp: System_String_o* Characters_BasePerk__get_Name (Characters_BasePerk_o* __this, const MethodInfo* method);
// 0x1821469c0

System_String_o * Characters_BasePerk__get_Name(Characters_BasePerk_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346c7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_184346c7f = '\x01';
  }
  return "Default";
}


// Characters.BasePerk$$get_MaxPoints
// il2cpp: int32_t Characters_BasePerk__get_MaxPoints (Characters_BasePerk_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
Characters_BasePerk__get_MaxPoints(Characters_BasePerk_o* __this, MethodInfo* method)

{
  return 1;
}


// Characters.BasePerk$$.ctor
// il2cpp: void Characters_BasePerk___ctor (Characters_BasePerk_o* __this, const MethodInfo* method);
// 0x182146930

void Characters_BasePerk___ctor(Characters_BasePerk_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__int__o *__this_00;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_184346c80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_int);
    Il2CppMethodInitialized_184346c80 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
  (__this->fields).Requirements = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Requirements,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._6_SetupRequirements.methodPtr)
            (__this,(System_Type_o *)(__this->klass->vtable)._6_SetupRequirements.method,in_R8);
  return;
}


// Characters.BasePerk$$SetupRequirements
// il2cpp: void Characters_BasePerk__SetupRequirements (Characters_BasePerk_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BasePerk__SetupRequirements(Characters_BasePerk_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BasePerk$$HasRequirements
// il2cpp: bool Characters_BasePerk__HasRequirements (Characters_BasePerk_o* __this, System_Collections_Generic_Dictionary_string__BasePerk__o* perks, const MethodInfo* method);
// 0x1821466f0
// eh: try 0x1821467e0..0x1821468c3 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182146883: mov rdx, qword ptr [rip + 0x1f75556]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_int_Dispose
// asm:   0x18214688a: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18214688f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182146894: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182146899: test rcx, rcx
// asm:   0x18214689c: jne 0x1821468c3
// asm:   0x1821468c3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool Characters_BasePerk__HasRequirements
               (Characters_BasePerk_o *__this,System_Collections_Generic_Dictionary_string__BasePerk__o *perks
               ,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_string__int__o *pSVar2;
  Il2CppObject *key;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  Characters_BasePerk_o *pCVar5;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_184346c81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_int_MoveNext)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_int_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_int_GetEnumerator);
    Il2CppMethodInitialized_184346c81 = '\x01';
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentKey = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).Requirements;
  if (pSVar2 != (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                           (MethodInfo_13C6500 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Keys);
    if (__this_00 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_60,
                 __this_00,
                 (MethodInfo_F1E4D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_int_GetEnumerator);
      local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_48.fields._currentKey = local_50;
      local_60._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
      local_60._8_8_ = &local_48;
      do {
        bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                          (&local_48,
                           (MethodInfo_156BDD0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_int_MoveNext
                          );
        key = local_48.fields._currentKey;
        if (!bVar3) {
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_int_Dispose
                    );
          return true;
        }
        if (perks == (System_Collections_Generic_Dictionary_string__BasePerk__o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)perks,
                           local_48.fields._currentKey,
                           (MethodInfo_1455450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_ContainsKey);
        if (!bVar3) break;
        pCVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)perks,key,
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
        if (pCVar5 == (Characters_BasePerk_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar2 = (__this->fields).Requirements;
        if (pSVar2 == (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar1 = (pCVar5->fields).CurrPoints;
        iVar4 = System_Collections_Generic_Dictionary_object__Int32Enum___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,key,
                           (MethodInfo_147A530 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item);
      } while (iVar4 <= iVar1);
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_48,
                 MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_int_Dispose)
      ;
      return false;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasePerk$$Validate
// il2cpp: bool Characters_BasePerk__Validate (Characters_BasePerk_o* __this, System_Collections_Generic_Dictionary_string__BasePerk__o* perks, const MethodInfo* method);
// 0x1821468d0

bool Characters_BasePerk__Validate
               (Characters_BasePerk_o *__this,System_Collections_Generic_Dictionary_string__BasePerk__o *perks
               ,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  
  bVar2 = (*(__this->klass->vtable)._7_HasRequirements.methodPtr)
                    (__this,perks,(__this->klass->vtable)._7_HasRequirements.method);
  if (((bVar2) || ((__this->fields).CurrPoints == 0)) && (-1 < (__this->fields).CurrPoints)) {
    iVar1 = (__this->fields).CurrPoints;
    iVar3 = (*(__this->klass->vtable)._5_get_MaxPoints.methodPtr)
                      (__this,(__this->klass->vtable)._5_get_MaxPoints.method);
    return iVar1 <= iVar3;
  }
  return false;
}


