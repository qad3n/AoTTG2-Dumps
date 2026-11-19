// Type: Characters.BasePerk
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/BasePerk.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Perks/BasePerk.cs
// --------------------------------

// Characters.BasePerk$$get_Name
// il2cpp: System_String_o* Characters_BasePerk__get_Name (Characters_BasePerk_o* __this, const MethodInfo* method);
// 0x5bfb0e0

System_String_o * Characters_BasePerk__get_Name(Characters_BasePerk_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754764f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_0754764f = '\x01';
  }
  return "Default";
}


// Characters.BasePerk$$get_MaxPoints
// il2cpp: int32_t Characters_BasePerk__get_MaxPoints (Characters_BasePerk_o* __this, const MethodInfo* method);
// 0x5bfb110

int32_t Characters_BasePerk__get_MaxPoints(Characters_BasePerk_o *__this,MethodInfo *method)

{
  return 1;
}


// Characters.BasePerk$$.ctor
// il2cpp: void Characters_BasePerk___ctor (Characters_BasePerk_o* __this, const MethodInfo* method);
// 0x5bfb050

void Characters_BasePerk___ctor(Characters_BasePerk_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__int__o *__this_00;
  
  if (Il2CppMethodInitialized_07547650 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_int);
    Il2CppMethodInitialized_07547650 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor
            ((System_Collections_Generic_Dictionary_object__int__o *)__this_00,
             (MethodInfo_4A9CB80 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
  (__this->fields).Requirements = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Requirements);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._6_SetupRequirements.methodPtr)
            (__this,(__this->klass->vtable)._6_SetupRequirements.method);
  return;
}


// Characters.BasePerk$$SetupRequirements
// il2cpp: void Characters_BasePerk__SetupRequirements (Characters_BasePerk_o* __this, const MethodInfo* method);
// 0x5bfb120

void Characters_BasePerk__SetupRequirements(Characters_BasePerk_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BasePerk$$HasRequirements
// il2cpp: bool Characters_BasePerk__HasRequirements (Characters_BasePerk_o* __this, System_Collections_Generic_Dictionary_string__BasePerk__o* perks, const MethodInfo* method);
// 0x5bfb130
// eh: try 0x5bfb23a..0x5bfb2fa -> pad 0x5bfb30d (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5bfb325..0x5bfb32a -> pad 0x5bfb34b cleanup
// eh: try 0x5bfb34e..0x5bfb358 -> pad 0x5bfb360 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bfb2a2: jmp 0x5bfb2c9
// asm:   0x5bfb2ff: jmp 0x5bfb30d
// asm:   0x5bfb301: jmp 0x5bfb30d
// asm:   0x5bfb303: jmp 0x5bfb30d
// asm:   0x5bfb305: jmp 0x5bfb30d
// asm:   0x5bfb307: jmp 0x5bfb30d
// asm:   0x5bfb309: jmp 0x5bfb30d
// asm:   0x5bfb30b: jmp 0x5bfb30d
// asm:   0x5bfb30d: mov rbx, rax
// asm:   0x5bfb310: cmp edx, 1
// asm:   0x5bfb313: jne 0x5bfb34e
// asm:   0x5bfb315: mov rdi, rbx
// asm:   0x5bfb318: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5bfb31d: mov rbx, qword ptr [rax]
// asm:   0x5bfb320: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5bfb325: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5bfb32a: lea rax, [rip + 0x1694cc7]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_int_Dispose
// asm:   0x5bfb331: mov rsi, qword ptr [rax]
// asm:   0x5bfb334: mov rdi, rsp
// asm:   0x5bfb337: call 0x4de4600  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose()
// asm:   0x5bfb33c: xor ebp, ebp
// asm:   0x5bfb33e: test rbx, rbx
// asm:   0x5bfb341: je 0x5bfb2db
// asm:   0x5bfb343: mov rdi, rbx
// asm:   0x5bfb346: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5bfb34b: mov rbx, rax
// asm:   0x5bfb34e: lea rdi, [rsp + 0x20]
// asm:   0x5bfb353: call 0x2fd8f50  ; il2cpp_runtime_helper_02fd8f50()
// asm:   0x5bfb358: mov rdi, rbx
// asm:   0x5bfb35b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5bfb360: mov rdi, rax
// asm:   0x5bfb363: call 0x2ab61e0  ; __clang_call_terminate()

bool Characters_BasePerk__HasRequirements
               (Characters_BasePerk_o *__this,System_Collections_Generic_Dictionary_string__BasePerk__o *perks
               ,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__int__o *pSVar2;
  Il2CppObject *key;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_00;
  Characters_BasePerk_o *pCVar5;
  int iVar6;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_68;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (Il2CppMethodInitialized_07547651 == '\0') {
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
    Il2CppMethodInitialized_07547651 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).Requirements;
  if ((pSVar2 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) ||
     (__this_00 = System_Collections_Generic_Dictionary_object__int___get_Keys
                            (pSVar2,(MethodInfo_4A9D3A0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Keys),
     __this_00 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_48,
             __this_00,
             (MethodInfo_5118A60 *)
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_int_GetEnumerator);
  SStack_68.fields._currentKey = pIStack_38;
  SStack_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_48._0_8_;
  SStack_68.fields._index = auStack_48._8_4_;
  SStack_68.fields._version = auStack_48._12_4_;
  auStack_48._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  if (perks == (System_Collections_Generic_Dictionary_string__BasePerk__o *)0x0) {
    auStack_48._8_8_ = &SStack_68;
    bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext
                      (&SStack_68,
                       (MethodInfo_4CE4610 *)
                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_int_MoveNext
                      );
    iVar6 = 6;
    if (bVar3) {
      ThrowNullReferenceException();
    }
  }
  else {
    iVar6 = 5;
    auStack_48._8_8_ = &SStack_68;
    do {
      bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext
                        (&SStack_68,
                         (MethodInfo_4CE4610 *)
                         MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_int_MoveNext
                        );
      key = SStack_68.fields._currentKey;
      if (!bVar3) {
        iVar6 = 6;
        break;
      }
      bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)perks,
                         SStack_68.fields._currentKey,
                         (MethodInfo_4AAD6F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_ContainsKey);
      if (!bVar3) break;
      pCVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)perks,key,
                          (MethodInfo_4AAD450 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_BasePerk_get_Item);
      if (pCVar5 == (Characters_BasePerk_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).Requirements;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar1 = (pCVar5->fields).CurrPoints;
      iVar4 = System_Collections_Generic_Dictionary_object__int___get_Item
                        (pSVar2,key,
                         (MethodInfo_4A9D700 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Item);
    } while (iVar4 <= iVar1);
  }
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose
            (&SStack_68,
             (MethodInfo_4CE4600 *)
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_int_Dispose);
  return iVar6 != 5;
}


// Characters.BasePerk$$Validate
// il2cpp: bool Characters_BasePerk__Validate (Characters_BasePerk_o* __this, System_Collections_Generic_Dictionary_string__BasePerk__o* perks, const MethodInfo* method);
// 0x5bfb370
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bfb391: xor eax, eax

bool Characters_BasePerk__Validate
               (Characters_BasePerk_o *__this,System_Collections_Generic_Dictionary_string__BasePerk__o *perks
               ,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int iVar3;
  
  bVar1 = (*(__this->klass->vtable)._7_HasRequirements.methodPtr)
                    (__this,perks,(__this->klass->vtable)._7_HasRequirements.method);
  iVar3 = (__this->fields).CurrPoints;
  if (bVar1) {
    if (-1 < iVar3) {
label_05bfb3a5:
      iVar2 = (*(__this->klass->vtable)._5_get_MaxPoints.methodPtr)
                        (__this,(__this->klass->vtable)._5_get_MaxPoints.method);
      return iVar3 <= iVar2;
    }
  }
  else {
    bVar1 = iVar3 == 0;
    iVar3 = 0;
    if (bVar1) goto label_05bfb3a5;
  }
  return false;
}


